﻿using System;
using System.Runtime.InteropServices;

namespace InputPlayback.Input.Native.DataStructures
{
    [StructLayout(LayoutKind.Sequential)]
    public struct CURSORINFO
    {
        public Int32    cbSize;
        public Int32    flags;
        public IntPtr   hCursor;
        public POINT    ptScreenPos;
    }
}
