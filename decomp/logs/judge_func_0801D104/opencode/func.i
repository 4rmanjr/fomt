# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801D104/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801D104/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801D104/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801D104/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801D104/opencode/func.c" 2
s32 func_0800E324(s32);
s32 func_080174C8(s32, s32, s32, s32, s32);
s32 func_080A1CBC(s32 *, s32, s32);
s32 func_080A1D20(s32, u32, s32 *, s32);
s32 func_080A5F78(s32 *, s32, s32 *, s32, s32);

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
s32 func_0801D104(GenObj *arg0, GenObj *arg1, s32 arg2, u8 arg3, GenObj *arg4) {
    u8 sp4;
    void *sp8;
GenObj spC;
s32 sp1C;
s32 sp24;
    s32 sp28;
    s32 sp2C;
    s16 temp_r0_2;
    s16 temp_r1;
    s16 var_r0;
    s16 var_r0_2;
    s32 *temp_r1_3;
    s32 temp_r0;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r1_2;
    s32 temp_r6;
    s32 temp_r8;
    s32 var_r3;
    s32 var_r4;

    sp28 = arg2;
    sp2C = (s32) arg3;
    temp_r0 = arg0->unk1038;
    temp_r6 = temp_r0 + 0x34C8;
    temp_r8 = func_0800E324(temp_r0 + 0x10);
    temp_r1 = ((arg1->unk2 & 0x3FF) << 6) | ((u8) arg1->unk1 >> 2);
    temp_r0_2 = ((arg1->unk4 & 0x3FF) << 6) | ((u8) arg1->unk3 >> 2);
    sp1C = temp_r1;
    sp1C.unk2 = temp_r0_2;
    sp1C.unk4 = (s16) (temp_r1 + 1);
    sp1C.unk6 = (s16) (temp_r0_2 + 1);
    temp_r0_3 = func_080A1D20(temp_r6, (u32) (arg1->unk0 << 0x16) >> 0x16, &sp1C, temp_r8);
    if (temp_r0_3 != -1) {
        func_080A1CBC(&spC, temp_r6, temp_r0_3);
        temp_r1_2 = arg0->unk1038;
        sp4 = sp2C;
        sp8 = arg4;
        func_080174C8(temp_r1_2 + 0x14, temp_r1_2 + 0x34C8, temp_r0_3, temp_r8, sp28);
        if ((arg4->unk0 != 0) && (temp_r1_3 = arg0->unk4, (((u32) (arg1->unk0 << 0x16) >> 0x16) == *temp_r1_3))) {
            temp_r0_4 = arg4->unk4;
            switch (temp_r0_4) {
            case 4:
                var_r3 = 2;
                var_r4 = 2;
block_15:
                var_r0 = spC.unk8;
                if ((s32) var_r0 < 0) {
                    var_r0 += 7;
                }
                var_r0_2 = spC.unkA;
                if ((s32) var_r0_2 < 0) {
                    var_r0_2 += 7;
                }
                sp24 = (s16) (var_r0 >> 3);
                sp24.unk2 = (s16) (var_r0_2 >> 3);
                func_080A5F78(temp_r1_3, 1, &sp24, var_r3, var_r4);
                goto block_20;
            case 7:
                var_r3 = 4;
block_14:
                var_r4 = 4;
                goto block_15;
            case 6:
                var_r3 = 4;
                goto block_14;
            case 9:
                var_r3 = 6;
                goto block_14;
            }
        } else {
block_20:
            return 1;
        }
    } else {
        return 0;
    }
}
