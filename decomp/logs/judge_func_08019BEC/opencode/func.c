#include "common.h"
void *GetMapData(s32);                              /* extern */
void *__builtin_new(s32);                           /* extern */
s32 func_08008E64(s32, s32, s32);                     /* extern */
s32 func_080167CC(s32);                             /* extern */
s32 func_0801A13C(void *, u32, u32, s32);             /* extern */
s32 func_0801DB58(void *);                            /* extern */
s32 func_0801E67C(void *);                            /* extern */
s32 func_0801F14C(void *);                            /* extern */
s32 func_0801F2DC(void *);                            /* extern */
s32 func_0801F3E4(void *);                            /* extern */
s32 func_0801F614(void *);                            /* extern */
s32 func_0801F77C(void *);                            /* extern */
s32 func_0801FAC8(void *, s32);                       /* extern */
s32 func_0803AB30(void *, void *);                  /* extern */
s32 func_0803AC78(s32, s32);                          /* extern */
s32 func_0803B0A8(s32, s32);                          /* extern */
s32 func_0809C5F4(void *);                          /* extern */
s32 func_080A4740(void *, void *, s32, s32);          /* extern */
s32 func_080A56DC(void *, u16 *, s32);                /* extern */
s32 func_080AAFC8(void *, void *, s32);             /* extern */
s32 func_080AB2E4(s32, s32);                          /* extern */
extern s32 gUnk_0300040C;
extern ? vtable_unk_080E602C;

void func_08019BEC(void *arg0, u16 *arg1, u8 arg2) {
    s32 sp0;
    u16 *sp4;
    s32 spC;
    u32 sp10;
    u32 sp14;
    void **sp18;
    s32 sp1C;
    void *sp20;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_6;
    s32 temp_r0_7;
    s32 temp_r0_8;
    s32 temp_r0_9;
    s32 temp_r1_2;
    s32 temp_r1_4;
    s32 temp_r2_4;
    s32 temp_r5;
    s32 var_r0;
    u16 temp_sl_2;
    u32 temp_r0_4;
    u32 temp_r0_5;
    u32 temp_r4;
    u32 var_r5;
    void **temp_r5_2;
    void **temp_sb;
    void **var_r4;
    void **var_r4_2;
    void **var_r4_3;
    void *temp_r1;
    void *temp_r1_3;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r4_2;
    void *temp_r6;
    void *temp_sl;

    spC = (s32) arg2;
    var_r4 = arg0 + 8;
    temp_r5 = arg0 + 0x198;
    if (var_r4 != temp_r5) {
        do {
            temp_r2 = *var_r4;
            if (temp_r2 != 0) {
                temp_r2->unk14->unk14(temp_r2);
            }
            var_r4 += 4;
        } while (var_r4 != temp_r5);
    }
    temp_sl = gUnk_0300040C + 0x4DC;
    var_r5 = 0;
    sp18 = arg0 + 8;
    sp1C = arg0 + 0x198;
    var_r4_2 = arg0 + 0x10B0;
    do {
        temp_r1 = *var_r4_2;
        if ((temp_r1 != 0) && (temp_r1 != 0)) {
            temp_r1->unk24->unk8(temp_r1, 3);
        }
        *var_r4_2 = 0;
        var_r4_2 += 4;
        var_r5 += 1;
    } while (var_r5 < 6U);
    if (((u32) (*arg1 << 0x16) >> 0x16) != 2) {
        temp_r2_2 = arg0->unk4;
        if (temp_r2_2->unk0 == 2) {
            temp_r1_2 = arg0->unk1050;
            if (temp_r1_2 != 0) {
                func_08008E64(temp_r2_2->unk2C, temp_r1_2, 0xB000);
            }
        }
    }
    sp0 = 0x1E - arg0->unk104C;
    func_080A56DC(arg0->unk4, arg1, arg0->unk1048);
    temp_r0 = arg0->unk1024;
    if ((temp_r0 != 0) && (temp_r0 != 0)) {
        func_0803AC78(temp_r0, 3);
    }
    arg0->unk1024 = 0;
    temp_r0_2 = arg0->unk107C;
    if ((temp_r0_2 != 0) && (temp_r0_2 != 0)) {
        func_0803B0A8(temp_r0_2, 3);
    }
    arg0->unk107C = 0;
    temp_r0_3 = arg0->unk1028;
    if ((temp_r0_3 != 0) && (temp_r0_3 != 0)) {
        func_080AB2E4(temp_r0_3, 3);
    }
    arg0->unk1028 = 0;
    sp10 = 0;
    sp20 = temp_sl;
    do {
        temp_r0_5 = (u32) (sp20->unk0 << 0x1E) >> 0x1E;
        sp14 = temp_r0_5;
        if (temp_r0_5 == 1) {
            temp_r4 = (u32) (sp20->unk2 << 0x16) >> 0x16;
            if (temp_r4 == arg0->unk0->unk14(arg0)) {
                temp_sb = arg0 + 0x10B0 + (sp10 * 4);
                temp_r6 = __builtin_new(0x4C);
                temp_r5_2 = arg0->unk0->unk64(arg0);
                temp_sl_2 = sp20->unk8;
                func_080A4740(temp_r6, arg0, 2, 0x1B);
                temp_r6->unk24 = &vtable_unk_080E602C;
                temp_r4_2 = *temp_r5_2;
                temp_r4_2->unkC(&sp4, temp_r5_2, temp_sl_2);
                temp_r4_2->unk10(temp_r6 + 0x28, temp_r5_2, *sp4);
                temp_r6->unk48 = (u8) sp0.unk14;
                temp_r1_3 = *temp_sb;
                if ((temp_r6 != temp_r1_3) && (temp_r1_3 != 0)) {
                    temp_r1_3->unk24->unk8(temp_r1_3, 3);
                }
                *temp_sb = temp_r6;
            }
        }
        sp20 += 0xC;
        temp_r0_4 = sp10 + 1;
        sp10 = temp_r0_4;
    } while (temp_r0_4 < 6U);
    temp_r0_6 = func_0803AB30(__builtin_new(0xA0), arg0);
    temp_r0_7 = arg0->unk1024;
    if ((temp_r0_6 != temp_r0_7) && (temp_r0_7 != 0)) {
        func_0803AC78(temp_r0_7, 3);
    }
    arg0->unk1024 = temp_r0_6;
    if (GetMapData(arg0->unk4->unk4)->unk24 == 0) {
        temp_r1_4 = arg0->unk4->unk0;
        if (temp_r1_4 != 0x2E) {
            if (temp_r1_4 > 0x2E) {
                if (temp_r1_4 != 0x2F) {
                    goto block_42;
                }
                var_r0 = 2;
            } else if (temp_r1_4 >= 0x2C) {
                var_r0 = 0;
            } else {
block_42:
                var_r0 = arg0->unk1038->unk8;
            }
        } else {
            var_r0 = 1;
        }
        switch (var_r0) {                           /* irregular */
        case 1:
            func_0801FAC8(arg0, 1);
            break;
        case 2:
            func_0801FAC8(arg0, 0);
            break;
        }
    }
    temp_r0_8 = func_080AAFC8(__builtin_new(4), arg0, arg0->unk4->unk4);
    temp_r0_9 = arg0->unk1028;
    if ((temp_r0_8 != temp_r0_9) && (temp_r0_9 != 0)) {
        func_080AB2E4(temp_r0_9, 3);
    }
    arg0->unk1028 = temp_r0_8;
    func_0801F14C(arg0);
    func_0801F3E4(arg0);
    func_0801F2DC(arg0);
    func_0801F614(arg0);
    func_0801F77C(arg0);
    func_0801E67C(arg0);
    var_r4_3 = sp18;
    if (var_r4_3 != sp1C) {
        do {
            temp_r2_3 = *var_r4_3;
            if (temp_r2_3 != 0) {
                temp_r2_3->unk14->unk10(temp_r2_3);
            }
            var_r4_3 += 4;
        } while (var_r4_3 != sp1C);
    }
    if ((spC != 0) && (((func_0809C5F4(arg0->unk1038 + 0x214C) << 0x18) == 0) || ((func_080167CC(arg0->unk1054) << 0x18) == 0))) {
        func_0801DB58(arg0);
    }
    if (GetMapData(arg0->unk4->unk4)->unk24 == 0) {
        temp_r2_4 = *arg0->unk1040;
        func_0801A13C(arg0, (u32) (temp_r2_4 << 0xB) >> 0x1B, (u32) (temp_r2_4 << 5) >> 0x1A, 1);
    }
}

