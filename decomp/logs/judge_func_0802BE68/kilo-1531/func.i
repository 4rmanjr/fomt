# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802BE68/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802BE68/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802BE68/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802BE68/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802BE68/kilo-1531/func.c" 2
s32 SetAnim__12AActorEntityUi(void *, u16);
u16 func_0802BC48(void *);

void func_0802BE68(void *arg0) {
    s32 var_r1;
    u8 var_r2;
    void *var_r0;

    var_r2 = arg0->unk20;
    switch (var_r2) {
    case 2:
        var_r0 = arg0 + 0x38;
        var_r2 = 0;
        var_r0->unkC = 0xFFFE5556;
        var_r0->unk10 = 0;
block_12:
        var_r0->unk18 = (s32) var_r2;
        break;
    case 3:
        var_r0 = arg0 + 0x38;
        var_r2 = 0;
        var_r0->unkC = 0x1AAAA;
        var_r0->unk10 = 0;
        goto block_12;
    case 1:
        var_r0 = arg0 + 0x38;
        var_r2 = 0;
        var_r1 = 0xFFFE5556;
block_11:
        var_r0->unkC = (s32) var_r2;
        var_r0->unk10 = var_r1;
        goto block_12;
    case 0:
        var_r0 = arg0 + 0x38;
        var_r1 = 0x1AAAA;
        goto block_11;
    }
    arg0->unk34 = 1;
    (arg0 + 0x34)->unk24 = 1;
    SetAnim__12AActorEntityUi(arg0, func_0802BC48(arg0));
    arg0->unk54 = 1;
}
