# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08059878/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08059878/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08059878/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08059878/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08059878/opencode/func.c" 2
s32 func_080088DC(void *);
s32 func_08008918(void *);
s32 func_08008920(void *);
s32 func_08008940(void *);
s32 func_0800894C(void *);
u32 func_08050D3C(s32, s32, s32, s32, s32, s32, void *);
s32 func_08050D5C(s32);
s32 func_08050D74(s32);
s32 func_08050DA0(s32, s32 *, void *);
s32 func_08050DF0(s32);
s32 func_08050E30(s32, s32 *, s32 *, s32 *, s32, s32, void *);
extern s32 gUnk_080FAA40;
extern s32 gUnk_080FAA5C;
extern s32 gUnk_080FAA60;
extern s32 gUnk_080FAA64;
extern s32 gUnk_080FAA74;
extern s32 gUnk_080FAA88;
extern s32 gUnk_080FAAA4;
extern s32 gUnk_080FAACC;
extern s32 gUnk_080FAAE0;
extern s32 gUnk_080FAAFC;
extern s32 gUnk_080FAB94;
extern s32 gUnk_080FABE0;
extern s32 gUnk_080FAC24;
extern s32 gUnk_080FAC8C;
extern s32 gUnk_080FAD08;
extern s32 gUnk_080FAD20;
extern s32 gUnk_080FAD28;
extern s32 gUnk_080FAD34;
extern s32 gUnk_080FAD50;
extern s32 gUnk_080FAD94;
extern s32 gUnk_080FADDC;
extern s32 gUnk_080FAE00;

typedef struct GenObj {
    u8 _pad0[16];
    s32 unk10;
    u8 _pad14[5114];
    s32 unk140E;
    u8 _pad1412[18];
    s32 unk1424;
    u8 _pad1428[1];
    s32 unk1429;
    s32 unk142A;
    u8 _pad142E[112];
    s32 unk149E;
} GenObj;
void func_08059878(GenObj *arg0) {
    s32 *var_r1;
    s32 *var_r1_2;
    s32 *var_r1_3;
    s32 *var_r2;
    s32 *var_r3;
    s16 *var_r1_5;
    s16 temp_r0_3;
    s16 temp_r1;
    s16 var_r0;
    s32 temp_r0_2;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r8;
    s32 temp_sb;
    s8 *var_r1_4;
    u32 temp_r0;
    u8 temp_r5_2;

    temp_sb = arg0->unk10;
    temp_r8 = func_080088DC(arg0);
    temp_r6 = func_08008920(arg0);
    temp_r5 = func_08008918(arg0);
    temp_r4 = func_08008940(arg0);
    temp_r0 = func_08050D3C(temp_sb, temp_r8, temp_r6, temp_r5, temp_r4, func_0800894C(arg0), arg0 + 0x14);
    switch (temp_r0) {
    case 0:
        if (arg0->unk1429 == 0) {
            func_08050D5C(arg0->unk10);
            arg0->unk1429 = 3U;
            return;
        }
        arg0->unk1429 = 2U;
        return;
    case 3:
        temp_r5_2 = arg0->unk1429;
        switch (temp_r5_2) {
        case 5:
            func_08050D74(arg0->unk10);
            arg0->unk1429 = 1U;
            return;
        case 4:
            temp_r0_2 = func_08050DF0(arg0->unk10);
            arg0->unk1429 = 3U;
            temp_r1 = arg0->unk1424;
            switch (temp_r1) {
            case 2:
                switch (temp_r0_2) {
                case 1:
                    arg0->unk142A = 0;
                    arg0->unk1424 = 3;
                    return;
                case 2:
                    arg0->unk142A = 1;
                    arg0->unk1424 = (s16) temp_r5_2;
                    return;
                }
                break;
            case 7:
                switch (temp_r0_2) {
                case 1:
                    arg0->unk142A = 0;
                    arg0->unk1424 = 8;
                    return;
                case 2:
                    arg0->unk142A = 1;
                    arg0->unk1424 = 9;
                    return;
                }
                break;
            case 14:
                switch (temp_r0_2) {
                case 2:
                case 1:
                    arg0->unk1424 = 0x15;
                    return;
                case 1:
                case 2:
                    arg0->unk1424 = 0xF;
                    return;
                }
                break;
            case 20:
                switch (temp_r0_2);
                break;
            }
            break;
        case 3:
            arg0->unk1429 = 5U;
            temp_r0_3 = (u16) arg0->unk1424 - 2;
            switch ((u32) temp_r0_3) {
            case 0:
                var_r1 = &gUnk_080FAA40;
                var_r2 = &gUnk_080FAA5C;
                var_r3 = &gUnk_080FAA60;
block_57:
                func_08050E30(arg0->unk10, var_r1, var_r2, var_r3, 0, 0, arg0 + 0x14E0);
                arg0->unk1429 = 4U;
                return;
            case 1:
                var_r1_2 = &gUnk_080FAA64;
block_61:
                func_08050DA0(arg0->unk10, var_r1_2, arg0 + 0x14E0);
                return;
            case 2:
                var_r1_3 = &gUnk_080FAA74;
block_63:
                func_08050DA0(arg0->unk10, var_r1_3, arg0 + 0x14E0);
                return;
            case 5:
                var_r1 = &gUnk_080FAA88;
                var_r2 = &gUnk_080FAA5C;
                var_r3 = &gUnk_080FAA60;
                goto block_57;
            case 6:
                if (arg0->unk140E == 0) {
                    var_r1_2 = &gUnk_080FAAA4;
                    goto block_61;
                }
                var_r1_3 = &gUnk_080FAAA4;
                goto block_63;
            case 7:
                var_r1_2 = &gUnk_080FAACC;
                goto block_61;
            case 12:
                var_r1 = &gUnk_080FAAE0;
                var_r2 = &gUnk_080FAA5C;
                var_r3 = &gUnk_080FAA60;
                goto block_57;
            case 13:
                func_08050DA0(arg0->unk10, &gUnk_080FAAFC, arg0 + 0x14E0);
                arg0->unk1424 = 0x10;
                var_r1_4 = arg0 + 0x1429;
block_55:
                *var_r1_4 = 3;
                return;
            case 14:
                func_08050DA0(arg0->unk10, &gUnk_080FAB94, arg0 + 0x14E0);
                arg0->unk1424 = 0x11;
                var_r1_4 = arg0 + 0x1429;
                goto block_55;
            case 15:
                func_08050DA0(arg0->unk10, &gUnk_080FABE0, arg0 + 0x14E0);
                arg0->unk149E = 0x78;
                var_r1_5 = arg0 + 0x1424;
                var_r0 = 0x12;
block_54:
                *var_r1_5 = var_r0;
                var_r1_4 = arg0 + 0x1429;
                goto block_55;
            case 16:
                func_08050DA0(arg0->unk10, &gUnk_080FAC24, arg0 + 0x14E0);
                arg0->unk149E = 0x3C;
                arg0->unk1424 = 0x13;
                var_r1_4 = arg0 + 0x1429;
                goto block_55;
            case 17:
                func_08050DA0(arg0->unk10, &gUnk_080FAC8C, arg0 + 0x14E0);
                arg0->unk149E = 0xFF;
                var_r1_5 = arg0 + 0x1424;
                var_r0 = 0x14;
                goto block_54;
            case 18:
                var_r1 = &gUnk_080FAD08;
                var_r2 = &gUnk_080FAD20;
                var_r3 = &gUnk_080FAD28;
                goto block_57;
            case 19:
                var_r1_2 = &gUnk_080FAD34;
                goto block_61;
            case 20:
                var_r1_3 = &gUnk_080FAD50;
                goto block_63;
            case 24:
                var_r1_2 = &gUnk_080FAD94;
                goto block_61;
            case 28:
                var_r1_3 = &gUnk_080FADDC;
                goto block_63;
            case 31:
                func_08050DA0(arg0->unk10, &gUnk_080FAE00, arg0 + 0x14E0);

            case 1:
            case 2:
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
