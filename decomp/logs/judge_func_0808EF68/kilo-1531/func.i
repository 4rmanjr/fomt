# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808EF68/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808EF68/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808EF68/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808EF68/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808EF68/kilo-1531/func.c" 2
s32 GetToolAt__8RucksackUi(s32, s32);
s32 GetToolStackAt__9ToolChestUi(s32, s32);
s8 GetTool__C9ToolStack(s32);
s32 IsEmpty__C9ToolStack(s32);
s32 func_08050DC8(void *, ? *, s32, s32);
s32 func_080CE184(void *, s32, s32);
? *func_080CF05C(void *, void *, ? *, s32);
extern ? gUnk_08100144;

void func_0808EF68(void *arg0, s32 arg1) {
s32 sp0;
    ? *var_r2;
    ? *var_sb;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r5;
    s32 var_r3;
    void *var_r1;

    var_sb = 0;
    if (arg1 == 0) {
        if ((IsEmpty__C9ToolStack(arg0->unkFC) << 0x18) == 0) {
            sp0.unk0 = GetTool__C9ToolStack(arg0->unkFC);
            var_r1 = arg0 + 0x98;
            var_r2 = &sp0;
            var_r3 = 1;
            goto block_10;
        }
    } else if (arg1 != 9) {
        if (arg1 <= 8) {
            temp_r4 = arg0->unk100;
            GetToolAt__8RucksackUi(temp_r4, func_080CE184(arg0, arg1, 0));
            if ((IsEmpty__C9ToolStack() << 0x18) == 0) {
                temp_r4_2 = arg0->unk100;
                GetToolAt__8RucksackUi(temp_r4_2, func_080CE184(arg0, arg1, 0));
                var_r2 = &sp0 + 1;
                sp0.unk1 = GetTool__C9ToolStack();
                var_r1 = arg0 + 0x98;
                goto block_9;
            }
        } else {
            temp_r4_3 = arg0->unk104;
            temp_r5 = GetToolStackAt__9ToolChestUi(temp_r4_3, func_080CE184(arg0, arg1, arg0->unk94->unkBC));
            if ((IsEmpty__C9ToolStack() << 0x18) == 0) {
                var_r2 = &sp0 + 2;
                sp0.unk2 = GetTool__C9ToolStack(temp_r5);
                var_r1 = arg0 + 0x98;
block_9:
                var_r3 = 0;
block_10:
                var_sb = func_080CF05C(arg0, var_r1, var_r2, var_r3);
            }
        }
    }
    if (var_sb != 0) {
        func_08050DC8(arg0 + 0x80, var_sb, 0, 0);
        return;
    }
    func_08050DC8(arg0 + 0x80, &gUnk_08100144, 0, 0);
}
