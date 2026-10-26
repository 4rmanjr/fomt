#include "common.h"
void *func_08008920(void *);                          /* extern */

typedef struct GenObj {
    s32 unk0;
    u16 unk4;
    u8 _pad8[120];
    s32 unk80;
} GenObj;
void func_08003DF0(GenObj *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *sp0;
    s32 temp;
    s32 mask;
    s32 var;
    GenObj *p;
    s32 spbuf[2];

    spbuf[0] = arg2;
    spbuf[1] = arg3;
    mask = 0xFFFFFF00 & spbuf[0];
    sp0 = (u8 *)spbuf;
    var = *sp0 + 8 + (((arg1 * 2) + 1) * 8);
    spbuf[0] = mask | (u8)var;
    temp = spbuf[0];
    var = ((u32) (temp << 7) >> 0x17) + 0x80;
    if (*((u8 *)((u8 *)arg0 + 0x84) + arg1) == 0) {
        goto skip_add;
    }
    var += 0x40;
skip_add:
    temp = (0xFE00FFFF & temp) | ((var & 0x1FF) << 0x10);
    spbuf[0] = temp;
    if (arg1 != 1) {
        goto skip_set;
    }
    if (arg0->unk80 == 1) {
        goto skip_set;
    }
    spbuf[0] = (0xFFFFFCFF & temp) | 0x200;
skip_set:
    sp0 = (u8 *)spbuf;
    p = (GenObj *)((u8 *)func_08008920(arg0) + (((0x7F & arg1) * 8) + 4));
    *(s32 *)p = *(s32 *)sp0;
    *(u16 *)((u8 *)p + 4) = *(u16 *)(sp0 + 4);
}

