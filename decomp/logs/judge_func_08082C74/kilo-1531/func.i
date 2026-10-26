# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08082C74/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08082C74/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08082C74/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08082C74/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08082C74/kilo-1531/func.c" 2
s32 GetFirstSlotWithTool__C8RucksackUi(s32, s32);
s32 GetFirstSlotWith__C9ToolChestUi(s32, s32);
s32 GetId__C4Tool(s8 *);
s8 GetTool__C9ToolStack(s32);
s32 IsEmpty__C9ToolStack(s32);

s32 func_08082C74(void *arg0, s32 arg1) {
    s8 sp0;
    s32 temp_r0;
    s32 var_r1;
    s32 var_r7;

    var_r7 = 1;
    temp_r0 = GetFirstSlotWith__C9ToolChestUi(arg0->unk8 + 0x380, arg1);
    if ((temp_r0 != -1) || (GetFirstSlotWithTool__C8RucksackUi(arg0->unk8 + 0x1C38, arg1) != temp_r0)) {
        var_r7 = 0;
    }
    if ((IsEmpty__C9ToolStack(arg0->unk8 + 0x1C34) << 0x18) == 0) {
        sp0 = GetTool__C9ToolStack(arg0->unk8 + 0x1C34);
        var_r1 = 0;
        if (GetId__C4Tool(&sp0) == arg1) {
            var_r1 = 1;
        }
        if (var_r1 != 0) {
            var_r7 = 0;
        }
    }
    return var_r7;
}
