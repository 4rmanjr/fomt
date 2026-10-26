# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08037714/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08037714/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08037714/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08037714/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08037714/opencode/func.c" 2
s32 SetAnim__12AActorEntityUi(void *);
s32 SetLocation__12AActorEntityRC13ActorLocation(void *, ? *);
s32 SetMap__7AEntityUi(void *, s32);
s32 func_080377C4(void *, s32);
s32 func_080A1890(s32 *, u32);

void func_08037714(void *arg0) {
s32 sp0;
    u32 var_r3;
    u8 temp_r3;
    void *temp_r0;

    temp_r0 = (*arg0->unk0)->unk144();
    if ((u32) (((u32) (temp_r0->unkA << 0x1B) >> 0x1B) - 6) <= 9U) {
        temp_r3 = temp_r0->unk9;
        var_r3 = ((u32) (temp_r3 << 0x19) >> 0x1B) + ((((u32) (temp_r3 << 0x1E) >> 0x1E) * 0x1E) + ((((u32) (temp_r0->unk8 << 0x1D) >> 0x1D) + 6) * 0x78));
        if (var_r3 > 6U) {
            var_r3 = var_r3 % 7U;
        }
        if (((var_r3 & 7) != 1) && (temp_r0->unk0 == 0)) {
            func_080A1890(&sp0, (u32) (arg0->unk44 << 0x1E) >> 0x1E);
            SetLocation__12AActorEntityRC13ActorLocation(arg0, &sp0);
            if (arg0->unk22 != func_080377C4(arg0, 0)) {
                SetAnim__12AActorEntityUi(arg0);
            }
        } else {
            goto block_7;
        }
    } else {
block_7:
        SetMap__7AEntityUi(arg0, 0x234);
    }
}
