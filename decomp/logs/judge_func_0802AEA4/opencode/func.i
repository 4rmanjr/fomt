# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802AEA4/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802AEA4/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802AEA4/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802AEA4/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802AEA4/opencode/func.c" 2
s32 func_080AC070(s32 *, s32 *);

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    s32 unk4;
    s32 unk6;
    s32 unk8;
    s32 unkA;
    s32 unkC;
    u8 _pad10[4];
    struct GenObj *unk14;
} GenObj;
s32 func_0802AEA4(GenObj *arg0) {
    GenObj sp0;
    s32 spC;
    GenObj *sp14;
    s32 sp18;
    s16 temp_r1_2;
    s16 temp_r1_4;
    s16 temp_r1_6;
    s16 temp_r1_7;
    s16 var_r0;
    s16 var_r0_10;
    s16 var_r0_2;
    s16 var_r0_5;
    s32 *var_r0_12;
    s32 *var_r0_15;
    s32 *var_r0_4;
    s32 *var_r0_8;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r1_3;
    s32 temp_r1_5;
    s32 temp_r1_8;
    s32 temp_r2;
    s32 temp_r6_2;
    s32 temp_r6_3;
    s32 temp_r6_4;
    s32 temp_r6_5;
    s32 var_r0_13;
    s32 var_r0_14;
    s32 var_r0_6;
    s32 var_r0_9;
    u16 temp_r3;
    u16 temp_r6;
    u8 var_r0_11;
    u8 var_r0_3;
    u8 var_r0_7;
    void **temp_r1;

    temp_r1 = arg0->unk0;
    temp_r6 = arg0->unk4;
    (*temp_r1)->unk34(&sp0, temp_r1, temp_r6);
    ((void (*)(void *,...))(arg0->unk14->unkC))(&spC, arg0);
    sp14 = spC;
    sp18 = sp10;
    if ((func_080AC070(&sp0, &sp14) << 0x18) != 0) {
        goto block_57;
    }
    if ((u32) (temp_r6 - 0x34) > 0x1FFU) {
        goto block_58;
    }
    var_r0 = sp14.unk0;
    if ((s32) var_r0 < 0) {
        var_r0 += 7;
    }
    temp_r6_2 = var_r0 >> 3;
    var_r0_2 = sp14.unk2;
    if ((s32) var_r0_2 < 0) {
        var_r0_2 += 7;
    }
    temp_r0 = var_r0_2 >> 3;
    temp_r3 = sp0.unk8;
    if ((sp0 != 0) && ((u32) temp_r6_2 <= (u32) temp_r3) && ((u32) temp_r0 <= (u32) sp0.unkA)) {
        var_r0_3 = (temp_r3 * temp_r0) + temp_r6_2;
        if (sp4 != 0) {
            var_r0_3 = *((u8 *)sp4 + var_r0_3);
        }
        var_r0_4 = sp0 + (var_r0_3 * 4);
    } else {
        var_r0_4 = 0;
    }
    if ((var_r0_4 != 0) && (*var_r0_4 & 0x1FFFC)) {
        goto block_57;
    }
    var_r0_5 = sp14.unk0;
    if ((s32) var_r0_5 < 0) {
        var_r0_5 += 7;
    }
    temp_r6_3 = var_r0_5 >> 3;
    temp_r1_2 = sp14.unk6;
    var_r0_6 = temp_r1_2 - 1;
    if (var_r0_6 < 0) {
        var_r0_6 = temp_r1_2 + 6;
    }
    temp_r0_2 = var_r0_6 >> 3;
    temp_r2 = sp0;
    if ((temp_r2 != 0) && ((u32) temp_r6_3 <= (u32) temp_r3) && ((u32) temp_r0_2 <= (u32) sp0.unkA)) {
        temp_r1_3 = sp0.unk4;
        var_r0_7 = (temp_r3 * temp_r0_2) + temp_r6_3;
        if (temp_r1_3 != 0) {
            var_r0_7 = *((u8 *)temp_r1_3 + var_r0_7);
        }
        var_r0_8 = temp_r2 + (var_r0_7 * 4);
    } else {
        var_r0_8 = 0;
    }
    if ((var_r0_8 == 0) || !(*var_r0_8 & 0x1FFFC)) {
        temp_r1_4 = sp14.unk4;
        var_r0_9 = temp_r1_4 - 1;
        if (var_r0_9 < 0) {
            var_r0_9 = temp_r1_4 + 6;
        }
        temp_r6_4 = var_r0_9 >> 3;
        var_r0_10 = sp14.unk2;
        if ((s32) var_r0_10 < 0) {
            var_r0_10 += 7;
        }
        temp_r0_3 = var_r0_10 >> 3;
        if ((temp_r2 != 0) && ((u32) temp_r6_4 <= (u32) temp_r3) && ((u32) temp_r0_3 <= (u32) sp0.unkA)) {
            temp_r1_5 = sp0.unk4;
            var_r0_11 = (temp_r3 * temp_r0_3) + temp_r6_4;
            if (temp_r1_5 != 0) {
                var_r0_11 = *((u8 *)temp_r1_5 + var_r0_11);
            }
            var_r0_12 = temp_r2 + (var_r0_11 * 4);
        } else {
            var_r0_12 = 0;
        }
        if ((var_r0_12 == 0) || !(*var_r0_12 & 0x1FFFC)) {
            temp_r1_6 = sp14.unk4;
            var_r0_13 = temp_r1_6 - 1;
            if (var_r0_13 < 0) {
                var_r0_13 = temp_r1_6 + 6;
            }
            temp_r6_5 = var_r0_13 >> 3;
            temp_r1_7 = sp14.unk6;
            var_r0_14 = temp_r1_7 - 1;
            if (var_r0_14 < 0) {
                var_r0_14 = temp_r1_7 + 6;
            }
            temp_r0_4 = var_r0_14 >> 3;
            if ((temp_r2 != 0) && ((u32) temp_r6_5 <= (u32) temp_r3) && ((u32) temp_r0_4 <= (u32) sp0.unkA)) {
                temp_r1_8 = sp0.unk4;
                temp_r0_5 = (temp_r3 * temp_r0_4) + temp_r6_5;
                if (temp_r1_8 != 0) {
                    var_r0_15 = temp_r2 + (*((u8 *)temp_r1_8 + temp_r0_5) * 4);
                } else {
                    var_r0_15 = temp_r2 + (temp_r0_5 * 4);
                }
            } else {
                var_r0_15 = 0;
            }
            if ((var_r0_15 != 0) && (*var_r0_15 & 0x1FFFC)) {
                goto block_57;
            }
block_58:
            return 0;
        }
        goto block_57;
    }
block_57:
    return 1;
}
