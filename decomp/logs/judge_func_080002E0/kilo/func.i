# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080002E0/kilo/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080002E0/kilo/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080002E0/kilo/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080002E0/kilo/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080002E0/kilo/func.c" 2
s32 func_080006E4(s32, u32 *, s32, s32);
s32 memcmp(u32 *, s32 *, s32);
extern u16 gUnk_03000400;
extern s32 gUnk_080E862C;

s32 func_080002E0(s32 arg0) {
    u32 sp0;
    u32 sp20;
    u32 sp24;
    s32 var_r4;

    func_080006E4(arg0, &sp0, 0, 0x20);
    if ((gUnk_03000400 != 0) || (sp20 = (u32) gUnk_03000400, func_080006E4(arg0, &sp20, 0x20, 4), (gUnk_03000400 != 0)) || (sp24 = (u32) gUnk_03000400, func_080006E4(arg0, &sp24, 0x24, 4), (gUnk_03000400 != 0))) {
        return 0;
    }
    var_r4 = 0;
    if ((memcmp(&sp0, &gUnk_080E862C, 0x20) == 0) && ((3 & sp20) == sp20) && (sp24 <= 1U)) {
        var_r4 = 1;
    }
    return var_r4;
}
