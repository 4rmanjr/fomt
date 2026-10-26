# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038028/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038028/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038028/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038028/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038028/kilo-1531/func.c" 2
s32 __7AEntityP10GameObjectRC8Location();
s32 func_08020460(void *);
s32 func_08038374(void *, s32, s32, u16, s32);
extern ? vtable_unk_080E73B4;

void *func_08038028(void *arg0, void **arg1, s32 arg2) {
    void *temp_r0;

    __7AEntityP10GameObjectRC8Location();
    arg0->unk14 = &vtable_unk_080E73B4;
    arg0->unk18 = arg2;
    arg0->unk1C = 0;
    arg0->unk25 = 0;
    (arg0 + 0x25)->unk1 = 0;
    arg0->unk28 = 0x31;
    temp_r0 = (*arg1)->unk40(arg1, 0x2B);
    if ((temp_r0 != 0) && (temp_r0->unk4 == arg0->unk4) && ((func_08020460(temp_r0) << 0x18) != 0)) {
        func_08038374(arg0, temp_r0->unk8, temp_r0->unkC, temp_r0->unk22, (s32) temp_r0->unk20);
    }
    return arg0;
}
