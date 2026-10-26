# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08005800/omp/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08005800/omp/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08005800/omp/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08005800/omp/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08005800/omp/func.c" 2
s32 func_080088DC(void *);
s32 func_08008918(void *);
s32 func_08008920(void *);
s32 func_08008940(void *);
s32 func_0800894C(void *);
s32 func_08050D34(s32);
u32 func_08050D3C(s32, s32, s32, s32, s32, s32, void *);
s32 func_08050D5C(s32);
s32 func_08050D74(s32);
u32 func_08050DF0(s32);
s32 func_08050E30(s32, s32 *, s32 *, s32 *, s32, s32, s32);
extern s32 gUnk_080E8998;
extern s32 gUnk_080E89A4;
extern s32 gUnk_080E89A8;

typedef struct GenObj {
    u8 _pad0[6700];
    s32 unk1A2C;
    u8 _pad1A30[68];
    s32 unk1A74;
    s32 unk1A75;
    s32 unk1A76;
} GenObj;
void func_08005800(GenObj *arg0) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r8;
    s32 temp_sb;
    s32 temp_sl;
    u32 temp_r0;
    u32 temp_r0_2;

    temp_r6 = func_08050D34(arg0->unk1A2C);
    temp_sb = arg0->unk1A2C;
    temp_r8 = func_080088DC(arg0);
    temp_sl = func_08008920(arg0);
    temp_r5 = func_08008918(arg0);
    temp_r4 = func_08008940(arg0);
    temp_r0 = func_08050D3C(temp_sb, temp_r8, temp_sl, temp_r5, temp_r4, func_0800894C(arg0), arg0 + 0x1A30);
    switch (temp_r0) {
    case 0:
        if (arg0->unk1A75 != 0) {
            arg0->unk1A74 = 1;
        }
        func_08050D5C(arg0->unk1A2C);
        return;
    case 3:
        switch (temp_r6) {
        default:
            func_08050D74(arg0->unk1A2C);
            return;
        case 1:
            func_08050E30(arg0->unk1A2C, &gUnk_080E8998, &gUnk_080E89A4, &gUnk_080E89A8, 0, 0, 0);
            return;
        case 6:
            temp_r0_2 = func_08050DF0(arg0->unk1A2C);
            switch (temp_r0_2) {
            case 1:
                arg0->unk1A75 = 1U;
                arg0->unk1A76 = 1;
                return;
            case 2:
                arg0->unk1A75 = 1U;
                arg0->unk1A76 = 0;

            case 1:
            case 2:
            case 4:
            case 5:
            case 6:
            default:
            case 0:
            case 3:
            case 4:
            case 5:
            case 6:
                return;
            }
            break;
        }
        break;
    }
}
