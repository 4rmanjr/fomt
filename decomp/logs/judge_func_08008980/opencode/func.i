# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08008980/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08008980/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08008980/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08008980/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08008980/opencode/func.c" 2
void *__builtin_new(s32);
s32 func_08008D84();
s32 func_08008D9C();
s32 func_080095C0(void *, void *);
s32 func_080D78F8(void *, void **);
extern s32 vtable_unk_080E5B0C;
extern s32 vtable_unk_080E5B18;
extern s32 vtable_unk_080E5B60;
extern s32 vtable_unk_080E5B70;
extern s32 vtable_unk_080E5B90;
extern s32 vtable_unk_080E5BB4;
extern s32 vtable_unk_080E5BD8;

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    struct GenObj *unk10;
    struct GenObj *unk14;
    u8 _pad18[4];
    s32 unk1C;
    u8 _pad20[8];
    s32 unk28;
    u8 _pad2C[4];
    struct GenObj *unk30;
    s32 unk34;
    u8 _pad38[12];
    s32 unk44;
    u8 _pad48[32];
    s32 unk68;
} GenObj;
void **func_08008980(void **arg0) {
    void *sp0;
    s8 temp_r0_3;
    GenObj *temp_r0;
    void *temp_r0_2;
    GenObj *temp_r1;
    GenObj *temp_r1_2;
    GenObj *temp_r1_3;
    GenObj *temp_r5;
    GenObj *temp_r7;

    temp_r0 = __builtin_new(0x6C);
    temp_r0->unk0 = 0;
    temp_r0->unk4 = 0;
    temp_r0->unk8 = &vtable_unk_080E5B70;
    temp_r5 = (GenObj *)((u8 *)temp_r0 + 0xC);
    temp_r0->unkC = 0;
    temp_r5->unk4 = 0;
    temp_r5->unk8 = &vtable_unk_080E5BB4;
    temp_r1 = (GenObj *)((u8 *)temp_r0 + 0x1C);
    temp_r5->unkC = temp_r1;
    temp_r0->unk1C = 0;
    temp_r1->unk4 = 0;
    temp_r1->unk8 = &vtable_unk_080E5BD8;
    temp_r5->unk10 = (void *) ((GenObj *)((u8 *)temp_r0 + 0x18));
    temp_r5->unk14 = temp_r1;
    temp_r5->unk8 = &vtable_unk_080E5B90;
    temp_r1_2 = (GenObj *)((u8 *)temp_r0 + 0x28);
    temp_r0->unk28 = 0;
    temp_r1_2->unk4 = 0;
    temp_r1_2->unk8 = &vtable_unk_080E5B60;
    temp_r7 = (GenObj *)((u8 *)temp_r0 + 0x34);
    temp_r0->unk34 = 0;
    temp_r7->unk4 = 0;
    temp_r7->unk8 = &vtable_unk_080E5BB4;
    temp_r1_3 = (GenObj *)((u8 *)temp_r0 + 0x44);
    temp_r7->unkC = temp_r1_3;
    temp_r0->unk44 = 0;
    temp_r1_3->unk4 = 0;
    temp_r1_3->unk8 = &vtable_unk_080E5BD8;
    temp_r0_2 = (GenObj *)((u8 *)temp_r0 + 0x40);
    temp_r7->unk10 = temp_r0_2;
    temp_r7->unk14 = temp_r1_3;
    temp_r7->unk8 = &vtable_unk_080E5B90;
    sp0 = temp_r7;
    func_080D78F8(temp_r0_2 + 0x10, &sp0);
    temp_r7->unk30 = &vtable_unk_080E5B0C;
    temp_r7->unk8 = &vtable_unk_080E5B18;
    temp_r0_3 = func_08008D9C() ^ 1;
    temp_r0->unk68 = temp_r0_3;
    if ((temp_r0_3 << 0x18) != 0) {
        func_08008D84();
    }
    func_080095C0(temp_r7, temp_r0);
    func_080095C0(temp_r7, temp_r5);
    func_080095C0(temp_r7, temp_r1_2);
    *arg0 = temp_r0;
    return arg0;
}
