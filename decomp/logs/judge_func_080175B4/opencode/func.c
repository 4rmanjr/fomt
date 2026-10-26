#include "common.h"
void *GetMapData(s32);                              /* extern */
void *__builtin_new(s32);                           /* extern */
s32 __builtin_vec_new(s32);                         /* extern */
s32 func_0800E324(void *);                          /* extern */
s32 func_0800E924(s32 *, void *);                       /* extern */
s32 func_080167CC(s32);                             /* extern */
s32 func_080171F8(s32, void *, s32);                  /* extern */
s32 func_0801A8C0(void *, u32);                     /* extern */
s32 func_0801A8E0(void *, u32);                       /* extern */
s32 func_0801D8CC(void *);                            /* extern */
s32 func_0801D948(void *);                            /* extern */
s32 func_0801DB58(void *);                            /* extern */
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
u8 func_080A4650(u32, u32, s32, s32);               /* extern */
s32 func_080A4740(void *, void *, s32, s32);          /* extern */
s32 func_080A56DC(void *, ? *, s32, s32);             /* extern */
s32 func_080AAFC8(void *, void *, s32);             /* extern */
s32 func_080AB2E4(s32, s32);                          /* extern */
s32 func_080AC674(s32, void **);                      /* extern */
extern s32 gUnk_0300040C;
extern ? vtable_unk_080E5EC4;
extern ? vtable_unk_080E602C;
extern ? vtable_unk_080E6038;

void *func_080175B4(void *arg0, void *arg1, s32 arg2, void **arg3, u8 arg4) {
    void *sp4;
s32 sp8;
    u16 *sp10;
    void *sp18;
    void **sp1C;
    s32 sp20;
    u32 sp24;
    void **sp28;
    void *sp2C;
    s32 *var_r1;
    s32 *var_r1_2;
    s32 *var_r1_3;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r0_7;
    s32 temp_r1_3;
    s32 temp_r4;
    s32 temp_r5_2;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r2_2;
    s32 var_r3;
    u16 temp_sb;
    u32 temp_r0_8;
    u32 temp_r2;
    u32 temp_r4_2;
    u32 temp_r5;
    u32 var_r4;
    void **temp_r8;
    void *temp_r0;
    void *temp_r0_9;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_4;
    void *temp_r1_5;
    void *temp_r4_3;
    void *temp_r5_3;
    void *var_r2;
    void *var_r6;

    sp18 = arg1;
    sp1C = arg3;
    sp20 = (s32) arg4;
    arg0->unk0 = &vtable_unk_080E6038;
    arg0->unk0 = &vtable_unk_080E5EC4;
    temp_r1 = *sp1C;
    *sp1C = 0;
    sp4 = temp_r1;
    func_080AC674(arg0 + 4, &sp4);
    arg0->unk1038 = sp18;
    arg0->unk103C = 0;
    temp_r1_2 = arg0->unk1038;
    arg0->unk1040 = (s32 *) (temp_r1_2 + 0x10);
    (arg0 + 0x1040)->unk4 = 0;
    arg0->unk1048 = func_0801A8C0(arg0, (u32) (temp_r1_2->unk10 << 0xB) >> 0x1B);
    temp_r4 = *arg0->unk1040;
    temp_r5 = (u32) (temp_r4 << 0xB) >> 0x1B;
    temp_r4_2 = (u32) (temp_r4 << 5) >> 0x1A;
    arg0->unk104C = func_080A4650(temp_r5, temp_r4_2, func_0800E324(arg0->unk1038 + 0x10), arg0->unk1048);
    arg0->unk1050 = __builtin_vec_new(0xB000);
    arg0->unk1054 = arg2;
    arg0->unk1058 = 0;
    arg0->unk105C = 0;
    arg0->unk1064 = 0;
    arg0->unk1068 = 0;
    var_r1 = arg0 + 0x106C;
    var_r0 = 1;
    do {
        *var_r1 = 0;
        var_r1 += 4;
        var_r0 -= 1;
    } while (var_r0 != -1);
    var_r1_2 = arg0 + 0x1074;
    var_r0_2 = 1;
    do {
        *var_r1_2 = 0;
        var_r1_2 += 4;
        var_r0_2 -= 1;
    } while (var_r0_2 != -1);
    arg0->unk107C = 0;
    var_r2 = arg0 + 0x1080;
    var_r3 = 3;
    do {
        var_r2->unk1 = (u8) (-4 & var_r2->unk1);
        var_r2->unk8 = 0;
        var_r2 += 0xC;
        var_r3 -= 1;
    } while (var_r3 != -1);
    var_r1_3 = arg0 + 0x10B0;
    var_r0_3 = 5;
    do {
        *var_r1_3 = 0;
        var_r1_3 += 4;
        var_r0_3 -= 1;
    } while (var_r0_3 != -1);
    arg0->unk10C8 = 0;
    temp_r4_3 = arg0->unk4;
    func_0800E924(&sp8, arg0->unk1038 + 0x1BD8);
    func_080A56DC(temp_r4_3, &sp8, arg0->unk1048, 0x1E - arg0->unk104C);
    if (arg0->unk4->unk0 != 2) {
        temp_r5_2 = arg0->unk1050;
        temp_r0 = arg0->unk1038;
        var_r2_2 = 0;
        if (func_0800E324(temp_r0 + 0x10) == 3) {
            var_r2_2 = 1;
        }
        func_080171F8(temp_r5_2, temp_r0 + 0x14, var_r2_2);
    }
    if ((sp20 != 0) && (((func_0809C5F4(arg0->unk1038 + 0x214C) << 0x18) == 0) || ((func_080167CC(arg0->unk1054) << 0x18) == 0))) {
        func_0801DB58(arg0);
    }
    temp_r0_2 = func_0803AB30(__builtin_new(0xA0), arg0);
    temp_r0_3 = arg0->unk1024;
    if ((temp_r0_2 != temp_r0_3) && (temp_r0_3 != 0)) {
        func_0803AC78(temp_r0_3, 3);
    }
    arg0->unk1024 = temp_r0_2;
    temp_r0_4 = arg0->unk1028;
    if ((temp_r0_4 != 0) && (temp_r0_4 != 0)) {
        func_080AB2E4(temp_r0_4, 3);
    }
    arg0->unk1028 = 0;
    temp_r0_5 = func_080AAFC8(__builtin_new(4), arg0, arg0->unk4->unk4);
    temp_r0_6 = arg0->unk1028;
    if ((temp_r0_5 != temp_r0_6) && (temp_r0_6 != 0)) {
        func_080AB2E4(temp_r0_6, 3);
    }
    arg0->unk1028 = temp_r0_5;
    var_r4 = 0;
    do {
        func_0801A8E0(arg0, var_r4);
        var_r4 += 1;
    } while (var_r4 <= 0x63U);
    temp_r0_7 = arg0->unk107C;
    if ((temp_r0_7 != 0) && (temp_r0_7 != 0)) {
        func_0803B0A8(temp_r0_7, 3);
    }
    arg0->unk107C = 0;
    if (GetMapData(arg0->unk4->unk4)->unk24 == 0) {
        temp_r1_3 = arg0->unk4->unk0;
        if (temp_r1_3 != 0x2E) {
            if (temp_r1_3 > 0x2E) {
                if (temp_r1_3 != 0x2F) {
                    goto block_39;
                }
                var_r0_4 = 2;
            } else if (temp_r1_3 >= 0x2C) {
                var_r0_4 = 0;
            } else {
block_39:
                var_r0_4 = arg0->unk1038->unk8;
            }
        } else {
            var_r0_4 = 1;
        }
        switch (var_r0_4) {                         /* irregular */
        case 1:
            func_0801FAC8(arg0, 1);
            break;
        case 2:
            func_0801FAC8(arg0, 0);
            break;
        }
    }
    func_0801F14C(arg0);
    func_0801F3E4(arg0);
    func_0801F2DC(arg0);
    func_0801F614(arg0);
    func_0801F77C(arg0);
    sp24 = 0;
    sp28 = arg0 + 0xDE4;
    var_r6 = gUnk_0300040C + 0x4DC;
    do {
        temp_r0_8 = (u32) (var_r6->unk0 << 0x1E) >> 0x1E;
        if ((temp_r0_8 == 1) && (((u32) (var_r6->unk2 << 0x16) >> 0x16) == arg0->unk4->unk0)) {
            temp_r8 = arg0 + 0x10B0 + (sp24 * 4);
            temp_r0_9 = __builtin_new(0x4C);
            temp_sb = var_r6->unk8;
            func_080A4740(temp_r0_9, arg0, 2, 0x1B);
            temp_r0_9->unk24 = &vtable_unk_080E602C;
            sp2C = temp_r0_9 + 0x28;
            temp_r5_3 = *sp28;
            temp_r5_3->unkC(&sp10, sp28, temp_sb);
            temp_r5_3->unk10(sp2C, sp28, *sp10);
            temp_r0_9->unk48 = (s8) temp_r0_8;
            temp_r1_4 = *temp_r8;
            if ((temp_r0_9 != temp_r1_4) && (temp_r1_4 != 0)) {
                temp_r1_4->unk24->unk8(temp_r1_4, 3);
            }
            *temp_r8 = temp_r0_9;
        }
        var_r6 += 0xC;
        temp_r2 = sp24 + 1;
        sp24 = temp_r2;
    } while (temp_r2 < 6U);
    if (sp18->unk34C4 != 0) {
        func_0801D8CC(arg0);
        func_0801D948(arg0);
    }
    temp_r1_5 = *sp1C;
    if (temp_r1_5 != 0) {
        temp_r1_5->unk90->unk8(temp_r1_5, 3);
    }
    return arg0;
}

