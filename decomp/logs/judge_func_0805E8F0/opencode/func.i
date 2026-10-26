# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805E8F0/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805E8F0/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805E8F0/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805E8F0/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805E8F0/opencode/func.c" 2
typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[4];
    s32 unkC;
    s32 unkE;
    s32 unk10;
    s32 unk12;
} GenObj;
s32 func_0805E8F0(GenObj *arg0) {
    s16 temp_ip;
    s16 var_r0;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 var_r3;
    s32 var_r7;
    u16 temp_r0;
    u16 temp_r3;
    u16 temp_sb;
    u16 var_r0_2;
    u16 var_r2;

    var_r7 = 0;
    if (arg0->unk12 != 0) {
        var_r7 = 2;
        arg0->unk12 = 0U;
    }
    var_r0 = arg0->unk10;
    temp_ip = var_r0;
    temp_r3 = arg0->unkE;
    if ((var_r0 != 0) && (temp_r3 != 0)) {
        if ((s32) var_r0 < 0) {
            var_r0 = 0 - var_r0;
        }
        var_r3 = temp_r3 - var_r0;
        if (var_r3 <= 0) {
            var_r2 = arg0->unkC;
            temp_r1 = arg0->unk4;
            temp_sb = *((u8 *)temp_r1 + (var_r2 * 4));
            var_r7 |= 1;
            var_r0_2 = 0;
            if (temp_r1 != 0) {
                var_r0_2 = (arg0 + 4)->unk4;
            }
loop_10:
            if ((s32) temp_ip > 0) {
                var_r2 += 1;
                if ((u32) var_r2 >= (u32) var_r0_2) {
                    var_r2 = 0;
                    var_r7 |= 4;
                }
            } else {
                if (var_r2 == 0) {
                    var_r2 = var_r0_2;
                    var_r7 |= 4;
                }
                var_r2 -= 1;
            }
            temp_r1_2 = var_r2 * 4;
            temp_r0 = (temp_r1 + temp_r1_2)->unk2;
            if (temp_r0 != 0) {
                var_r3 += temp_r0 << 8;
                if (var_r3 <= 0) {
                    goto loop_10;
                }
            } else {
                var_r3 = 0;
            }
            if (*((u8 *)temp_r1 + temp_r1_2) != temp_sb) {
                var_r7 |= 2;
            }
            arg0->unkC = var_r2;
        }
        arg0->unkE = (u16) var_r3;
    }
    return var_r7;
}
