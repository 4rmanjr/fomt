# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805CF70/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805CF70/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805CF70/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805CF70/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805CF70/opencode/func.c" 2
s32 __builtin_new(s32);
s32 func_08007128(void *);
s32 func_0800736C(void *);
s32 func_0800770C(s32 *);
s32 func_08007714(s32 *, s32);
s32 func_08007874(void *);
s32 func_08007B54(void *, s32);
s32 func_0800835C(s32 *);
s32 func_08008364(s32 *, s32);
s32 func_080084DC(void *);
s32 func_08008B54(void *, s32);
s32 func_08050CC0(s32, s32, s32, s32, s32, s32 *, s32 *);
s32 func_0805E6CC(void *, s32 *);
s32 func_0805E824(void *, void *, s32, s32);
extern s32 gUnk_08527094;
extern s32 gUnk_08728208;
extern s32 vtable_unk_080E799C;
extern s32 vtable_unk_080E79A8;

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk2;
    struct GenObj *unk4;
    struct GenObj *unk6;
    struct GenObj *unk8;
    struct GenObj *unkC;
    struct GenObj *unk10;
    struct GenObj *unk11;
    struct GenObj *unk14;
    struct GenObj *unk18;
    struct GenObj *unk1C;
    u8 _pad20[116];
    s32 unk94;
    u8 _pad98[48];
    s32 unkC8;
    u8 _padCC[48];
    s32 unkFC;
    u8 _pad100[24];
    s32 unk118;
    u8 _pad11C[48];
    s32 unk14C;
    u8 _pad150[2432];
    s32 unkAD0;
    u8 _padAD4[24];
    void *unkAEC;
    u8 _padAF0[8536];
    s32 unk2C48;
} GenObj;
void *func_0805CF70(GenObj *arg0, void *arg1) {
s32 spC;
s32 sp10;
s32 sp14;
    s32 temp_r6;
    u32 temp_r0_4;
    GenObj *temp_r0;
    GenObj *temp_r0_2;
    GenObj *temp_r0_3;
    void *temp_r4;
    GenObj *temp_r4_2;
    GenObj *temp_r4_3;
    GenObj *temp_r4_4;
    GenObj *temp_r4_5;
    GenObj *temp_r4_6;
    GenObj *temp_r4_7;
    void *temp_r6_2;

    sp14 = 0x1E;
    sp14.unk2 = 1;
    func_080084DC(arg0);
    arg0->unk4 = &vtable_unk_080E799C;
    arg0->unk8 = arg1;
    arg0->unkC = 0;
    temp_r6 = __builtin_new(4);
    func_0800835C(&spC);
    func_0800770C(&sp10);
    arg0->unk10 = func_08050CC0(temp_r6, 0, 0x1F, 0, arg0->unkC, &spC, &sp10);
    func_08007714(&sp10, 2);
    func_08008364(&spC, 2);
    func_08008B54((GenObj *)((u8 *)arg0 + 0x14), 1);
    func_08008B54((GenObj *)((u8 *)arg0 + 0x18), 0);
    func_08008B54((GenObj *)((u8 *)arg0 + 0x1C), 2);
    temp_r4 = (GenObj *)((u8 *)arg0 + 0x20);
    func_0805E6CC(temp_r4, &gUnk_08527094);
    temp_r6_2 = (GenObj *)((u8 *)arg0 + 0x50);
    func_0805E6CC(temp_r6_2, &gUnk_08728208);
    func_0805E824((GenObj *)((u8 *)arg0 + 0x80), temp_r4, 0, 0x100);
    temp_r0 = (GenObj *)((u8 *)arg0 + 0x94);
    arg0->unk94 = 0;
    temp_r0->unk2 = 0;
    temp_r0->unk4 = 0;
    temp_r0->unk6 = 0;
    temp_r0->unk8 = 0;
    temp_r0->unkC = 0;
    temp_r0->unk10 = 0;
    temp_r0->unk11 = 0;
    temp_r0->unk14 = 0;
    temp_r0->unk18 = 0;
    temp_r0->unk1C = 0;
    func_0805E824((GenObj *)((u8 *)temp_r0 + 0x1C) + 4, temp_r4, 1, 0x100);
    temp_r0_2 = (GenObj *)((u8 *)arg0 + 0xC8);
    arg0->unkC8 = 0;
    temp_r0_2->unk2 = 0;
    temp_r0_2->unk4 = 0;
    temp_r0_2->unk6 = 0;
    temp_r0_2->unk8 = 0;
    temp_r0_2->unkC = 0;
    temp_r0_2->unk10 = 0;
    temp_r0_2->unk11 = 0;
    temp_r0_2->unk14 = 0;
    temp_r0_2->unk18 = 0;
    temp_r0_2->unk1C = 0;
    func_0805E824((GenObj *)((u8 *)temp_r0_2 + 0x1C) + 4, temp_r6_2, 0, 0x100);
    temp_r0_3 = (GenObj *)((u8 *)arg0 + 0xFC);
    arg0->unkFC = 0;
    temp_r0_3->unk2 = 0;
    temp_r0_3->unk4 = 0;
    temp_r0_3->unk6 = 0;
    temp_r0_3->unk8 = 0;
    temp_r0_3->unkC = 0;
    temp_r0_3->unk10 = 0;
    temp_r0_3->unk11 = 0;
    temp_r0_3->unk14 = 0;
    temp_r0_3->unk18 = 0;
    arg0->unk118 = 0;
    temp_r4_2 = (GenObj *)((u8 *)arg0 + 0x11C);
    func_08007874(temp_r4_2);
    temp_r4_2->unk4 = func_08007B54(temp_r4_2, 7);
    temp_r4_3 = (GenObj *)((u8 *)arg0 + 0x124);
    func_08007128(temp_r4_3);
    temp_r4_3->unk4 = func_0800736C(temp_r4_3);
    temp_r4_4 = (GenObj *)((u8 *)arg0 + 0x12C);
    func_08007874(temp_r4_4);
    temp_r4_4->unk4 = func_08007B54(temp_r4_4, 4);
    temp_r4_5 = (GenObj *)((u8 *)arg0 + 0x134);
    func_08007128(temp_r4_5);
    temp_r4_5->unk4 = func_0800736C(temp_r4_5);
    temp_r4_6 = (GenObj *)((u8 *)arg0 + 0x13C);
    func_08007874(temp_r4_6);
    temp_r4_6->unk4 = func_08007B54(temp_r4_6, 2);
    temp_r4_7 = (GenObj *)((u8 *)arg0 + 0x144);
    func_08007128(temp_r4_7);
    temp_r4_7->unk4 = func_0800736C(temp_r4_7);
    arg0->unkAEC = &vtable_unk_080E79A8;
    ((GenObj *)((u8 *)arg0 + 0xAEC))->unk4 = 0;
    temp_r0_4 = (u32) (arg0->unk8->unk2C48 << 0xD) >> 0xF;
    arg0->unkAD0 = temp_r0_4;
    if ((s32) temp_r0_4 > 0x1869F) {
        arg0->unkAD0 = 0x1869FU;
    }
    arg0->unk14C = 0;
    return arg0;
}
