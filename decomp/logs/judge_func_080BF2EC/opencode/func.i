# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080BF2EC/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080BF2EC/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080BF2EC/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080BF2EC/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080BF2EC/opencode/func.c" 2
s32 func_080087C8(void *);
s16 *func_08008918();
s32 func_08008B6C(void *, s32);
s32 func_080BDF40(void *);

void func_080BF2EC(void *arg0) {
    s16 sp0;
    s16 *temp_r0;
    s32 var_r6;

    var_r6 = 0;
    temp_r0 = func_08008918();
    sp0 = 0x1640;
    *temp_r0 = 0x1640;
    func_080BDF40(arg0);
    func_08008B6C(arg0 + 0x580, 0xBB);
    if (arg0->unk5A0 == 2) {
        do {
            func_080087C8(arg0);
            func_080BDF40(arg0);
            var_r6 += 1;
            if (var_r6 > 0x78) {
                arg0->unk5A0 = 3;
            }
        } while (arg0->unk5A0 == 2);
    }
}
