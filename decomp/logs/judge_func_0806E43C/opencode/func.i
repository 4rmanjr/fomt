# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806E43C/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806E43C/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806E43C/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806E43C/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806E43C/opencode/func.c" 2
s32 func_080074C0(void *, s32);
s32 func_08007D4C(void *, s32);
s32 func_08008E64(s32, s32, s32);
s32 func_08008EB8(s32, s32, s32);
extern s32 gUnk_080F9F78;

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    u8 _pad8[48];
    s32 unk38;
    s32 unk3C;
    s32 unk3D;
    s32 unk3E;
    s32 unk3F;
    s32 unk40;
    s32 unk41;
} GenObj;
void func_0806E43C(GenObj *arg0) {
    s32 temp_r4;
    s32 var_r5;
    s32 var_r7;
    GenObj *temp_r4_2;
    GenObj *temp_r5;

    temp_r4 = gUnk_080F9F78;
    temp_r5 = (GenObj *)((u8 *)arg0 + 0x30);
    func_08008E64(temp_r4, (func_080074C0(temp_r5, temp_r5->unk4) << 5) + 0x05000200, 0x20);
    *(0x0500020E + (func_080074C0(temp_r5, temp_r5->unk4) << 5)) = 0x27F;
    func_08008EB8(0, (GenObj *)((u8 *)arg0 + 0x3C), 8);
    arg0->unk3F = (u8) ((0x3F & arg0->unk3F) | 0x40);
    arg0->unk3D = (u8) ((0x3F & arg0->unk3D & ~0xC) | 4);
    temp_r4_2 = (GenObj *)((u8 *)arg0 + 0x28);
    arg0->unk40 = (u16) ((0xFFFFFC00 & arg0->unk40) | (func_08007D4C(temp_r4_2, temp_r4_2->unk4) & 0x3FF));
    arg0->unk41 = (u8) ((0xF & arg0->unk41) | (func_080074C0(temp_r5, temp_r5->unk4) * 0x10) | 0xC);
    var_r7 = 0;
    do {
        var_r5 = 0;
loop_2:
        *(0x06010000 + (s32) (((func_08007D4C(temp_r4_2, temp_r4_2->unk4) + var_r7) << 5) + (var_r5 * 4))) = 0x77777777;
        var_r5 += 1;
        if (var_r5 <= 7) {
            goto loop_2;
        }
        var_r7 += 1;
    } while (var_r7 <= 7);
    arg0->unk3E = (u16) ((0xFFFFFE00 & arg0->unk3E) | ((arg0->unk38 * 0x10) & 0x1FF));
    arg0->unk3C = 0x28;
}
