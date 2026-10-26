# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08013D04/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08013D04/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08013D04/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08013D04/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08013D04/opencode/func.c" 2
s32 **__builtin_new(s32);
extern s32 vtable_unk_080E5C14;
extern s32 vtable_unk_080E5C24;
extern s32 vtable_unk_080E5E44;

typedef struct GenObj {
    u8 _pad0[1];
    struct GenObj *unk1;
    struct GenObj *unk2;
    struct GenObj *unk3;
    struct GenObj *unk4;
    u8 _pad8[132];
    struct GenObj *unk8C;
    u8 _pad90[12];
    struct GenObj *unk9C;
    u8 _padA0[4];
    struct GenObj *unkA4;
} GenObj;
void func_08013D04(GenObj *arg0, u8 arg1) {
    s32 **temp_r0;
    s32 **temp_r0_3;
    s32 **temp_r1;
    s32 temp_r0_2;
    s32 temp_r6;
    u8 temp_r4;
    GenObj *temp_r4_2;
    GenObj *temp_r7;

    temp_r4 = arg1;
    temp_r7 = arg0->unk4;
    temp_r0 = __builtin_new(0x10);
    temp_r6 = ((s32) ((0 - temp_r4) | temp_r4) >> 0x1F) & 2;
    temp_r0_2 = temp_r7->unk8C;
    temp_r0->unk0 = &vtable_unk_080E5C14;
    temp_r0->unk4 = temp_r0_2;
    temp_r0_3 = __builtin_new(0x14);
    temp_r0_3->unk0 = &vtable_unk_080E5E44;
    temp_r0_3->unk4 = 0;
    temp_r4_2 = temp_r0_3 + 6;
    temp_r0_3->unk6 = (u16) ((0xFFFFFC00 & temp_r0_3->unk6) | 0x234);
    temp_r4_2->unk1 = (u8) (3 & temp_r4_2->unk1);
    temp_r4_2->unk2 = (u16) (0xFFFFFC00 & temp_r4_2->unk2);
    temp_r4_2->unk3 = (u8) (3 & temp_r4_2->unk3);
    temp_r4_2->unk4 = (u16) (0xFFFFFC00 & temp_r4_2->unk4);
    temp_r0_3->unk0 = &vtable_unk_080E5C24;
    temp_r0_3->unkC = temp_r0_2;
    temp_r0_3->unk10 = temp_r6;
    temp_r0->unk8 = temp_r0_3;
    temp_r0->unkC = temp_r6;
    temp_r1 = temp_r7->unkA4;
    if ((temp_r0 != temp_r1) && (temp_r1 != 0)) {
        (*temp_r1)->unk8(temp_r1, 3);
    }
    temp_r7->unkA4 = temp_r0;
    temp_r7->unk9C = 0x18;
}
