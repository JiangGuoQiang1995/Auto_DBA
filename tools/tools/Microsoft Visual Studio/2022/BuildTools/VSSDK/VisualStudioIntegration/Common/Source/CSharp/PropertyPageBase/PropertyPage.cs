/***************************************************************************
Copyright (c) Microsoft Corporation. All rights reserved.
This code is licensed under the Visual Studio SDK license terms.
THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.

***************************************************************************/

using System;
using System.Collections.Generic;
using System.Drawing;
using System.Runtime.InteropServices;
using System.Windows.Forms;
using Microsoft.VisualStudio;
using Microsoft.VisualStudio.OLE.Interop;

namespace PropertyPageBase
{
    abstract public class PropertyPage : Microsoft.VisualStudio.OLE.Interop.IPropertyPage2, IPageViewSite
    {
        private KeyValuePair<string, string>? propertyToBePersisted;
        private IPropertyPageSite m_IPropertyPageSite;
        public Microsoft.VisualStudio.OLE.Interop.IPropertyPageSite IPropertyPageSite
        {
            get
            {
                return this.m_IPropertyPageSite;
            }
            set
            {
                this.m_IPropertyPageSite = value;
            }
        }

        private IPropertyStore m_IPropertyStore;
        public IPropertyStore IPropertyStore
        {
            get
            {
                return this.m_IPropertyStore;
            }
            set
            {
                this.m_IPropertyStore = value;
            }
        }

        abstract public string Title { get; }

        #region IPropertyPage2 Members

        public void Activate(IntPtr hWndParent, RECT[] pRect, int bModal)
        {
            if ((null == pRect) || (0 == pRect.Length))
            {
                throw new ArgumentNullException("pRect");
            }
            var parentControl = Control.FromHandle(hWndParent);
            RECT pageRectangle = pRect[0];
            this.MyPageView.Initialize(parentControl, Rectangle.FromLTRB(pageRectangle.left, pageRectangle.top, pageRectangle.right, pageRectangle.bottom));
        }

        protected PropertyPageBase.IPageView myPageView;

        public PropertyPageBase.IPageView MyPageView
        {
            get
            {
                if (this.myPageView == null)
                {
                    IPageView concretePageView = this.GetNewPageView();
                    this.MyPageView = concretePageView;
                }
                return this.myPageView;
            }
            set { this.myPageView = value; }
        }


        abstract protected PropertyPageBase.IPageView GetNewPageView();

        abstract protected IPropertyStore GetNewPropertyStore();

        public void Apply()
        {
            if (this.propertyToBePersisted.HasValue)
            {
                this.IPropertyStore.Persist(this.propertyToBePersisted.Value.Key, this.propertyToBePersisted.Value.Value);
                this.propertyToBePersisted = null;
            }
        }

        public void Deactivate()
        {
            if (null != this.myPageView)
            {
                this.myPageView.Dispose();
                this.myPageView = null;
            }
        }

        public void EditProperty(int DISPID)
        {

        }

        public void GetPageInfo(Microsoft.VisualStudio.OLE.Interop.PROPPAGEINFO[] pPageInfo)
        {
            if ((null == pPageInfo) || (0 == pPageInfo.Length))
            {
                throw new ArgumentNullException("pPageInfo");
            }

            PROPPAGEINFO pageInfo;

            pageInfo.cb = (uint)Marshal.SizeOf(typeof(PROPPAGEINFO));
            pageInfo.dwHelpContext = 0;
            pageInfo.pszDocString = null;
            pageInfo.pszHelpFile = null;
            pageInfo.pszTitle = this.Title;
            pageInfo.SIZE.cx = this.MyPageView.ViewSize.Width;
            pageInfo.SIZE.cy = this.MyPageView.ViewSize.Height;

            pPageInfo[0] = pageInfo;
        }

        abstract protected string HelpKeyword { get; }

        public void Help(string pszHelpDir)
        {
            var serviceProvider = this.IPropertyPageSite as System.IServiceProvider;

            if (null != serviceProvider)
            {
                var helpService = serviceProvider.GetService(typeof(Microsoft.VisualStudio.VSHelp.Help)) as Microsoft.VisualStudio.VSHelp.Help;
                if (null != helpService)
                {
                    helpService.DisplayTopicFromF1Keyword(this.HelpKeyword);
                }
            }
        }

        public int IsPageDirty()
        {
            return this.propertyToBePersisted.HasValue ? VSConstants.S_OK : VSConstants.S_FALSE;
        }

        public void Move(Microsoft.VisualStudio.OLE.Interop.RECT[] pRect)
        {
            this.MyPageView.MoveView(Rectangle.FromLTRB(pRect[0].left, pRect[0].top, pRect[0].right, pRect[0].bottom));
        }

        public void SetObjects(uint cObjects, object[] ppunk)
        {
            if (ppunk == null || cObjects == 0)
            {
                if (null != this.IPropertyStore)
                {
                    this.IPropertyStore.Dispose();
                    this.IPropertyStore = null;
                }
            }
            else
            {
                var needToRefresh = false;
                if (this.IPropertyStore != null)
                    needToRefresh = true;
                this.IPropertyStore = this.GetNewPropertyStore();
                this.IPropertyStore.Initialize(ppunk);
                if (needToRefresh)
                    this.MyPageView.RefreshPropertyValues();
            }
        }

        public void SetPageSite(Microsoft.VisualStudio.OLE.Interop.IPropertyPageSite pPageSite)
        {
            this.IPropertyPageSite = pPageSite;
        }

        public void Show(uint nCmdShow)
        {
            switch (nCmdShow)
            {
                case Constants.SW_HIDE:
                    this.MyPageView.HideView();
                    break;
                case Constants.SW_SHOW:
                case Constants.SW_SHOWNORMAL:
                    this.MyPageView.ShowView();
                    break;
                default:
                    break;
            }
        }

        public int TranslateAccelerator(Microsoft.VisualStudio.OLE.Interop.MSG[] pMsg)
        {
            var keyboardMessage = Message.Create(pMsg[0].hwnd, (int)pMsg[0].message, pMsg[0].wParam, pMsg[0].lParam);
            var hr = this.MyPageView.ProcessAccelerator(ref keyboardMessage);
            pMsg[0].lParam = keyboardMessage.LParam;
            pMsg[0].wParam = keyboardMessage.WParam;
            return hr;
        }

        #endregion

        #region IPropertyPage Members


        int IPropertyPage.Apply()
        {
            this.Apply();
            return VSConstants.S_OK;
        }

        #endregion

        #region IPageViewSite Members

        public void PropertyChanged(string propertyName, string propertyValue)
        {
            // If there is no store, then there is no point in changing the property value.
            if (null == this.IPropertyStore)
            {
                return;
            }
            this.propertyToBePersisted = new KeyValuePair<string, string>(propertyName, propertyValue);
            if (null != this.IPropertyPageSite)
            {
                this.IPropertyPageSite.OnStatusChange((uint)(PROPPAGESTATUS.PROPPAGESTATUS_DIRTY | PROPPAGESTATUS.PROPPAGESTATUS_VALIDATE));
            }
        }

        public string GetValueForProperty(string propertyName)
        {
            if (null != this.IPropertyStore)
            {
                return this.IPropertyStore.PropertyValue(propertyName);
            }
            return null;
        }

        #endregion
    }
}
