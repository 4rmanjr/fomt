# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804F0E0/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804F0E0/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804F0E0/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804F0E0/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804F0E0/opencode/func.c" 2
s32 func_0804E7A0(s32, s32, s32);

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    u8 _pad6[6];
    s32 unkC;
    u8 _pad10[4];
    s32 unk14;
    s32 unk16;
    s32 unk19;
    s32 unk1A;
    s32 unk1B;
} GenObj;
void func_0804F0E0(void *arg0) {
    s32 sp0;
    void *sp4;
    s32 *temp_r6;
    s32 temp_r1;
    s32 var_r1;
    s32 var_r7;
    GenObj *temp_r5;
    GenObj *var_r3;

    var_r3 = arg0;
    var_r1 = 0;
    do {
        var_r7 = 0;
        temp_r6 = (var_r1 * 4) + (GenObj *)((u8 *)var_r3 + 8);
loop_2:
        temp_r5 = *temp_r6 + (var_r7 * 0x10);
        sp0 = 4;
        sp0.unk2 = 2;
        sp4 = var_r3;
        func_0804E7A0(sp0, temp_r5->unk0 + 4, 0);
        temp_r1 = ((GenObj *)((u8 *)temp_r5 + 4))->unk4;
        temp_r5->unkC = (s8) ((u32) ((0 - temp_r1) | temp_r1) >> 0x1F);
        var_r7 += 1;
        if (var_r7 <= 6) {
            goto loop_2;
        }
        var_r1 += 1;
    } while (var_r1 <= 2);
    var_r3->unk16 = 0;
    var_r3->unk14 = 0;
    var_r3->unk19 = 1;
    var_r3->unk1A = 1;
    var_r3->unk1B = 0;
}
