# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808ED64/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808ED64/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808ED64/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808ED64/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808ED64/kilo-1531/func.c" 2
s32 func_080CE19C();
extern ? vtable_unk_080E7DA0;

void *func_0808ED64(void *arg0) {
    s32 temp_r1;

    func_080CE19C();
    arg0->unk4 = &vtable_unk_080E7DA0;
    arg0->unk98 = 0;
    temp_r1 = arg0->unk8;
    arg0->unkFC = (s32) (temp_r1 + 0x1C34);
    arg0->unk100 = (s32) (temp_r1 + 0x1C38);
    arg0->unk104 = (s32) (temp_r1 + 0x380);
    arg0->unk108 = 0;
    return arg0;
}
