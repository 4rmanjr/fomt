# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08037D74/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08037D74/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08037D74/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08037D74/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08037D74/opencode/func.c" 2
s32 func_030004DC(s32, s32, s32, s32, s32, void *, s32, s32, void *);
s32 func_080A480C(void *, s32, void *);
s32 func_080A4944(void *, void *, s32);

typedef struct GenObj {
    s32 unk0;
    u8 _pad4[4];
    s32 unk8;
    struct GenObj *unkA;
    struct GenObj *unkC;
    struct GenObj *unkE;
    s32 unk10;
    u8 _pad14[52];
    struct GenObj *unk48;
} GenObj;
void func_08037D74(GenObj *arg0, GenObj *arg1) {
    s32 sp14;
    s32 sp18;
    s16 temp_r2;
    s32 temp_r1;
    s32 temp_r3_2;
    s32 var_r0;
    GenObj *temp_r3;
    GenObj *temp_r5;
    void *temp_r6;

    temp_r3 = arg0->unk0;
    temp_r2 = temp_r3->unkE;
    temp_r3_2 = arg1->unk8;
    sp14 = arg1->unk0;
    sp18 = temp_r3_2;
    temp_r5 = (GenObj *)((u8 *)arg0 + 8);
    temp_r6 = (GenObj *)((u8 *)arg0 + 0x30);
    temp_r1 = arg0->unk10;
    if ((s32) ((0 - temp_r1) | temp_r1) < 0) {
        var_r0 = func_030004DC(temp_r3_2, temp_r3->unkA - arg1->unkC, temp_r2 - arg1->unkE, 0xAA, 0x8000 - temp_r2, temp_r6, arg0->unk8, (s32) temp_r5->unkC, (GenObj *)((u8 *)arg0 + 0x18));
    } else {
        var_r0 = 0;
    }
    if ((var_r0 != 0) && (temp_r5->unk48 != 0)) {
        func_080A480C(temp_r5, sp14, temp_r6 + 8);
        func_080A4944(temp_r5, temp_r6 + 0x10, 1);
        temp_r5->unk48 = 0U;
    }
}
