# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08059C94/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08059C94/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08059C94/kilo-1531/common.h" 1
# 1 "/home/armanjr/gitproject/fomt/tools/agbcc/include/stdint.h" 1
# 31 "/home/armanjr/gitproject/fomt/tools/agbcc/include/stdint.h"
# 1 "/home/armanjr/gitproject/fomt/tools/agbcc/include/limits.h" 1
# 32 "/home/armanjr/gitproject/fomt/tools/agbcc/include/stdint.h" 2



typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;



typedef signed char int_least8_t;
typedef short int_least16_t;
typedef int int_least32_t;
typedef long long int_least64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long long uint_least64_t;



typedef int int_fast8_t;
typedef int int_fast16_t;
typedef int int_fast32_t;
typedef long long int_fast64_t;
typedef unsigned int uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
typedef unsigned long long uint_fast64_t;



typedef int intptr_t;
typedef unsigned int uintptr_t;



typedef long long intmax_t;
typedef unsigned long long uintmax_t;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08059C94/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08059C94/kilo-1531/func.c" 2
s32 func_080074C0(void *, s32);
s32 func_08007D4C(void *, s32);
s16 *func_08008918(void *);
s32 func_08008E64(s32 *, s32, s32);
s32 func_08008EB8(s32, s32, s32);
s32 func_0804E5AC(s32, ? *, s32, s32);
s32 func_08051320(s32, s32, s32, s32);
s32 func_0805E860(void *, s32);
s32 memcpy(s32 *, ? *, s32);
extern s32 *gUnk_080F9F70;
extern s32 gUnk_080F9F74;
extern s32 *gUnk_080F9F78;
extern ? gUnk_080FAE6A;

void func_08059C94(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 *sp14;
    s32 *sp1C;
    s32 sp24;
s32 sp2C;
s32 sp50;
    s16 sp90;
    s32 *sp94;
    s32 *sp98;
    s32 *sp9C;
    s16 *temp_r0_10;
    s16 *temp_r0_11;
    s16 *temp_r0_12;
    s16 *temp_r0_13;
    s16 *temp_r0_14;
    s16 *temp_r0_5;
    s16 *temp_r0_6;
    s16 *temp_r0_7;
    s16 *temp_r0_8;
    s16 *temp_r0_9;
    s32 temp_r1_5;
    s32 temp_r1_8;
    s32 temp_r4_2;
    s32 var_r5;
    s32 var_r6;
    s32 var_sb;
    u16 var_r1;
    u16 var_r2;
    u16 var_r2_2;
    void **temp_r1;
    void **temp_r1_3;
    void **temp_r1_6;
    void *temp_r0;
    void *temp_r0_15;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r1_2;
    void *temp_r1_4;
    void *temp_r1_7;
    void *temp_r4;
    void *temp_r5;
    void *temp_r5_2;

    spC = 0;
    spC.unk4 = 0;
    sp14 = 0;
    sp14.unk4 = 0;
    sp1C = 0;
    sp1C.unk4 = 0U;
    sp24 = 0;
    sp24.unk4 = 0;
    temp_r5 = arg0 + 0x358;
    temp_r1 = arg0->unk358;
    (*temp_r1)->unk10(&sp2C, temp_r1, *(arg0->unk35C + (temp_r5->unkC * 4)));
    memcpy(&sp2C, &sp2C, 0x20);
    temp_r0 = &sp2C + 0xC;
    spC.unk0 = sp2C.unk0;
    spC.unk4 = (s32) sp2C.unk4;
    spC.unk8 = (s32) sp2C.unk8;
    temp_r1_2 = &spC + 0xC;
    spC.unkC = (s32) sp2C.unkC;
    temp_r1_2->unk4 = (s32) temp_r0->unk4;
    temp_r1_2->unk8 = (s32) temp_r0->unk8;
    temp_r1_2->unkC = (s32) temp_r0->unkC;
    (temp_r1_2 + 0xC)->unk4 = (s32) (temp_r0 + 0xC)->unk4;
    temp_r1_3 = arg0->unk358;
    (*temp_r1_3)->unk10(&sp2C, temp_r1_3, *(arg0->unk35C + (temp_r5->unkC * 4)));
    memcpy(&sp2C, &sp2C, 0x20);
    temp_r0_2 = &sp2C + 0xC;
    spC.unk0 = sp2C.unk0;
    spC.unk4 = (s32) sp2C.unk4;
    spC.unk8 = (s32) sp2C.unk8;
    temp_r1_4 = &spC + 0xC;
    spC.unkC = (s32) sp2C.unkC;
    temp_r1_4->unk4 = (s32) temp_r0_2->unk4;
    temp_r1_4->unk8 = (s32) temp_r0_2->unk8;
    temp_r1_4->unkC = (s32) temp_r0_2->unkC;
    (temp_r1_4 + 0xC)->unk4 = (s32) (temp_r0_2 + 0xC)->unk4;
    temp_r0_3 = arg0 + 0x608;
    temp_r1_5 = (func_080074C0(temp_r0_3, temp_r0_3->unk4) << 5) + 0x05000200;
    var_r2 = 0;
    if (sp1C != 0) {
        var_r2 = sp1C.unk4;
    }
    func_08008E64(sp1C, temp_r1_5, (s32) var_r2);
    var_sb = 0;
    var_r6 = 0;
    sp98 = arg0 + 0x35C;
    sp94 = &sp0 + 0x90;
    sp9C = &sp0 + 0x50;
    temp_r5_2 = arg0 + 0x358;
    do {
        func_0805E860(temp_r5_2, var_r6);
        temp_r1_6 = arg0->unk358;
        (*temp_r1_6)->unk10(&sp2C, temp_r1_6, *(*sp98 + (temp_r5_2->unkC * 4)));
        memcpy(&sp2C, &sp2C, 0x20);
        temp_r0_4 = &sp2C + 0xC;
        spC.unk0 = sp2C.unk0;
        spC.unk4 = (s32) sp2C.unk4;
        spC.unk8 = (s32) sp2C.unk8;
        temp_r1_7 = &spC + 0xC;
        spC.unkC = (s32) sp2C.unkC;
        temp_r1_7->unk4 = (s32) temp_r0_4->unk4;
        temp_r1_7->unk8 = (s32) temp_r0_4->unk8;
        temp_r1_7->unkC = (s32) temp_r0_4->unkC;
        (temp_r1_7 + 0xC)->unk4 = (s32) (temp_r0_4 + 0xC)->unk4;
        temp_r1_8 = ((func_08007D4C(arg0 + 0x600, arg0->unk604) + var_sb) << 5) + 0x06010000;
        var_r2_2 = 0;
        if (sp14 != 0) {
            var_r2_2 = sp0.unk18;
        }
        func_08008E64(sp14, temp_r1_8, (s32) var_r2_2);
        var_r1 = 0;
        if (sp14 != 0) {
            var_r1 = sp0.unk18;
        }
        var_sb += var_r1 >> 5;
        var_r6 += 1;
    } while (var_r6 <= 3);
    func_08008EB8(0, 0x06007FE0, 0x20);
    func_08008EB8(-1, 0x0600E000, 0x800);
    func_08008EB8(-1, 0x0600E800, 0x800);
    func_08008EB8(-1, 0x0600F000, 0x800);
    temp_r0_5 = func_08008918(arg0);
    sp2C.unk0 = 0x1E40;
    var_r5 = 0;
    *temp_r0_5 = 0x1E40;
    temp_r0_6 = func_08008918(arg0);
    sp2C.unk0 = 0x5C43;
    temp_r0_6->unkE = 0x5C43;
    temp_r0_7 = func_08008918(arg0);
    sp2C.unk0 = 0x1D41;
    temp_r0_7->unkC = 0x1D41;
    temp_r0_8 = func_08008918(arg0);
    sp2C.unk0 = 0x5E42;
    temp_r0_8->unkA = 0x5E42;
    func_08008E64(gUnk_080F9F70, 0x06000000, gUnk_080F9F74);
    func_08008EB8(0x30003, 0x0600E000, 0x800);
    temp_r0_9 = func_08008918(arg0);
    sp2C.unk0 = 0;
    temp_r0_9->unk1C = 0;
    temp_r0_10 = func_08008918(arg0);
    sp2C.unk0 = 0;
    temp_r0_10->unk1E = 0;
    sp0 = 3;
    sp4 = 0;
    sp8 = 0;
    func_08051320(0x0600E800, 0, 0, 0x20);
    temp_r0_11 = func_08008918(arg0);
    sp2C.unk0 = 0;
    temp_r0_11->unk18 = 0;
    temp_r0_12 = func_08008918(arg0);
    sp2C.unk0 = 0;
    temp_r0_12->unk1A = 0;
    temp_r0_13 = func_08008918(arg0);
    sp2C.unk0 = 0;
    temp_r0_13->unk14 = 0;
    temp_r0_14 = func_08008918(arg0);
    sp2C.unk0 = 0;
    temp_r0_14->unk16 = 0;
    func_08008E64(gUnk_080F9F78, 0x05000000, 0x20);
    (void *)0x05000040->unk0 = 0x3E0;
    (void *)0x05000040->unk2 = 0;
    ((void *)0x05000040 + 2)->unk2 = 0x4218;
    temp_r4 = arg0 + 0x618;
    *(0x05000200 + (func_080074C0(temp_r4, temp_r4->unk4) << 5)) = 0x3E0;
    *(0x05000202 + (func_080074C0(temp_r4, temp_r4->unk4) << 5)) = 0;
    *(0x05000204 + (func_080074C0(temp_r4, temp_r4->unk4) << 5)) = 0x4218;
    do {
        temp_r4_2 = var_r5 * 2;
        sp90 = 1;
        sp94->unk2 = 2;
        sp0 = (s32) *(temp_r4_2 + &gUnk_080FAE6A);
        sp4 = 0;
        sp8 = 1;
        func_0804E5AC((s32) sp90, &sp50, 0, 0);
        temp_r0_15 = arg0 + 0x610;
        func_08008E64(sp9C, ((func_08007D4C(temp_r0_15, temp_r0_15->unk4) + temp_r4_2) << 5) + 0x06010000, 0x40);
        var_r5 += 1;
    } while (var_r5 <= 0x17);
}
