# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08052984/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08052984/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08052984/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08052984/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08052984/opencode/func.c" 2


void *__builtin_new(s32);
s32 func_08008724(s32);
void *func_08008918(s32);
s32 func_08008B6C(s32, s32);
s32 func_08009300(void *, void *);
s32 func_08054F40(s32);
s32 func_08055264(s32);

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    u8 _padC[36];
    s32 unk30;
    u8 _pad34[28];
    s32 unk50;
    s32 unk54;
} GenObj;
void func_08052984(s32 arg0, s32 arg1) {
s32 sp0;
    void *sp4;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    void *sp3C;
    void *sp40;
    GenObj *temp_r0;
    GenObj *temp_r0_2;
    void *temp_r1;
    GenObj *temp_r4;

    sp2C = arg0;
    sp30 = 0;
    func_08008724(arg1);
    temp_r0 = func_08008918(arg1);
    sp0 = 0xBF;
    temp_r0->unk50 = 0xBF;
    temp_r0_2 = func_08008918(arg1);
    sp0 = 0x10;
    temp_r0_2->unk54 = 0x10;
    temp_r4 = __builtin_new(0x10);
    temp_r1 = func_08008918(arg1);
    temp_r4->unk0 = sp30;
    temp_r4->unk4 = sp30;
    temp_r4->unk8 = (s32) 0;
    func_08009300((GenObj *)((u8 *)temp_r4 + 0xC), temp_r1);
    sp4 = temp_r4;
    func_08054F40(arg1);
    func_08055264(arg1);
    *((u8 *)arg1 + 0x0000228A) = (s16) 0x0000033B;
    func_08008B6C(arg1 + 0x18, 0x21);
    *((u8 *)arg1 + 0x00002328) = sp0.unk30;
    sp34 = 0;
    sp38 = 0;
    sp3C = &(GenObj *)((u8 *)sp0 + 8);
    sp40 = &(GenObj *)((u8 *)sp0 + 0x24);
}
