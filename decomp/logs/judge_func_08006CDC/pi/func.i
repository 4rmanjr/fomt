# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08006CDC/pi/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08006CDC/pi/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08006CDC/pi/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08006CDC/pi/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08006CDC/pi/func.c" 2
s32 func_080069F4(void *);
s32 func_08006B90(void *);
s32 func_08006C28(void *, u8);
s32 func_08006C60(void *);
s32 func_080088D4(void *);
s32 func_08008B6C(void *, s32);

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    u8 _pad5[17915];
    s32 unk4600;
    s32 unk4604;
    s32 unk4605;
    u8 _pad4609[7];
    s32 unk4610;
    u8 _pad4614[35];
    s32 unk4637;
    u8 _pad463B[1];
    s32 unk463C;
} GenObj;
void func_08006CDC(GenObj *arg0) {
    GenObj *sp0;
    s32 *var_r1;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r6;
    s32 var_r0;
    s32 var_r1_3;
    s8 *var_r1_4;
    s8 temp_r0_4;
    s8 var_r0_2;
    u8 temp_r0_3;
    u8 temp_r0_5;
    u8 temp_r0_6;
    u8 temp_r1;
    u8 temp_r1_2;
    u8 var_r1_2;
    u8 var_r2;

    temp_r6 = arg0->unk463C;
    if (temp_r6 != 0) {
        return;
    }
    func_080069F4(arg0);
    sp0 = func_080088D4(arg0);
    temp_r1 = sp0.unk0;
    if (1 & temp_r1) {
        if ((s32) (s8) arg0->unk4605 <= 5) {
            func_08008B6C((GenObj *)((u8 *)arg0 + 0x45F4), 0x6A);
            func_08006B90(arg0);
            return;
        }
        if ((s32) (s8) arg0->unk4604 <= 4) {
            var_r1 = (GenObj *)((u8 *)arg0 + 0x4600);
            temp_r0 = arg0->unk4600;
            if (temp_r0 == 2) {
                arg0->unk4600 = temp_r6;
            } else {
                var_r0 = temp_r0 + 1;
                goto block_13;
            }
            goto block_14;
        }
        if ((u32) (u8) (arg0->unk4604 - 5) <= 4U) {
            var_r1 = (GenObj *)((u8 *)arg0 + 0x4600);
            temp_r0_2 = arg0->unk4600;
            if (temp_r0_2 == 0) {
                var_r0 = 2;
            } else {
                var_r0 = temp_r0_2 - 1;
            }
block_13:
            *var_r1 = var_r0;
block_14:
            arg0->unk4637 = 1;
            func_08008B6C((GenObj *)((u8 *)arg0 + 0x45F4), 0xCA);
            return;
        }
        if ((func_08006C60(arg0) << 0x18) == 0) {
            goto block_25;
        }
        goto block_33;
    }
    if (2 & temp_r1) {
        temp_r0_3 = arg0->unk4610;
        if (temp_r0_3 != 0) {
            arg0->unk4610 = (u8) (temp_r0_3 - 1);
            var_r1_2 = arg0->unk4610;
            goto block_27;
        }
        var_r2 = 0;
        var_r1_3 = 0;
        do {
            if (*((u8 *)(GenObj *)((u8 *)arg0 + 0x461C) + var_r1_3) == 0x5F) {
                var_r2 += 1;
            }
            var_r1_3 += 1;
        } while (var_r1_3 <= 0xB);
        if (var_r2 == 0xC) {
block_25:
            func_08008B6C((GenObj *)((u8 *)arg0 + 0x45F4), 0xC7);
            return;
        }
        var_r1_2 = 0;
block_27:
        func_08006C28(arg0, var_r1_2);
        func_08008B6C((GenObj *)((u8 *)arg0 + 0x45F4), 0x6C);
        return;
    }
    if (8 & temp_r1) {
        if ((s8) arg0->unk4605 == 6) {
            temp_r0_4 = (s8) arg0->unk4604;
            if (((s32) temp_r0_4 > 9) && ((s32) temp_r0_4 <= 0xE)) {
                if ((func_08006C60(arg0) << 0x18) != 0) {
block_33:
                    arg0->unk463C = 1;
                }
                func_08008B6C((GenObj *)((u8 *)arg0 + 0x45F4), 0xC5);
                return;
            }
        }
        arg0->unk4604 = 0xCU;
        var_r1_4 = (GenObj *)((u8 *)arg0 + 0x4605);
        var_r0_2 = 6;
        goto block_39;
    }
    temp_r1_2 = sp0.unk1;
    if (2 & temp_r1_2) {
        var_r1_4 = (GenObj *)((u8 *)arg0 + 0x4610);
        temp_r0_5 = arg0->unk4610;
        if (temp_r0_5 != 0) {
            var_r0_2 = temp_r0_5 - 1;
block_39:
            *var_r1_4 = var_r0_2;
        }
        func_08008B6C((GenObj *)((u8 *)arg0 + 0x45F4), 0xCB);
        return;
    }
    if (1 & temp_r1_2) {
        temp_r0_6 = arg0->unk4610;
        if (temp_r0_6 != 0xB) {
            arg0->unk4610 = (u8) (temp_r0_6 + 1);
        }
        func_08008B6C((GenObj *)((u8 *)arg0 + 0x45F4), 0xCB);
    }
}
