# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806E02C/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806E02C/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806E02C/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806E02C/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806E02C/opencode/func.c" 2
typedef struct GenObj {
    u8 _pad0[56];
    s32 unk38;
    s32 unk39;
    s32 unk3C;
    s32 unk3E;
    u8 _pad42[56];
    s32 unk7A;
    u8 _pad7E[971];
    s32 unk449;
    s32 unk44A;
} GenObj;
void func_0806E02C(GenObj *arg0) {
    s16 *var_r0;
    s16 *var_r0_2;
    s16 *var_r0_3;
    s16 *var_r0_4;
    s16 var_r1;
    s16 var_r1_2;
    s16 var_r1_3;
    s16 var_r1_4;
    s8 temp_r0;
    s8 temp_r0_2;
    s8 temp_r0_3;
    s8 temp_r2;
    s8 temp_r4;
    s8 var_r1_5;

    arg0->unk3E = (u16) ((0xFFFFFE00 & arg0->unk3E) | ((arg0->unk38 * 0x10) & 0x1FF));
    temp_r0 = arg0->unk39;
    if ((s32) temp_r0 > 0) {
        arg0->unk3C = (s8) (((temp_r0 - 1) * 0x12) + 0x40);
    } else {
        arg0->unk3C = 0x28;
    }
    if (arg0->unk39 == 0) {
        arg0->unk449 = (u8) arg0->unk38;
        temp_r0_2 = (s8) arg0->unk449;
        switch (temp_r0_2) {
        case 0:
            var_r1 = 0xF;
            var_r0 = arg0 + 0x72;
            do {
                *var_r0 = var_r1;
                var_r1 -= 1;
                var_r0 -= 8;
            } while ((s32) var_r0 >= (s32) (arg0 + 0x4A));
            return;
        case 4:
            var_r1_2 = 0x15;
            var_r0_2 = arg0 + 0x72;
            do {
                *var_r0_2 = var_r1_2;
                var_r1_2 -= 1;
                var_r0_2 -= 8;
            } while ((s32) var_r0_2 >= (s32) (arg0 + 0x4A));
            return;
        case 8:
            var_r1_3 = 0x1B;
            var_r0_3 = arg0 + 0x72;
            do {
                *var_r0_3 = var_r1_3;
                var_r1_3 -= 1;
                var_r0_3 -= 8;
            } while ((s32) var_r0_3 >= (s32) (arg0 + 0x4A));
            return;
        default:
            var_r1_4 = 0x21;
            var_r0_4 = arg0 + 0x72;
            do {
                *var_r0_4 = var_r1_4;
                var_r1_4 -= 1;
                var_r0_4 -= 8;
            } while ((s32) var_r0_4 >= (s32) (arg0 + 0x4A));
            return;
        }
    } else {
        temp_r2 = arg0->unk38;
        arg0->unk44A = (s8) (((s32) (temp_r2 + ((u32) temp_r2 >> 0x1F)) >> 1) + (((s8) (u8) arg0->unk39 - 1) * 7) + 1);
        temp_r4 = arg0->unk44A;
        temp_r0_3 = (s8) (temp_r4 / 10);
        var_r1_5 = 0x1A;
        if (temp_r0_3 != 0) {
            var_r1_5 = temp_r0_3;
        }
        arg0->unk7A = (s16) var_r1_5;
        (arg0 + 0x7A)->unk8 = (s16) (s8) (temp_r4 % 10);
    }
}
