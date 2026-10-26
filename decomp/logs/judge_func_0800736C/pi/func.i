# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0800736C/pi/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0800736C/pi/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0800736C/pi/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0800736C/pi/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0800736C/pi/func.c" 2
extern void *gUnk_03000404;

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk2;
} GenObj;
s32 func_0800736C(void) {
    s32 temp_r4;
    s32 var_r2;
    u32 var_r0;
    GenObj *temp_r1;
    GenObj *temp_r3;

    temp_r3 = gUnk_03000404->unk0;
    if ((temp_r3 != 0) && (gUnk_03000404->unk0 = (void *) temp_r3->unk0, (temp_r3 != 0))) {
        temp_r4 = (s32) ((temp_r3 - 4) - gUnk_03000404) >> 2;
        if ((u32) temp_r4 <= 0xFU) {
            gUnk_03000404->unk44 = (s32) (gUnk_03000404->unk44 | (1 << (0x1F & temp_r4)));
        }
        temp_r1 = gUnk_03000404 + 0x48;
        gUnk_03000404->unk48 = (u16) (gUnk_03000404->unk48 + 1);
        temp_r3->unk0 = 1;
        var_r0 = temp_r1->unk2 + 1;
        if (var_r0 > 0xFFFFU) {
            var_r0 = 1;
        }
        temp_r3->unk2 = (u16) var_r0;
        temp_r1->unk2 = (u16) var_r0;
        var_r2 = (temp_r4 & 0xF) | ((u16) temp_r3->unk2 * 0x10);
    } else {
        var_r2 = 0;
    }
    return var_r2;
}
