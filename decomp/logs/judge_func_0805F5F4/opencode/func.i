# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805F5F4/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805F5F4/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805F5F4/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805F5F4/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805F5F4/opencode/func.c" 2
s32 func_080088DC(void *);
s32 func_08008918(void *);
s32 func_08008920(void *);
s32 func_08008940(void *);
s32 func_0800894C(void *);
u32 func_08050D3C(s32, s32, s32, s32, s32, s32, void *);
s32 func_08050D5C(s32);
s32 func_08050D74(s32);
s32 func_08050DA0(s32, s32 *, void *);
s32 func_08050E68(s32, s32 *);
s32 func_08050E74(s32);
extern s32 gUnk_080FB234;
extern s32 gUnk_080FB23C;
extern s32 gUnk_080FB27C;
extern s32 gUnk_080FB284;
extern s32 gUnk_080FB2D0;
extern s32 gUnk_080FB2F4;
extern s32 gUnk_080FB300;
extern s32 gUnk_080FB308;
extern s32 gUnk_080FB398;
extern s32 gUnk_080FB3CC;
extern s32 gUnk_080FB420;
extern s32 gUnk_080FB46C;
extern s32 gUnk_080FB484;
extern s32 gUnk_080FB4D4;
extern s32 gUnk_080FB51C;
extern s32 gUnk_080FB520;
extern s32 gUnk_080FB534;
extern s32 gUnk_080FB53C;
extern s32 gUnk_080FB544;
extern s32 gUnk_080FB578;
extern s32 gUnk_080FB5D4;
extern s32 gUnk_080FB634;
extern s32 gUnk_080FB6C0;
extern s32 gUnk_080FB710;
extern s32 gUnk_080FB738;
extern s32 gUnk_080FB754;
extern s32 gUnk_080FB7A0;
extern s32 gUnk_080FB7F0;

typedef struct GenObj {
    u8 _pad0[16];
    s32 unk10;
    u8 _pad14[25616];
    s32 unk6424;
    s32 unk6426;
} GenObj;
void func_0805F5F4(GenObj *arg0) {
    s32 *var_r1;
    s16 temp_r0_2;
    s16 temp_r0_3;
    s16 temp_r0_4;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r8;
    s32 temp_sb;
    u32 temp_r0;

    temp_sb = arg0->unk10;
    temp_r8 = func_080088DC(arg0);
    temp_r6 = func_08008920(arg0);
    temp_r5 = func_08008918(arg0);
    temp_r4 = func_08008940(arg0);
    temp_r0 = func_08050D3C(temp_sb, temp_r8, temp_r6, temp_r5, temp_r4, func_0800894C(arg0), arg0 + 0x14);
    switch (temp_r0) {
    case 0:
        temp_r0_2 = arg0->unk6426;
        if (temp_r0_2 == 0) {
            func_08050E74(arg0->unk10);
            func_08050D5C(arg0->unk10);
            arg0->unk6426 = 3;
            return;
        }
        if (temp_r0_2 == 6) {
            arg0->unk6426 = 0;
            return;
        }
        arg0->unk6426 = 2;
        return;
    case 3:
        temp_r0_3 = arg0->unk6426;
        switch (temp_r0_3) {
        case 5:
            func_08050D74(arg0->unk10);
            arg0->unk6426 = 1;
            return;
        case 6:
            func_08050D74(arg0->unk10);
            return;
        case 3:
            arg0->unk6426 = 5;
            temp_r0_4 = arg0->unk6424;
            switch ((u32) temp_r0_4) {
            case 0:
                func_08050E68(arg0->unk10, &gUnk_080FB234);
                func_08050DA0(arg0->unk10, &gUnk_080FB23C, arg0 + 0x6428);
                arg0->unk6426 = 6;
                arg0->unk6424 = 1;
                return;
            case 1:
                func_08050E68(arg0->unk10, &gUnk_080FB27C);
                func_08050DA0(arg0->unk10, &gUnk_080FB284, arg0 + 0x6428);
                arg0->unk6426 = 6;
                arg0->unk6424 = 2;
                return;
            case 2:
                func_08050E68(arg0->unk10, &gUnk_080FB234);
                func_08050DA0(arg0->unk10, &gUnk_080FB2D0, arg0 + 0x6428);
                arg0->unk6426 = 6;
                arg0->unk6424 = 3;
                return;
            case 3:
                func_08050E68(arg0->unk10, &gUnk_080FB27C);
                var_r1 = &gUnk_080FB2F4;
block_39:
                func_08050DA0(arg0->unk10, var_r1, arg0 + 0x6428);
                return;
            case 4:
                func_08050E68(arg0->unk10, &gUnk_080FB300);
                var_r1 = &gUnk_080FB308;
                goto block_39;
            case 5:
                func_08050E68(arg0->unk10, &gUnk_080FB234);
                func_08050DA0(arg0->unk10, &gUnk_080FB398, arg0 + 0x6428);
                arg0->unk6426 = 6;
                arg0->unk6424 = 6;
                return;
            case 6:
                func_08050E68(arg0->unk10, &gUnk_080FB27C);
                func_08050DA0(arg0->unk10, &gUnk_080FB3CC, arg0 + 0x6428);
                arg0->unk6426 = 6;
                arg0->unk6424 = 7;
                return;
            case 7:
                func_08050E68(arg0->unk10, &gUnk_080FB300);
                func_08050DA0(arg0->unk10, &gUnk_080FB420, arg0 + 0x6428);
                arg0->unk6426 = 6;
                arg0->unk6424 = 9;
                return;
            case 9:
                func_08050E68(arg0->unk10, &gUnk_080FB27C);
                func_08050DA0(arg0->unk10, &gUnk_080FB46C, arg0 + 0x6428);
                arg0->unk6426 = 6;
                arg0->unk6424 = 0xA;
                return;
            case 10:
                func_08050E68(arg0->unk10, &gUnk_080FB300);
                func_08050DA0(arg0->unk10, &gUnk_080FB484, arg0 + 0x6428);
                arg0->unk6426 = 6;
                arg0->unk6424 = 0xB;
                return;
            case 11:
                func_08050E68(arg0->unk10, &gUnk_080FB234);
                var_r1 = &gUnk_080FB4D4;
                goto block_39;
            case 14:
                func_08050E68(arg0->unk10, &gUnk_080FB51C);
                func_08050DA0(arg0->unk10, &gUnk_080FB520, arg0 + 0x6428);
                arg0->unk6426 = 6;
                arg0->unk6424 = 0xF;
                return;
            case 15:
                var_r1 = &gUnk_080FB534;
                goto block_39;
            case 16:
                func_08050E68(arg0->unk10, &gUnk_080FB53C);
                func_08050DA0(arg0->unk10, &gUnk_080FB544, arg0 + 0x6428);
                arg0->unk6426 = 6;
                arg0->unk6424 = 0x11;
                return;
            case 17:
                func_08050E68(arg0->unk10, &gUnk_080FB53C);
                func_08050DA0(arg0->unk10, &gUnk_080FB578, arg0 + 0x6428);
                arg0->unk6426 = 6;
                arg0->unk6424 = 0x12;
                return;
            case 18:
                func_08050E68(arg0->unk10, &gUnk_080FB53C);
                var_r1 = &gUnk_080FB5D4;
                goto block_39;
            case 19:
                func_08050E68(arg0->unk10, &gUnk_080FB300);
                func_08050DA0(arg0->unk10, &gUnk_080FB634, arg0 + 0x6428);
                arg0->unk6426 = 6;
                arg0->unk6424 = 0x14;
                return;
            case 20:
                func_08050E68(arg0->unk10, &gUnk_080FB300);
                func_08050DA0(arg0->unk10, &gUnk_080FB6C0, arg0 + 0x6428);
                arg0->unk6426 = 6;
                arg0->unk6424 = 0x15;
                return;
            case 21:
                func_08050E68(arg0->unk10, &gUnk_080FB300);
                var_r1 = &gUnk_080FB710;
                goto block_39;
            case 22:
                func_08050E68(arg0->unk10, &gUnk_080FB53C);
                func_08050DA0(arg0->unk10, &gUnk_080FB738, arg0 + 0x6428);
                arg0->unk6426 = 6;
                arg0->unk6424 = 0x17;
                return;
            case 23:
                func_08050E68(arg0->unk10, &gUnk_080FB53C);
                func_08050DA0(arg0->unk10, &gUnk_080FB754, arg0 + 0x6428);
                arg0->unk6426 = 6;
                arg0->unk6424 = 0x18;
                return;
            case 24:
                func_08050E68(arg0->unk10, &gUnk_080FB300);
                var_r1 = &gUnk_080FB7A0;
                goto block_39;
            case 25:
                func_08050E68(arg0->unk10, &gUnk_080FB300);
                func_08050DA0(arg0->unk10, &gUnk_080FB7F0, arg0 + 0x6428);

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
