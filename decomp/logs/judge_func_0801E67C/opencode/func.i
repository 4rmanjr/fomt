# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801E67C/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801E67C/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801E67C/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801E67C/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
typedef struct { u8 pad[0x24]; u8 v; } S_AD0;typedef struct { u8 pad[0x25]; u8 v; } S_AD8;typedef struct { u8 pad[0x26]; u8 v; } S_AE0;typedef struct { u8 pad[0x14]; u8 v; } S_CD8;typedef struct { u8 pad[3]; u8 v; } S_39C;typedef struct { u8 pad[0x58]; u8 v; } S_601C;typedef struct { u8 pad[0x14]; u8 v; } S_B68;typedef struct { u8 pad[0x26]; u8 v; } S_AEC;typedef struct { u8 pad[0xB30]; u8 v; } S_44E0;typedef struct { u8 pad[0x92C]; u8 v; } S_4D8;typedef struct {
    s32 unk0;
    s32 unk4;
    void (*unk8)(void *, s32);
} Vtbl;typedef struct {
    Vtbl *vtbl;
} Obj;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801E67C/opencode/func.c" 2
void *GetMapData(s32);
s32 SetLocation__7AEntityUiii(void *, s32, s16, s16);
s32 func_080AC070(s32 *, s32 *);
s32 method_0800C9B8__4CoopUi(s32, s32);
u32 rand();
extern s32 gUnk_080F0704;
extern s32 gUnk_080F0718;
extern s32 gUnk_080F0730;

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk2;
    struct GenObj *unk4;
    u8 _pad8[4];
    struct GenObj *unkC;
    u8 _pad10[4];
    struct GenObj *unk14;
    u8 _pad18[8];
    s32 unk20;
    s32 unk22;
    u8 _pad26[6];
    struct GenObj *unk2C;
    u8 _pad30[12];
    s32 unk3C;
    s32 unk40;
    u8 _pad44[4084];
    s32 unk1038;
} GenObj;
void func_0801E67C(GenObj *arg0, ? arg3) {
    s32 sp0;
    s32 sp4;
s32 spC;
    s32 *sp14;
    s32 *var_r1_2;
    s32 temp_r0;
    s32 var_r8;
    s32 var_sb;
    u16 temp_r5;
    u16 temp_r6;
    u32 temp_r0_4;
    u32 temp_r0_5;
    u32 var_r1;
    GenObj *temp_r0_2;
    GenObj *temp_r0_3;
    void *temp_r0_6;
    GenObj *temp_r4;

    temp_r0 = arg0->unk4->unk4;
    switch (temp_r0) {
    case 41:
        sp14 = &gUnk_080F0704;
        var_r1 = 5;
block_10:
        temp_r0_2 = GetMapData();
        temp_r5 = temp_r0_2->unk20;
        temp_r6 = temp_r0_2->unk22;
        temp_r4 = arg0->unk4;
        GetMapData(temp_r4->unk4);
        sp0 = temp_r4->unk2C;
        sp4 = 0;
        sp0.unk8 = temp_r5;
        sp0.unkA = temp_r6;
        var_r8 = 0;
loop_11:
        temp_r0_3 = ((void (*)(void *,...))(arg0->unk0->unk40))(arg0, var_r8);
        if (temp_r0_3 == 0) {

        } else {
            var_sb = 0;
            temp_r0_4 = var_r8 - 0x2B;
            switch (temp_r0_4) {
            case 0:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 31:
            case 32:
            case 33:
            case 34:
            case 35:
            case 36:
            case 37:
            case 38:
            case 39:
            case 40:
                if (temp_r0_3->unk4 == 0x1D) {
                    ((void (*)(void *,...))(temp_r0_3->unk14->unkC))(&spC, temp_r0_3);
                    if ((func_080AC070(&sp0, &spC) << 0x18) != 0) {
                        var_sb = 1;
                    }
                }
                break;
            }
            if (var_sb == 0) {

            } else {
                temp_r0_5 = var_r8 - 0x2B;
                switch (temp_r0_5) {
                default:
                    if (temp_r0_3 != 0) {
                        temp_r0_6 = sp14 + ((rand() % var_r1) * 4);
                        SetLocation__7AEntityUiii(temp_r0_3, 0x1D, temp_r0_6->unk0, temp_r0_6->unk2);
                    }
                    break;
                case 33:
                case 34:
                case 35:
                case 36:
                case 37:
                case 38:
                case 39:
                case 40:
                    if (temp_r0_3 != 0) {
                        ((void (*)(void *,...))(arg0->unk0->unk3C))(arg0, var_r8);
                        method_0800C9B8__4CoopUi(arg0->unk1038 + 0x410, var_r8 - 0x4C);
                    }
                    break;
                }
            }
        }
        var_r8 += 1;
        if (var_r8 <= 0x63) {
            goto loop_11;
        }
        return;
    case 42:
        var_r1_2 = &gUnk_080F0718;
block_9:
        sp14 = var_r1_2;
        var_r1 = 6;
        goto block_10;
    case 43:
        var_r1_2 = &gUnk_080F0730;
        goto block_9;
    }
}
