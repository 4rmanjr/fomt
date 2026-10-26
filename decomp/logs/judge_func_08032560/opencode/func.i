# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08032560/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08032560/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08032560/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08032560/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08032560/opencode/func.c" 2
s32 func_080A49A0(void *, s32, s32, void **, s32, s32);
s32 func_080A4A00(void *, s32, s32, void **, s32, s32);
extern s32 vtable_unk_080E68B4;

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk1;
    void *unk4;
    u8 _pad8[24];
    s32 unk20;
    s32 unk22;
    u8 _pad26[98];
    s32 unk88;
} GenObj;
void *func_08032560(GenObj *arg0, GenObj *arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5, s32 arg6, u8 arg7, u8 arg8) {
    s32 sp8;
    u8 spC;
    s32 sp10;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r3;
    u8 temp_r8;
    GenObj *temp_r0;
    void *temp_r0_2;

    temp_r8 = arg8;
    arg0->unk0 = arg1;
    arg0->unk4 = &vtable_unk_080E68B4;
    temp_r1 = (*arg1->unk0)->unk68();
    sp8 = arg4;
    spC = temp_r8;
    func_080A49A0((GenObj *)((u8 *)arg0 + 8), temp_r1, arg1->unk22 + arg1->unk20, arg1->unk0, arg2, arg3);
    temp_r1_2 = (*arg1->unk0)->unk6C();
    sp8 = 0;
    func_080A4A00((GenObj *)((u8 *)arg0 + 0x48), temp_r1_2, 0, arg1->unk0, 2, 0xE);
    temp_r0 = (GenObj *)((u8 *)arg0 + 0x88);
    arg0->unk88 = (u8) arg5;
    temp_r0_2 = (GenObj *)((u8 *)temp_r0 + 1);
    temp_r0->unk1 = 0;
    temp_r3 = arg6 * 4;
    sp10 = temp_r3;
    temp_r0_2->unk1 = (s8) temp_r3;
    (temp_r0_2 + 1)->unk1 = (u8) arg7;
    return arg0;
}
