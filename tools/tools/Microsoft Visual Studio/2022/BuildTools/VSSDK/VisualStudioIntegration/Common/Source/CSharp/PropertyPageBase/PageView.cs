/***************************************************************************
Copyright (c) Microsoft Corporation. All rights reserved.
This code is licensed under the Visual Studio SDK license terms.
THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.

***************************************************************************/

using System;
using System.Drawing;
using System.Windows.Forms;
using Microsoft.VisualStudio;

namespace PropertyPageBase
{
    public class PageView : UserControl, IPageView, IPropertyPageUI
    {
        [System.ComponentModel.EditorBrowsable(System.ComponentModel.EditorBrowsableState.Never)]
        public PageView()
        {
        }

        public PageView(IPageViewSite pageViewSite)
        {
            this.m_propertyControlMap = new PropertyControlMap(pageViewSite, this, this.PropertyControlTable);
        }

        private PropertyControlMap m_propertyControlMap;

        virtual protected PropertyControlTable PropertyControlTable
        {
            get
            {
                throw new NotImplementedException();
            }
        }

        private void TextBox_TextChanged(object sender, EventArgs e)
        {
            var senderTextBox = sender as TextBox;
            if (UserEditComplete != null)
                UserEditComplete(senderTextBox, senderTextBox.Text);
        }

        void CheckBox_CheckedChanged(object sender, EventArgs e)
        {
            var senderCheckBox = sender as CheckBox;
            if (UserEditComplete != null)
                UserEditComplete(senderCheckBox, senderCheckBox.Checked.ToString());
        }

        #region IPropertyPageUI Members

        public event UserEditCompleteHandler UserEditComplete;

        public virtual string GetControlValue(Control control)
        {
            var checkboxWithValue = control as CheckBox;
            if (null != checkboxWithValue)
            {
                return checkboxWithValue.Checked.ToString();
            }
            var textboxWithValue = control as TextBox;
            if (null != textboxWithValue)
            {
                return textboxWithValue.Text;
            }
            throw new ArgumentOutOfRangeException();
        }

        public virtual void SetControlValue(Control control, string value)
        {
            var checkboxToChange = control as CheckBox;
            if (null != checkboxToChange)
            {
                bool boxIsChecked;
                if (!bool.TryParse(value, out boxIsChecked))
                    boxIsChecked = false;
                checkboxToChange.Checked = boxIsChecked;
                return;
            }
            var textboxToChange = control as TextBox;
            if (null != textboxToChange)
            {
                textboxToChange.Text = value;
                return;
            }
        }

        #endregion

        #region IPageView Members

        public virtual void Initialize(System.Windows.Forms.Control parentControl, System.Drawing.Rectangle rectangle)
        {
            this.SetBounds(rectangle.X, rectangle.Y, rectangle.Width, rectangle.Height);
            this.Parent = parentControl;
            this.m_propertyControlMap.InitializeControls();
            foreach (Control boundControl in this.PropertyControlTable.GetControls())
            {
                var boundTextBox = boundControl as TextBox;
                if (null != boundTextBox)
                {
                    boundTextBox.TextChanged += new EventHandler(this.TextBox_TextChanged);
                    continue;
                }

                var boundCheckBox = boundControl as CheckBox;
                if (null != boundCheckBox)
                {
                    boundCheckBox.CheckedChanged += new EventHandler(this.CheckBox_CheckedChanged);
                    continue;
                }
            }

            // Once done, give the derived class the ability to perform some initialization.
            this.OnInitialize();
        }

        protected virtual void OnInitialize() { }

        public void MoveView(System.Drawing.Rectangle rectangle)
        {
            this.Location = new Point(rectangle.X, rectangle.Y);
            this.Size = new Size(rectangle.Width, rectangle.Height);
        }

        public void ShowView()
        {
            this.Show();
        }

        public void HideView()
        {
            this.Hide();
        }

        public new void Dispose()
        {
            base.Dispose();
        }

        public int ProcessAccelerator(ref Message keyboardMessage)
        {
            var destinationControl = Control.FromHandle(keyboardMessage.HWnd);
            var messageProccessed = destinationControl.PreProcessMessage(ref keyboardMessage);
            if (messageProccessed)
                return VSConstants.S_OK;
            else
                return VSConstants.S_FALSE;
        }

        public Size ViewSize
        {
            get { return this.Size; }
        }

        public void RefreshPropertyValues()
        {
            this.m_propertyControlMap.InitializeControls();
        }

        #endregion
    }
}
