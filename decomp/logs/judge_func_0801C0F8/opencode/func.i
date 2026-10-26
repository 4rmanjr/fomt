# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801C0F8/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801C0F8/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801C0F8/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801C0F8/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801C0F8/opencode/func.c" 2
typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk2;
    s32 unk3;
    s32 unk4;
    s32 unk6;
    s32 unk8;
    s32 unkA;
    u8 _padE[4138];
    s32 unk1038;
} GenObj;
s32 func_0801C0F8(GenObj *arg0, GenObj *arg1, GenObj *arg2) {
    s16 var_r0;
    s16 var_r0_2;
    s32 temp_r0;
    s32 temp_r2;
    s32 var_r7;
    u32 temp_r2_2;
    u32 temp_r3;

    var_r7 = 0;
    if (((u32) (arg1->unk0 << 0x16) >> 0x16) == 2) {
        var_r0 = ((arg1->unk2 & 0x3FF) << 6) | ((u8) arg1->unk1 >> 2);
        if ((s32) var_r0 < 0) {
            var_r0 += 7;
        }
        temp_r2 = var_r0 >> 3;
        var_r0_2 = ((arg1->unk4 & 0x3FF) << 6) | ((u8) arg1->unk3 >> 2);
        if ((s32) var_r0_2 < 0) {
            var_r0_2 += 7;
        }
        temp_r0 = var_r0_2 >> 3;
        if (((u32) temp_r2 >= 0x22U) && ((u32) temp_r0 >= 0x16U) && ((u32) temp_r2 <= 0x77U) && ((u32) temp_r0 <= 0x47U)) {
            temp_r3 = (u32) (temp_r2 - 0x22) >> 1;
            temp_r2_2 = (u32) (temp_r0 - 0x16) >> 1;
            arg2->unk0 = (s32) (arg0->unk1038 + 0x9DC + ((temp_r3 + (temp_r2_2 * 0x2B)) * 4));
            arg2->unk4 = (s16) ((temp_r3 * 2) + 0x22);
            arg2->unk6 = (s16) ((temp_r2_2 * 2) + 0x16);
            arg2->unk8 = (s16) temp_r3;
            arg2->unkA = (s16) temp_r2_2;
            var_r7 = 1;
        }
    }
    return var_r7;
}
