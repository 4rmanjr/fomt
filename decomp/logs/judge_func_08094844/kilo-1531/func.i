# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08094844/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08094844/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08094844/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08094844/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08094844/kilo-1531/func.c" 2
s32 func_0800E4E0(void *);
s32 func_08094974(void *, s32, void *, s32);
s32 func_08094994(void *, s32, s32);
s32 func_0809EACC();
s32 func_080A0A04(void *);
s32 method_08009AF4__C4Farm(void *);

void func_08094844(void *arg0) {
    s32 sp0;
    s32 temp_r1;
    s32 temp_r6;
    s32 temp_r7;
    s32 temp_r8;
    s32 temp_sb;
    s32 temp_sl;
    void *temp_r0;
    void *temp_r5;

    temp_r6 = arg0->unk4;
    temp_r0 = arg0->unk0;
    temp_r7 = temp_r0->unk21CC;
    temp_r1 = (temp_r0 + 0x21CC)->unk4;
    sp0 = temp_r1;
    temp_sb = method_08009AF4__C4Farm(temp_r0 + 0x14);
    temp_sl = func_0800E4E0(arg0->unk0 + 0x1BD8);
    func_080A0A04(arg0->unk0 + 0x1CD4);
    temp_r8 = func_0809EACC();
    temp_r5 = arg0->unk0 + 0x21DC;
    arg0->unkC = temp_r7;
    arg0->unk10 = temp_r1;
    func_08094994(arg0, temp_r6, temp_sb);
    func_08094994(arg0, temp_r6 + 0xD, temp_sl);
    func_08094994(arg0, temp_r6 + 0x1A, temp_r8);
    func_08094974(arg0, temp_r6 + 0x27, temp_r5, 4);
}
