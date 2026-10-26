# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805FD78/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805FD78/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805FD78/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805FD78/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805FD78/opencode/func.c" 2
s32 CountChickens__C4Coop(s32);
s32 CountCows__C4Barn(s32);
s32 CountSheeps__C4Barn(s32);
s32 func_08069C34(void *, s32);
s32 func_08075E7C(void *, u8);
extern s32 vtable_unk_080E7A88;

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk4;
    u8 _pad8[280];
    s32 unk120;
    s32 unk124;
    s32 unk128;
    u8 _pad12C[52];
    s32 unk160;
} GenObj;
void *func_0805FD78(GenObj *arg0, s32 arg1, u8 arg2) {
    GenObj *sp0;
    s32 temp_r0;
    s32 temp_r0_3;
    s32 temp_r0_5;
    u32 temp_r0_2;
    u32 temp_r0_4;
    u32 temp_r0_6;
    u32 temp_r0_7;
    u32 temp_r0_8;
    u32 temp_r0_9;
    GenObj *temp_r2;
    GenObj *temp_r2_2;
    GenObj *temp_r3;
    GenObj *temp_r3_2;
    GenObj *temp_r3_3;
    GenObj *temp_r3_4;
    GenObj *temp_r3_5;

    func_08075E7C(arg0, arg2);
    arg0->unk4 = &vtable_unk_080E7A88;
    arg0->unk120 = arg1;
    arg0->unk124 = 0U;
    sp0 = 0;
    sp0.unk4 = 0;
    sp0 = 0;
    temp_r2 = (GenObj *)((u8 *)arg0 + 0x128);
    if (temp_r2 != 0) {
        arg0->unk128 = sp0;
        temp_r2->unk4 = sp4;
    }
    arg0->unk124 = (u32) (arg0->unk124 + 1);
    temp_r0 = CountChickens__C4Coop(arg0->unk120 + 0x410);
    if ((s32) ((0 - temp_r0) | temp_r0) < 0) {
        sp0 = 1;
        temp_r0_2 = arg0->unk124;
        if (temp_r0_2 <= 6U) {
            temp_r2_2 = (GenObj *)((u8 *)arg0 + 0x124) + ((temp_r0_2 * 8) + 4);
            if (temp_r2_2 != 0) {
                temp_r2_2->unk0 = sp0;
                temp_r2_2->unk4 = sp4;
            }
            arg0->unk124 = (u32) (arg0->unk124 + 1);
        }
    }
    temp_r0_3 = CountCows__C4Barn(arg0->unk120 + 0x5F0);
    if ((s32) ((0 - temp_r0_3) | temp_r0_3) < 0) {
        sp0 = 2;
        temp_r0_4 = arg0->unk124;
        if (temp_r0_4 <= 6U) {
            temp_r3 = (GenObj *)((u8 *)arg0 + 0x124) + ((temp_r0_4 * 8) + 4);
            if (temp_r3 != 0) {
                temp_r3->unk0 = sp0;
                temp_r3->unk4 = sp4;
            }
            arg0->unk124 = (u32) (arg0->unk124 + 1);
        }
    }
    temp_r0_5 = CountSheeps__C4Barn(arg0->unk120 + 0x5F0);
    if ((s32) ((0 - temp_r0_5) | temp_r0_5) < 0) {
        sp0 = 3;
        temp_r0_6 = arg0->unk124;
        if (temp_r0_6 <= 6U) {
            temp_r3_2 = (GenObj *)((u8 *)arg0 + 0x124) + ((temp_r0_6 * 8) + 4);
            if (temp_r3_2 != 0) {
                temp_r3_2->unk0 = sp0;
                temp_r3_2->unk4 = sp4;
            }
            arg0->unk124 = (u32) (arg0->unk124 + 1);
        }
    }
    sp0 = 4;
    temp_r0_7 = arg0->unk124;
    if (temp_r0_7 <= 6U) {
        temp_r3_3 = (GenObj *)((u8 *)arg0 + 0x124) + ((temp_r0_7 * 8) + 4);
        if (temp_r3_3 != 0) {
            temp_r3_3->unk0 = sp0;
            temp_r3_3->unk4 = sp4;
        }
        arg0->unk124 = (u32) (arg0->unk124 + 1);
    }
    sp0 = 5;
    temp_r0_8 = arg0->unk124;
    if (temp_r0_8 <= 6U) {
        temp_r3_4 = (GenObj *)((u8 *)arg0 + 0x124) + ((temp_r0_8 * 8) + 4);
        if (temp_r3_4 != 0) {
            temp_r3_4->unk0 = sp0;
            temp_r3_4->unk4 = sp4;
        }
        arg0->unk124 = (u32) (arg0->unk124 + 1);
    }
    sp0 = 6;
    temp_r0_9 = arg0->unk124;
    if (temp_r0_9 <= 6U) {
        temp_r3_5 = (GenObj *)((u8 *)arg0 + 0x124) + ((temp_r0_9 * 8) + 4);
        if (temp_r3_5 != 0) {
            temp_r3_5->unk0 = sp0;
            temp_r3_5->unk4 = sp4;
        }
        arg0->unk124 = (u32) (arg0->unk124 + 1);
    }
    arg0->unk160 = 0;
    func_08069C34(arg0, arg0->unk128);
    return arg0;
}
