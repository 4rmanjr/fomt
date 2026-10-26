# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CA8B4/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CA8B4/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CA8B4/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CA8B4/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CA8B4/opencode/func.c" 2
s32 func_0804E9F4(s32, s32, s32, s32, s32, s32);
s32 func_0804EE30(s32, s32, s32, s32, s32);
s32 func_08075BC8(void *, s32, s32);

void func_080CA8B4(void *arg0, u32 arg1, u32 arg2, s32 arg3) {
    s16 temp_r3;
    s16 var_r1;
    s32 var_r2;
    u32 temp_r0;
    void *temp_r0_2;
    void *temp_r4;

    arg0->unkC = (s32) ((arg0->unk18->unk10 * 2) + 4);
    arg0->unk10 = arg3;
    arg0->unk0 = arg1;
    if (arg2 > 0x63U) {
        arg0->unk4 = 0x63U;
    } else {
        arg0->unk4 = arg2;
    }
    temp_r4 = arg0->unk18;
    temp_r0 = (u32) temp_r4->unk8->unk1AA8 / (u32) arg0->unk0;
    if (temp_r0 < (u32) arg0->unk4) {
        arg0->unk4 = temp_r0;
    }
    func_0804E9F4(temp_r4->unk1C->unk18 + ((arg0->unkC + 1) << 6) + (arg3 * 2), 0x2E, 1, 1, 0, 0x20);
    func_0804EE30(arg0->unk14, arg0->unk18->unk1C->unk18 + ((arg0->unkC + 1) << 6) + ((arg3 + 2) * 2), 0x24, 0, 0x20);
    func_0804E9F4(arg0->unk18->unk1C->unk18 + ((arg0->unkC + 1) << 6) + ((arg3 + 4) * 2), 0x2F, 1, 1, 0, 0x20);
    temp_r0_2 = arg0->unk18->unk1C;
    temp_r3 = temp_r0_2->unkC;
    var_r1 = temp_r3;
    if ((s32) temp_r3 < 0) {
        var_r1 = temp_r3 + 7;
    }
    var_r2 = temp_r3 + 0x100;
    if (var_r2 < 0) {
        var_r2 = temp_r3 + 0x107;
    }
    func_08075BC8(temp_r0_2, var_r1 >> 3, var_r2 >> 3);
    arg0->unk8 = 1;
}
