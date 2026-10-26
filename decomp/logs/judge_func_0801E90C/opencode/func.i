# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801E90C/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801E90C/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801E90C/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801E90C/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801E90C/opencode/func.c" 2
s32 func_0800E324(s32);
s32 func_080171F8(s32, s32, s32);
s32 method_0800A4A4__9FieldPlot(s32 *);

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk2;
    struct GenObj *unk4;
    s32 unk6;
    u8 _padA[2];
    struct GenObj *unkC;
    u8 _pad10[4];
    struct GenObj *unk14;
    u8 _pad18[40];
    s32 unk40;
    u8 _pad44[76];
    struct GenObj *unk90;
    u8 _pad94[4004];
    s32 unk1038;
    u8 _pad103C[12];
    s32 unk1048;
    s32 unk104C;
    s32 unk1050;
} GenObj;
void func_0801E90C(GenObj *arg0) {
s32 sp0;
    s32 sp4;
    GenObj *spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 *var_r2;
    s32 *var_r2_2;
    s32 *var_r3;
    s32 *var_r3_2;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r2;
    s32 temp_r5_2;
    s32 temp_r7;
    s32 var_r1;
    s32 var_r2_3;
    s32 var_r2_4;
    s32 var_r3_3;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r5;
    u8 temp_r2_2;
    GenObj *temp_r0;
    GenObj *temp_r5;

    sp34 = 0;
    var_r4 = 0;
loop_1:
    temp_r0 = ((void (*)(void *,...))(arg0->unk0->unk40))(arg0, var_r4);
    if ((temp_r0 != 0) && (temp_r0->unk4 == 2)) {
        ((void (*)(void *,...))(temp_r0->unk14->unkC))(&sp4, temp_r0);
        spC = sp4;
        sp10 = sp8;
        sp14 = 0;
        temp_r0_2 = (s32) (((s32) (spC.unk0 << 0x10) >> 0x13) - 0x22) >> 1;
        sp18 = temp_r0_2;
        var_r2 = &sp14;
        if (temp_r0_2 > 0) {
            var_r2 = &sp18;
        }
        temp_r2 = *var_r2;
        sp1C = 0x2A;
        temp_r0_3 = (s32) (((s32) (spC.unk4 - 1) >> 3) - 0x22) >> 1;
        sp20 = temp_r0_3;
        var_r3 = &sp1C;
        if (temp_r0_3 < 0x2A) {
            var_r3 = &sp20;
        }
        temp_r7 = *var_r3;
        sp24 = 0;
        temp_r0_4 = (s32) (((s32) (spC.unk2 << 0x10) >> 0x13) - 0x16) >> 1;
        sp28 = temp_r0_4;
        var_r2_2 = &sp24;
        if (temp_r0_4 > 0) {
            var_r2_2 = &sp28;
        }
        sp2C = 0x18;
        temp_r0_5 = (s32) (((s32) (spC.unk6 - 1) >> 3) - 0x16) >> 1;
        sp30 = temp_r0_5;
        var_r3_2 = &sp2C;
        if (temp_r0_5 < 0x18) {
            var_r3_2 = &sp30;
        }
        var_r2_3 = *var_r3_2;
        var_r1 = *var_r2_2;
        if (var_r1 <= var_r2_3) {
            var_r3_3 = temp_r2 * 4;
            do {
                var_r4_2 = temp_r2;
                if (var_r4_2 <= temp_r7) {
                    var_r5 = var_r3_3 + (var_r1 * 0xAC);
                    do {
                        if (((u32) (*(arg0->unk1038 + 0x9DC + var_r5) << 0x18) >> 0x1A) == 0x15) {
                            sp38 = var_r2_3;
                            sp3C = var_r3_3;
                            method_0800A4A4__9FieldPlot(&sp0);
                            sp34 = 1;
                            var_r3_3 = sp3C;
                            var_r2_3 = sp38;
                        }
                        var_r5 += 4;
                        var_r4_2 += 1;
                    } while (var_r4_2 <= temp_r7);
                }
                var_r1 += 1;
            } while (var_r1 <= var_r2_3);
        }
    }
    var_r4 += 1;
    if (var_r4 <= 0x63) {
        goto loop_1;
    }
    if (sp34 != 0) {
        temp_r5 = arg0->unk4;
        if (temp_r5->unk0 == 2) {
            temp_r2_2 = arg0->unk104C;
            ((void (*)(void *,...))(temp_r5->unk90->unk14))(temp_r5, arg0->unk1048, temp_r2_2, 0x1E - temp_r2_2);
            return;
        }
        temp_r5_2 = arg0->unk1050;
        temp_r0_6 = arg0->unk1038;
        var_r2_4 = 0;
        if (func_0800E324(temp_r0_6 + 0x10) == 3) {
            var_r2_4 = 1;
        }
        func_080171F8(temp_r5_2, temp_r0_6 + 0x14, var_r2_4);
    }
}
