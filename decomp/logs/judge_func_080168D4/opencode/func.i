# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080168D4/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080168D4/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080168D4/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080168D4/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080168D4/opencode/func.c" 2
s32 GetUnkEnt__C4Coop(s32);
s32 SetLocation__7AEntityUiii(void *, s32, s16, s16);
s32 method_0800C6F0__C4CoopUi(s32 *, s32, s32);
s32 method_0800CBC0__4Coop(s32);
s32 method_0800D058__C4Barn(s32);
s32 method_0800D074__C4BarnUi(s32 *, s32, s32);
s32 method_0800D858__4Barn(s32);

void func_080168D4(void *arg0, u32 arg1, ? arg3) {
s32 sp0;
s32 sp4;
    s32 temp_r0_5;
    s32 temp_r0_9;
    s32 temp_r5;
    s32 temp_r5_2;
    void **temp_r0;
    void **temp_r0_10;
    void **temp_r0_11;
    void **temp_r0_13;
    void **temp_r0_14;
    void **temp_r0_15;
    void **temp_r0_2;
    void **temp_r0_3;
    void **temp_r0_6;
    void **temp_r0_7;
    void *temp_r0_12;
    void *temp_r0_16;
    void *temp_r0_4;
    void *temp_r0_8;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r6;

    temp_r6 = arg0->unk4;
    switch (arg1) {
    case 0:
        temp_r0 = temp_r6->unkA8;
        if ((*temp_r0)->unk40(temp_r0, 0x2C) != 0) {
            return;
        }
        temp_r0_2 = temp_r6->unkA8;
        (*temp_r0_2)->unk38(temp_r0_2, 0x2C);
        temp_r0_3 = temp_r6->unkA8;
        temp_r0_4 = (*temp_r0_3)->unk40(temp_r0_3, 0x2C);
        if ((temp_r0_4 != 0) && ((temp_r0_4->unk14->unk28(temp_r0_4) << 0x18) == 0)) {
            temp_r0_4->unk14->unk20(temp_r0_4);
        }
        if (temp_r0_4 == 0) {
            return;
        }
        SetLocation__7AEntityUiii(temp_r0_4, 2, 0x2F0, 0x84);
        return;
    case 1:
    case 2:
        temp_r4 = temp_r6 + 0x8C;
        temp_r0_5 = method_0800D058__C4Barn(temp_r6->unk8C + 0x5F0);
        if (temp_r0_5 == -1) {
            return;
        }
        method_0800D858__4Barn(temp_r6->unk8C + 0x5F0);
        temp_r5 = temp_r0_5 + 0x36;
        temp_r0_6 = temp_r4->unk1C;
        (*temp_r0_6)->unk38(temp_r0_6, temp_r5);
        temp_r0_7 = temp_r4->unk1C;
        temp_r0_8 = (*temp_r0_7)->unk40(temp_r0_7, temp_r5);
        if ((temp_r0_8 != 0) && ((temp_r0_8->unk14->unk28(temp_r0_8) << 0x18) == 0)) {
            temp_r0_8->unk14->unk20(temp_r0_8);
        }
        method_0800D074__C4BarnUi(&sp0, temp_r6->unk8C + 0x5F0, temp_r0_5);
        if (temp_r0_8 == 0) {
            return;
        }
        SetLocation__7AEntityUiii(temp_r0_8, 0x25, sp0.unk0, sp0.unk2);
        return;
    case 3:
        temp_r4_2 = temp_r6 + 0x8C;
        temp_r0_9 = GetUnkEnt__C4Coop(temp_r6->unk8C + 0x410);
        if (temp_r0_9 != -1) {
            method_0800CBC0__4Coop(temp_r6->unk8C + 0x410);
            temp_r5_2 = temp_r0_9 + 0x2E;
            temp_r0_10 = temp_r4_2->unk1C;
            (*temp_r0_10)->unk38(temp_r0_10, temp_r5_2);
            temp_r0_11 = temp_r4_2->unk1C;
            temp_r0_12 = (*temp_r0_11)->unk40(temp_r0_11, temp_r5_2);
            if ((temp_r0_12 != 0) && ((temp_r0_12->unk14->unk28(temp_r0_12) << 0x18) == 0)) {
                temp_r0_12->unk14->unk20(temp_r0_12);
            }
            method_0800C6F0__C4CoopUi(&sp4, temp_r6->unk8C + 0x410, temp_r0_9);
            if (temp_r0_12 != 0) {
                SetLocation__7AEntityUiii(temp_r0_12, 0x11, sp4.unk0, sp4.unk2);
                return;
            }
        } else {
            return;
        }
        break;
    case 4:
        temp_r0_13 = temp_r6->unkA8;
        if ((*temp_r0_13)->unk40(temp_r0_13, 0x2B) == 0) {
            temp_r0_14 = temp_r6->unkA8;
            (*temp_r0_14)->unk38(temp_r0_14, 0x2B);
            temp_r0_15 = temp_r6->unkA8;
            temp_r0_16 = (*temp_r0_15)->unk40(temp_r0_15, 0x2B);
            if ((temp_r0_16 != 0) && ((temp_r0_16->unk14->unk28(temp_r0_16) << 0x18) == 0)) {
                temp_r0_16->unk14->unk20(temp_r0_16);
            }
            if (temp_r0_16 != 0) {
                SetLocation__7AEntityUiii(temp_r0_16, 2, 0x17E, 0x52);
            }
        }
        break;
    }
}
