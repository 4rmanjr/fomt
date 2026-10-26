#include "common.h"
s32 func_080087C8(void *);                            /* extern */
s32 func_080088B8(void *);                            /* extern */
s32 func_080088C4(void *);                          /* extern */
s32 func_080088CC(void *);                          /* extern */
void *func_08008918(void *);                        /* extern */
s32 func_0805E8F0(s32);                               /* extern */
s32 func_0806EA78(void *);                            /* extern */
s32 func_0806EAF4(void *);                            /* extern */
s32 func_0806EC94(void *);                            /* extern */
s32 func_0806EFC0(void *, s32, s32);                  /* extern */
s32 func_08070140(void *);                            /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk4;
    u8 _pad8[2];
    s32 unkA;
    struct GenObj *unkC;
    s32 unkE;
    u8 _pad12[190];
    struct GenObj *unkD0;
} GenObj;
void ***func_08070A08(void ***arg0, GenObj *arg1) {
    void **sp0;
    s16 sp4;
    GenObj *sp8;
    void ***spC;
    void ***sp14;
    s32 temp_r0_2;
    s32 temp_r5;
    s32 var_r2;
    s32 var_r4;
    s32 var_r4_2;
    u32 var_r5;
    u32 var_r7;
    u8 temp_r1;
    u8 temp_r3;
    void **temp_r0_3;
    GenObj *temp_r0;
    GenObj *temp_r6;

    sp14 = arg0;
    temp_r6 = arg1->unk4;
    temp_r0 = func_08008918(temp_r6);
    sp4 = 0x1E40;
    temp_r0->unk0 = 0x1E40;
    sp4 = 0xDC40;
    temp_r0->unkE = 0xDC40;
    sp4 = 0xD840;
    temp_r0->unkC = 0xD840;
    sp4 = 0xD440;
    temp_r0->unkA = 0xD440;
    func_0806EC94(temp_r6);
    func_0806EA78(temp_r6);
loop_22:
    func_080088B8(temp_r6);
    if (!(func_080088CC(temp_r6) & 2)) {
        temp_r0_2 = func_080088C4(temp_r6);
        sp8 = temp_r0_2;
        var_r2 = 0;
        var_r7 = 0;
        var_r4 = 0;
        if (((u32) (temp_r0_2 << 0x18) >> 0x1F) != ((u32) (temp_r0_2 << 0x19) >> 0x1F)) {
            var_r4 = ((u32) (temp_r0_2 << 0x1A) >> 0x1F) ^ ((u32) (temp_r0_2 << 0x1B) >> 0x1F);
        }
        var_r5 = 0x400;
        if (var_r4 != 0) {
            var_r5 = 0x2D4;
        }
        temp_r3 = sp8.unk1;
        if (1 & temp_r3) {
            var_r5 *= 2;
        }
        if (2 & temp_r3) {
            var_r5 = (u32) ((s32) (var_r5 + (var_r5 >> 0x1F)) >> 1);
        }
        temp_r1 = sp8.unk0;
        if (0x80 & temp_r1) {
            var_r7 = var_r5;
        }
        if (0x40 & temp_r1) {
            var_r7 -= var_r5;
        }
        if (0x20 & temp_r1) {
            var_r2 = 0 - var_r5;
        }
        if (0x10 & temp_r1) {
            var_r2 += var_r5;
        }
        func_0806EFC0(temp_r6, var_r2, (s32) var_r7);
        var_r4_2 = temp_r6->unkD0;
        temp_r5 = ((GenObj *)((u8 *)temp_r6 + 0xD0))->unk4;
        if (var_r4_2 != temp_r5) {
            do {
                func_0805E8F0(var_r4_2 + 8);
                var_r4_2 += 0x1C;
            } while (var_r4_2 != temp_r5);
        }
        if (!(1 & sp8.unk0)) {
            func_08070140(temp_r6);
        }
        func_080087C8(temp_r6);
        goto loop_22;
    }
    func_0806EAF4(temp_r6);
    temp_r0_3 = temp_r6->unkC;
    temp_r6->unkC = 0;
    sp0 = temp_r0_3;
    spC = &sp0;
    spC.unk4 = temp_r0_3;
    sp0 = 0;
    *sp14 = temp_r0_3;
    if (sp0 != 0) {
        (*sp0)->unk8(sp0, 3);
    }
    return arg0;
}

