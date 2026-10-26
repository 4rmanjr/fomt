# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038EE0/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038EE0/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038EE0/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038EE0/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038EE0/opencode/func.c" 2
s32 __builtin_delete(u32 *);
u32 *__builtin_new(s32);
s32 func_080A47B4(s32 *, s32);
s32 func_080A4A00(s32 *, s32, s32, void **);
s32 func_080DC840(void *, s32 *);
extern s32 vtable_unk_080E681C;

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    s32 unk10;
    u8 _pad14[16];
    struct GenObj *unk24;
    s32 unk28;
    u8 _pad2C[16];
    s32 unk3C;
    s32 unk3D;
    s32 unk3F;
    u8 _pad43[6];
    s32 unk49;
    s32 unk4A;
    s32 unk4B;
} GenObj;
void func_08038EE0(GenObj *arg0) {
    GenObj *sp0;
    s32 sp4;
    s8 sp8;
s32 spC;
GenObj sp34;
    u8 sp48;
    s32 temp_r1_2;
    s32 var_r1;
    s32 var_r2;
    u32 *temp_r0;
    u32 *temp_r6_2;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 var_sl;
    void **temp_r6;
    GenObj *temp_r1;
    GenObj *temp_r1_3;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r5;
    void *var_r4;

    temp_r0 = __builtin_new(0x14C);
    temp_r6 = *arg0->unk0;
    *temp_r0 = 0;
    var_sl = 0;
loop_1:
    switch (var_sl) {
    case 0:
        var_r1 = (*temp_r6)->unk78(temp_r6);
        sp0 = 4;
        sp4 = 0x1C;
        sp8 = 0;
        var_r2 = 2;
block_4:
        func_080A4A00(&spC, var_r1, var_r2, temp_r6);
        temp_r0_2 = *temp_r0;
        if (temp_r0_2 <= 4U) {
            temp_r4 = temp_r0 + ((temp_r0_2 << 6) + 4);
            if (temp_r4 != 0) {
                func_080DC840(temp_r4, &spC);
                temp_r4->unk24 = &vtable_unk_080E681C;
                temp_r1 = (GenObj *)((u8 *)temp_r4 + 0x28);
                temp_r4->unk28 = (s32) sp34;
                temp_r1->unk4 = (s32) sp34.unk4;
                temp_r1->unk8 = (s32) sp34.unk8;
                temp_r1->unkC = (s32) sp34.unkC;
                ((GenObj *)((u8 *)temp_r1 + 0xC))->unk4 = (s32) (&(GenObj *)((u8 *)sp34 + 0xC))->unk4;
                temp_r4->unk3C = (u8) sp48;
                temp_r4->unk3D = (u8) sp0.unk49;
                ((GenObj *)((u8 *)temp_r4 + 0x3D))->unk1 = (u8) sp0.unk4A;
                temp_r4->unk3F = (u8) sp0.unk4B;
            }
            *temp_r0 += 1;
        }
        func_080A47B4(&spC, 2);
        break;
    case 1:
    case 2:
        var_r1 = (*temp_r6)->unk78(temp_r6);
        sp0 = 4;
        sp4 = 0x1C;
        sp8 = 0;
        var_r2 = 1;
        goto block_4;
    case 3:
    case 4:
        temp_r1_2 = (*temp_r6)->unk78(temp_r6);
        sp0 = 4;
        sp4 = 0x1C;
        sp8 = 0;
        func_080A4A00(&spC, temp_r1_2, 0, temp_r6);
        temp_r0_3 = *temp_r0;
        if (temp_r0_3 <= 4U) {
            temp_r4_2 = temp_r0 + ((temp_r0_3 << 6) + 4);
            if (temp_r4_2 != 0) {
                func_080DC840(temp_r4_2, &spC);
                temp_r4_2->unk24 = &vtable_unk_080E681C;
                temp_r1_3 = (GenObj *)((u8 *)temp_r4_2 + 0x28);
                temp_r4_2->unk28 = (s32) sp34;
                temp_r1_3->unk4 = (s32) sp34.unk4;
                temp_r1_3->unk8 = (s32) sp34.unk8;
                temp_r1_3->unkC = (s32) sp34.unkC;
                ((GenObj *)((u8 *)temp_r1_3 + 0xC))->unk4 = (s32) (&(GenObj *)((u8 *)sp34 + 0xC))->unk4;
                temp_r4_2->unk3C = (u8) sp48;
                temp_r4_2->unk3D = (u8) sp0.unk49;
                ((GenObj *)((u8 *)temp_r4_2 + 0x3D))->unk1 = (u8) sp0.unk4A;
                temp_r4_2->unk3F = (u8) sp0.unk4B;
            }
            *temp_r0 += 1;
        }
        func_080A47B4(&spC, 2);
        break;
    }
    *((u8 *)temp_r0 + 0x144 + var_sl) = 0;
    var_sl += 1;
    if (var_sl <= 4U) {
        goto loop_1;
    }
    temp_r6_2 = arg0->unk10;
    if ((temp_r0 != temp_r6_2) && (temp_r6_2 != 0)) {
        temp_r5 = temp_r6_2 + ((*temp_r6_2 << 6) + 4);
        var_r4 = temp_r6_2 + 4;
        if (var_r4 != temp_r5) {
            do {
                ((void (*)(void *,...))(var_r4->unk24->unk8))(var_r4, 2);
                var_r4 += 0x40;
            } while (var_r4 != temp_r5);
        }
        __builtin_delete(temp_r6_2);
    }
    arg0->unk10 = temp_r0;
}
