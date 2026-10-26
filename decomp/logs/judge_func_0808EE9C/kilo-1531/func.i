# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808EE9C/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808EE9C/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808EE9C/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808EE9C/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808EE9C/kilo-1531/func.c" 2
s32 GetAmount__C9ToolStack(s32 *);
u16 GetIconId__C4Tool();
s32 GetToolStackAt__9ToolChestUi(s32, s32);
s32 GetTool__C9ToolStack(s32 *);
s32 IsEmpty__C9ToolStack(s32 *);
s8 func_0800E550(s32, s32);
s32 func_080CC728(s32, u32, ? *, u16, s32);
s32 func_080CCDEC(s32, u32);
s32 memcpy(s32 *, s32, s32);
extern ? gUnk_086678A0;

void func_0808EE9C(void *arg0, s32 arg1) {
s32 sp4;
    s8 sp8;
    s32 temp_r5;
    u16 temp_r4;
    u32 var_r7;

    var_r7 = 0;
    do {
        memcpy(&sp4, GetToolStackAt__9ToolChestUi(arg0->unk104, (arg1 * 8) + var_r7), 2);
        if ((IsEmpty__C9ToolStack(&sp4) << 0x18) == 0) {
            sp8 = func_0800E550(arg0->unk8 + 0x1BD8, GetTool__C9ToolStack(&sp4));
            temp_r4 = GetIconId__C4Tool();
            temp_r5 = arg0->unk7C;
            func_080CC728(temp_r5, var_r7, &gUnk_086678A0, temp_r4, GetAmount__C9ToolStack(&sp4));
        } else {
            func_080CCDEC(arg0->unk7C, var_r7);
        }
        var_r7 += 1;
    } while (var_r7 <= 7U);
}
