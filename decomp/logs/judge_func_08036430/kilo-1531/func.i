# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08036430/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08036430/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08036430/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08036430/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08036430/kilo-1531/func.c" 2
s32 func_08034C64(void *, s32);
s32 func_08035908(void *, s32);
s32 func_08035940(void *, s32);
s32 func_08035AE0(void *);
u32 func_0809EAD8();
s32 func_080A0384(s32);
s32 func_080A0490(s32);

void func_08036430(void *arg0) {
    s32 temp_r6;
    s32 var_r7;
    s32 var_r8;
    void *temp_r5;

    var_r7 = 0x691;
    var_r8 = 0x695;
    temp_r5 = arg0->unk34;
    temp_r6 = temp_r5 + 0x1CD4;
    if ((func_080A0490(temp_r6) == 0x13) && (arg0->unk4 == 0x1D)) {
        if (((func_08035AE0(arg0) << 0x18) != 0) || (((u32) (temp_r5->unk216C << 0x1B) >> 0x1E) == 1)) {
            var_r7 = 0x6A1;
        } else if ((func_080A0384(temp_r6) != 0) && (func_0809EAD8() <= 0x3BU) && ((func_08034C64(temp_r5, (*arg0->unk0)->unk144() + 0xA) << 0x18) != 0)) {
            var_r7 = 0x6AD;
            var_r8 = 0x6B1;
        }
    }
    func_08035908(arg0, var_r7);
    func_08035940(arg0, var_r8);
}
