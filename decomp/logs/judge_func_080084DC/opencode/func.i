# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080084DC/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080084DC/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080084DC/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080084DC/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080084DC/opencode/func.c" 2
void *__builtin_new(s32);
s32 func_08008980(void *);
s32 func_080091A4(void *, u16, u16);
s32 func_080096B0(void *);
s32 func_08009744(void *, s32, s32);
extern ? vtable_unk_080E5B00;
extern ? vtable_unk_080E5BB4;
extern ? vtable_unk_080E5BD8;

void *func_080084DC(void *arg0, void *arg1) {
    u16 temp_r0_3;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r1;
    void *temp_r2;

    arg0->unk4 = &vtable_unk_080E5B00;
    temp_r0 = __builtin_new(0x4B0);
    func_080091A4(temp_r0, arg1->unk0, arg1->unk2);
    temp_r0->unk24 = 0;
    temp_r0->unk28 = 0;
    temp_r0_2 = temp_r0 + 0x2C;
    temp_r0_2->unk4 = 0;
    func_080096B0(temp_r0_2 + 8);
    func_08009744(temp_r0 + 0x8C, 0, 0x20);
    func_08008980(temp_r0 + 0x490);
    temp_r2 = temp_r0 + 0x494;
    temp_r0->unk494 = 0;
    temp_r2->unk4 = 0;
    temp_r2->unk8 = &vtable_unk_080E5BB4;
    temp_r1 = temp_r0 + 0x4A4;
    temp_r2->unkC = temp_r1;
    temp_r0->unk4A4 = 0;
    temp_r1->unk4 = 0;
    temp_r1->unk8 = &vtable_unk_080E5BD8;
    temp_r2->unk10 = (void *) (temp_r0 + 0x4A0);
    temp_r2->unk14 = temp_r1;
    temp_r0_3 = temp_r0->unk38 | 8;
    temp_r0->unk38 = temp_r0_3;
    *(u16 *)0x04000004 = temp_r0_3;
    arg0->unk0 = temp_r0;
    return arg0;
}
