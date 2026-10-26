# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805DC24/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805DC24/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805DC24/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805DC24/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805DC24/opencode/func.c" 2
s32 func_080074C0(void *, s32);
s32 func_08007D4C(void *, s32);
s32 func_08008E64(void *, s32, u16);
s32 func_08008EB8(s32, void *, s32);
s32 func_0804E7A0(s32, s32 *, s32);
s32 func_0804E958(s32, s32 *, s32);
s32 func_0805E790(s32 *, void *, s32);
s32 memcpy(s32 *, s32 *, s32);
extern s32 gUnk_080FB000;

typedef struct GenObj {
    u8 _pad0[2];
    s32 unk2;
    struct GenObj *unk4;
    s32 unk8;
    struct GenObj *unkC;
    u8 _pad10[112];
    s32 unk80;
} GenObj;
void func_0805DC24(GenObj *arg0, GenObj *arg5, ? arg7, ? arg10, ? argF0, s16 argF1, GenObj *argF2, void *argF3) {
    s16 *var_r1_2;
    s16 *var_r2_4;
    s16 var_r3;
    s32 temp_r0_7;
    s32 temp_r1_3;
    s32 temp_r1_5;
    s32 temp_r1_6;
    s32 var_r1;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r5;
    u16 var_r2;
    u16 var_r2_2;
    u16 var_r2_3;
    u16 var_r5_2;
    void **temp_r1;
    GenObj *temp_r0;
    void *temp_r0_2;
    GenObj *temp_r0_3;
    void *temp_r0_4;
    GenObj *temp_r0_5;
    GenObj *temp_r0_6;
    void *temp_r1_2;
    void *temp_r1_4;
    void *temp_r3;

    unkspC = 0;
    unkspC.unk4 = 0;
    unksp14 = 0;
    unksp14.unk4 = 0U;
    unksp1C = 0;
    unksp1C.unk4 = 0U;
    arg5 = 0;
    arg5.unk4 = 0;
    temp_r0 = (GenObj *)((u8 *)arg0 + 0x80);
    temp_r1 = arg0->unk80;
    (*temp_r1)->unk10(&arg7, temp_r1, *(temp_r0->unk4 + (temp_r0->unkC * 4)));
    memcpy(&arg7, &arg7, 0x20);
    temp_r0_2 = &arg7 + 0xC;
    unkspC.unk0 = (s32) arg7.unk0;
    unkspC.unk4 = (s32) arg7.unk4;
    unkspC.unk8 = (s32) arg7.unk8;
    temp_r1_2 = &unkspC + 0xC;
    unkspC.unkC = (s32) arg7.unkC;
    temp_r1_2->unk4 = (s32) temp_r0_2->unk4;
    temp_r1_2->unk8 = (s32) temp_r0_2->unk8;
    temp_r1_2->unkC = (s32) temp_r0_2->unkC;
    ((GenObj *)((u8 *)temp_r1_2 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_2 + 0xC))->unk4;
    temp_r0_3 = (GenObj *)((u8 *)arg0 + 0x134);
    temp_r1_3 = (func_080074C0(temp_r0_3, temp_r0_3->unk4) << 5) + 0x05000200;
    var_r2 = 0;
    if (0 != 0) {
        var_r2 = unksp1C.unk4;
    }
    func_08008E64(unksp1C, temp_r1_3, var_r2);
    func_0805E790(&arg7, (GenObj *)((u8 *)arg0 + 0x50), 0);
    temp_r0_4 = &arg7 + 0xC;
    unkspC.unk0 = (s32) arg7.unk0;
    unkspC.unk4 = (s32) arg7.unk4;
    unkspC.unk8 = (s32) arg7.unk8;
    temp_r1_4 = &unkspC + 0xC;
    unkspC.unkC = (s32) arg7.unkC;
    temp_r1_4->unk4 = (s32) temp_r0_4->unk4;
    temp_r1_4->unk8 = (s32) temp_r0_4->unk8;
    temp_r1_4->unkC = (s32) temp_r0_4->unkC;
    ((GenObj *)((u8 *)temp_r1_4 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_4 + 0xC))->unk4;
    temp_r0_5 = (GenObj *)((u8 *)arg0 + 0x144);
    temp_r1_5 = (func_080074C0(temp_r0_5, temp_r0_5->unk4) << 5) + 0x05000200;
    var_r2_2 = 0;
    if (unksp1C != 0) {
        var_r2_2 = unksp1C.unk4;
    }
    func_08008E64(unksp1C, temp_r1_5, var_r2_2);
    temp_r0_6 = (GenObj *)((u8 *)arg0 + 0x13C);
    temp_r1_6 = (func_08007D4C(temp_r0_6, temp_r0_6->unk4) << 5) + 0x06010000;
    var_r2_3 = 0;
    if (unksp14 != 0) {
        var_r2_3 = unksp14.unk4;
    }
    func_08008E64(unksp14, temp_r1_6, var_r2_3);
    var_r4 = 0;
    argF2 = &argF1;
    argF3 = &unksp0 + 0x50;
    var_r5 = 0x06002800;
    do {
        argF0.unk0 = 0xE;
        argF0.unk2 = 2;
        func_0804E7A0((s32) argF0.unk0, &arg10, 0);
        argF1 = 0xE;
        argF2->unk2 = 2;
        unksp0 = (*((u8 *)(GenObj *)((u8 *)arg0 + 0xAE0) + var_r4) * 0x14) + &gUnk_080FB000;
        unksp4 = 0;
        unksp8 = 1;
        func_0804E958((s32) argF1, &arg10, 0);
        func_08008E64(argF3, var_r5, 0x380U);
        var_r5 += 0x380;
        var_r4 += 1;
    } while (var_r4 <= 9);
    func_08008EB8(-1, (GenObj *)((u8 *)arg0 + 0x2D0), 0x800);
    var_r5_2 = 0x2140;
    var_r1 = 0;
    temp_r3 = (GenObj *)((u8 *)arg0 + 0x2D4);
    do {
        var_r4_2 = 0;
        temp_r0_7 = var_r1 * 2;
        var_r3 = var_r5_2 + 0xE;
        var_r2_4 = ((temp_r0_7 + 5) << 6) + temp_r3;
        var_r1_2 = ((temp_r0_7 + 4) << 6) + temp_r3;
loop_10:
        *var_r1_2 = var_r5_2 + var_r4_2;
        *var_r2_4 = var_r3;
        var_r3 += 1;
        var_r2_4 += 2;
        var_r1_2 += 2;
        var_r4_2 += 1;
        if (var_r4_2 <= 0xD) {
            goto loop_10;
        }
        var_r5_2 += 0x1C;
        var_r1 += 1;
    } while (var_r1 <= 9);
    func_08008E64((GenObj *)((u8 *)arg0 + 0x2D0), 0x0600F000, 0x800U);
}
