# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08097AE4/Prodesk_344259/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08097AE4/Prodesk_344259/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08097AE4/Prodesk_344259/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08097AE4/Prodesk_344259/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08097AE4/Prodesk_344259/func.c" 2
void *__builtin_new(s32);
s32 func_0800736C(void *);
s32 func_080073E0(void *, s32);
s32 func_08008724(void *);
s32 func_080087C8(void *);
s32 func_080088B8(void *);
void *func_08008918(void *);
void *func_08008940(void *);
s32 func_08009300(void *, void *);
s32 func_0800934C(void *, s32, s32, s32);
s32 func_08009378(void *, s32, s32, s32);
s32 func_08050D8C(void *, ? *);
s32 func_08097D38(void *);
s32 func_080989DC(void *, void *);
s32 func_08099144(void *, u32, u8, s32);
s32 func_0809A9C0(s32, void *);
s32 func_080CD8A0(void *);
extern ? gUnk_08100AC0;
extern ? vtable_unk_080E5B80;

s32 func_08097AE4(void *arg0, s32 arg1) {
    s16 sp0;
    void *sp4;
    s16 *var_r1;
    s16 var_r0;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 var_r4;
    s32 var_r7;
    s32 var_sb;
    s8 temp_r0_3;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_4;
    void *temp_r1;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r5;

    var_sb = 0;
    var_r7 = 0;
    func_08008724(arg0);
    temp_r4 = arg0 + 0x320;
    func_080073E0(temp_r4, temp_r4->unk4);
    temp_r4->unk4 = func_0800736C(temp_r4);
    if (arg1 == 0) {
        func_080989DC(arg0, arg0 + 0x348);
    } else {
        func_080989DC(arg0, arg0 + 0x334);
    }
    temp_r0 = func_08008918(arg0);
    sp0 = 0x3F;
    temp_r0->unk50 = 0x3F;
    temp_r4_2 = __builtin_new(0x10);
    temp_r1 = func_08008918(arg0);
    temp_r4_2->unk0 = 0;
    temp_r4_2->unk4 = 0;
    temp_r4_2->unk8 = &vtable_unk_080E5B80;
    temp_r5 = temp_r4_2 + 0xC;
    func_08009300(temp_r5, temp_r1);
    sp4 = temp_r4_2;
    func_0800934C(temp_r5, 0x889, 1, 1);
    temp_r0_2 = func_08008940(arg0);
    temp_r0_2->unk8->unk10(temp_r0_2, sp4);
    arg0->unk33D2 = 2U;
    var_r4 = 0;
loop_4:
    func_080087C8(arg0);
    func_080088B8(arg0);
    switch (var_r7) {
    case 0:
        temp_r1_2 = sp4->unk0;
        if ((s32) ((0 - temp_r1_2) | temp_r1_2) >= 0) {
            if (arg1 == 0) {
                var_r1 = arg0 + 0x33D4;
                var_r0 = 8;
            } else {
                var_r1 = arg0 + 0x33D4;
                var_r0 = 9;
            }
            *var_r1 = var_r0;
            arg0->unk33D2 = 0U;
            var_r7 = 1;
        }
        break;
    case 1:
        if ((s8) arg0->unk33D2 == 2) {
            temp_r0_3 = (s8) arg0->unk33D3;
            switch (temp_r0_3) {
            case 0:
                func_0809A9C0(arg0->unk8C + 0x2214, arg0 + 0x348);
                var_sb = -1;
                var_r7 = 2;
                break;
            case 1:
                var_sb = -1;
                var_r7 = 2;
                break;
            case 2:
                var_sb = 1;
                var_r7 = 2;
                break;
            }
        }
        break;
    case 2:
        func_08050D8C(arg0 + 0x80, &gUnk_08100AC0);
        func_08009378(sp4 + 0xC, 0x889, 1, 1);
        temp_r0_4 = func_08008940(arg0);
        temp_r0_4->unk8->unk10(temp_r0_4, sp4);
        var_r7 = 3;
        break;
    case 3:
        temp_r1_3 = sp4->unk0;
        if ((s32) ((0 - temp_r1_3) | temp_r1_3) >= 0) {
            var_r4 = 1;
        }
        break;
    }
    if (arg1 == 0) {
        func_08099144(arg0, (u32) (arg0->unk35A << 0x14) >> 0x14, arg0->unk35C, 0);
    } else {
        func_08099144(arg0, (u32) (arg0->unk346 << 0x14) >> 0x14, arg0->unk35C, 0);
    }
    func_080CD8A0(arg0);
    func_08097D38(arg0);
    if (var_r4 == 0) {
        goto loop_4;
    }
    temp_r4_3 = arg0 + 0x320;
    func_080073E0(temp_r4_3, temp_r4_3->unk4);
    temp_r4_3->unk4 = 0;
    if (sp4 != 0) {
        sp4->unk8->unkC(sp4, 3);
    }
    return var_sb;
}
