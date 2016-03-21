/*
The MIT License (MIT)

Copyright (c) 2016 BillyBag2

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

// Note that these defines are taken from the data sheet.
// They are, is some cases, not very uneque and may clash with other defines.
// Perhaps add a prefix later.

// ACC ident.
#define BGW_CHIPID          0x0
#define BGW_CHIPID_VAL      0xFA

// ACC Data, XL,XH,YL,YH,ZL,ZH
#define ACCD_X_LSB         0x02

//GYR data  XL,XH,YL,YH,ZL,ZH
#define RATE_X_LSB         0x02

// GYR Ident
#define CHIP_ID            0x0
#define CHIP_ID_VAL        0xF

// ACC range
#define PMU_RANGE           0x0f
#define PMU_RANGE_16G				0x0c

// GYR range
#define RANGE               0xF
#define RANGE_2000DPS       0x0

// ACC filter
#define PMU_BW              0x10
#define PMU_BW_8HZ					0x8
#define PMU_BW_16HZ					0x9
#define PMU_BW_31HZ					0xa
#define PMU_BW_63HZ					0xB
#define PMU_BW_125HZ				0xC
#define PMU_BW_250HZ				0xD
#define PMU_BW_500HZ				0xE
#define PMU_BW_1000HZ				0xF

//GYR filter
#define BW                  0x10
#define BW_32HZ             0x7
#define BW_64HZ             0x6
#define BW_12HZ             0x5
#define BW_23HZ             0x4
#define BW_47HZ             0x3
#define BW_116HZ            0x2
#define BW_230HZ            0x1
#define BW_523HZ            0x0

#define BGW_SOFTRESET       0x14
#define BGW_SOFTRESET_RESET 0xB6 // Magic soft reset code.
