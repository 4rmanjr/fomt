# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08050424/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08050424/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08050424/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08050424/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08050424/opencode/func.c" 2
s32 func_0804F0E0(void *);
s32 func_080503E4(void *);
s32 func_080ADD5C(void *, s32, s32);
s32 func_080ADD74(void *, u16);

void func_08050424(void *arg0, s32 arg1, u16 arg2, s32 arg3) {
    s32 temp_r0;
    void *temp_r4;

    temp_r0 = arg0->unk8;
    if (temp_r0 >= 0) {
        if (temp_r0 <= 2) {
            func_080503E4(arg0);
        } else if (temp_r0 <= 6) {
            func_0804F0E0(arg0 + 0xD0);
        }
    }
    temp_r4 = arg0 + 0xEC;
    func_080ADD5C(temp_r4, arg1, arg3);
    func_080ADD74(temp_r4, arg2);
    arg0->unk8 = 4;
}
