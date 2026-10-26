# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802AC2C/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802AC2C/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802AC2C/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802AC2C/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802AC2C/opencode/func.c" 2
s32 func_0802AB98(s32 *, void *, u8);

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    s32 unk4;
    s32 unk6;
    s32 unkA;
    s32 unkC;
    s32 unkE;
    u8 _pad12[2];
    struct GenObj *unk14;
    u8 _pad18[8];
    s32 unk20;
    u8 _pad24[142];
    s32 unkB2;
} GenObj;
void func_0802AC2C(GenObj *arg0, s16 arg1, s16 arg2) {
    s32 sp0;
    GenObj *sp8;
    s32 spC;
GenObj sp10;
    void **sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    u32 sp28;
    s32 sp2C;
    u32 sp30;
    u8 sp34;
    s32 (*var_r1)(void *);
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r1;
    s32 temp_r2;
    u32 var_sl;
    void *temp_r4;

    sp18 = arg0->unk0;
    sp1C = (s32) arg0->unk4;
    sp20 = (s32) arg0->unkA;
    sp24 = (s32) arg0->unkE;
    func_0802AB98(&sp0, arg0, arg0->unk20);
    sp8 = sp0;
    spC = sp4;
    sp28 = 0x64;
    sp2C = 0;
    var_sl = 0x2B;
    do {
        sp30 = var_sl;
        temp_r4 = (*sp18)->unk40(sp18, var_sl);
        sp34 = 0;
        if ((temp_r4 != 0) && (temp_r4->unk4 == sp1C)) {
            ((void (*)(void *,...))(temp_r4->unk14->unkC))(&sp10, temp_r4);
            if ((s32) ((sp8.unk0 - sp10.unk4) & (sp10 - sp8.unk4) & (sp8.unk2 - sp10.unk6) & (sp10.unk2 - sp8.unk6)) < 0) {
                temp_r2 = arg1 >> 0x10;
                if (temp_r2 != 0) {
                    if (temp_r2 > 0) {
                        var_r1 = *(((temp_r2 * 4) + *((u8 *)temp_r4 + arg2)) - 4);
                    } else {
                        var_r1 = (s32 (*)(void *)) arg2;
                    }
                    if ((var_r1(temp_r4 + arg1) << 0x18) != 0) {
                        goto block_9;
                    }
                } else {
block_9:
                    sp34 = 1;
                }
            }
        }
        if ((sp34 != 0) && ((temp_r1 = temp_r4->unkA - sp20, temp_r0 = temp_r4->unkE - sp24, temp_r0_2 = (temp_r1 * temp_r1) + (temp_r0 * temp_r0), (sp28 == 0x64)) || (sp2C > temp_r0_2))) {
            sp28 = sp30;
            sp2C = temp_r0_2;
        }
        var_sl += 1;
    } while (var_sl <= 0x45U);
    arg0->unkB2 = (u8) sp28;
}
