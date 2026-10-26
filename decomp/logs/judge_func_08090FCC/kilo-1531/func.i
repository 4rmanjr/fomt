# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08090FCC/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08090FCC/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08090FCC/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08090FCC/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08090FCC/kilo-1531/func.c" 2
s32 GetAmount__C9ToolStack(s32 *);
u16 GetIconId__C4Tool();
s32 GetToolAt__8RucksackUi(s32, u32);
s32 GetTool__C9ToolStack(s32 *);
s32 IsEmpty__C9ToolStack(s32 *);
s8 func_0800E550(s32, s32);
s32 func_080CB304(s32, u32, ? *, u16);
s32 func_080CBAF0(s32, ? *, u16, s32);
s32 memcpy(s32 *, s32, s32);
extern ? gUnk_086678A0;

void func_08090FCC(void *arg0, u32 arg1) {
    s32 sp0;
s32 sp4;
    s8 sp8;
    s32 temp_r4;
    u16 temp_r6;
    u16 temp_r6_2;
    u32 var_r5;

    var_r5 = 0;
    if (arg1 != 0) {
        do {
            memcpy(&sp4, GetToolAt__8RucksackUi(arg0->unk104, var_r5), 2);
            if ((IsEmpty__C9ToolStack(&sp4) << 0x18) == 0) {
                sp8 = func_0800E550(arg0->unk8 + 0x1BD8, GetTool__C9ToolStack(&sp4));
                temp_r6 = GetIconId__C4Tool();
                sp0 = GetAmount__C9ToolStack(&sp4);
                func_080CB304(arg0->unk78, var_r5, &gUnk_086678A0, temp_r6);
            }
            var_r5 += 1;
        } while (var_r5 < arg1);
    }
    if ((IsEmpty__C9ToolStack(arg0->unkFC) << 0x18) == 0) {
        sp0.unk9 = func_0800E550(arg0->unk8 + 0x1BD8, GetTool__C9ToolStack(arg0->unkFC));
        temp_r6_2 = GetIconId__C4Tool();
        temp_r4 = arg0->unk78;
        func_080CBAF0(temp_r4, &gUnk_086678A0, temp_r6_2, GetAmount__C9ToolStack(arg0->unkFC));
    }
}
