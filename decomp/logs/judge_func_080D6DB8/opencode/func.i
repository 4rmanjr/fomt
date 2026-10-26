# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D6DB8/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D6DB8/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D6DB8/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D6DB8/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D6DB8/opencode/func.c" 2
s32 free();
s32 func_08007128(void *);
s32 func_08007184(void *, s32);
s32 func_080073E0(void *, s32);
s32 func_0800745C(void *, s32);
void *func_080D3BC0(s32);
void *malloc(s32);

void func_080D6DB8(void *arg0, u32 arg1) {
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_sl;
    s32 var_r8;
    s32 var_sl;
    void *temp_r2;
    void *temp_r3;
    void *temp_r5;
    void *temp_r6;
    void *var_r0;
    void *var_r0_2;
    void *var_r4;
    void *var_r4_2;
    void *var_r5;
    void *var_r6;

    temp_r2 = arg0->unk0;
    if ((u32) ((s32) (arg0->unkC - temp_r2) >> 3) < arg1) {
        temp_r3 = arg0->unk4;
        temp_sl = (s32) (temp_r3 - temp_r2) >> 3;
        if (temp_r2 != 0) {
            var_r5 = temp_r2;
            temp_r6 = temp_r3;
            if (arg1 != 0) {
                temp_r4 = arg1 * 8;
                var_r0 = malloc(temp_r4);
                var_r8 = temp_r4;
                if (var_r0 == 0) {
                    var_r0 = func_080D3BC0(var_r8);
                }
            } else {
                var_r0 = 0;
                var_r8 = 0;
            }
            var_r4 = var_r0;
            var_sl = temp_sl * 8;
            if (var_r5 != temp_r6) {
                do {
                    if (var_r4 != 0) {
                        func_08007128(var_r4);
                        var_r4->unk4 = func_0800745C(var_r4, var_r5->unk4);
                    }
                    var_r5 += 8;
                    var_r4 += 8;
                } while (var_r5 != temp_r6);
            }
            var_r6 = var_r0;
            temp_r5 = arg0->unk4;
            var_r4_2 = arg0->unk0;
            if (var_r4_2 != temp_r5) {
                do {
                    func_080073E0(var_r4_2, var_r4_2->unk4);
                    func_08007184(var_r4_2, 2);
                    var_r4_2 += 8;
                } while (var_r4_2 != temp_r5);
            }
            if (arg0->unk0 != 0) {
                free();
            }
        } else {
            if (arg1 != 0) {
                temp_r4_2 = arg1 * 8;
                var_r0_2 = malloc(temp_r4_2);
                var_r8 = temp_r4_2;
                if (var_r0_2 == 0) {
                    var_r0_2 = func_080D3BC0(var_r8);
                }
            } else {
                var_r0_2 = 0;
                var_r8 = 0;
            }
            var_r6 = var_r0_2;
            var_sl = temp_sl * 8;
        }
        arg0->unk0 = var_r6;
        arg0->unk4 = (void *) (var_sl + var_r6);
        arg0->unkC = (void *) (var_r8 + var_r6);
    }
}
