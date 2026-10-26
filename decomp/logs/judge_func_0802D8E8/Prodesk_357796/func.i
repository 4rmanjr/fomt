# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802D8E8/Prodesk_357796/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802D8E8/Prodesk_357796/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802D8E8/Prodesk_357796/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802D8E8/Prodesk_357796/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802D8E8/Prodesk_357796/func.c" 2
s32 func_08025A40(void *, s32);

void func_0802D8E8(void *arg0, void *arg1) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 temp_r4;
    s8 var_r2;
    u16 var_r3;
    u16 var_r4;
    void **temp_r0;

    var_r3 = 0;
    sp8 = 0;
    var_r4 = 0;
    if (arg1 != 0) {
        var_r3 = arg1->unk0;
        sp8 = (s32) arg1->unk4;
        var_r4 = arg1->unk8;
    }
    if (arg0->unkC3 != 0) {
        arg0->unk3C = 0;
        return;
    }
    var_r2 = ((u32) (var_r3 << 0x1E) >> 0x1F) | ((u32) (var_r3 << 0x16) >> 0x1F);
    if (var_r2 != 0) {
        if ((((u32) (var_r4 << 0x19) >> 0x1F) | ((u32) (var_r4 << 0x1A) >> 0x1F)) != 0) {
            func_08025A40(arg0, 1);
            return;
        }
        temp_r4 = ((u32) (sp8 << 0x16) >> 0x1F) | (((u32) (sp8 << 0x1E) >> 0x1F) | (((u32) (var_r4 << 0x18) >> 0x1F) | ((u32) (var_r4 << 0x1B) >> 0x1F)));
        if (temp_r4 != 0) {
            func_08025A40(arg0, 0);
            return;
        }
        var_r2 = 1 & sp8.unk0;
        if (var_r2 != 0) {
            temp_r0 = arg0->unk0;
            sp0 = 0x3CE;
            sp4 = temp_r4;
            (*temp_r0)->unk140(temp_r0, &sp0, 0);
            arg0->unk3C = (s8) temp_r4;
            return;
        }
        if (1 & sp8.unk1) {
            goto block_12;
        }
    } else {
block_12:
        arg0->unk3C = var_r2;
    }
}
