# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801F614/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801F614/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801F614/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801F614/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801F614/opencode/func.c" 2
s32 __builtin_new(s32);
s32 func_0800E324(s32);
void *func_080A4A00(s32, void *, s32, void *, s32, s32);

typedef struct GenObj {
    struct GenObj *unk0;
    u8 _pad4[4];
    struct GenObj *unk8;
    u8 _padC[8];
    s32 unk14;
    u8 _pad18[12];
    struct GenObj *unk24;
    u8 _pad28[4112];
    s32 unk1038;
    u8 _pad103C[48];
    s32 unk106C;
    s32 unk1070;
} GenObj;
void func_0801F614(GenObj *arg0) {
    s8 sp8;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_5;
    s32 var_r0;
    s32 var_r2;
    s8 temp_r0;
    void *temp_r0_4;
    void *temp_r0_6;
    void *temp_r0_7;
    GenObj *temp_r1;
    GenObj *temp_r1_2;
    GenObj *temp_r1_3;
    GenObj *temp_r1_4;
    GenObj *temp_r1_5;
    void *temp_r5;
    void *temp_r5_2;
    void *var_r1;

    temp_r1 = arg0->unk106C;
    if ((temp_r1 != 0) && (temp_r1 != 0)) {
        ((void (*)(void *,...))(temp_r1->unk24->unk8))(temp_r1, 3);
    }
    arg0->unk106C = 0;
    temp_r1_2 = arg0->unk1070;
    if ((temp_r1_2 != 0) && (temp_r1_2 != 0)) {
        ((void (*)(void *,...))(temp_r1_2->unk24->unk8))(temp_r1_2, 3);
    }
    arg0->unk1070 = 0;
    temp_r0 = ((void (*)(void *,...))(arg0->unk0->unk14))(arg0);
    if (temp_r0 == 0) {
        temp_r0_2 = func_0800E324(arg0->unk1038 + 0x10);
        if (temp_r0_2 != 3) {
            temp_r0_3 = __builtin_new(0x40);
            temp_r5 = (GenObj *)((u8 *)arg0 + 0xF04);
            sp8 = temp_r0;
            temp_r0_4 = func_080A4A00(temp_r0_3, temp_r5, 0, arg0, 3, 0x1E);
            temp_r1_3 = arg0->unk106C;
            if ((temp_r0_4 != temp_r1_3) && (temp_r1_3 != 0)) {
                ((void (*)(void *,...))(temp_r1_3->unk24->unk8))(temp_r1_3, 3);
            }
            arg0->unk106C = temp_r0_4;
            var_r0 = __builtin_new(0x40);
            sp8 = 0;
            var_r1 = temp_r5;
            var_r2 = 0;
        } else {
            temp_r0_5 = __builtin_new(0x40);
            temp_r5_2 = (GenObj *)((u8 *)arg0 + 0xF04);
            sp8 = temp_r0;
            temp_r0_6 = func_080A4A00(temp_r0_5, temp_r5_2, 1, arg0, temp_r0_2, 0x1E);
            temp_r1_4 = arg0->unk106C;
            if ((temp_r0_6 != temp_r1_4) && (temp_r1_4 != 0)) {
                ((void (*)(void *,...))(temp_r1_4->unk24->unk8))(temp_r1_4, 3);
            }
            arg0->unk106C = temp_r0_6;
            var_r0 = __builtin_new(0x40);
            sp8 = 0;
            var_r1 = temp_r5_2;
            var_r2 = 1;
        }
        temp_r0_7 = func_080A4A00(var_r0, var_r1, var_r2, arg0);
        temp_r1_5 = arg0->unk1070;
        if ((temp_r0_7 != temp_r1_5) && (temp_r1_5 != 0)) {
            ((void (*)(void *,...))(temp_r1_5->unk24->unk8))(temp_r1_5, 3);
        }
        arg0->unk1070 = temp_r0_7;
    }
}
