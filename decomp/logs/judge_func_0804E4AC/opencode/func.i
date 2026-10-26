# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804E4AC/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804E4AC/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804E4AC/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804E4AC/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804E4AC/opencode/func.c" 2
s32 CpuFastSet(s32 *, s32, s32);
s32 func_0804E9C8(u16, s32, u32, u32, s32 *);
u32 func_080D0D28(s32 *, s32);

u32 func_0804E4AC(u16 arg0, s32 arg1, u32 arg2, u32 arg3, s32 arg4) {
s32 sp4;
s32 sp24;
s32 sp44;
s32 sp64;
    u32 sp84;
    s32 sp88;
    s32 temp_r6;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r7;
    u16 temp_r0_2;
    u32 temp_r0;
    u32 temp_r0_3;
    u32 temp_r2;
    u32 temp_r4;
    u32 temp_r5;

    temp_r0 = func_080D0D28(&sp4, arg4);
    if ((u32) (temp_r0 - 1) <= 1U) {
        temp_r4 = arg2 >> 3;
        sp84 = temp_r4;
        temp_r2 = arg3 >> 3;
        temp_r0_2 = arg0;
        temp_r0_3 = arg0 >> 0x10;
        if ((temp_r4 < (u32) temp_r0_2) && (temp_r2 < temp_r0_3)) {
            var_r1 = 0;
            if (!(arg2 & 7)) {
                var_r1 = 1;
            }
            if (var_r1 != 0) {
                var_r1_2 = 0;
                if (!(arg3 & 7)) {
                    var_r1_2 = 1;
                }
                if (var_r1_2 != 0) {
                    sp88 = 0;
                    if ((u32) (temp_r4 + 1) < (u32) temp_r0_2) {
                        sp88 = 1;
                    }
                    var_r7 = 0;
                    temp_r5 = temp_r2 + 1;
                    if (temp_r5 < temp_r0_3) {
                        var_r7 = 1;
                    }
                    temp_r6 = (((temp_r2 * temp_r0_2) + temp_r4) << 5) + arg1;
                    CpuFastSet(&sp4, temp_r6, 8);
                    if (var_r7 != 0) {
                        CpuFastSet(&sp44, (((temp_r5 * temp_r0_2) + temp_r4) << 5) + arg1, 8);
                    }
                    if ((sp88 != 0) && (temp_r0 > 1U)) {
                        CpuFastSet(&sp24, temp_r6 + 0x20, 8);
                        if (var_r7 != 0) {
                            CpuFastSet(&sp64, ((sp84 + (temp_r5 * temp_r0_2)) << 5) + arg1 + 0x20, 8);
                        }
                    }
                } else {
                    goto block_19;
                }
            } else {
block_19:
                func_0804E9C8(arg0, arg1, arg2, arg3, &sp4);
            }
        }
        return temp_r0;
    }
    return 0U;
}
