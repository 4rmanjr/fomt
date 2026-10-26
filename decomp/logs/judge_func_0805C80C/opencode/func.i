# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805C80C/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805C80C/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805C80C/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805C80C/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805C80C/opencode/func.c" 2
u8 GetAdequacy__C3Pet(s32);
s8 GetAffection__C6Animal(s32);
s32 rand();
extern s32 gUnk_080FA99E;

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    struct GenObj *unk10;
    struct GenObj *unk14;
    struct GenObj *unk18;
    struct GenObj *unk1A;
    struct GenObj *unk1C;
    struct GenObj *unk1D;
    struct GenObj *unk1E;
    struct GenObj *unk1F;
    struct GenObj *unk20;
    struct GenObj *unk22;
    u8 _pad26[4];
    struct GenObj *unk2A;
    u8 _pad2E[5088];
    s32 unk140E;
    u8 _pad1412[18];
    s32 unk1424;
    u8 _pad1428[121];
    s32 unk14A1;
    s32 unk14A2;
    s32 unk14A4;
    u8 _pad14A8[4];
    s32 unk14AC;
    u8 _pad14B0[44];
    s32 unk14DC;
} GenObj;
void func_0805C80C(GenObj *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r4;
    s32 var_r2;
    s32 var_r4;
    s32 var_r5;
    s8 *var_r0;
    GenObj *var_r6;
    void *var_r7;

    var_r6 = (GenObj *)((u8 *)arg0 + 0x142C);
    if (arg0->unk140E == 1) {
        arg0->unk14A4 = 0x80;
        arg0->unk14A1 = GetAdequacy__C3Pet(arg0->unk14DC);
        arg0->unk14A2 = GetAffection__C6Animal(arg0->unk14DC);
        temp_r0 = 0xFA - arg0->unk14A1;
        temp_r4 = (s32) (temp_r0 * temp_r0) / 1000;
        arg0->unk14AC = (s16) (temp_r4 + ((rand() & 3) + 1));
    }
    var_r5 = 0;
    do {
        temp_r0_2 = (s32) ((var_r6->unk1D * 0xC49) + 0x580000) / 60;
        var_r6->unk0 = temp_r0_2;
        temp_r0_3 = ((s32) ((var_r6->unk1E * 0xC49) + 0xC0000) / 60) + temp_r0_2;
        var_r6->unk4 = temp_r0_3;
        var_r6->unk8 = (s32) ((s32) (temp_r0_3 - temp_r0_2) / 60);
        var_r6->unkC = 0;
        var_r6->unk18 = 0xC;
        var_r6->unk1A = 0xFF;
        var_r6->unk1C = 0;
        var_r6->unk10 = temp_r0_2;
        var_r6->unk14 = 0x06B80000;
        var_r6->unk1F = 0xFF;
        var_r6->unk22 = 0;
        var_r6->unk2A = 0;
        var_r4 = var_r5 + 1;
        var_r7 = (GenObj *)((u8 *)var_r6 + 0x2C);
        if (arg0->unk1424 == 0) {
            if ((arg0->unk140E == 1) && (var_r5 == 2)) {
                var_r0 = (GenObj *)((u8 *)var_r6 + 0x27);
                do {
                    *var_r0 = 0;
                    var_r0 -= 1;
                } while ((s32) var_r0 >= (s32) ((GenObj *)((u8 *)var_r6 + 0x24)));
            } else {
                var_r2 = 0;
                var_r4 = var_r5 + 1;
                var_r7 = (GenObj *)((u8 *)var_r6 + 0x2C);
                do {
                    *((u8 *)(GenObj *)((u8 *)var_r6 + 0x24) + var_r2) = *(var_r2 + (var_r6->unk20 * 4) + &gUnk_080FA99E);
                    var_r2 += 1;
                } while (var_r2 <= 3);
            }
        }
        var_r5 = var_r4;
        var_r6 = var_r7;
    } while (var_r5 <= 3);
}
