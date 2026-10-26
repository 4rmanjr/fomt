# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803BCF8/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803BCF8/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803BCF8/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803BCF8/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803BCF8/opencode/func.c" 2
s32 func_08009940(void *, void *);

typedef struct GenObj {
    u8 _pad0[10];
    s32 unkA;
    s32 unkB;
    s32 unkC;
    s32 unkD;
} GenObj;
void func_0803BCF8(GenObj *arg0) {
    s32 temp_r1;
    s8 temp_r5;
    u8 temp_r3;
    void *temp_r6;

    temp_r5 = ((arg0->unkC & 0x7F) * 2) | ((u8) arg0->unkB >> 7);
    if (temp_r5 == 0) {
        temp_r6 = arg0 + 0x10;
        if (((u32) (arg0->unkA << 0x11) >> 0x18) != 1) {
            func_08009940(temp_r6, arg0 + 0x2C);
        }
        func_08009940(temp_r6, arg0 + 0x44);
        arg0->unkD = temp_r5;
    }
    temp_r3 = arg0->unkB;
    temp_r1 = ((arg0->unkC & 0x7F) * 2) | (temp_r3 >> 7);
    if ((temp_r1 >= 0) && (temp_r1 <= 2)) {
        arg0->unkB = (u8) (0x80 | temp_r3);
        arg0->unkC = (u8) (-0x80 & arg0->unkC);
    }
}
