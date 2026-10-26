#include "common.h"
s32 func_0807549C(void *, s32);                       /* extern */
s32 func_08075E7C(void *, s32);                       /* extern */
extern s32 vtable_unk_080E7B3C;

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk4;
    u8 _pad8[280];
    s32 unk120;
    s32 unk124;
    s32 unk128;
    u8 _pad12C[76];
    s32 unk178;
} GenObj;
void *func_08070B70(GenObj *arg0, s32 arg1) {
    GenObj *sp0;
    u32 temp_r0;
    u32 temp_r1;
    GenObj *temp_r2;
    GenObj *temp_r2_2;
    GenObj *temp_r3;

    func_08075E7C(arg0, 0);
    arg0->unk4 = &vtable_unk_080E7B3C;
    arg0->unk120 = arg1;
    arg0->unk124 = 0U;
    sp0 = 0;
    sp0.unk4 = 0;
    sp0 = 0;
    temp_r2 = (GenObj *)((u8 *)arg0 + 0x128);
    if (temp_r2 != 0) {
        arg0->unk128 = sp0;
        temp_r2->unk4 = sp4;
    }
    temp_r1 = arg0->unk124 + 1;
    arg0->unk124 = temp_r1;
    sp0 = 1;
    if (temp_r1 <= 9U) {
        temp_r2_2 = (GenObj *)((u8 *)arg0 + 0x124) + ((temp_r1 * 8) + 4);
        if (temp_r2_2 != 0) {
            temp_r2_2->unk0 = sp0;
            temp_r2_2->unk4 = sp4;
        }
        arg0->unk124 = (u32) (arg0->unk124 + 1);
    }
    sp0 = 2;
    temp_r0 = arg0->unk124;
    if (temp_r0 <= 9U) {
        temp_r3 = (GenObj *)((u8 *)arg0 + 0x124) + ((temp_r0 * 8) + 4);
        if (temp_r3 != 0) {
            temp_r3->unk0 = sp0;
            temp_r3->unk4 = sp4;
        }
        arg0->unk124 = (u32) (arg0->unk124 + 1);
    }
    arg0->unk178 = 0;
    func_0807549C(arg0, arg0->unk128);
    return arg0;
}

