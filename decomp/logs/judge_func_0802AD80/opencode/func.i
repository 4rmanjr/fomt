# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802AD80/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802AD80/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802AD80/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802AD80/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802AD80/opencode/func.c" 2
u32 func_0800E958(s32);
s32 func_0800ED8C(s32);

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    u8 _pad8[48];
    s32 unk38;
} GenObj;
void func_0802AD80(GenObj *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 sp10;
    s32 sp18;
    s32 sp20;
    GenObj *sp28;
    ? (**var_r2)(void **, s32 *, s32);
    ? (*var_r3)(void **, s32 *, s32);
    s32 *var_r1;
    u32 temp_r0;
    u32 temp_r4;
    void **temp_r0_2;

    temp_r4 = func_0800E958(arg0->unk38);
    func_0800ED8C(arg0->unk38);
    if (temp_r4 == func_0800E958(arg0->unk38)) {
        return;
    }
    temp_r0 = func_0800E958(arg0->unk38);
    switch (temp_r0) {
    case 0x2710:
        sp0 = 0x336;
        sp4 = 0;
        var_r3 = (*arg0->unk0)->unk140;
        var_r1 = &sp0;
block_19:
        var_r3(arg0->unk0, var_r1, 1);
        return;
    case 0x186A0:
        var_r2 = *arg0->unk0 + 0x140;
        var_r1 = &sp8;
        sp8 = 0x337;
block_18:
        var_r1->unk4 = 0;
        var_r3 = *var_r2;
        goto block_19;
    case 0xF4240:
        var_r2 = *arg0->unk0 + 0x140;
        var_r1 = &sp10;
        sp10 = 0x338;
        goto block_18;
    case 0x989680:
        var_r2 = *arg0->unk0 + 0x140;
        var_r1 = &sp18;
        sp18 = 0x339;
        goto block_18;
    case 0x5F5E100:
        var_r2 = *arg0->unk0 + 0x140;
        var_r1 = &sp20;
        sp20 = 0x33A;
        goto block_18;
    case 0x3B9ACA00:
        temp_r0_2 = arg0->unk0;
        sp28 = 0x33B;
        sp28.unk4 = 0;
        (*temp_r0_2)->unk140(temp_r0_2, &sp28, 1);
        return;
    }
}
