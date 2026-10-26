# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08075BC8/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08075BC8/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08075BC8/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08075BC8/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08075BC8/opencode/func.c" 2
typedef struct GenObj {
    void *unk0;
    u8 _pad4[4];
    struct GenObj *unk8;
    s32 unkA;
    struct GenObj *unkC;
    struct GenObj *unk10;
    struct GenObj *unk14;
    struct GenObj *unk18;
    struct GenObj *unk1C;
    struct GenObj *unk20;
    u8 _pad24[4];
    s32 unk28;
} GenObj;
void func_08075BC8(GenObj *arg0, s32 arg1, s32 arg2) {
    s16 temp_r0_3;
    s16 var_r1;
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r2;
    s32 temp_r4_2;
    s32 var_r5;
    u32 temp_r1_2;
    u32 temp_r4;
    GenObj *temp_r0_2;
    GenObj *temp_r1_3;
    GenObj *temp_r6;

    var_r5 = arg1;
    temp_r6 = (GenObj *)((u8 *)arg0 + 0x28);
    temp_r1 = arg0->unk28;
    if (((s32) ((0 - temp_r1) | temp_r1) >= 0) && ((var_r5 != 0) || (arg2 != 0))) {
        if ((s32) (arg2 - var_r5) > 0x20) {
            var_r5 = arg2 + 0x20;
        }
        temp_r1_2 = 0x1F & arg2;
        temp_r4 = arg2 - var_r5;
        if ((temp_r1_2 < temp_r4) && (temp_r1_2 != 0)) {
            temp_r2 = temp_r4 - temp_r1_2;
            temp_r4_2 = arg0->unk18;
            temp_r0 = arg0->unk10;
            temp_r6->unkC = (s32) (temp_r4_2 + (var_r5 << 6));
            temp_r6->unk10 = (s32) (((0x20 - temp_r2) << 6) + temp_r0);
            temp_r6->unk14 = (s32) (temp_r2 << 6);
            temp_r6->unk18 = (s32) (temp_r4_2 + ((var_r5 + temp_r2) << 6));
            temp_r6->unk1C = temp_r0;
            temp_r6->unk20 = (s32) (temp_r1_2 << 6);
            temp_r0_2 = arg0->unk0;
            ((void (*)(void *,...))(temp_r0_2->unk8->unk10))(temp_r0_2, temp_r6);
        } else {
            temp_r1_3 = (GenObj *)((u8 *)arg0 + 0x28);
            temp_r1_3->unkC = (s32) (arg0->unk18 + (var_r5 << 6));
            temp_r1_3->unk10 = (s32) (((0x1F & var_r5) << 6) + arg0->unk10);
            temp_r1_3->unk14 = (s32) (temp_r4 << 6);
            temp_r1_3->unk18 = 0;
            temp_r1_3->unk1C = 0;
            temp_r1_3->unk20 = 0;
            arg0->((void (*)(void *,...))(unk0->unk8->unk10))();
        }
        temp_r0_3 = arg0->unkC;
        var_r1 = temp_r0_3;
        if ((s32) temp_r0_3 < 0) {
            var_r1 = temp_r0_3 + 7;
        }
        arg0->unkA = (s16) ((u16) arg0->unkC - (temp_r0_3 - ((var_r1 >> 3) * 8)));
    }
}
