# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802BA74/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802BA74/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802BA74/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802BA74/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802BA74/opencode/func.c" 2
typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk2;
    s32 unk3;
    struct GenObj *unk4;
    struct GenObj *unk8;
    s32 unkA;
    struct GenObj *unkC;
    s32 unkE;
    struct GenObj *unk10;
    struct GenObj *unk14;
    struct GenObj *unk18;
    u8 _pad1C[4];
    s32 unk20;
    s32 unk24;
    u8 _pad28[12];
    s32 unk34;
    s32 unk35;
    s32 unk38;
    u8 _pad3C[24];
    s32 unk54;
    s32 unk56;
    s32 unk59;
} GenObj;
void func_0802BA74(GenObj *arg0, ? arg3) {
s32 sp0;
    s16 var_ip;
    s16 var_r3;
    s32 temp_r0_2;
    s32 temp_r2;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_3;
    u8 temp_r0;
    u8 temp_r0_3;
    u8 temp_r0_7;
    u8 temp_r2_2;
    void **temp_r0_4;
    GenObj *temp_r0_5;
    GenObj *temp_r0_6;
    GenObj *temp_r1;

    temp_r0 = arg0->unk34;
    switch ((u32) temp_r0) {
    case 0:
        arg0->unk54 = 0;
        return;
    case 1:
        temp_r1 = (GenObj *)((u8 *)arg0 + 0x38);
        temp_r1->unk4 = (s32) (temp_r1->unk4 + temp_r1->unkC);
        temp_r1->unk8 = (s32) (temp_r1->unk8 + temp_r1->unk10);
        temp_r0_2 = temp_r1->unk18 + 0xFFFFB556;
        temp_r1->unk18 = temp_r0_2;
        temp_r2 = temp_r1->unk14 + temp_r0_2;
        if (temp_r2 > 0) {
            temp_r1->unk14 = temp_r2;
        } else {
            temp_r1->unk14 = 0;
            temp_r1->unk18 = 0;
        }
        var_r1 = 0;
        if (arg0->unk24 == 0) {
            var_r1 = 1;
        }
        if (var_r1 == 0) {
            return;
        }
        arg0->unk34 = 0U;
        var_r3 = arg0->unkA;
        var_ip = arg0->unkE;
        temp_r0_3 = arg0->unk20;
        switch (temp_r0_3) {
        case 0:
            var_ip += 0x14;
            break;
        case 1:
            var_ip -= 0x14;
            break;
        case 2:
            var_r3 -= 0x14;
            break;
        case 3:
            var_r3 += 0x14;
            break;
        }
        sp0 = (u16) ((0xFFFFFC00 & sp0) | (arg0->unk4 & 0x3FF));
        sp0.unk1 = (u8) ((3 & sp0.unk1) | (((u16) var_r3 & 0x3F) * 4));
        sp0.unk2 = (u16) ((0xFFFFFC00 & sp0.unk2) | (((u32) (var_r3 << 0x10) >> 0x16) & 0x3FF));
        sp0.unk3 = (u8) ((3 & sp0.unk3) | (((u16) var_ip & 0x3F) * 4));
        sp0.unk4 = (u16) ((0xFFFFFC00 & sp0.unk4) | (((u32) (var_ip << 0x10) >> 0x16) & 0x3FF));
        temp_r0_4 = arg0->unk0;
        (*temp_r0_4)->unkBC(temp_r0_4, &sp0, arg0->unk56);
        arg0->unk38 = 0;
        arg0->unk59 = 0;
        return;
    case 2:
        var_r1_2 = 0;
        if (arg0->unk24 == 0) {
            var_r1_2 = 1;
        }
        if (var_r1_2 != 0) {
            temp_r0_5 = (GenObj *)((u8 *)arg0 + 0x34);
            arg0->unk34 = 0U;
            temp_r0_5->unk4 = 0;
            ((GenObj *)((u8 *)temp_r0_5 + 4))->unk21 = 0;
            return;
        }
        return;
    case 3:
        var_r1_3 = 0;
        if (arg0->unk24 == 0) {
            var_r1_3 = 1;
        }
        if (var_r1_3 != 0) {
            temp_r0_6 = (GenObj *)((u8 *)arg0 + 0x38);
            temp_r0_6->unk4 = 0;
            temp_r0_6->unk8 = 0;
            temp_r0_6->unk14 = 0x150000;
            *(temp_r0_6 - 4) = 0;
            arg0->unk59 = 1;
            return;
        }
        break;
    case 4:
        temp_r0_7 = arg0->unk35 - 1;
        arg0->unk35 = temp_r0_7;
        temp_r2_2 = temp_r0_7;
        if (temp_r2_2 == 0) {
            arg0->unk34 = temp_r2_2;
            ((GenObj *)((u8 *)arg0 + 0x34))->unk4 = temp_r2_2;
        }
        break;
    }
}
