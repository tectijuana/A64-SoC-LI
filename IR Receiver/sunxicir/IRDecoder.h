/** @file
*
* MIT License

* Copyright (c) 2017 Leeway213

* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:

* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.

* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
*
**/

#pragma once
#include "Driver.h"
#include "Device.h"

#define SKYWORTH_ADDR_CODE 0x70

#define PD6121G_NUM0 0
#define PD6121G_NUM1 1
#define PD6121G_NUM2 2
#define PD6121G_NUM3 3
#define PD6121G_NUM4 4
#define PD6121G_NUM5 5
#define PD6121G_NUM6 6
#define PD6121G_NUM7 7
#define PD6121G_NUM8 8 
#define PD6121G_NUM9 9
#define PD6121G_POWER 12
#define PD6121G_MUTE 13
#define PD6121G_MENU 17
#define PD6121G_CH_UP 18
#define PD6121G_CH_DOWN 19
#define PD6121G_VOL_UP 20
#define PD6121G_VOL_DOWN 21
#define PD6121G_BACK 91
#define PD6121G_HOME 120
#define PD6121G_UP 66
#define PD6121G_DOWN 67
#define PD6121G_LEFT 68
#define PD6121G_RIGHT 69
#define PD6121G_OK 70




VOID PD6121G_F_Decoder(_In_ ULONG* Data, _In_ UINT DataSize, _Out_ UINT8* AddressCode, _Out_ UINT8* DataCode);
