# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809EC48/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809EC48/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809EC48/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809EC48/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809EC48/kilo-1531/func.c" 2
s32 GetLocation__C3Npc(u16 *, void *);

void func_0809EC48(void *arg0) {
    u16 sp0;
    u32 temp_r0;
    u8 var_r0;

    GetLocation__C3Npc(&sp0, arg0);
    temp_r0 = (u32) (sp0 << 0x16) >> 0x16;
    if (temp_r0 != 0x11) {
        if ((s32) temp_r0 <= 0x11) {
            if (temp_r0 != 7) {
                goto block_6;
            }
            goto block_7;
        }
        if ((temp_r0 != 0x1D) && (temp_r0 != 0x25)) {
block_6:
            var_r0 = -2 & arg0->unk15;
        } else {
            goto block_7;
        }
    } else {
block_7:
        var_r0 = arg0->unk15 | 1;
    }
    arg0->unk15 = var_r0;
}
