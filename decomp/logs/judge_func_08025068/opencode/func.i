# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08025068/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08025068/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08025068/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08025068/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08025068/opencode/func.c" 2
u32 func_0800E4F0(s32);
u32 func_0800E4FC(s32);
u32 func_0800E51C(s32);
s32 func_0800E9E4(s32, s32);
s32 func_0800EA68(s32, s32);

typedef struct GenObj {
    u8 _pad0[16];
    s32 unk10;
    u8 _pad14[32];
    void *unk34;
    s32 unk38;
    u8 _pad3C[135];
    s32 unkC3;
    u8 _padC7[442];
    struct GenObj *unk281;
    u8 _pad285[12863];
    s32 unk34C4;
} GenObj;
s32 func_08025068(GenObj *arg0, s32 arg1, s32 arg2) {
    s32 sp0;
    s8 *var_r1;
    s8 var_r0;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r0_4;
    u32 temp_r6;
    u32 temp_r7;
    u32 temp_r8;
    u32 temp_sb;
    u32 temp_sl;
    GenObj *temp_r1;

    sp0 = arg2;
    if (arg0->unk34->unk34C4 != 0) {
        goto block_44;
    }
    temp_r1 = arg0->unk10;
    if (temp_r1 != 0) {
        temp_r1->unk281 = 1;
    }
    temp_sl = func_0800E4F0(arg0->unk38);
    temp_r8 = func_0800E51C(arg0->unk38);
    func_0800E9E4(arg0->unk38, arg1);
    temp_r6 = func_0800E4F0(arg0->unk38);
    temp_sb = func_0800E4FC(arg0->unk38);
    func_0800EA68(arg0->unk38, sp0);
    temp_r7 = func_0800E4FC(arg0->unk38);
    if ((arg1 > 0) || (sp0 < 0)) {
        temp_r0 = arg0->unkC3 - 0x24;
        switch (temp_r0) {
        case 0:
            if (temp_r6 > (u32) (temp_r8 >> 1)) {
block_21:
                arg0->unkC3 = 0U;
            }
            break;
        case 1:
            if (temp_r6 > (u32) (temp_r8 / 5U)) {
                goto block_21;
            }
            break;
        case 2:
            if (temp_r6 > (u32) (temp_r8 / 20U)) {
                goto block_21;
            }
            break;
        case 3:
            if (temp_r6 != 0) {
                goto block_21;
            }
            break;
        case 4:
            if (temp_r7 <= 0x31U) {
                goto block_21;
            }
            break;
        case 5:
            if (temp_r7 <= 0x4FU) {
                goto block_21;
            }
            break;
        case 6:
            if (temp_r7 != 0x64) {
                goto block_21;
            }
            break;
        }
    }
    if ((temp_sb != 0x64) && (temp_r7 == 0x64)) {
        arg0->unkC3 = 0x2AU;
        return 1;
    }
    if ((temp_sb <= 0x4FU) && (temp_r7 > 0x4FU)) {
        var_r1 = (GenObj *)((u8 *)arg0 + 0xC3);
        var_r0 = 0x29;
        goto block_43;
    }
    if ((temp_sb <= 0x31U) && (temp_r7 > 0x31U)) {
        var_r1 = (GenObj *)((u8 *)arg0 + 0xC3);
        var_r0 = 0x28;
        goto block_43;
    }
    if ((temp_sl != 0) && (temp_r6 == 0)) {
        var_r1 = (GenObj *)((u8 *)arg0 + 0xC3);
        var_r0 = 0x27;
        goto block_43;
    }
    temp_r0_2 = temp_r8 / 20U;
    if ((temp_sl > temp_r0_2) && (temp_r6 <= temp_r0_2)) {
        var_r1 = (GenObj *)((u8 *)arg0 + 0xC3);
        var_r0 = 0x26;
        goto block_43;
    }
    temp_r0_3 = temp_r8 / 5U;
    if ((temp_sl > temp_r0_3) && (temp_r6 <= temp_r0_3)) {
        var_r1 = (GenObj *)((u8 *)arg0 + 0xC3);
        var_r0 = 0x25;
        goto block_43;
    }
    temp_r0_4 = temp_r8 >> 1;
    if ((temp_sl > temp_r0_4) && (temp_r6 <= temp_r0_4)) {
        var_r1 = (GenObj *)((u8 *)arg0 + 0xC3);
        var_r0 = 0x24;
block_43:
        *var_r1 = var_r0;
    }
block_44:
    return 0;
}
