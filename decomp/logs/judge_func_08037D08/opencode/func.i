# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08037D08/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08037D08/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08037D08/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08037D08/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08037D08/opencode/func.c" 2
s32 func_080A4740(void *, void **, s32, s32);
extern ? vtable_unk_080E602C;
extern ? vtable_unk_080E7478;

void *func_08037D08(void *arg0, void ***arg1) {
    u16 *sp0;
    void **temp_r5;
    void *temp_r4;
    void *temp_r4_2;

    arg0->unk0 = arg1;
    arg0->unk4 = &vtable_unk_080E7478;
    temp_r5 = (**arg1)->unk64();
    temp_r4 = arg0 + 8;
    func_080A4740(temp_r4, *arg1, 2, 0xA);
    temp_r4->unk24 = &vtable_unk_080E602C;
    temp_r4_2 = *temp_r5;
    temp_r4_2->unkC(&sp0, temp_r5, 0x7D);
    temp_r4_2->unk10(arg0 + 0x30, temp_r5, *sp0);
    arg0->unk50 = 1;
    return arg0;
}
