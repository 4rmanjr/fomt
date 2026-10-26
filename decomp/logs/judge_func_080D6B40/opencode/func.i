# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D6B40/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D6B40/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D6B40/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D6B40/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D6B40/opencode/func.c" 2
void *func_080D6B40(void *arg0, void *arg1) {
    s32 temp_r7;
    s32 temp_r7_2;
    u8 temp_r3;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r4;
    void *temp_r4_2;
    void *var_r2;
    void *var_r2_2;
    void *var_r3;
    void *var_r3_2;

    arg0->unk0 = (s32) arg1->unk0;
    temp_r3 = arg1->unk4;
    arg0->unk4 = (u8) ((((-2 & arg0->unk4) | ((u32) (temp_r3 << 0x1F) >> 0x1F)) & ~2) | (2 & temp_r3));
    arg0->unk8 = 0;
    temp_r7 = arg1->unk8;
    temp_r1 = arg1 + 0xC;
    temp_r4 = (temp_r7 * 8) + temp_r1;
    var_r2 = temp_r1;
    var_r3 = arg0 + 0xC;
    if (var_r2 != temp_r4) {
        do {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32) var_r2->unk0;
                var_r3->unk4 = (s32) var_r2->unk4;
            }
            var_r2 += 8;
            var_r3 += 8;
        } while (var_r2 != temp_r4);
    }
    arg0->unk8 = temp_r7;
    arg0->unkFC = 0;
    temp_r7_2 = arg1->unkFC;
    temp_r1_2 = arg1 + 0x100;
    temp_r4_2 = (temp_r7_2 * 8) + temp_r1_2;
    var_r2_2 = temp_r1_2;
    var_r3_2 = arg0 + 0x100;
    if (var_r2_2 != temp_r4_2) {
        do {
            if (var_r3_2 != 0) {
                var_r3_2->unk0 = (s32) var_r2_2->unk0;
                var_r3_2->unk4 = (s32) var_r2_2->unk4;
            }
            var_r2_2 += 8;
            var_r3_2 += 8;
        } while (var_r2_2 != temp_r4_2);
    }
    arg0->unkFC = temp_r7_2;
    arg0->unk120 = (s32) arg1->unk120;
    (arg0 + 0x120)->unk4 = (s32) (arg1 + 0x120)->unk4;
    arg0->unk128 = (s32) arg1->unk128;
    (arg0 + 0x128)->unk4 = (s32) (arg1 + 0x128)->unk4;
    return arg0;
}
