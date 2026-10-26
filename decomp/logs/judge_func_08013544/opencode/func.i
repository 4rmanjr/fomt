# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08013544/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08013544/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08013544/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08013544/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08013544/opencode/func.c" 2
? **__builtin_new(s32, s32, s32);
extern ? vtable_unk_080E5CB4;
extern ? vtable_unk_080E5E74;

void func_08013544(void *arg0) {
    ? **sp0;
    ? **spC;
    ? **sp10;
    ? **temp_r0;
    ? **temp_r0_2;
    ? **temp_r1;
    ? **temp_r2;
    ? **temp_r4;
    void *temp_r5;
    void *temp_r6;

    temp_r6 = arg0->unk4;
    sp0 = (s32 **)0x19;
    temp_r0 = __builtin_new(0x14);
    temp_r5 = temp_r6 + 0x8C;
    sp10.unk0 = sp0.unk0;
    sp10.unk4 = (s32) sp0.unk4;
    sp10.unk8 = (s32) sp0.unk8;
    temp_r0->unk0 = &vtable_unk_080E5E74;
    temp_r0->unk4 = (s32) temp_r6->unk8C;
    temp_r2 = temp_r0 + 8;
    temp_r0->unk8 = (s32 **) sp10.unk0;
    temp_r2->unk4 = (s32) sp10.unk4;
    temp_r2->unk8 = (s32) sp10.unk8;
    spC = temp_r0;
    temp_r0_2 = __builtin_new(0xC, &sp10 + 0xC, temp_r2 + 0xC);
    temp_r4 = spC;
    spC = 0;
    sp10 = temp_r4;
    temp_r0_2->unk0 = &vtable_unk_080E5CB4;
    sp10 = 0;
    temp_r0_2->unk4 = temp_r4;
    temp_r0_2->unk8 = (s32) temp_r6->unk8C;
    temp_r1 = temp_r5->unk18;
    if ((temp_r0_2 != temp_r1) && (temp_r1 != 0)) {
        (*temp_r1)->unk8(temp_r1, 3);
    }
    temp_r5->unk18 = temp_r0_2;
    temp_r6->unk9C = 0x18;
    if (spC != 0) {
        (*spC)->unk8(spC, 3);
    }
}
