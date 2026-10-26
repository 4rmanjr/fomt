# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804EC84/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804EC84/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804EC84/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804EC84/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
typedef struct { u8 pad[0x24]; u8 v; } S_AD0;
typedef struct { u8 pad[0x25]; u8 v; } S_AD8;
typedef struct { u8 pad[0x26]; u8 v; } S_AE0;
typedef struct { u8 pad[0x14]; u8 v; } S_CD8;
typedef struct { u8 pad[3]; u8 v; } S_39C;
typedef struct { u8 pad[0x58]; u8 v; } S_601C;
typedef struct { u8 pad[0x14]; u8 v; } S_B68;
typedef struct { u8 pad[0x26]; u8 v; } S_AEC;
typedef struct { u8 pad[0xB30]; u8 v; } S_44E0;
typedef struct { u8 pad[0x92C]; u8 v; } S_4D8;
typedef struct {
    s32 unk0;
    s32 unk4;
    void (*unk8)(void *, s32);
} Vtbl;
typedef struct {
    Vtbl *vtbl;
} Obj;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804EC84/opencode/func.c" 2
void func_0804EC84(u32 arg0, u8 *arg1, u32 arg2, ? arg3) {
s32 sp0;
    s32 var_r4_2;
    u32 var_r4;
    u32 var_r5;
    u32 var_r6;
    u8 *var_r7;

    var_r7 = arg1;
    var_r4 = 0;
    var_r5 = arg0;
    if ((s32) var_r5 < 0) {
        var_r5 = 0 - var_r5;
    }
    var_r6 = 1;
loop_3:
    *((u8 *)var_r4 + sp) = ((s32) var_r5 % 10) + 0x30;
    var_r4 = var_r6;
    var_r5 = (u32) ((s32) var_r5 / 10);
    if ((s32) var_r5 > 0) {
        var_r6 = var_r4 + 1;
        if (var_r6 <= 0xAU) {
            goto loop_3;
        }
    }
    if (arg2 != 0) {
        if (arg2 < var_r4) {
            var_r4 = arg2;
        } else if (arg2 > var_r4) {
            do {
                *(&sp0 + var_r4) = 0x20;
                var_r4 += 1;
            } while (arg2 > var_r4);
        }
    }
    if ((arg0 >> 0x1F) != 0) {
        *(&sp0 + var_r4) = 0x2D;
        var_r4 += 1;
    }
    var_r4_2 = var_r4 - 1;
    if (var_r4_2 != -1) {
        do {
            *var_r7 = *(&sp0 + var_r4_2);
            var_r7 += 1;
            var_r4_2 -= 1;
        } while (var_r4_2 != -1);
    }
    *var_r7 = 0;
}
