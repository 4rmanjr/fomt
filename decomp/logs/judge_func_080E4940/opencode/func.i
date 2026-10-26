# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E4940/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E4940/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E4940/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E4940/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E4940/opencode/func.c" 2
s32 __builtin_delete(s32);
s32 func_08007184(void *, s32);
s32 func_080073E0(void *, s32);
s32 func_080086BC(void *, s32);
s32 func_08050D0C(s32, s32);

void func_080E4940(void *arg0, s32 arg1) {
    s32 *var_r4;
    s32 *var_r4_10;
    s32 *var_r4_11;
    s32 *var_r4_2;
    s32 *var_r4_3;
    s32 *var_r4_4;
    s32 *var_r4_5;
    s32 *var_r4_6;
    s32 *var_r4_7;
    s32 *var_r4_8;
    s32 *var_r4_9;
    s32 temp_r0;
    s32 temp_r0_14;
    void **temp_r1_10;
    void **temp_r1_2;
    void **temp_r1_3;
    void **temp_r1_4;
    void **temp_r1_5;
    void **temp_r1_6;
    void **temp_r1_7;
    void **temp_r1_8;
    void **temp_r1_9;
    void *temp_r0_10;
    void *temp_r0_11;
    void *temp_r0_12;
    void *temp_r0_13;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r0_9;
    void *temp_r1;
    void *temp_r4;
    void *temp_r4_2;
    void *var_r4_12;
    void *var_r4_13;

    temp_r0 = arg0 + 0xAEC;
    if (temp_r0 != 0) {
        var_r4 = arg0 + 0xB14;
        if (temp_r0 != var_r4) {
            do {
                var_r4 -= 4;
                __builtin_delete(*var_r4);
            } while ((arg0 + 0xAEC) != var_r4);
        }
    }
    __builtin_delete(arg0->unkAC8);
    __builtin_delete(arg0->unkAA4);
    __builtin_delete(arg0->unkA80);
    __builtin_delete(arg0->unkA7C);
    temp_r0_2 = arg0 + 0xA34;
    if (temp_r0_2 != 0) {
        var_r4_2 = arg0 + 0xA3C;
        if (temp_r0_2 != var_r4_2) {
            do {
                var_r4_2 -= 4;
                __builtin_delete(*var_r4_2);
            } while ((arg0 + 0xA34) != var_r4_2);
        }
    }
    __builtin_delete(arg0->unkA30);
    temp_r0_3 = arg0 + 0x9E8;
    if (temp_r0_3 != 0) {
        var_r4_3 = arg0 + 0x9F0;
        if (temp_r0_3 != var_r4_3) {
            do {
                var_r4_3 -= 4;
                __builtin_delete(*var_r4_3);
            } while ((arg0 + 0x9E8) != var_r4_3);
        }
    }
    __builtin_delete(arg0->unk9E4);
    __builtin_delete(arg0->unk9C0);
    __builtin_delete(arg0->unk9BC);
    __builtin_delete(arg0->unk998);
    __builtin_delete(arg0->unk994);
    __builtin_delete(arg0->unk970);
    __builtin_delete(arg0->unk96C);
    temp_r0_4 = arg0 + 0x924;
    if (temp_r0_4 != 0) {
        var_r4_4 = arg0 + 0x92C;
        if (temp_r0_4 != var_r4_4) {
            do {
                var_r4_4 -= 4;
                __builtin_delete(*var_r4_4);
            } while ((arg0 + 0x924) != var_r4_4);
        }
    }
    temp_r0_5 = arg0 + 0x91C;
    if (temp_r0_5 != 0) {
        var_r4_5 = arg0 + 0x924;
        if (temp_r0_5 != var_r4_5) {
            do {
                var_r4_5 -= 4;
                __builtin_delete(*var_r4_5);
            } while ((arg0 + 0x91C) != var_r4_5);
        }
    }
    __builtin_delete(arg0->unk8F8);
    __builtin_delete(arg0->unk8F4);
    __builtin_delete(arg0->unk8D0);
    __builtin_delete(arg0->unk8CC);
    temp_r0_6 = arg0 + 0x884;
    if (temp_r0_6 != 0) {
        var_r4_6 = arg0 + 0x88C;
        if (temp_r0_6 != var_r4_6) {
            do {
                var_r4_6 -= 4;
                __builtin_delete(*var_r4_6);
            } while ((arg0 + 0x884) != var_r4_6);
        }
    }
    temp_r0_7 = arg0 + 0x87C;
    if (temp_r0_7 != 0) {
        var_r4_7 = arg0 + 0x884;
        if (temp_r0_7 != var_r4_7) {
            do {
                var_r4_7 -= 4;
                __builtin_delete(*var_r4_7);
            } while ((arg0 + 0x87C) != var_r4_7);
        }
    }
    temp_r0_8 = arg0 + 0x7C8;
    if (temp_r0_8 != 0) {
        var_r4_8 = arg0 + 0x7DC;
        if (temp_r0_8 != var_r4_8) {
            do {
                var_r4_8 -= 4;
                __builtin_delete(*var_r4_8);
            } while ((arg0 + 0x7C8) != var_r4_8);
        }
    }
    temp_r0_9 = arg0 + 0x7B4;
    if (temp_r0_9 != 0) {
        var_r4_9 = arg0 + 0x7C8;
        if (temp_r0_9 != var_r4_9) {
            do {
                var_r4_9 -= 4;
                __builtin_delete(*var_r4_9);
            } while ((arg0 + 0x7B4) != var_r4_9);
        }
    }
    temp_r0_10 = arg0 + 0x7AC;
    if (temp_r0_10 != 0) {
        var_r4_10 = arg0 + 0x7B4;
        if (temp_r0_10 != var_r4_10) {
            do {
                var_r4_10 -= 4;
                __builtin_delete(*var_r4_10);
            } while ((arg0 + 0x7AC) != var_r4_10);
        }
    }
    temp_r0_11 = arg0 + 0x7A4;
    if (temp_r0_11 != 0) {
        var_r4_11 = arg0 + 0x7AC;
        if (temp_r0_11 != var_r4_11) {
            do {
                var_r4_11 -= 4;
                __builtin_delete(*var_r4_11);
            } while ((arg0 + 0x7A4) != var_r4_11);
        }
    }
    temp_r1 = arg0->unk7A0;
    if (temp_r1 != 0) {
        temp_r1->unk8->unkC(temp_r1, 3);
    }
    temp_r1_2 = arg0->unk79C;
    if (temp_r1_2 != 0) {
        (*temp_r1_2)->unk8(temp_r1_2, 3);
    }
    temp_r1_3 = arg0->unk798;
    if (temp_r1_3 != 0) {
        (*temp_r1_3)->unk8(temp_r1_3, 3);
    }
    temp_r1_4 = arg0->unk794;
    if (temp_r1_4 != 0) {
        (*temp_r1_4)->unk8(temp_r1_4, 3);
    }
    temp_r1_5 = arg0->unk790;
    if (temp_r1_5 != 0) {
        (*temp_r1_5)->unk8(temp_r1_5, 3);
    }
    temp_r1_6 = arg0->unk78C;
    if (temp_r1_6 != 0) {
        (*temp_r1_6)->unk8(temp_r1_6, 3);
    }
    temp_r1_7 = arg0->unk788;
    if (temp_r1_7 != 0) {
        (*temp_r1_7)->unk8(temp_r1_7, 3);
    }
    temp_r1_8 = arg0->unk784;
    if (temp_r1_8 != 0) {
        (*temp_r1_8)->unk8(temp_r1_8, 3);
    }
    temp_r1_9 = arg0->unk780;
    if (temp_r1_9 != 0) {
        (*temp_r1_9)->unk8(temp_r1_9, 3);
    }
    var_r4_12 = arg0 + 0x77C;
    temp_r1_10 = arg0->unk77C;
    if (temp_r1_10 != 0) {
        (*temp_r1_10)->unk8(temp_r1_10, 3);
    }
    temp_r0_12 = arg0 + 0x73C;
    if ((temp_r0_12 != 0) && (temp_r0_12 != var_r4_12)) {
        do {
            var_r4_12 -= 8;
            func_080073E0(var_r4_12, var_r4_12->unk4);
            func_08007184(var_r4_12, 2);
        } while (temp_r0_12 != var_r4_12);
    }
    temp_r0_13 = arg0 + 0x72C;
    if (temp_r0_13 != 0) {
        var_r4_13 = arg0 + 0x73C;
        if (temp_r0_13 != var_r4_13) {
            do {
                var_r4_13 -= 8;
                func_080073E0(var_r4_13, var_r4_13->unk4);
                func_08007184(var_r4_13, 2);
            } while ((arg0 + 0x72C) != var_r4_13);
        }
    }
    temp_r4 = arg0 + 0x724;
    func_080073E0(temp_r4, temp_r4->unk4);
    func_08007184(temp_r4, 2);
    temp_r4_2 = arg0 + 0x71C;
    func_080073E0(temp_r4_2, temp_r4_2->unk4);
    func_08007184(temp_r4_2, 2);
    temp_r0_14 = arg0->unk718;
    if (temp_r0_14 != 0) {
        func_08050D0C(temp_r0_14, 3);
    }
    func_080086BC(arg0, arg1);
}
