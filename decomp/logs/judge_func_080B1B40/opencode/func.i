# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B1B40/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B1B40/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B1B40/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B1B40/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B1B40/opencode/func.c" 2
s32 func_080087C8(void *);
s32 func_080088B8(void *);
s32 func_080088DC(void *);
s16 *func_08008918(void *);
s32 func_08008920(void *);
s32 func_08008940(void *);
s32 func_0800894C(void *);
s32 func_0804EC84(u8, ? *, s32);
s32 func_08050D34(s32);
u32 func_08050D3C(s32, s32, s32, s16 *, s32, s32, void *);
s32 func_08050D5C(s32);
s32 func_08050D74(s32);
s32 func_08050D8C(s32, s32 *);
s32 func_08050DD8(s32);
s32 func_08050DE4(s32);
s32 func_08050E5C(s32);
s32 func_080AF814(void *);
s32 memcpy(s32 *, ? *, s32);
s32 strcat(s32 *, ? *);
extern ? gUnk_0810782C;
extern ? gUnk_08107834;
extern ? gUnk_08107844;

void func_080B1B40(void *arg0) {
s32 spC;
s32 sp10;
s32 sp18;
s32 sp28;
    s32 sp34;
    s16 sp58;
    s32 sp5C;
    s32 sp60;
    s16 *temp_r0;
    s16 *temp_r5;
    s16 *temp_r6;
    s32 temp_r1;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r6_2;
    s32 temp_r8;
    s32 temp_r8_2;
    s32 temp_sb;
    s32 temp_sb_2;
    s32 temp_sl;
    s32 temp_sl_2;
    u32 temp_r0_2;

    func_0804EC84(arg0->unk90E, &spC, 0);
    memcpy(&sp10, &gUnk_0810782C, 6);
    memcpy(&sp18, &gUnk_08107834, 0xE);
    memcpy(&sp28, &gUnk_08107844, 0xA);
    sp34 = gUnk_0810782C.unk0;
    sp34.unk4 = (u16) gUnk_0810782C.unk4;
    sp34 = gUnk_0810782C.unk0;
    sp34.unk4 = (u16) gUnk_0810782C.unk4;
    strcat(&sp34, &gUnk_08107834);
    strcat(&sp34, &spC);
    strcat(&sp34, &gUnk_08107844);
    sp5C = 1;
    sp60 = 0;
    temp_r0 = func_08008918(arg0);
    sp58 = 0x1740;
    *temp_r0 = 0x1740;
    func_08050E5C(arg0->unk418);
    temp_sl = arg0->unk418;
    temp_sb = func_080088DC(arg0);
    temp_r8 = func_08008920(arg0);
    temp_r6 = func_08008918(arg0);
    temp_r4 = func_08008940(arg0);
    func_08050D3C(temp_sl, temp_sb, temp_r8, temp_r6, temp_r4, func_0800894C(arg0), arg0 + 0x810);
loop_10:
    func_080AF814(arg0);
    if (arg0->unk838 == 1) {
        func_080087C8(arg0);
        func_080088B8(arg0);
        temp_sl_2 = func_08050D34(arg0->unk418);
        temp_sb_2 = arg0->unk418;
        temp_r8_2 = func_080088DC(arg0);
        temp_r6_2 = func_08008920(arg0);
        temp_r5 = func_08008918(arg0);
        temp_r4_2 = func_08008940(arg0);
        temp_r0_2 = func_08050D3C(temp_sb_2, temp_r8_2, temp_r6_2, temp_r5, temp_r4_2, func_0800894C(arg0), arg0 + 0x810);
        switch (temp_r0_2) {
        case 0:
            if (sp5C == 0) {
                arg0->unk838 = 2;
            } else {
                func_08050D5C(arg0->unk418);
            }
            break;
        case 3:
            if (temp_sl_2 == 1) {
                func_08050D8C(arg0->unk418, &sp34);
                func_08050DD8(arg0->unk418);
                sp5C = 0;
            }

        case 1:
        case 2:
        case 4:
        case 5:
        case 6:
            temp_r1 = sp60 + 1;
            sp60 = temp_r1;
            if (temp_r1 > 0x78) {
                func_08050DE4(arg0->unk418);
                func_08050D74(arg0->unk418);
            }
            break;
        }
        goto loop_10;
    }
}
