/***************************************************************************

Copyright (c) Microsoft Corporation. All rights reserved.
This code is licensed under the Visual Studio SDK license terms.
THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.

***************************************************************************/

using System;
using System.IO;
using System.Text;

namespace Microsoft.VsSDK.UnitTestLibrary
{

    public class TextWriterMock : TextWriter
    {
        public TextWriterMock(IFormatProvider formatProvider)
            : base(formatProvider)
        {
        }

        public override Encoding Encoding
        {
            get
            {
                return null;
            }
        }

        public override void Write(string value)
        {
            return;
        }

        public override void WriteLine(string value)
        {
            return;
        }
    }
}
