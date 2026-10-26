# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801297C/pi/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801297C/pi/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801297C/pi/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801297C/pi/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801297C/pi/func.c" 2
s32 func_0800934C(s32, s32, s32, s32);
s32 func_08009378(s32, s32, s32, s32);

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[8];
    struct GenObj *unk10;
    u8 _pad14[76];
    struct GenObj *unk60;
    u8 _pad64[56];
    struct GenObj *unk9C;
    struct GenObj *unkA0;
    u8 _padA4[4];
    struct GenObj *unkA8;
    u8 _padAC[60];
    struct GenObj *unkE8;
    struct GenObj *unkE9;
} GenObj;
void func_0801297C(GenObj *arg0, u32 arg1, s32 arg2, u8 arg3, u8 arg4) {
    s16 *var_r0;
    s32 var_r2;
    s32 var_r5;
    s32 var_r6;
    s32 var_r7;
    s8 var_r1;
    s8 var_r1_2;
    u16 var_r1_3;
    u8 temp_r3;
    GenObj *temp_r4;

    temp_r3 = arg3;
    temp_r4 = arg0->unk4;
    switch (arg1) {
    case 0:
        var_r6 = 2;
        var_r7 = 0;
block_9:
        switch (arg2) {
        case 0:
            var_r5 = 0x1112;
block_18:
            if (temp_r3 != 0) {
                func_08009378(temp_r4->unkA0, var_r5, var_r6, var_r7);
                temp_r4->unk9C = 0x12;
                ((GenObj *)((u8 *)temp_r4 + 0x9C))->unk4C = 0;
                var_r1 = 0;
                if (var_r6 == 2) {
                    var_r1 = 1;
                }
                temp_r4->unkE9 = var_r1;
                return;
            }
            if (arg4 != 0) {
                (*temp_r4->unkA8)->unkB8();
            }
            func_0800934C(temp_r4->unkA0, var_r5, var_r6, var_r7);
            temp_r4->unk9C = 0x13;
            temp_r4->unkE8 = temp_r3;
            var_r1_2 = 0;
            if (var_r6 == 2) {
                var_r1_2 = 1;
            }
            temp_r4->unkE9 = var_r1_2;
            temp_r4->unk10 = (u16) (temp_r4->unk10 | 0xE00);
            if (var_r6 == 1) {
                var_r0 = (GenObj *)((u8 *)temp_r4 + 0x60);
                var_r1_3 = temp_r4->unk60;
                var_r2 = 0x80;
            } else {
                var_r0 = (GenObj *)((u8 *)temp_r4 + 0x60);
                var_r1_3 = temp_r4->unk60;
                var_r2 = 0xC0;
            }
            *var_r0 = var_r1_3 | var_r2;
            return;
        case 1:
            var_r5 = 0x889;
            goto block_18;
        case 2:
            var_r5 = 0x444;
            goto block_18;
        }
        break;
    case 1:
        var_r6 = 1;
        var_r7 = 0;
        goto block_9;
    case 2:
        var_r6 = 2;
block_8:
        var_r7 = 1;
        goto block_9;
    case 3:
        var_r6 = 1;
        goto block_8;
    case 4:
        var_r6 = 0;
        goto block_8;
    }
}
