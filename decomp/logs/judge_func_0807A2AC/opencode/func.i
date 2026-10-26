# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0807A2AC/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0807A2AC/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0807A2AC/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0807A2AC/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0807A2AC/opencode/func.c" 2
typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
} GenObj;
s32 func_0807A2AC(GenObj *arg0, u32 arg1) {
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_3;
    s32 var_r1_4;
    s32 var_r6;
    u32 temp_r0;
    u32 var_r4;

    var_r6 = 0;
    temp_r0 = arg1 / 10U;
    switch (temp_r0) {
    case 0:
        var_r1 = 0x21AC;
block_38:
        var_r4 = (u32) (*(arg0->unk8 + var_r1) << 0x1E) >> 0x1E;
        break;
    case 1:
        var_r1_2 = 0x21AC;
block_40:
        var_r4 = (u32) (*(arg0->unk8 + var_r1_2) << 0x1C) >> 0x1E;
        break;
    case 2:
        var_r1_3 = 0x21AC;
block_43:
        var_r4 = (u32) (*(arg0->unk8 + var_r1_3) << 0x1A) >> 0x1E;
        break;
    case 3:
        var_r1_4 = 0x21AC;
block_36:
        var_r4 = (u8) *(arg0->unk8 + var_r1_4) >> 6;
        break;
    case 4:
        var_r1 = 0x21AD;
        goto block_38;
    case 5:
        var_r1_2 = 0x21AD;
        goto block_40;
    case 6:
        var_r1_3 = 0x21AD;
        goto block_43;
    case 7:
        var_r1_4 = 0x21AD;
        goto block_36;
    case 8:
        var_r1 = 0x21AE;
        goto block_38;
    case 9:
        var_r1_2 = 0x21AE;
        goto block_40;
    case 10:
        var_r1_3 = 0x21AE;
        goto block_43;
    case 11:
        var_r1_4 = 0x21AE;
        goto block_36;
    case 12:
        var_r1 = 0x21AF;
        goto block_38;
    case 13:
        var_r1_2 = 0x21AF;
        goto block_40;
    case 14:
        var_r1_3 = 0x21AF;
        goto block_43;
    case 15:
        var_r1_4 = 0x21AF;
        goto block_36;
    case 16:
        var_r1 = 0x21B0;
        goto block_38;
    case 17:
        var_r1_2 = 0x21B0;
        goto block_40;
    case 18:
        var_r1_3 = 0x21B0;
        goto block_43;
    case 19:
        var_r1_4 = 0x21B0;
        goto block_36;
    case 20:
        var_r1 = 0x21B1;
        goto block_38;
    case 21:
        var_r1_2 = 0x21B1;
        goto block_40;
    case 22:
        var_r1_3 = 0x21B1;
        goto block_43;
    case 23:
        var_r1_4 = 0x21B1;
        goto block_36;
    case 24:
        var_r1 = 0x21B2;
        goto block_38;
    case 25:
        var_r1_2 = 0x21B2;
        goto block_40;
    case 26:
        var_r1_3 = 0x21B2;
        goto block_43;
    case 27:
        var_r1_4 = 0x21B2;
        goto block_36;
    case 28:
        var_r1 = 0x21B3;
        goto block_38;
    case 29:
        var_r1_2 = 0x21B3;
        goto block_40;
    case 30:
        var_r1_3 = 0x21B3;
        goto block_43;
    case 31:
        var_r1_4 = 0x21B3;
        goto block_36;
    case 32:
        var_r1_4 = 0x21AB;
        goto block_36;
    case 33:
        var_r1 = 0x21B4;
        goto block_38;
    case 34:
        var_r1_2 = 0x21B4;
        goto block_40;
    case 35:
        var_r1_3 = 0x21B4;
        goto block_43;
    case 36:
        var_r1_3 = 0x21AB;
        goto block_43;
    default:
        var_r4 = 0;
        break;
    }
    if (var_r4 <= (u32) (arg1 % 10U)) {
        var_r6 = 1;
    }
    return var_r6;
}
