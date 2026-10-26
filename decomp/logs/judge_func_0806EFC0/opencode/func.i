# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806EFC0/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806EFC0/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806EFC0/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806EFC0/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806EFC0/opencode/func.c" 2
void *func_08008918(void *);
s32 func_08008920(void *);
s32 func_0805E8F0(void *);
s32 func_08075AE8(void *, s32, s16 *, s32, s32);
s32 memcpy(s16 *, s16 *, s32);

typedef struct GenObj {
    u8 _pad0[12];
    struct GenObj *unkC;
    s32 unk10;
    s32 unk14;
    s32 unk16;
    s32 unk18;
    s32 unk1A;
    s32 unk1C;
    s32 unk1E;
    u8 _pad22[46];
    s32 unk50;
    s32 unk54;
    u8 _pad58[12];
    s32 unk64;
    s32 unk68;
    u8 _pad6C[12];
    s32 unk78;
    s32 unk7C;
    u8 _pad80[12];
    s32 unk8C;
    s32 unk90;
} GenObj;
void func_0806EFC0(GenObj *arg0, s32 arg1, s32 arg2) {
    s16 sp4;
    s16 sp8;
    GenObj *sp28;
    s32 temp_r8;
    s32 var_r0;
    s32 var_r1;
    s32 var_r6;
    s32 var_r7;
    u32 temp_r1;
    u32 temp_r2;
    void **temp_r1_2;
    void **temp_r1_3;
    void **temp_r1_4;
    void **temp_r1_5;
    GenObj *temp_r3;
    GenObj *temp_r4;

    var_r7 = arg0->unk10 + arg2;
    if (var_r7 < 0) {
        var_r7 = 0;
    } else if (var_r7 > 0xC000) {
        var_r7 = 0xC000;
    }
    var_r6 = arg0->unk14 + arg1;
    if (var_r6 < 0) {
        var_r6 = 0;
    } else if (var_r6 > 0x11000) {
        var_r6 = 0x11000;
    }
    temp_r3 = func_08008918(arg0);
    var_r0 = var_r7;
    if (var_r7 < 0) {
        var_r0 += 0xFF;
    }
    temp_r2 = (u32) (var_r0 << 8) >> 0x10;
    var_r1 = var_r6;
    if (var_r6 < 0) {
        var_r1 += 0xFF;
    }
    temp_r1 = (u32) (var_r1 << 8) >> 0x10;
    sp4 = (s16) temp_r2;
    temp_r3->unk1E = (s16) temp_r2;
    sp4 = (s16) temp_r2;
    temp_r3->unk1A = (s16) temp_r2;
    sp4 = (s16) temp_r2;
    temp_r3->unk16 = (s16) temp_r2;
    sp4 = (s16) temp_r1;
    temp_r3->unk1C = (s16) temp_r1;
    sp4 = (s16) temp_r1;
    temp_r3->unk18 = (s16) temp_r1;
    sp4 = (s16) temp_r1;
    temp_r3->unk14 = (s16) temp_r1;
    temp_r4 = (GenObj *)((u8 *)arg0 + 0x50);
    func_0805E8F0(temp_r4);
    func_0805E8F0();
    sp28 = (GenObj *)((u8 *)arg0 + 0x78);
    func_0805E8F0();
    func_0805E8F0();
    temp_r8 = func_08008920(arg0);
    if (var_r7 > 0) {
        temp_r1_2 = arg0->unk50;
        (*temp_r1_2)->unk10(&sp8, temp_r1_2, *(arg0->unk54 + (temp_r4->unkC * 4)));
        memcpy(&sp8, &sp8, 0x20);
        func_08075AE8((GenObj *)((u8 *)arg0 + 0x18), temp_r8, &sp8, 0x74, 0);
    }
    if (var_r7 <= 0xBFFF) {
        temp_r1_3 = arg0->unk64;
        (*temp_r1_3)->unk10(&sp4, temp_r1_3, *(arg0->unk68 + (((GenObj *)((u8 *)arg0 + 0x64))->unkC * 4)));
        memcpy(&sp4, &sp4, 0x20);
        func_08075AE8((GenObj *)((u8 *)arg0 + 0x18), temp_r8, &sp4, 0x74, 0x98);
    }
    if (var_r6 <= 0x10FFF) {
        temp_r1_4 = arg0->unk78;
        (*temp_r1_4)->unk10(&sp4, temp_r1_4, *(arg0->unk7C + (sp28->unkC * 4)));
        memcpy(&sp4, &sp4, 0x20);
        func_08075AE8((GenObj *)((u8 *)arg0 + 0x18), temp_r8, &sp4, 0xE8, 0x4C);
    }
    if (var_r6 > 0) {
        temp_r1_5 = arg0->unk8C;
        (*temp_r1_5)->unk10(&sp4, temp_r1_5, *(arg0->unk90 + (((GenObj *)((u8 *)arg0 + 0x8C))->unkC * 4)));
        memcpy(&sp4, &sp4, 0x20);
        func_08075AE8((GenObj *)((u8 *)arg0 + 0x18), temp_r8, &sp4, 0, 0x4C);
    }
    arg0->unk10 = var_r7;
    arg0->unk14 = var_r6;
}
