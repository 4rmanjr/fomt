# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08057F64/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08057F64/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08057F64/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08057F64/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08057F64/opencode/func.c" 2
s32 rand();
extern s32 gUnk_080FA71C;
extern s32 gUnk_080FA728;

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk1;
    struct GenObj *unk2;
    struct GenObj *unk4;
    u8 _pad8[36];
    s32 unk2C;
    s32 unk2E;
} GenObj;
void func_08057F64(GenObj *arg0, u32 arg1) {
    GenObj *sp0;
    s32 sp4;
    u8 *sp8;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 var_r1;
    s32 var_r4;
    s32 var_sb;
    GenObj *var_r7;

    sp0 = arg0;
    if ((3 & arg0->unk2C) == 2) {
        var_r1 = ((u8) sp0->unk2E >> 5) & 1;
    } else {
        var_r1 = 0;
    }
    sp4 = var_r1;
    var_r7 = (GenObj *)((u8 *)sp0 + 0xC);
    var_sb = 0;
    sp8 = (GenObj *)((u8 *)sp0 + 0x2C);
    do {
        if (sp4 == 0) {
            goto block_5;
        }
        switch (arg1) {
        case 3:
        case 1:
block_5:
            var_r4 = var_sb;
            break;
        case 2:
            var_r4 = 4;
            break;
        case 4:
            var_r4 = 5;
            break;
        default:
            var_r4 = 6;
            break;
        }
        temp_r4 = var_r4 * 0x10;
        temp_r6 = *((u8 *)temp_r4 + &gUnk_080FA71C);
        temp_r5 = *((u8 *)temp_r4 + (&gUnk_080FA71C + 4));
        var_r7->unk0 = (u8) ((rand() % (s32) (temp_r5 - temp_r6)) + temp_r6);
        temp_r6_2 = *((u8 *)temp_r4 + (&gUnk_080FA71C + 8));
        temp_r5_2 = *((u8 *)temp_r4 + &gUnk_080FA728);
        var_r7->unk1 = (s8) ((rand() % (s32) (temp_r5_2 - temp_r6_2)) + temp_r6_2);
        var_r7->unk2 = (u8) *(sp0 + (((u32) (*sp8 << 0x1E) >> 0x1C) + var_sb));
        temp_r0 = 0xFA - var_r7->unk0;
        temp_r4_2 = (s32) (temp_r0 * temp_r0) / 1000;
        var_r7->unk4 = (s16) (temp_r4_2 + ((rand() & 3) + 1));
        var_sb += 1;
        var_r7 += 8;
    } while (var_sb <= 3);
}
