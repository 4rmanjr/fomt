# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08052230/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08052230/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08052230/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08052230/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08052230/opencode/func.c" 2
s32 rand();
extern s32 gUnk_080FA174;

void func_08052230(u8 *arg0, s32 arg1) {
    s32 sp0;
    s32 sp4;
    u8 *sp8;
    s32 temp_r6;
    s32 var_r2;
    s32 var_r3;
    s32 var_r4;
    u32 var_r0;
    u8 *temp_r5;
    u8 *var_r1;

    if (arg1 != 0) {
        var_r0 = (u32) (arg1 - 1) / 25U;
    } else {
        var_r0 = 0;
    }
    var_r4 = 0;
    sp0 = var_r0 * 4;
    do {
        temp_r6 = var_r4 * 4;
        sp4 = var_r4 + 1;
        temp_r5 = arg0 + temp_r6;
        sp8 = temp_r5;
loop_5:
        *temp_r5 = ((s32) (rand() >> 8) % 30) + 1;
        var_r3 = 1;
        var_r2 = 0;
        var_r1 = arg0;
loop_6:
        if ((var_r4 != var_r2) && (*sp8 == *var_r1)) {
            var_r3 = 0;
        }
        var_r1 += 4;
        var_r2 += 1;
        if (var_r2 <= 9) {
            goto loop_6;
        }
        if (var_r3 == 0) {
            goto loop_5;
        }
        (arg0 + temp_r6)->unk2 = (s16) (*(((sp0 + var_r0) * 4) + (var_r4 * 2) + &gUnk_080FA174) + ((s32) (rand() >> 8) % 10));
        var_r4 = sp4;
    } while (var_r4 <= 9);
}
