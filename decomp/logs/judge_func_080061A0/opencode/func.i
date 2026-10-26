# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080061A0/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080061A0/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080061A0/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080061A0/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080061A0/opencode/func.c" 2
s32 func_08008EB8(s32, s32, s32);

typedef struct GenObj {
    u8 _pad0[17928];
    s32 unk4608;
    s32 unk4609;
    s32 unk460A;
    s32 unk460B;
    s32 unk460C;
    s32 unk460D;
    u8 _pad4611[3];
    s32 unk4614;
    s32 unk4615;
    s32 unk4616;
    s32 unk4617;
    s32 unk4618;
    s32 unk4619;
} GenObj;
void func_080061A0(GenObj *arg0, s32 arg1) {
    s32 temp_r2;
    u8 var_r3;
    s32 temp_r1;

    func_08008EB8(0, (u8 *)arg0 + 0x4608, 8);
    func_08008EB8(0, (u8 *)arg0 + 0x4614, 8);
    arg0->unk460B = (u8) (0x3F & arg0->unk460B);
    arg0->unk4617 = (u8) (0x3F & arg0->unk4617);
    arg0->unk4615 = (u8) ((0x3F & arg0->unk4615) | 0x80);
    arg0->unk4609 = (u8) ((-0xD & arg0->unk4609) | 4);
    arg0->unk4615 = (u8) ((-0xD & arg0->unk4615) | 4);
    temp_r2 = arg1 & 0x3FF;
    arg0->unk460C = (u16) ((0xFFFFFC00 & arg0->unk460C) | temp_r2);
    arg0->unk4618 = (u16) ((0xFFFFFC00 & arg0->unk4618) | (temp_r2 & 0x3FF));
    arg0->unk460D = (u8) ((0xF & arg0->unk460D) | 0x40);
    arg0->unk4619 = (u8) ((0xF & arg0->unk4619) | 0x40);
    var_r3 = 0;
    do {
        temp_r1 = (arg1 << 5) + (var_r3 * 4);
        *(volatile s32 *)(0x06010000 + temp_r1) = 0x88888888;
        *(volatile s32 *)(0x06010020 + temp_r1) = 0x88888888;
        *(volatile s32 *)(0x06010040 + temp_r1) = 0x88888888;
        *(volatile s32 *)(0x06010060 + temp_r1) = 0x88888888;
        *(volatile s32 *)(0x06010080 + temp_r1) = 0x88888888;
        *(volatile s32 *)(0x060100A0 + temp_r1) = 0x88888888;
        *(volatile s32 *)(0x060100C0 + temp_r1) = 0x88888888;
        *(volatile s32 *)(0x060100E0 + temp_r1) = 0x88888888;
        var_r3 += 1;
    } while ((u32) var_r3 <= 7U);
    *(volatile s16 *)0x05000290 = 0x27F;
    arg0->unk4616 = (u16) ((0xFFFFFE00 & arg0->unk4616) | 0x90);
    arg0->unk4614 = 8;
    arg0->unk460A = (u16) (0xFFFFFE00 & arg0->unk460A);
    arg0->unk4608 = 0x20;
    arg0->unk4619 = (u8) ((-0xD & arg0->unk4619) | 8);
    arg0->unk460D = (u8) ((-0xD & arg0->unk460D) | 8);
}
