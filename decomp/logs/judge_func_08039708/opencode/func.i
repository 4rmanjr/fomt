# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08039708/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08039708/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08039708/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08039708/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08039708/opencode/func.c" 2
s32 SetAnimFacing__12AActorEntityUi(void *);
s32 func_080200C4(void *, s32);
s32 func_080323C8(void *);
s32 func_08039134(void **, u16, s16, s16);
s32 func_0809C060(void *);
s32 func_0809C0A0(void *, s32 *);
s32 func_0809C0AC(void *, s32 *);
s32 func_0809C0BC(void *, s32 *);
u32 func_080AB788(s32);
s32 func_080ABE58(s16, s16, s16, s16, s32, s32);

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    u8 _pad8[2];
    s32 unkA;
    s32 unkE;
    struct GenObj *unk10;
    u8 _pad14[12];
    s32 unk20;
    u8 _pad24[16];
    s32 unk34;
} GenObj;
void func_08039708(GenObj *arg1, s32 arg2) {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 temp_r1_2;
    s32 var_r1;
    s32 var_r5;
    u16 temp_r2;
    u16 var_r8;
    u32 var_r7;
    u8 var_r4;
    void **temp_r3;
    GenObj *temp_r0;
    void *temp_r0_2;
    void *temp_r1;
    void *temp_r4;

    temp_r0 = arg1->unk34;
    temp_r1 = (GenObj *)((u8 *)temp_r0 + 0x10);
    temp_r3 = arg1->unk0;
    temp_r2 = temp_r0->unk10;
    var_r8 = temp_r2;
    if (temp_r2 != 0) {
        var_r8 -= 1;
    }
    temp_r1_2 = (s32) temp_r0->unk10;
    var_r7 = (u32) (temp_r1_2 << 9) >> 0x19;
    if (var_r7 != 0) {
        var_r7 -= 1;
    }
    var_r4 = temp_r1->unk3;
    if (var_r4 != 0) {
        var_r4 -= 1;
    }
    if (var_r8 != 0) {
        var_r1 = 0;
        if ((s32) (temp_r1_2 << 8) < 0) {
            var_r1 = 0x2B;
        }
        temp_r0_2 = (*temp_r3)->unk40(temp_r3, var_r1);
        if ((temp_r0_2 != 0) && (temp_r0_2->unk4 == arg1->unk4)) {
            if (var_r4 == 0) {
                if (arg1->unk20 != func_080ABE58(arg1->unkA, arg1->unkE, temp_r0_2->unkA, temp_r0_2->unkE, arg2, (s32) arg1->unk20)) {
                    SetAnimFacing__12AActorEntityUi(arg1);
                }
                var_r4 = func_080AB788(0x1E) + 1;
            }
            temp_r0->unk10 = var_r8;
            temp_r1->unk2 = (u8) ((-0x80 & temp_r1->unk2) | (var_r7 & 0x7F));
            temp_r1->unk3 = var_r4;
            return;
        }
        goto block_16;
    }
block_16:
    func_080323C8(arg1);
    temp_r4 = arg1->unk34;
    var_r5 = 0x64;
    if (func_0809C060(temp_r4) != 0) {
        var_r5 = func_08039134(arg1->unk0, arg1->unk4, arg1->unkA, arg1->unkE);
    } else {
        func_080200C4(arg1, 0xAA);
    }
    if (var_r5 != 0x64) {
        if (func_080AB788(0x64) <= 0x45U) {
            sp8 &= 0xFFFF0000;
            spC = (((spC & 0xFF00FFFF) | ((u32) ((func_080AB788(8) + 3) << 0x18) >> 8)) & 0xFFFFFF) | (var_r5 << 0x18);
            func_0809C0AC(temp_r4, &sp8);
            return;
        }
        sp10 = (((sp10 & 0xFFFF0000) | (u16) (func_080AB788(0x3C) + 0x78)) & 0xFF00FFFF & 0xFFFFFF) | (var_r5 << 0x18);
        func_0809C0BC(temp_r4, &sp10);
        return;
    }
    sp14 = (sp14 & 0xFFFF0000) | 0xB4;
    func_0809C0A0(temp_r4, &sp14);
}
