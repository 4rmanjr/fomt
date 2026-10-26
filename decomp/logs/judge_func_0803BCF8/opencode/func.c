#include "common.h"
s32 func_08009940(void *, void *);                    /* extern */

typedef struct GenObj {
    u8 _pad0[10];
    s32 unkA;
    s32 unkB;
    s32 unkC;
    s32 unkD;
} GenObj;
void func_0803BCF8(GenObj *arg0) {
    s32 temp_r1;
    s8 temp_r5;
    u8 temp_r3;
    void *temp_r6;

    temp_r5 = ((arg0->unkC & 0x7F) * 2) | ((u8) arg0->unkB >> 7);
    if (temp_r5 == 0) {
        temp_r6 = arg0 + 0x10;
        if (((u32) (arg0->unkA << 0x11) >> 0x18) != 1) {
            func_08009940(temp_r6, arg0 + 0x2C);
        }
        func_08009940(temp_r6, arg0 + 0x44);
        arg0->unkD = temp_r5;
    }
    temp_r3 = arg0->unkB;
    temp_r1 = ((arg0->unkC & 0x7F) * 2) | (temp_r3 >> 7);
    if ((temp_r1 >= 0) && (temp_r1 <= 2)) {
        arg0->unkB = (u8) (0x80 | temp_r3);
        arg0->unkC = (u8) (-0x80 & arg0->unkC);
    }
}

