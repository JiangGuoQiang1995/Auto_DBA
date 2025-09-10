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
    public class PropertyControlTable
    {
        private Dictionary<Control, string> m_controlNameIndex = new Dictionary<Control, string>();
        private Dictionary<string, Control> m_propertyNameIndex = new Dictionary<string, Control>();

        public void Add(string propertyName, Control control)
        {
            this.m_controlNameIndex.Add(control, propertyName);
            this.m_propertyNameIndex.Add(propertyName, control);
        }

        public Control GetControlFromPropertyName(string propertyName)
        {
            Control control;
            if (this.m_propertyNameIndex.TryGetValue(propertyName, out control))
            {
                return control;
            }
            return null;
        }

        public string GetPropertyNameFromControl(Control control)
        {
            string propertyName;
            if (this.m_controlNameIndex.TryGetValue(control, out propertyName))
            {
                return propertyName;
            }
            return null;
        }

        public void Remove(string propertyName, Control control)
        {
            this.m_controlNameIndex.Remove(control);
            this.m_propertyNameIndex.Remove(propertyName);
        }

        public List<string> GetPropertyNames()
        {
            var keys = new string[this.m_propertyNameIndex.Count];
            this.m_propertyNameIndex.Keys.CopyTo(keys, 0);
            return new List<string>(keys);
        }

        public List<Control> GetControls()
        {
            var keys = new Control[this.m_controlNameIndex.Count];
            this.m_controlNameIndex.Keys.CopyTo(keys, 0);
            return new List<Control>(keys);
        }
    }
}
