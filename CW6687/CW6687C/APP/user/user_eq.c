
#include "include.h"

#pragma constseg="EQ_CONST"
                                    //pop     rock    jazz    classic country drc
IAR_CONST u16 tbl_eqpower_music[6] = {0x6fff, 0x6fff, 0x6fff, 0x5fff, 0x6fff, 0x7fff};
IAR_CONST u8  tbl_eq_music[5][123] = {
   {0xff, 0xff, 0x3f, 0xef, 0x1e, 0x40, 0x0f, 0x4b, 0x3f, 0x50, 0x96, 0x80, 0xae, 0x69, 0x7f,
    0xff, 0x95, 0xc0, 0x6c, 0x0c, 0x40, 0xe5, 0x27, 0x3f, 0xf1, 0xcc, 0x80, 0x0d, 0x33, 0x7f,
    0xac, 0xcb, 0xc0, 0xff, 0xff, 0x3f, 0x78, 0xba, 0x3e, 0xab, 0x4a, 0x81, 0x53, 0xb5, 0x7e,
    0x86, 0x45, 0xc1, 0x26, 0xce, 0x3f, 0x1f, 0x4d, 0x3e, 0x31, 0xf9, 0x81, 0xcd, 0x06, 0x7e,
    0xb7, 0xe4, 0xc1, 0xd9, 0x58, 0x3f, 0x4b, 0x1d, 0x3d, 0xa9, 0xda, 0x83, 0x55, 0x25, 0x7c,
    0xd9, 0x89, 0xc3, 0x04, 0xde, 0x3e, 0x74, 0xfe, 0x3a, 0x9e, 0x5f, 0x87, 0x60, 0xa0, 0x78,
    0x85, 0x23, 0xc6, 0x00, 0xbb, 0x41, 0xb9, 0xe7, 0x21, 0x0d, 0x60, 0xd6, 0xf1, 0x9f, 0x29,
    0x44, 0x5d, 0xdc, 0xd5, 0xfe, 0x46, 0x50, 0xf8, 0x02, 0x94, 0x25, 0x30, 0x6a, 0xda, 0xcf,
    0xd7, 0x08, 0xf6}, //pop
   {0xff, 0xff, 0x3f, 0x75, 0xeb, 0x3f, 0xd0, 0x4c, 0x3f, 0x09, 0xc8, 0x80, 0xf5, 0x37, 0x7f,
    0xb8, 0xc7, 0xc0, 0xff, 0xff, 0x3f, 0x55, 0x28, 0x3f, 0xef, 0xd8, 0x80, 0x0f, 0x27, 0x7f,
    0xa9, 0xd7, 0xc0, 0x98, 0x25, 0x40, 0xf4, 0xb7, 0x3e, 0x96, 0x27, 0x81, 0x68, 0xd8, 0x7e,
    0x70, 0x22, 0xc1, 0xc9, 0x64, 0x40, 0x90, 0x42, 0x3e, 0x35, 0x6d, 0x81, 0xc9, 0x92, 0x7e,
    0xa4, 0x58, 0xc1, 0xb8, 0xac, 0x3f, 0x7f, 0x29, 0x3d, 0xd4, 0x7a, 0x83, 0x2a, 0x85, 0x7c,
    0xc5, 0x29, 0xc3, 0x35, 0x6f, 0x3f, 0xd2, 0x10, 0x3b, 0xb7, 0xbd, 0x86, 0x47, 0x42, 0x79,
    0xf6, 0x7f, 0xc5, 0xcf, 0x3b, 0x47, 0x08, 0x08, 0x20, 0xe4, 0xdb, 0xd4, 0x1a, 0x24, 0x2b,
    0x25, 0xbc, 0xd8, 0xea, 0xc2, 0x4e, 0x55, 0xc3, 0xfe, 0xa5, 0x76, 0x32, 0x59, 0x89, 0xcd,
    0xbe, 0x79, 0xf2}, //rock
   {0xff, 0xff, 0x3f, 0xff, 0xff, 0x3f, 0xe0, 0x4d, 0x3f, 0x6f, 0xb2, 0x80, 0x8f, 0x4d, 0x7f,
    0x1e, 0xb2, 0xc0, 0xff, 0xff, 0x3f, 0x55, 0x28, 0x3f, 0xef, 0xd8, 0x80, 0x0f, 0x27, 0x7f,
    0xa9, 0xd7, 0xc0, 0xff, 0xff, 0x3f, 0x78, 0xba, 0x3e, 0xab, 0x4a, 0x81, 0x53, 0xb5, 0x7e,
    0x86, 0x45, 0xc1, 0xc9, 0x64, 0x40, 0x90, 0x42, 0x3e, 0x35, 0x6d, 0x81, 0xc9, 0x92, 0x7e,
    0xa4, 0x58, 0xc1, 0xde, 0xa8, 0x40, 0xae, 0x15, 0x3d, 0x16, 0x93, 0x82, 0xe8, 0x6c, 0x7d,
    0x71, 0x41, 0xc2, 0x33, 0x27, 0x41, 0x5d, 0xe7, 0x3a, 0x38, 0x33, 0x85, 0xc6, 0xcc, 0x7a,
    0x6d, 0xf1, 0xc3, 0xd9, 0x57, 0x45, 0xb9, 0xc0, 0x20, 0xeb, 0x58, 0xd5, 0x13, 0xa7, 0x2a,
    0x6b, 0xe7, 0xd9, 0xea, 0xc2, 0x4e, 0x55, 0xc3, 0xfe, 0xa5, 0x76, 0x32, 0x59, 0x89, 0xcd,
    0xbe, 0x79, 0xf2}, //jazz
   {0xff, 0xff, 0x3f, 0xff, 0xff, 0x3f, 0xe0, 0x4d, 0x3f, 0x6f, 0xb2, 0x80, 0x8f, 0x4d, 0x7f,
    0x1e, 0xb2, 0xc0, 0x1c, 0x67, 0x40, 0x79, 0x10, 0x3f, 0xad, 0x89, 0x80, 0x51, 0x76, 0x7f,
    0x67, 0x88, 0xc0, 0xd5, 0x9b, 0x40, 0x02, 0x96, 0x3e, 0x4f, 0xd3, 0x80, 0xaf, 0x2c, 0x7f,
    0x25, 0xce, 0xc0, 0xc9, 0x64, 0x40, 0x90, 0x42, 0x3e, 0x35, 0x6d, 0x81, 0xc9, 0x92, 0x7e,
    0xa4, 0x58, 0xc1, 0xff, 0xff, 0x3f, 0x57, 0x2c, 0x3d, 0xee, 0x24, 0x83, 0x10, 0xdb, 0x7c,
    0xa7, 0xd3, 0xc2, 0xff, 0xff, 0x3f, 0x41, 0x13, 0x3b, 0xfc, 0x2b, 0x86, 0x02, 0xd4, 0x79,
    0xbd, 0xec, 0xc4, 0x9c, 0x82, 0x43, 0x42, 0x60, 0x21, 0x4e, 0xda, 0xd5, 0xb0, 0x25, 0x2a,
    0x1e, 0x1d, 0xdb, 0xd5, 0xfe, 0x46, 0x50, 0xf8, 0x02, 0x94, 0x25, 0x30, 0x6a, 0xda, 0xcf,
    0xd7, 0x08, 0xf6}, //classic
   {0xff, 0xff, 0x3f, 0x75, 0xeb, 0x3f, 0xd0, 0x4c, 0x3f, 0x09, 0xc8, 0x80, 0xf5, 0x37, 0x7f,
    0xb8, 0xc7, 0xc0, 0xff, 0xff, 0x3f, 0x55, 0x28, 0x3f, 0xef, 0xd8, 0x80, 0x0f, 0x27, 0x7f,
    0xa9, 0xd7, 0xc0, 0xff, 0xff, 0x3f, 0x78, 0xba, 0x3e, 0xab, 0x4a, 0x81, 0x53, 0xb5, 0x7e,
    0x86, 0x45, 0xc1, 0xfe, 0x31, 0x40, 0xcc, 0x4b, 0x3e, 0xbd, 0x96, 0x81, 0x41, 0x69, 0x7e,
    0x33, 0x82, 0xc1, 0xb1, 0x53, 0x40, 0xc9, 0x25, 0x3d, 0xfb, 0xd7, 0x82, 0x03, 0x28, 0x7d,
    0x82, 0x86, 0xc2, 0xff, 0xff, 0x3f, 0x41, 0x13, 0x3b, 0xfc, 0x2b, 0x86, 0x02, 0xd4, 0x79,
    0xbd, 0xec, 0xc4, 0xcf, 0x3b, 0x47, 0x08, 0x08, 0x20, 0xe4, 0xdb, 0xd4, 0x1a, 0x24, 0x2b,
    0x25, 0xbc, 0xd8, 0xea, 0xc2, 0x4e, 0x55, 0xc3, 0xfe, 0xa5, 0x76, 0x32, 0x59, 0x89, 0xcd,
    0xbe, 0x79, 0xf2}  //country
};

IAR_CONST u8  tbl_drc[45] = {
    0x00, 0x00, 0x00, // reserve
    0x6a, 0x04, 0x01, // at_comexp
    0x82, 0x00, 0x00, // rt_comexp
    0x6a, 0x04, 0x01, // at_lim
    0x0a, 0x02, 0x00, // rt_lim
    0x97, 0xad, 0xfc, // LT
    0xff, 0xff, 0x03, // LS
    0x2d, 0x5b, 0xf9, // CT
    0xff, 0xff, 0x01, // CS
    0xc3, 0x08, 0xf6, // ET
    0xff, 0xff, 0x03, // ES
    0xb1, 0x6c, 0xe5, // NT
    0x00, 0x00, 0xf4, // NS
    0xfe, 0xf8, 0x07, // Gain
    0x11, 0x78, 0x00  // tav
};
#pragma constseg=default
