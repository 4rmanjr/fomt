# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08021444/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08021444/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08021444/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08021444/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08021444/opencode/func.c" 2
s32 GetAffection__C6Animal(void *);
s32 SetHasTalkedToday__3Pet(void *);
s32 func_08020018();
s32 func_080211E4(void *, s32, u8);
s32 func_08021264(void *);
s32 func_080212C0(void *);
s32 method_0809BB54__3DogPC18UnkBarnAnimal2C_x2(void *, s32 *);

void func_08021444(void *arg0, void *arg1) {
    s32 sp0;
    s32 temp_r0;
    s32 temp_r1_2;
    s32 temp_r2;
    s32 temp_r8;
    void *temp_r1;

    if (((u32) (arg1->unk0 << 0x16) >> 0x16) == arg0->unk4) {
        temp_r1 = arg0->unk34;
        if (temp_r1->unk20 != 5) {
            temp_r8 = GetAffection__C6Animal(temp_r1);
            temp_r0 = func_08020018();
            temp_r2 = (s16) (((arg1->unk2 & 0x3FF) << 6) | ((u8) arg1->unk1 >> 2)) - arg0->unkA;
            temp_r1_2 = (s16) (((arg1->unk4 & 0x3FF) << 6) | ((u8) arg1->unk3 >> 2)) - arg0->unkE;
            if ((s32) ((temp_r2 * temp_r2) + (temp_r1_2 * temp_r1_2)) <= (s32) (temp_r0 * temp_r0)) {
                if (arg0->unk34->unk20 == 5) {
                    func_080212C0(arg0);
                }
                sp0 = (s32) (u16) (((u32) (temp_r8 * 0x3C0) / 251U) + 0x1E0);
                method_0809BB54__3DogPC18UnkBarnAnimal2C_x2(arg0->unk34, &sp0);
                if (arg0->unk40 == 0) {
                    func_080211E4(arg0, func_08021264(arg0), arg0->unk20);
                }
                SetHasTalkedToday__3Pet(arg0->unk34);
            }
        }
    }
}
