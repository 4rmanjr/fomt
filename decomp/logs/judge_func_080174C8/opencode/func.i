# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080174C8/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080174C8/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080174C8/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080174C8/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080174C8/opencode/func.c" 2
s32 func_080A1C94(s32, s32, s32);
s32 func_080A1CBC(s32 *, s32);
s32 func_080A1EF4(s32, s32);
s32 func_080A1FC4(s32, s32);
s32 method_08009B68__4FarmUi(?, s32);

s32 func_080174C8(s32 arg0, s32 arg1, s32 arg2, ? arg3, s32 arg4, u8 arg5, void *arg6) {
    s32 sp0;
    s32 temp_r0;
    s32 var_r0;
    s32 var_r2;
    u8 temp_r4;

    temp_r4 = arg5;
    func_080A1CBC(&sp0, arg1);
    var_r2 = 0;
    if (temp_r4 != 0) {
        switch (sp0) {
        case 19:
            var_r2 = 2;
            goto block_9;
        case 20:
            var_r2 = 7;
            goto block_9;
        }
    } else {
        if (sp0 != 0x12) {
            if (sp0 == 0x15) {
                var_r2 = 1;
                goto block_9;
            }
            goto block_25;
        }
block_9:
        arg6->unk10 = 0;
        if (((s32) (arg4 - var_r2) > 0) && ((sp0.unk0 == 0x12) || (func_080A1FC4(arg1, arg2), (sp0.unk0 == 0x12)) || (func_080A1EF4(arg1, arg2) == 0))) {
            func_080A1C94(arg1, arg2, arg3);
            arg6->unk0 = 1;
            arg6->unk8 = (s32) sp0.unk8;
            arg6->unkC = (s32) sp0.unkA;
            temp_r0 = sp0.unk0;
            switch (temp_r0) {
            case 21:
                method_08009B68__4FarmUi(arg0, 6);
                var_r0 = 7;
block_23:
                arg6->unk4 = var_r0;
                break;
            case 18:
                method_08009B68__4FarmUi(arg0, 1);
                var_r0 = 4;
                goto block_23;
            case 19:
                var_r0 = 6;
                goto block_23;
            case 20:
                var_r0 = 9;
                goto block_23;
            }
            return 1;
        }
block_25:
        return 0;
    }
}
