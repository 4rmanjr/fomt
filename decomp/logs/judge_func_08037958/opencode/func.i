# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08037958/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08037958/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08037958/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08037958/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08037958/opencode/func.c" 2
s32 SetAnimFacing__12AActorEntityUi(void *);
s32 SetAnim__12AActorEntityUi(void *);
s32 func_08037098(void *, s32);
s32 func_08037A38(void *, s32);
s32 func_08037A48(void *, s32);
s32 func_080AB788(s32);
s32 func_080AB7A4(u8);
s32 func_080AB82C(s32 *, s32);
extern ? gUnk_080F1638;

s32 func_08037958(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r5;
    void *temp_r4;

    temp_r0 = func_080AB82C(&gUnk_080F1638, 3);
    temp_r4 = (temp_r0 * 4) + &gUnk_080F1638;
    temp_r5 = (0x3C * temp_r4->unk1) + func_080AB788(0x3C * temp_r4->unk2);
    temp_r0_2 = func_080AB788(4);
    if ((temp_r0_2 != 0) && (temp_r0_2 != 3) && (arg0->unk20 != func_080AB7A4(arg0->unk20))) {
        SetAnimFacing__12AActorEntityUi(arg0);
    }
    func_08037098(arg0, func_08037A48(arg0, temp_r0));
    if (arg0->unk22 != func_08037A38(arg0, temp_r0)) {
        SetAnim__12AActorEntityUi(arg0);
    }
    return temp_r5;
}
