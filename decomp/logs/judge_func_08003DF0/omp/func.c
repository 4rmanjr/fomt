#include "common.h"
void *func_08008920(void *);                          /* extern */

typedef struct GenObj {
    s32 unk0;
    u16 unk4;
    u8 _pad8[120];
    s32 unk80;
} GenObj;
void func_08003DF0(GenObj *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *t;
    s32 temp;
    s32 var;
    GenObj *p;
    s32 spbuf[2];

    spbuf[0] = arg2;
    spbuf[1] = arg3;
    var = *(u8 *)spbuf;
    var += 8;
    var += (((arg1 * 2) + 1) * 8);
    temp = spbuf[0] & 0xFFFFFF00;
    temp |= (u8)var;
    spbuf[0] = temp;
    var = ((u32) (temp << 7) >> 0x17) + 0x80;
    t = (u8 *)arg0 + 0x84;
    if (*(t + arg1) == 0) {
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
    p = (GenObj *)((u8 *)func_08008920(arg0) + (((0x7F & arg1) * 8) + 4));
    *(s32 *)p = spbuf[0];
    *(u16 *)((u8 *)p + 4) = *(u16 *)((u8 *)spbuf + 4);
}

