# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805E6CC/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805E6CC/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805E6CC/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805E6CC/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805E6CC/opencode/func.c" 2
extern s32 vtable_unk_080E79C8;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk22;
    s32 unk24;
    s32 unk26;
    s32 unk28;
    s32 unk2A;
    s32 unk2C;
} GenObj;
void *func_0805E6CC(GenObj *arg0, u16 *arg1) {
    u16 *temp_r1;
    u16 *temp_r1_10;
    u16 *temp_r1_11;
    u16 *temp_r1_12;
    u16 *temp_r1_2;
    u16 *temp_r1_3;
    u16 *temp_r1_4;
    u16 *temp_r1_5;
    u16 *temp_r1_6;
    u16 *temp_r1_7;
    u16 *temp_r1_8;
    u16 *temp_r1_9;

    arg0->unk0 = &vtable_unk_080E79C8;
    if (arg1 != 0) {
        arg0->unk20 = (u16) *arg1;
        temp_r1 = arg1 + 4;
        arg0->unk4 = temp_r1;
        temp_r1_2 = temp_r1 + (arg0->unk20 * 4);
        arg0->unk22 = (u16) *temp_r1_2;
        temp_r1_3 = temp_r1_2 + 4;
        arg0->unk8 = temp_r1_3;
        temp_r1_4 = temp_r1_3 + (arg0->unk22 * 0x10);
        arg0->unk24 = (u16) *temp_r1_4;
        temp_r1_5 = temp_r1_4 + 4;
        arg0->unkC = temp_r1_5;
        temp_r1_6 = temp_r1_5 + (arg0->unk24 * 8);
        arg0->unk26 = (u16) *temp_r1_6;
        temp_r1_7 = temp_r1_6 + 4;
        arg0->unk10 = temp_r1_7;
        temp_r1_8 = temp_r1_7 + (arg0->unk26 << 5);
        arg0->unk28 = (u16) *temp_r1_8;
        temp_r1_9 = temp_r1_8 + 4;
        arg0->unk14 = temp_r1_9;
        temp_r1_10 = temp_r1_9 + (arg0->unk28 << 5);
        arg0->unk2A = (u16) *temp_r1_10;
        temp_r1_11 = temp_r1_10 + 4;
        arg0->unk18 = temp_r1_11;
        temp_r1_12 = temp_r1_11 + (arg0->unk2A * 8);
        arg0->unk2C = (u16) *temp_r1_12;
        arg0->unk1C = (u16 *) (temp_r1_12 + 4);
    } else {
        arg0->unk20 = (u16) arg1;
        arg0->unk4 = arg1;
        arg0->unk22 = (u16) arg1;
        arg0->unk8 = arg1;
        arg0->unk24 = (u16) arg1;
        arg0->unkC = arg1;
        arg0->unk26 = (u16) arg1;
        arg0->unk10 = arg1;
        arg0->unk28 = (u16) arg1;
        arg0->unk14 = arg1;
        arg0->unk2A = (u16) arg1;
        arg0->unk18 = arg1;
        arg0->unk2C = (u16) arg1;
        arg0->unk1C = arg1;
    }
    return arg0;
}
