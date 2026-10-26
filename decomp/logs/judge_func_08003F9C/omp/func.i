# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08003F9C/omp/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08003F9C/omp/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08003F9C/omp/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08003F9C/omp/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08003F9C/omp/func.c" 2
s32 func_080003DC(void *, u8);
s32 func_080003E8(void *, u8);
s32 func_08000470(void *, u8);
s32 func_080004F4();
s32 func_08000528(s32);
s32 func_08003788(void *, void *, s32);
s32 func_08008B6C(void *, s32);
s32 func_080115B0(s32, void *, s32);
s32 func_08050DC8(void *, s32 *, s32, s32);
extern s32 gUnk_080E88C8;

typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
    u8 _padC[121];
    s32 unk85;
    u8 _pad89[3];
    s32 unk8C;
} GenObj;
s32 func_08003F9C(GenObj *arg0) {
    u16 sp0;
    s32 sp4;
    u16 *sp8;
    s32 *spC;
    void *sp10;
    void *sp14;
    s32 temp_r6;
    s32 var_sb;
    u8 temp_r0;
    void *temp_r1;
    void *temp_r4;

    if (arg0->unk8 != 0) {
        temp_r0 = arg0->unk85;
        temp_r4 = arg0 + 0x90;
        sp4 = func_080003DC(temp_r4, temp_r0);
        var_sb = 3;
        temp_r1 = arg0 + 0x10;
        sp10 = temp_r1;
        spC = arg0 + 0x8C;
        sp14 = temp_r1 + 8;
        sp8 = &sp0;
        temp_r6 = temp_r0 << 7;
loop_2:
        *sp8 = 0x1000 & func_08000528(0x1000);
        if (func_080115B0(arg0->unk8, temp_r4, sp4) == 0) {
            func_08003788(arg0, arg0 + (temp_r6 + 0x98), arg0->unk8);
            func_08050DC8(sp10, temp_r6 + arg0 + 0x98, 0, 0);
            *spC = 3;
            func_08008B6C(sp14, 0xC5);
            func_080003E8(temp_r4, temp_r0);
            func_08000470(temp_r4, temp_r0);
            if (sp0 != 0) {
                func_080004F4();
            }
            return 1;
        }
        if (sp0 != 0) {
            func_080004F4();
        }
        var_sb -= 1;
        if (var_sb == 0) {
            goto block_9;
        }
        goto loop_2;
    }
block_9:
    func_08050DC8(arg0 + 0x10, &gUnk_080E88C8, 0, 0);
    arg0->unk8C = 3;
    func_08008B6C(arg0 + 0x18, 0xC7);
    return 0;
}
