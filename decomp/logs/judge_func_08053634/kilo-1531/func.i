# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08053634/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08053634/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08053634/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08053634/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08053634/kilo-1531/func.c" 2
s32 func_080088DC(void *);
s32 func_08008918(void *);
s32 func_08008920(void *);
s32 func_08008940(void *);
s32 func_0800894C(void *);
u32 func_08050D3C(s32, s32, s32, s32, s32, s32, void *);
s32 func_08050D5C(s32);
s32 func_08050D74(s32);
s32 func_08050D8C(s32, ? *);
s32 func_08050DA0(s32, ? *, void *);
s32 func_08050DF0(s32);
s32 func_08050E30(s32, ? *, ? *, ? *, s32, s32, s32);
extern ? gUnk_080FA39C;
extern ? gUnk_080FA3B8;
extern ? gUnk_080FA3BC;
extern ? gUnk_080FA3C0;
extern ? gUnk_080FA458;
extern ? gUnk_080FA49C;
extern ? gUnk_080FA510;
extern ? gUnk_080FA614;
extern ? gUnk_080FA660;
extern ? gUnk_080FA670;
extern ? gUnk_080FA684;
extern ? gUnk_080FA6A0;
extern ? gUnk_080FA6AC;
extern ? gUnk_080FA6E0;
extern ? gUnk_080FA6F4;

void func_08053634(void *arg0) {
    ? *var_r1;
    s16 *var_r1_2;
    s16 *var_r1_3;
    s16 temp_r0_2;
    s16 temp_r0_4;
    s16 temp_r1;
    s32 temp_r0_3;
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
        if (arg0->unk232C == 0) {
            func_08050D5C(arg0->unk10);
            arg0->unk232C = 3;
            return;
        }
        arg0->unk232C = 2;
        return;
    case 3:
        temp_r0_2 = arg0->unk232C;
        switch (temp_r0_2) {
        case 5:
            func_08050D74(arg0->unk10);
            arg0->unk232C = 1;
            return;
        case 4:
            temp_r0_3 = func_08050DF0(arg0->unk10);
            arg0->unk232C = 3;
            temp_r1 = arg0->unk2328;
            switch (temp_r1) {
            case 2:
                switch (temp_r0_3) {
                case 1:
                    arg0->unk232E = 0;
                    arg0->unk2328 = 3;
                    return;
                case 2:
                    arg0->unk232E = 1;
                    arg0->unk232C = 5;
                    return;
                }
                break;
            case 9:
                if (temp_r0_3 != 1) {
block_24:
                    if (temp_r0_3 == 2) {
                        arg0->unk232E = 1;
                    }
                } else {
block_23:
                    arg0->unk232E = 0;
                }
block_26:
                arg0->unk232C = 5;
                return;
            case 23:
                if (temp_r0_3 == 1) {
                    goto block_23;
                }
                goto block_24;
                goto block_26;
            }
            break;
        case 3:
            arg0->unk232C = 5;
            temp_r0_4 = (u16) arg0->unk2328 - 2;
            switch ((u32) temp_r0_4) {
            case 0:
                var_r1 = &gUnk_080FA39C;
block_43:
                func_08050E30(arg0->unk10, var_r1, &gUnk_080FA3B8, &gUnk_080FA3BC, 0, 0, 0);
                var_r1_2 = arg0 + 0x232C;
block_44:
                *var_r1_2 = 4;
                return;
            case 1:
                func_08050D8C(arg0->unk10, &gUnk_080FA3C0);
                return;
            case 3:
                func_08050D8C(arg0->unk10, &gUnk_080FA458);
                return;
            case 4:
                func_08050D8C(arg0->unk10, &gUnk_080FA49C);
                return;
            case 5:
                func_08050D8C(arg0->unk10, &gUnk_080FA510);
                arg0->unk2328 = 9;
                var_r1_3 = arg0 + 0x232C;
block_38:
                *var_r1_3 = 3;
                return;
            case 6:
                func_08050D8C(arg0->unk10, &gUnk_080FA614);
                arg0->unk2328 = 9;
                var_r1_3 = arg0 + 0x232C;
                goto block_38;
            case 7:
                func_08050E30(arg0->unk10, &gUnk_080FA660, &gUnk_080FA3BC, &gUnk_080FA3B8, 0, 0, 0);
                var_r1_2 = arg0 + 0x232C;
                goto block_44;
            case 22:
                func_08050D8C(arg0->unk10, &gUnk_080FA670);
                return;
            case 23:
                func_08050D8C(arg0->unk10, &gUnk_080FA684);
                return;
            case 21:
                var_r1 = &gUnk_080FA6A0;
                goto block_43;
            case 24:
                func_08050D8C(arg0->unk10, &gUnk_080FA6AC);
                return;
            case 18:
                func_08050DA0(arg0->unk10, &gUnk_080FA6E0, arg0 + 0x23A0);
                return;
            case 19:
                func_08050D8C(arg0->unk10, &gUnk_080FA6F4);

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
