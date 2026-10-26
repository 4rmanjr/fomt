# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08003DF0/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08003DF0/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08003DF0/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08003DF0/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08003DF0/opencode/func.c" 2
void *func_08008920(void *);

typedef struct GenObj {
    s32 unk0;
    u16 unk4;
    u8 _pad8[120];
    s32 unk80;
} GenObj;
void func_08003DF0(GenObj *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *t;
    s32 temp;
    s32 var;
    GenObj *p;
    s32 spbuf[2];

    spbuf[0] = arg2;
    spbuf[1] = arg3;
    var = *(u8 *)spbuf;
    var += 8;
    var += (((arg1 * 2) + 1) * 8);
    var = (u32)(var << 0x18) >> 0x18;
    temp = (spbuf[0] & 0xFFFFFF00) | var;
    spbuf[0] = temp;
    var = ((u32) (temp << 7) >> 0x17) + 0x80;
    t = (u8 *)arg0 + 0x84;
    if (*(t + arg1) == 0) {
        goto skip_add;
    }
    var += 0x40;
skip_add:
    temp = (0xFE00FFFF & temp) | ((var & 0x1FF) << 0x10);
    spbuf[0] = temp;
    if (arg1 != 1) {
        goto skip_set;
    }
    if (arg0->unk80 == 1) {
        goto skip_set;
    }
    spbuf[0] = (0xFFFFFCFF & temp) | 0x200;
skip_set:
    p = (GenObj *)((u8 *)func_08008920(arg0) + (((0x7F & arg1) * 8) + 4));
    *(s32 *)p = spbuf[0];
    *(u16 *)((u8 *)p + 4) = *(u16 *)((u8 *)spbuf + 4);
}
