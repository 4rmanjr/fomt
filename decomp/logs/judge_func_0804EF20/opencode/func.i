# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804EF20/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804EF20/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804EF20/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804EF20/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804EF20/opencode/func.c" 2
s32 CpuFastSet(void *, void *, u32);

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk4;
    u8 _pad8[4];
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk15;
} GenObj;
s32 func_0804EF20(GenObj *arg0) {
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r2;
    s32 temp_r7;
    u8 temp_r6;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r3_6;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    GenObj *var_r3;
    GenObj *var_r4;

    var_r4 = arg0->unkC;
    var_r3 = arg0->unk10;
    temp_r6 = arg0->unk15;
    if (0x80 & temp_r6) {
        temp_r7 = var_r3 + ((u32) (arg0->unk14 << 0x12) >> 0xD);
        temp_r1 = 1 ^ ((u32) (temp_r6 << 0x19) >> 0x1F);
        arg0->unk15 = (u8) ((-0x41 & temp_r6) | (temp_r1 << 6));
        temp_r2 = 0x0F0F0F0F << (temp_r1 * 4);
        temp_r1_2 = ~temp_r2;
        do {
            temp_r4 = (GenObj *)((u8 *)var_r4 + 4);
            var_r3->unk0 = (s32) (var_r4->unk0 & temp_r2);
            temp_r3 = (GenObj *)((u8 *)var_r3 + 4);
            temp_r4_2 = temp_r4 + 4;
            var_r3->unk4 = (s32) (var_r4->unk4 & temp_r1_2);
            temp_r3_2 = temp_r3 + 4;
            temp_r4_3 = temp_r4_2 + 4;
            temp_r3->unk4 = (s32) (temp_r4->unk4 & temp_r2);
            temp_r3_3 = temp_r3_2 + 4;
            temp_r4_4 = temp_r4_3 + 4;
            temp_r3_2->unk4 = (s32) (temp_r4_2->unk4 & temp_r1_2);
            temp_r3_4 = temp_r3_3 + 4;
            temp_r4_5 = temp_r4_4 + 4;
            temp_r3_3->unk4 = (s32) (temp_r4_3->unk4 & temp_r2);
            temp_r3_5 = temp_r3_4 + 4;
            temp_r4_6 = temp_r4_5 + 4;
            temp_r3_4->unk4 = (s32) (temp_r4_4->unk4 & temp_r1_2);
            temp_r3_6 = temp_r3_5 + 4;
            temp_r3_5->unk4 = (s32) (temp_r4_5->unk4 & temp_r2);
            var_r4 = temp_r4_6 + 4 + 4;
            temp_r3_6->unk4 = (s32) (temp_r4_6->unk4 & temp_r1_2);
            var_r3 = temp_r3_6 + 4 + 4;
        } while (var_r3 != temp_r7);
        return 1;
    }
    CpuFastSet(var_r4, var_r3, (u32) (arg0->unk14 << 0x12) >> 0xF);
    return 0;
}
