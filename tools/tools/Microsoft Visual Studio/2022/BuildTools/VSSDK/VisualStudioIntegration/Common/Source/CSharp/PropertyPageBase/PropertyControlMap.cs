/***************************************************************************
Copyright (c) Microsoft Corporation. All rights reserved.
This code is licensed under the Visual Studio SDK license terms.
THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.

***************************************************************************/

using System.Collections.Generic;
using System.Windows.Forms;

namespace PropertyPageBase
{
    public class PropertyControlMap
    {
        private IPageViewSite m_pageViewSite;
        private PropertyControlTable m_propertyControlTable;
        private IPropertyPageUI m_propertyPageUI;

        public PropertyControlMap(IPageViewSite pageViewSite, IPropertyPageUI propertyPageUI, PropertyControlTable propertyControlTable)
        {
            this.m_propertyControlTable = propertyControlTable;
            this.m_pageViewSite = pageViewSite;
            this.m_propertyPageUI = propertyPageUI;
        }

        void m_propertyPageUI_UserEditComplete(Control control, string value)
        {
            var propertyName = this.m_propertyControlTable.GetPropertyNameFromControl(control);
            this.m_pageViewSite.PropertyChanged(propertyName, value);
        }

        public void InitializeControls()
        {
            this.m_propertyPageUI.UserEditComplete -= new UserEditCompleteHandler(this.m_propertyPageUI_UserEditComplete);
            List<string> propertyNames = this.m_propertyControlTable.GetPropertyNames();
            foreach (var propertyName in propertyNames)
            {
                var propertyValue = this.m_pageViewSite.GetValueForProperty(propertyName);
                Control control = this.m_propertyControlTable.GetControlFromPropertyName(propertyName);
                this.m_propertyPageUI.SetControlValue(control, propertyValue);
            }
            this.m_propertyPageUI.UserEditComplete += new UserEditCompleteHandler(this.m_propertyPageUI_UserEditComplete);
        }
    }
}
