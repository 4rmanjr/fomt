# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_08030E0A/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_08030E0A/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_08030E0A/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_08030E0A/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_08030E0A/opencode/func.c" 2
? .L08031A5C();
? .L08031C7C();
? .L08031EA6(s32, ? (*)(void *));
? .L08031F0A(s32);
? .L08031F0E();
s32 GetUnkFlag12__C4Farm(void *);
s32 IsEmpty__C12RucksackItem(void *);
s32 func_08008B6C(s32, s32);
s32 func_08008CD0(s32);
s32 func_0800EB2C(s32, s32);
s32 func_0800EF88(s32, s32);
s32 func_0800F418(s32);
s32 func_0800F510(s32, s32);
s32 func_0802771C(void *, u16);
s32 func_0802A4C0(void *, s32, s32);
s32 func_0802A588(void *);
s32 func_0802A7D8(void *);
s32 func_08032384(void *, s32, s32);
s32 func_080A3F4C(s32 *, s32, u8, void *);
s32 func_080DC67C(s32, s32, u8 *);
s32 method_08009F80__4Farm(void *);
s32 rand();
s32 sub_08031E0A();

void sub_08030E0A(s32 arg4, s32 arg6, ? arg35, ? arg37, ? arg39, void **arg4B, u32 arg4C, u8 *arg53, u8 *arg55, u8 *arg56, void *arg57, u8 *arg59) {
    s16 *var_r1;
    s16 var_r0_6;
    s32 *var_r0_8;
    s32 temp_r0;
    s32 temp_r0_13;
    s32 temp_r0_18;
    s32 temp_r0_20;
    s32 temp_r1;
    s32 temp_r1_4;
    s32 temp_r1_5;
    s32 temp_r1_6;
    s32 temp_r1_7;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 temp_r2_4;
    s32 temp_r2_6;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6_2;
    s32 temp_r6_3;
    s32 var_r0;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_9;
    s32 var_r1_11;
    s32 var_r1_12;
    s32 var_r1_13;
    s32 var_r1_2;
    s32 var_r1_3;
    s32 var_r1_4;
    s32 var_r1_5;
    s32 var_r1_6;
    s32 var_r1_8;
    s32 var_r1_9;
    s32 var_r4;
    s32 var_r5;
    u16 temp_r0_14;
    u16 temp_r0_17;
    u16 temp_r0_2;
    u16 temp_r0_3;
    u16 temp_r3_4;
    u16 temp_r4;
    u16 temp_r4_3;
    u16 temp_r6;
    u32 temp_r0_15;
    u32 temp_r0_8;
    u32 temp_r5_3;
    u32 var_r4_3;
    u8 *temp_r4_2;
    u8 temp_r0_12;
    u8 temp_r0_16;
    u8 temp_r0_19;
    u8 temp_r0_22;
    u8 temp_r0_6;
    u8 temp_r1_8;
    u8 temp_r2_5;
    u8 temp_r3;
    u8 var_r0_7;
    u8 var_r1_10;
    u8 var_r1_7;
    u8 var_r3;
    u8 var_r4_2;
    void **temp_r0_10;
    void **temp_r0_21;
    void *temp_r0_11;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_7;
    void *temp_r0_9;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r2;
    void *var_r0_2;
    void *var_r0_3;

    if (saved_reg_r10->unk3F != 5) {
        .L08031F0E();
    }
    temp_r2 = saved_reg_r10 + 0x88;
    temp_r2->unk4 = (s32) (temp_r2->unk4 + temp_r2->unkC);
    temp_r2->unk8 = (s32) (temp_r2->unk8 + temp_r2->unk10);
    temp_r0 = temp_r2->unk18 + 0xFFFFC7D7;
    temp_r2->unk18 = temp_r0;
    temp_r1 = temp_r2->unk14 + temp_r0;
    if (temp_r1 > 0) {
        temp_r2->unk14 = temp_r1;
        .L08031F0E();
    }
    M2C_ERROR( )->unk14 = (s32) M2C_ERROR( );
    M2C_ERROR( )->unk18 = (s32) M2C_ERROR( );
    .L08031F0E();
    if (saved_reg_r10->unkC3 == 0) {
        if ((0xFFFFC7D7 != 0) && ((void *)0xFFFFC7D7->unk4 & 2)) {
            *arg53 = 0x20;
        } else {
            if (saved_reg_r10->unk58 == 0) {
                .L08031F0E();
            }
            var_r1 = saved_reg_r10 + 0x54;
            temp_r0_2 = saved_reg_r10->unk54 + 1;
            saved_reg_r10->unk54 = temp_r0_2;
            if (temp_r0_2 != *M2C_ERROR( )) {
                var_r1 = SECOND_REG(.L08031F0E());
            }
            *var_r1 = 0;
            var_r4 = 0x1E;
            if (saved_reg_r10->unk40 == 6) {
                var_r4 = 0x3C;
            }
            if ((s32) ((s32) (rand() >> 2) % 100) > var_r4) {
                .L08031F0E();
            }
            *arg53 = 0x1F;
            func_0802A4C0(saved_reg_r10, 0xA1, 0);
            func_08032384(saved_reg_r10, 2, 0);
            saved_reg_r10->unk78 = 1U;
            .L08031F0E();
            temp_r0_3 = saved_reg_r10->unk54 + 1;
            saved_reg_r10->unk54 = temp_r0_3;
            if (temp_r0_3 == saved_reg_r10->unk5A) {
                saved_reg_r10->unk54 = 0U;
                *arg53 = 0x1E;
                func_0802A4C0(saved_reg_r10, 0xA0, 0);
            }
            if (var_r4 == 0) {
                .L08031F0E();
            }
            if (!(var_r4->unk4 & 2)) {
                .L08031F0E();
            }
            func_080A3F4C(&arg4, saved_reg_r10->unk5C, saved_reg_r10->unk40, saved_reg_r10->unk34);
            temp_r1_2 = saved_reg_r10 + 0x60;
            temp_r0_4 = &arg4 + 0xC;
            saved_reg_r10->unk60 = (s32) arg4.unk0;
            temp_r1_2->unk4 = (s32) arg4.unk4;
            temp_r1_2->unk8 = (s32) arg4.unk8;
            temp_r1_3 = temp_r1_2 + 0xC;
            temp_r1_2->unkC = (s32) arg4.unkC;
            temp_r1_3->unk4 = (s32) temp_r0_4->unk4;
            temp_r1_3->unk8 = (s32) temp_r0_4->unk8;
            goto block_23;
        }
    } else {
block_23:
        *arg53 = 0x20;
    }
    func_0802A4C0(saved_reg_r10, 0xA2, 1);
    .L08031F0E();
    var_r1_2 = 0;
    if (saved_reg_r10->unk24 == 0) {
        var_r1_2 = 1;
    }
    if (var_r1_2 == 0) {
        .L08031F0E();
    }
    func_0802A7D8(saved_reg_r10);
    if (saved_reg_r10->unk34->unk34C4 == 0) {
        temp_r2_2 = func_0800EB2C(saved_reg_r10->unk38, 5);
        var_r1_3 = 0x32;
        if (saved_reg_r10->unk78 != 0) {
            var_r1_3 = 0x64;
        }
        func_0800EF88(temp_r2_2, var_r1_3);
    }
    if (((saved_reg_r10 + 0x60)->unkC != 0) || ((IsEmpty__C12RucksackItem(saved_reg_r10 + 0x68) << 0x18) == 0)) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        sub_08031E0A();
    }
    if (saved_reg_r10->unk6C != 0) {
        temp_r0_5 = saved_reg_r10->unk14;
        .L08031EA6(temp_r0_5 + 0x80, temp_r0_5->unk80);
    }
    var_r4_2 = saved_reg_r10->unk6D;
    if (var_r4_2 == 0) {
        if ((IsEmpty__C12RucksackItem(saved_reg_r10 + 0x68) << 0x18) == 0) {
            arg4 = saved_reg_r10->unk68;
            func_0800F418(saved_reg_r10->unk38 + 0x54);
            func_0802A588(saved_reg_r10);
            *arg53 = 0x21;
            temp_r0_6 = saved_reg_r10->unk20;
            switch (temp_r0_6) {
            case 2:
                var_r0_2 = saved_reg_r10 + 0x88;
                var_r0_2->unk4 = 0xFFF60000;
                var_r0_2->unk8 = (s32) var_r4_2;
block_81:
                var_r0_2->unk14 = 0xC0000;
                break;
            case 3:
                var_r0_2 = saved_reg_r10 + 0x88;
                var_r0_2->unk4 = 0xA0000;
                var_r0_2->unk8 = (s32) var_r4_2;
                goto block_81;
            case 1:
                var_r0_2 = saved_reg_r10 + 0x88;
                var_r1_4 = 0xFFF60000;
block_80:
                var_r0_2->unk4 = (s32) var_r4_2;
                var_r0_2->unk8 = var_r1_4;
                goto block_81;
            case 0:
                var_r0_2 = saved_reg_r10 + 0x88;
                var_r1_4 = 0xA0000;
                goto block_80;
            }
            temp_r0_7 = (*saved_reg_r10->unk0)->unk14C();
            var_r4_2 = (u8) temp_r0_7->unk0;
            var_r5 = temp_r0_7->unk4;
            if (var_r4_2 != var_r5) {
loop_83:
                if ((func_08008CD0(*var_r4_2) << 0x18) != 0) {
                    var_r4_2 += 4;
                    if (var_r4_2 == var_r5) {
                        goto block_85;
                    }
                    goto loop_83;
                }
                goto block_78;
            }
            goto block_85;
            goto block_86;
        }
    } else {
        temp_r0_8 = saved_reg_r10->unk70 - 0x35;
        switch (temp_r0_8) {
        default:
            func_0800F510(saved_reg_r10->unk38 + 0x54, 0x103);
            break;
        case 1:
            func_0800F510(saved_reg_r10->unk38 + 0x54, 7);
            break;
        case 2:
            func_0800F510(saved_reg_r10->unk38 + 0x54, 0x141);
            break;
        case 3:
            func_0800F510(saved_reg_r10->unk38 + 0x54, 0x10A);
            break;
        case 4:
            func_0800F510(saved_reg_r10->unk38 + 0x54, 0x69);
            break;
        case 5:
            func_0800F510(saved_reg_r10->unk38 + 0x54, 0xFF);
            break;
        }
        func_0802A588(saved_reg_r10);
        *arg53 = 0x21;
        temp_r3 = saved_reg_r10->unk20;
        switch (temp_r3) {
        case 2:
            var_r0_3 = saved_reg_r10 + 0x88;
            var_r0_3->unk4 = 0xFFF60000;
            var_r0_3->unk8 = 0;
block_62:
            var_r0_3->unk14 = 0xC0000;
            break;
        case 3:
            var_r0_3 = saved_reg_r10 + 0x88;
            var_r0_3->unk4 = 0xA0000;
            var_r0_3->unk8 = 0;
            goto block_62;
        case 1:
            var_r0_3 = saved_reg_r10 + 0x88;
            var_r1_5 = 0xFFF60000;
            var_r0_3->unk4 = 0;
block_61:
            var_r0_3->unk8 = var_r1_5;
            goto block_62;
        case 0:
            var_r0_3 = saved_reg_r10 + 0x88;
            var_r1_5 = 0xA0000;
            var_r0_3->unk4 = (s32) temp_r3;
            goto block_61;
        }
        temp_r0_9 = (*saved_reg_r10->unk0)->unk14C();
        var_r4_2 = (u8) temp_r0_9->unk0;
        var_r5 = temp_r0_9->unk4;
        if (var_r4_2 != var_r5) {
loop_64:
            if ((func_08008CD0(*var_r4_2) << 0x18) != 0) {
                var_r4_2 += 4;
                if (var_r4_2 == var_r5) {
                    goto block_85;
                }
                goto loop_64;
            }
block_78:
            var_r0_4 = *var_r4_2;
        } else {
block_85:
            var_r0_4 = *(var_r5 - 4);
        }
block_86:
        func_08008B6C(var_r0_4, 0x6A);
        .L08031F0E();
    }
    *arg53 = var_r4_2;
    .L08031F0E();
    var_r1_6 = 0;
    if (saved_reg_r10->unk24 == 0) {
        var_r1_6 = 1;
    }
    if (var_r1_6 == 0) {
        .L08031F0E();
    }
    temp_r0_10 = saved_reg_r10->unk0;
    arg35.unk0 = 0x3D0;
    arg35.unk4 = 0;
    (*temp_r0_10)->unk140(temp_r0_10, &arg35, 0);
    *arg53 = 0;
    temp_r0_11 = saved_reg_r10 + 0x88;
    temp_r0_11->unk4 = 0;
    temp_r0_11->unk8 = 0;
    temp_r0_11->unk14 = 0x150000;
    .L08031F0E();
    arg4B = saved_reg_r10->unk0;
    arg4C = 0U;
    arg57 = saved_reg_r10 + 0x4A;
    arg55 = saved_reg_r10 + 0x48;
    arg56 = saved_reg_r10 + 0x49;
loop_92:
    if (*(arg57 + arg4C) == 0) {

    } else {
        temp_r3_2 = *arg55 + 1;
        arg37.unk0 = temp_r3_2;
        temp_r2_3 = arg4C - 2;
        arg37.unk4 = temp_r2_3;
        temp_r0_12 = saved_reg_r10->unk20;
        switch (temp_r0_12) {
        case 0:
            temp_r0_13 = arg37.unk0;
            arg37.unk0 = temp_r2_3;
            arg37.unk4 = temp_r0_13;
            break;
        case 1:
            arg37.unk0 = (s32) (0 - temp_r2_3);
            arg37.unk4 = (s32) (0 - temp_r3_2);
            break;
        case 2:
            arg37.unk0 = (s32) (0 - temp_r3_2);
            break;
        }
        temp_r4 = (arg37.unk0 * 0x10) + saved_reg_r10->unkA;
        temp_r6 = (arg37.unk4 * 0x10) + saved_reg_r10->unkE;
        arg4.unk0 = (s16) ((0xFFFFFC00 & (u16) arg4.unk0) | (saved_reg_r10->unk4 & 0x3FF));
        arg4.unk1 = (u8) ((3 & arg4.unk1) | ((temp_r4 & 0x3F) * 4));
        arg4.unk2 = (u16) ((0xFFFFFC00 & arg4.unk2) | (((u32) (temp_r4 << 0x10) >> 0x16) & 0x3FF));
        arg4.unk3 = (u8) ((3 & arg4.unk3) | ((temp_r6 & 0x3F) * 4));
        arg4.unk4 = (s16) ((0xFFFFFC00 & (u16) arg4.unk4) | (((u32) (temp_r6 << 0x10) >> 0x16) & 0x3FF));
        (*arg4B)->unk34(&arg6, arg4B);
        var_r0_5 = (s32) (arg4 << 6) >> 0x10;
        if (var_r0_5 < 0) {
            var_r0_5 += 7;
        }
        temp_r5 = var_r0_5 >> 3;
        var_r0_6 = (((u16) arg4.unk4 & 0x3FF) << 6) | ((u8) arg4.unk3 >> 2);
        if ((s32) var_r0_6 < 0) {
            var_r0_6 += 7;
        }
        temp_r3_3 = var_r0_6 >> 3;
        temp_r0_14 = arg6.unk8;
        if ((arg6 != 0) && ((u32) temp_r5 <= (u32) temp_r0_14) && ((u32) temp_r3_3 <= (u32) arg6.unkA)) {
            temp_r1_4 = arg6.unk4;
            var_r0_7 = (temp_r3_3 * temp_r0_14) + temp_r5;
            if (temp_r1_4 != 0) {
                var_r0_7 = *(temp_r1_4 + var_r0_7);
            }
            var_r0_8 = arg6 + (var_r0_7 * 4);
        } else {
            var_r0_8 = 0;
        }
        if (var_r0_8 != 0) {
            temp_r1_5 = *var_r0_8;
            if (((temp_r1_5 << 0x1F) != 0) || ((s32) (temp_r1_5 << 0x1E) < 0)) {
                *(arg57 + arg4C) = 0;
            } else {
                var_r4_3 = (*arg4B)->unkC0(arg4B, &arg4);
                if ((var_r4_3 == 4) && ((GetUnkFlag12__C4Farm(saved_reg_r10->unk34 + 0x14) << 0x18) != 0)) {
                    var_r4_3 = 1;
                }
                switch (var_r4_3) {
                case 0:
                case 1:
                case 3:
                    break;
                case 2:
                    var_r0_9 = rand();
                    temp_r1_6 = var_r0_9;
                    if (temp_r1_6 < 0) {
                        var_r0_9 += 0xF;
                    }
                    saved_reg_r10->unk50 = (u16) ((temp_r1_6 - ((var_r0_9 >> 4) * 0x10)) + 5 + saved_reg_r10->unk50);
                    break;
                case 4:
                    method_08009F80__4Farm(saved_reg_r10->unk34 + 0x14);
                    saved_reg_r10->unk52 = 1U;
                    break;
                }
                var_r3 = 0;
                var_r1_7 = saved_reg_r10->unk78;
                if (var_r4_3 != 0) {
                    var_r1_7 |= 1;
                }
                if (var_r1_7 != 0) {
                    var_r3 = 1;
                }
                saved_reg_r10->unk78 = var_r3;
            }
        }
    }
    temp_r0_15 = arg4C + 1;
    arg4C = temp_r0_15;
    if (temp_r0_15 <= 4U) {
        goto loop_92;
    }
    temp_r0_16 = *arg55 + 1;
    *arg55 = temp_r0_16;
    if (temp_r0_16 != *arg56) {
        .L08031F0E();
    }
    if (saved_reg_r10->unk34->unk34C4 == 0) {
        temp_r2_4 = func_0800EB2C(saved_reg_r10->unk38, 0);
        var_r1_8 = 0x32;
        if (saved_reg_r10->unk78 != 0) {
            var_r1_8 = 0x64;
        }
        func_0800EF88(temp_r2_4, var_r1_8);
    }
    if (saved_reg_r10->unk52 != 0) {
        saved_reg_r10->unk14->unk80(saved_reg_r10);
    } else {
        temp_r0_17 = saved_reg_r10->unk50;
        if (temp_r0_17 != 0) {
            func_0802771C(saved_reg_r10, temp_r0_17);
        } else {
            *arg53 = (u8) temp_r0_17;
        }
    }
    (*arg4B)->unkF8(arg4B);
    .L08031F0E();
    temp_r2_5 = saved_reg_r10->unk4E;
    if (temp_r2_5 != saved_reg_r10->unk4F) {
        var_r1_9 = 0;
        if (saved_reg_r10->unk24 == 0) {
            var_r1_9 = 1;
        }
        if (var_r1_9 != 0) {
            saved_reg_r10->unk4E = (u8) (temp_r2_5 + 1);
        }
    }
    temp_r6_2 = saved_reg_r10->unk48;
    temp_r5_2 = temp_r6_2 + 0xE1;
    temp_r4_2 = saved_reg_r10 + 0x4C;
    temp_r0_18 = func_080DC67C(temp_r6_2, temp_r5_2, temp_r4_2);
    arg59 = temp_r4_2;
    if (temp_r0_18 != temp_r5_2) {
        temp_r5_3 = temp_r0_18 - temp_r6_2;
        temp_r6_3 = (temp_r5_3 % 15U) - 7;
        arg39.unk0 = temp_r6_3;
        temp_r1_7 = (temp_r5_3 / 15U) - 7;
        arg39.unk4 = temp_r1_7;
        temp_r0_19 = saved_reg_r10->unk20;
        switch (temp_r0_19) {
        case 0:
            temp_r0_20 = arg39.unk0;
            arg39.unk0 = temp_r1_7;
            arg39.unk4 = temp_r0_20;
            break;
        case 1:
            arg39.unk0 = (s32) (0 - temp_r1_7);
            arg39.unk4 = (s32) (0 - temp_r6_3);
            break;
        case 2:
            arg39.unk0 = (s32) (0 - temp_r6_3);
            break;
        }
        temp_r3_4 = (arg39.unk0 * 0x10) + saved_reg_r10->unkA;
        temp_r4_3 = (arg39.unk4 * 0x10) + saved_reg_r10->unkE;
        arg4.unk0 = (s16) ((0xFFFFFC00 & (u16) arg4.unk0) | (saved_reg_r10->unk4 & 0x3FF));
        arg4.unk1 = (u8) ((3 & arg4.unk1) | ((temp_r3_4 & 0x3F) * 4));
        arg4.unk2 = (u16) ((0xFFFFFC00 & arg4.unk2) | (((u32) (temp_r3_4 << 0x10) >> 0x16) & 0x3FF));
        arg4.unk3 = (u8) ((3 & arg4.unk3) | ((temp_r4_3 & 0x3F) * 4));
        arg4.unk4 = (s16) ((0xFFFFFC00 & (u16) arg4.unk4) | (((u32) (temp_r4_3 << 0x10) >> 0x16) & 0x3FF));
        temp_r0_21 = saved_reg_r10->unk0;
        temp_r1_8 = saved_reg_r10->unk78;
        temp_r0_22 = (*temp_r0_21)->unkD4(temp_r0_21, &arg4);
        saved_reg_r10->unk78 = (u8) ((u32) ((0 - temp_r0_22) | temp_r0_22 | ((0 - temp_r1_8) | temp_r1_8)) >> 0x1F);
    }
    var_r1_10 = *arg59;
    if ((u32) saved_reg_r10->unk4D <= (u32) var_r1_10) {
        if (saved_reg_r10->unk34->unk34C4 == 0) {
            temp_r2_6 = func_0800EB2C(saved_reg_r10->unk38, 1);
            var_r1_11 = 0x32;
            if (saved_reg_r10->unk78 != 0) {
                var_r1_11 = 0x64;
            }
            func_0800EF88(temp_r2_6, var_r1_11);
        }
        var_r1_12 = 0;
        if (saved_reg_r10->unk24 == 0) {
            var_r1_12 = 1;
        }
        if (var_r1_12 != 0) {
            .L08031C7C();
            return;
        }
        var_r1_10 = (u8) SECOND_REG(.L08031F0A(0x1D));
        goto block_171;
    }
block_171:
    *arg59 = var_r1_10 + 1;
    .L08031F0E();
    var_r1_13 = 0;
    if (saved_reg_r10->unk24 == 0) {
        var_r1_13 = 1;
    }
    if (var_r1_13 == 0) {
        .L08031F0E();
    }
    .L08031A5C();
}
