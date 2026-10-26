#include "common.h"
s32 CpuSet(s16 *, void *, s32);                       /* extern */

typedef struct GenObj {
    s32 unk0;
    u8 _pad4[28];
    s32 unk20;
    s32 unk22;
    s32 unk24;
    s32 unk26;
    u8 _pad2A[6];
    s32 unk30;
    s32 unk32;
    s32 unk34;
    s32 unk36;
} GenObj;
void *func_080096B0(GenObj *arg0) {
    s16 sp0;

    sp0 = 0;
    CpuSet(&sp0, arg0, 0x0100002B);
    arg0->unk0 = 0x80;
    arg0->unk20 = 0x100;
    arg0->unk22 = 0;
    arg0->unk24 = 0;
    arg0->unk26 = 0x100;
    arg0->unk30 = 0x100;
    arg0->unk32 = 0;
    arg0->unk34 = 0;
    arg0->unk36 = 0x100;
    return arg0;
}

