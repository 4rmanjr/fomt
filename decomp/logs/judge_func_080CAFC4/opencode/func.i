# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CAFC4/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CAFC4/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CAFC4/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CAFC4/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CAFC4/opencode/func.c" 2
s32 func_080CAC70(s32 *);
s32 func_080CADB4(void *, s32);
s32 memcpy(void *, s32, u32);
u32 strlen(s32);
extern ? vtable_unk_080E85BC;

void *func_080CAFC4(void *arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4, u8 arg5) {
s32 sp0;
    u32 *spC;
    ? *sp10;
    u32 var_r3;
    u32 var_r4;
    u8 temp_r8;
    void *temp_r6;
    void *var_r2;

    temp_r8 = arg5;
    func_080CADB4(arg0, arg2);
    arg0->unk210 = &vtable_unk_080E85BC;
    func_080CAC70(&sp0);
    spC = arg0 + 0x214;
    sp10 = &sp0;
    arg0->unk214 = 0;
    if (arg3 <= 8U) {
        var_r3 = arg3;
        var_r2 = arg0 + 0x218;
        if (arg3 != 0) {
            do {
                if (var_r2 != 0) {
                    var_r2->unk0 = (s32) sp10->unk0;
                    var_r2->unk4 = (s32) sp10->unk4;
                    var_r2->unk8 = (s32) sp10->unk8;
                }
                var_r3 -= 1;
                var_r2 += 0xC;
            } while (var_r3 != 0);
        }
        *spC = arg3;
    }
    arg0->unk278 = arg1;
    arg0->unk27C = temp_r8;
    func_080CAC70(arg0 + 0x280);
    temp_r6 = arg0 + 0x28C;
    var_r4 = strlen(arg4);
    if (var_r4 > 8U) {
        var_r4 = 8;
    }
    memcpy(temp_r6, arg4, var_r4);
    *(temp_r6 + var_r4) = 0;
    arg0->unk298 = arg3;
    return arg0;
}
