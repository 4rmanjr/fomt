# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080123CC/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080123CC/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080123CC/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080123CC/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080123CC/opencode/func.c" 2
s32 func_08008B6C(s32, u16);
s32 func_08008B88(s32, u16);
s32 func_08008BB0(s32, u16);
s32 func_08008C28(s32, u16);
s32 func_08008C38(s32, u16, s32);
s32 func_08008C54(s32, s16, s32);
s32 func_08008C70(s32, s8, s32);
s32 func_08008C8C(s32, u8, s32);
s32 func_08008CA8(s32, u8, s32);
s32 func_08008CC4(s32);

void func_080123CC(void *arg0, s32 arg1, u16 arg2, void *arg3) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;
    u16 temp_r2;

    temp_r4 = arg0->unk4;
    temp_r2 = arg2;
    temp_r0 = temp_r4 + 0xBC;
    switch (arg1) {
    case 0:
        func_08008B6C(temp_r0, temp_r2);
        break;
    case 1:
        func_08008B88(temp_r0, temp_r2);
        break;
    case 2:
        func_08008BB0(temp_r0, temp_r2);
        break;
    }
    temp_r4_2 = temp_r4 + 0xBC;
    func_08008CC4(temp_r4_2);
    func_08008C28(temp_r4_2, arg3->unk0);
    func_08008C38(temp_r4_2, arg3->unk2, 0xFFFF);
    func_08008C54(temp_r4_2, arg3->unk4, 0xFFFF);
    func_08008C70(temp_r4_2, arg3->unk6, 0xFFFF);
    func_08008C8C(temp_r4_2, arg3->unk7, 0xFFFF);
    func_08008CA8(temp_r4_2, arg3->unk8, 0xFFFF);
}
