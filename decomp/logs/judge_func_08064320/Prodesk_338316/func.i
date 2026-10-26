# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08064320/Prodesk_338316/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08064320/Prodesk_338316/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08064320/Prodesk_338316/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08064320/Prodesk_338316/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08064320/Prodesk_338316/func.c" 2
u32 GetCapacity__C4Coop(s32);
s32 GetChicken__C4CoopUi(s32, u32);
s32 GetGrowthStage__C7Chicken();
s32 func_08062E9C(void *, s32, ?, s32, ? *);
s32 func_08063EB8(void *, s32, s32, ? *, ? *);
s32 func_08075E24(s32, s16);
extern ? gUnk_080FB880;
extern ? gUnk_0875268C;
extern ? gUnk_0875270C;
extern ? gUnk_0875272C;
extern ? gUnk_087527AC;
extern ? vtable_unk_080E7A58;

void *func_08064320(void *arg0, ? arg1, ? arg2) {
    ? *var_r0;
    ? *var_r3;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 var_r6;
    u32 temp_r0;
    u32 var_r7;

    func_08062E9C(arg0, arg1, arg2, 0x2D, &gUnk_080FB880);
    arg0->unk5B4 = &vtable_unk_080E7A58;
    var_r6 = 0;
    var_r7 = 0;
    temp_r0 = GetCapacity__C4Coop(arg0->unk58C + 0x410);
    if (temp_r0 > 0U) {
        do {
            temp_r0_2 = GetChicken__C4CoopUi(arg0->unk58C + 0x410, var_r7);
            if (temp_r0_2 != 0) {
                temp_r0_3 = GetGrowthStage__C7Chicken();
                if ((temp_r0_3 != 0) && (temp_r0_3 == 1)) {
                    var_r3 = &gUnk_0875268C;
                    var_r0 = &gUnk_0875270C;
                } else {
                    var_r3 = &gUnk_0875272C;
                    var_r0 = &gUnk_087527AC;
                }
                func_08063EB8(arg0, var_r6, temp_r0_2, var_r3, var_r0);
                var_r6 += 1;
            }
            var_r7 += 1;
        } while (var_r7 < temp_r0);
    }
    func_08075E24(arg0->unk4, (s16) (((var_r6 * 5) + 5) * 8));
    return arg0;
}
