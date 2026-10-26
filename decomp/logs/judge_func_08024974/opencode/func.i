# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08024974/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08024974/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08024974/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08024974/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08024974/opencode/func.c" 2
s32 SetAnim__12AActorEntityUi(void *);
s32 __12RucksackItem(void *);
s32 func_0802B908();
s32 func_0802C2DC(void *);
u16 func_0802D158(void *);
extern s32 gUnk_080F0E80;
extern s32 vtable_unk_080E6658;

typedef struct GenObj {
    u8 _pad0[1];
    struct GenObj *unk1;
    struct GenObj *unk2;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    struct GenObj *unkD;
    struct GenObj *unk10;
    struct GenObj *unk14;
    u8 _pad18[10];
    s32 unk22;
    u8 _pad26[14];
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk3F;
    s32 unk40;
    u8 _pad44[28];
    s32 unk60;
    u8 _pad64[20];
    s32 unk78;
    s32 unk7C;
    s32 unk80;
    u8 _pad84[34];
    s32 unkA6;
    u8 _padAA[8];
    s32 unkB2;
    s32 unkB3;
} GenObj;
void *func_08024974(GenObj *arg0, s32 arg2) {
    GenObj *temp_r0;
    GenObj *temp_r0_10;
    void *temp_r0_11;
    void *temp_r0_12;
    void *temp_r0_13;
    void *temp_r0_14;
    void *temp_r0_15;
    GenObj *temp_r0_2;
    void *temp_r0_3;
    GenObj *temp_r0_4;
    GenObj *temp_r0_5;
    void *temp_r0_6;
    GenObj *temp_r0_7;
    void *temp_r0_8;
    void *temp_r0_9;
    GenObj *temp_r6;

    func_0802B908();
    arg0->unk14 = &vtable_unk_080E6658;
    arg0->unk34 = arg2;
    arg0->unk38 = (s32) (arg2 + 0x1BD8);
    temp_r0 = (GenObj *)((u8 *)arg0 + 0x3C);
    arg0->unk3C = 0;
    temp_r0->unk1 = 0;
    ((GenObj *)((u8 *)temp_r0 + 1))->unk1 = 0;
    arg0->unk3F = 0xF;
    temp_r0_2 = (GenObj *)((u8 *)arg0 + 0x40);
    arg0->unk40 = 0;
    temp_r0_3 = (GenObj *)((u8 *)temp_r0_2 + 1);
    temp_r0_2->unk1 = 0;
    temp_r0_3->unk1 = 0;
    (temp_r0_3 + 1)->unk2 = 0;
    temp_r6 = (GenObj *)((u8 *)arg0 + 0x60);
    arg0->unk60 = &gUnk_080F0E80;
    temp_r6->unk4 = 0;
    __12RucksackItem((GenObj *)((u8 *)arg0 + 0x68));
    temp_r6->unkC = 0;
    temp_r6->unkD = 0;
    temp_r6->unk10 = 0x3B;
    temp_r6->unk14 = 0;
    temp_r0_4 = (GenObj *)((u8 *)arg0 + 0x78);
    arg0->unk78 = 0;
    temp_r0_4->unk1 = 0;
    ((GenObj *)((u8 *)temp_r0_4 + 1))->unk1 = 0;
    arg0->unk7C = 0xFFFF;
    temp_r0_5 = (GenObj *)((u8 *)arg0 + 0x80);
    arg0->unk80 = 0;
    temp_r0_6 = (GenObj *)((u8 *)temp_r0_5 + 8);
    temp_r0_5->unk8 = 0;
    temp_r0_6->unk1 = 0;
    temp_r0_6->unk4 = 0;
    temp_r0_6->unk8 = 0;
    temp_r0_6->unkC = 0;
    temp_r0_6->unk10 = 0;
    temp_r0_6->unk14 = 0;
    temp_r0_6->unk18 = 0;
    ((GenObj *)((u8 *)arg0 + 0x7C))->unk28 = 1;
    temp_r0_7 = (GenObj *)((u8 *)arg0 + 0xA6);
    arg0->unkA6 = 0;
    temp_r0_8 = (GenObj *)((u8 *)temp_r0_7 + 2);
    temp_r0_7->unk2 = -1;
    temp_r0_9 = temp_r0_8 + 4;
    temp_r0_8->unk4 = -1;
    temp_r0_9->unk4 = 0;
    (temp_r0_9 + 4)->unk1 = 0;
    arg0->unkB2 = 0x64;
    temp_r0_10 = (GenObj *)((u8 *)arg0 + 0xB3);
    arg0->unkB3 = 0;
    temp_r0_11 = (GenObj *)((u8 *)temp_r0_10 + 1);
    temp_r0_10->unk1 = 0;
    temp_r0_12 = temp_r0_11 + 0xC;
    temp_r0_11->unkC = 0;
    temp_r0_13 = temp_r0_12 + 1;
    temp_r0_12->unk1 = 0;
    temp_r0_14 = temp_r0_13 + 1;
    temp_r0_13->unk1 = 0;
    temp_r0_15 = temp_r0_14 + 1;
    temp_r0_14->unk1 = 0;
    temp_r0_15->unk1 = 0;
    (temp_r0_15 + 1)->unk1 = 0;
    func_0802C2DC(arg0);
    if (arg0->unk22 != func_0802D158(arg0)) {
        SetAnim__12AActorEntityUi(arg0);
    }
    return arg0;
}
