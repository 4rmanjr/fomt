# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C9020/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C9020/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C9020/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C9020/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C9020/opencode/func.c" 2
u16 func_080088C4(void *);
s32 func_080088CC(void *);
u32 func_080088D4(void *);
s32 func_08008B6C(void *, s32);
s32 func_08075C88(void *, s16);

void func_080C9020(void *arg0, u32 arg1) {
    s16 temp_r0_11;
    s16 temp_r0_6;
    s32 *var_r1_3;
    s32 *var_r1_4;
    s32 temp_r0;
    s32 temp_r0_10;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_8;
    s32 temp_r0_9;
    s32 temp_r1_5;
    s32 temp_r1_6;
    s32 var_r0_10;
    s32 var_r0_12;
    s32 var_r0_13;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_6;
    s32 var_r0_7;
    s32 var_r0_8;
    s32 var_r0_9;
    s32 var_r6;
    s32 var_r6_2;
    s32 var_r6_3;
    s32 var_r6_4;
    s32 var_r6_5;
    s32 var_r7;
    s8 *var_r0_11;
    s8 *var_r3;
    u16 temp_r0_7;
    u16 temp_r5;
    u8 *var_r1;
    u8 *var_r1_2;
    u8 *var_r3_2;
    u8 temp_r1;
    u8 temp_r1_2;
    u8 temp_r1_3;
    u8 temp_r1_4;
    u8 temp_r2;
    u8 temp_r2_2;
    u8 temp_r2_3;
    u8 temp_r2_4;
    u8 temp_r2_5;
    u8 temp_r3;
    u8 temp_r5_2;
    u8 var_r0;
    u8 var_r0_2;
    u8 var_r2;
    u8 var_r3_3;
    u8 var_r6_6;

    var_r7 = 0x28;
    switch (arg1) {
    case 1:
        break;
    default:
        var_r7 = 0x58;
        break;
    case 2:
        var_r7 = 0x38;
        break;
    case 3:
        var_r7 = 0x48;
        break;
    }
    var_r1 = arg0 + 0x6A1;
    if ((arg0->unk6A1 == 0) || (var_r0 = arg0->unk6A0, (var_r0 != 0))) {
        if (func_080088CC(arg0) & 1) {
            var_r1 = arg0 + 0x6A0;
            var_r0 = 1;
            goto block_11;
        }
    } else {
block_11:
        *var_r1 = var_r0;
    }
    var_r1_2 = arg0 + 0x6A3;
    if ((arg0->unk6A3 == 0) || (var_r0_2 = arg0->unk6A2, (var_r0_2 != 0))) {
        if (func_080088CC(arg0) & 2) {
            var_r1_2 = arg0 + 0x6A2;
            var_r0_2 = 1;
            goto block_16;
        }
    } else {
block_16:
        *var_r1_2 = var_r0_2;
    }
    temp_r5 = func_080088C4(arg0);
    temp_r0 = arg0->unk680;
    if (temp_r0 != 0) {
        if (temp_r0 > 0) {
            arg0->unkC = (u16) (arg0->unkC + 4);
            var_r0_3 = arg0->unk680 - 1;
        } else {
            arg0->unkC = (u16) (arg0->unkC - 4);
            var_r0_3 = arg0->unk680 + 1;
        }
        arg0->unk680 = var_r0_3;
        goto block_68;
    }
    var_r6 = 0;
    if ((func_080088D4(arg0) & 0x40) && !(0x3BF & temp_r5)) {
        var_r6 = 1;
    }
    if (var_r6 != 0) {
        temp_r3 = arg0->unk6A0;
        if (temp_r3 != 0) {
            arg0->unk6A1 = 1U;
            arg0->unk6A0 = 0U;
            return;
        }
        arg0->unk6A1 = temp_r3;
        var_r2 = arg0->unk6A2;
        if (var_r2 != 0) {
            arg0->unk6A3 = 1U;
            arg0->unk6A2 = temp_r3;
            return;
        }
        arg0->unk6A3 = var_r2;
        temp_r0_2 = arg0->unk648;
        if (temp_r0_2 > 0x28) {
            switch (temp_r0_2) {
            case 0x38:
                var_r0_4 = 0x28;
block_39:
                arg0->unk648 = var_r0_4;
                break;
            case 0x48:
                var_r0_4 = 0x38;
                goto block_39;
            case 0x58:
                var_r0_4 = 0x48;
                goto block_39;
            }
            var_r0_5 = arg0->unk10 - 1;
            goto block_63;
        }
        if ((s32) (s16) arg0->unkC > 0) {
            arg0->unk680 = -4;
            var_r0_6 = arg0->unk10 - 1;
            goto block_67;
        }
        goto block_65;
        goto block_68;
    }
    var_r6_2 = 0;
    if ((func_080088D4(arg0) & 0x80) && !(0x37F & temp_r5)) {
        var_r6_2 = 1;
    }
    if (var_r6_2 != 0) {
        var_r3 = arg0 + 0x6A0;
        temp_r2 = arg0->unk6A0;
        if (temp_r2 != 0) {
            goto block_189;
        }
        arg0->unk6A1 = temp_r2;
        var_r3_2 = arg0 + 0x6A2;
        temp_r1 = arg0->unk6A2;
        if (temp_r1 != 0) {
            goto block_192;
        }
        arg0->unk6A3 = temp_r1;
        var_r2 = (u8) (u16) (arg0->unk1C->unkE - 0xA0);
        temp_r0_3 = arg0->unk648;
        if (temp_r0_3 < var_r7) {
            switch (temp_r0_3) {
            case 0x28:
                var_r0_7 = 0x38;
block_61:
                arg0->unk648 = var_r0_7;
                break;
            case 0x38:
                var_r0_7 = 0x48;
                goto block_61;
            case 0x48:
                var_r0_7 = 0x58;
                goto block_61;
            }
            var_r0_5 = arg0->unk10 + 1;
block_63:
            arg0->unk10 = var_r0_5;
            func_08008B6C(arg0 + 0x18, 0xCB);
        } else if ((s32) (s16) arg0->unkC >= (s32) (s16) var_r2) {
block_65:
            arg0->unkC = (u16) var_r2;
        } else {
            arg0->unk680 = 4;
            var_r0_6 = arg0->unk10 + 1;
block_67:
            arg0->unk10 = var_r0_6;
            func_08008B6C(arg0 + 0x18, 0xCB);
        }
block_68:
        func_08075C88(arg0->unk1C, (s16) arg0->unkC);
        return;
    }
    var_r6_3 = 0;
    if ((func_080088D4(arg0) & 0x10) && !(0x3EF & temp_r5)) {
        var_r6_3 = 1;
    }
    if (var_r6_3 == 0) {
        var_r6_4 = 0;
        if ((func_080088D4(arg0) & 0x20) && !(0x3DF & temp_r5)) {
            var_r6_4 = 1;
        }
        if (var_r6_4 != 0) {
            var_r3 = arg0 + 0x6A0;
            temp_r2_2 = arg0->unk6A0;
            if (temp_r2_2 != 0) {
                goto block_189;
            }
            arg0->unk6A1 = temp_r2_2;
            var_r3_3 = arg0->unk6A2;
            if (var_r3_3 != 0) {
                arg0->unk6A3 = 1U;
                arg0->unk6A2 = temp_r2_2;
                return;
            }
            arg0->unk6A3 = var_r3_3;
            temp_r0_4 = arg0->unk648;
            if (temp_r0_4 > 0x38) {
                switch (temp_r0_4) {
                case 0x48:
                    var_r0_8 = 0x38;
block_144:
                    arg0->unk648 = var_r0_8;
                    break;
                case 0x58:
                    var_r0_8 = 0x48;
                    goto block_144;
                }
                var_r1_3 = arg0 + 0x648;
                temp_r0_5 = arg0->unk648;
                switch (temp_r0_5) {
                case 0x38:
                    var_r0_9 = 0x28;
                    goto block_162;
                case 0x48:
                    var_r0_9 = 0x38;
                    goto block_162;
                case 0x58:
                    var_r0_9 = 0x48;
                    goto block_162;
                }
                goto block_163;
            }
            if (temp_r0_4 == 0x38) {
                arg0->unk648 = 0x28;
                if ((s32) (s16) arg0->unkC <= 0) {
                    var_r0_10 = arg0->unk10 - 1;
                } else {
                    var_r1_3 = arg0 + 0x680;
                    var_r0_9 = -4;
                    goto block_162;
                }
                goto block_164;
            }
            temp_r0_6 = (s16) arg0->unkC;
            if ((s32) temp_r0_6 <= 0) {
                goto block_158;
            }
            if ((s32) temp_r0_6 <= 0x10) {
                arg0->unk680 = -4;
                var_r0_10 = arg0->unk10 - 1;
            } else {
                var_r1_3 = arg0 + 0x680;
                var_r0_9 = -8;
block_162:
                *var_r1_3 = var_r0_9;
block_163:
                var_r0_10 = arg0->unk10 - 2;
            }
            goto block_164;
        }
        var_r6_5 = 0;
        if ((1 & (func_080088D4(arg0) >> 8)) && !(0x2FF & temp_r5)) {
            var_r6_5 = 1;
        }
        if (var_r6_5 != 0) {
            var_r3 = arg0 + 0x6A0;
            temp_r2_3 = arg0->unk6A0;
            if (temp_r2_3 != 0) {
                var_r0_11 = arg0 + 0x6A1;
                goto block_190;
            }
            arg0->unk6A1 = temp_r2_3;
            var_r3_2 = arg0 + 0x6A2;
            temp_r1_2 = arg0->unk6A2;
            if (temp_r1_2 == 0) {
                arg0->unk6A3 = temp_r1_2;
                temp_r0_7 = arg0->unk1C->unkE - 0xA0;
                if ((s32) (s16) arg0->unkC >= (s32) (s16) temp_r0_7) {
                    arg0->unkC = temp_r0_7;
                    return;
                }
                arg0->unk680 = 4;
                func_08008B6C(arg0 + 0x18, 0xCB);
                var_r1_4 = arg0 + 0x648;
                temp_r0_8 = arg0->unk648;
                switch (temp_r0_8) {
                case 0x38:
                    arg0->unk648 = 0x28;
                    return;
                default:
                    arg0->unk10 = (s32) (arg0->unk10 + 1);
                    return;
                }
            } else {
                goto block_192;
            }
        } else {
            var_r6_6 = 0;
            if ((2 & (func_080088D4(arg0) >> 8)) && !(0x1FF & temp_r5)) {
                var_r6_6 = 1;
            }
            if (var_r6_6 != 0) {
                var_r3 = arg0 + 0x6A0;
                temp_r2_4 = arg0->unk6A0;
                if (temp_r2_4 != 0) {
                    goto block_189;
                }
                arg0->unk6A1 = temp_r2_4;
                var_r3_2 = arg0 + 0x6A2;
                temp_r1_3 = arg0->unk6A2;
                if (temp_r1_3 != 0) {
                    goto block_192;
                }
                arg0->unk6A3 = temp_r1_3;
                if ((s32) (s16) arg0->unkC <= 0) {
                    arg0->unkC = (u16) temp_r1_3;
                    return;
                }
                arg0->unk680 = -4;
                func_08008B6C(arg0 + 0x18, 0xCB);
                var_r1_4 = arg0 + 0x648;
                temp_r0_9 = arg0->unk648;
                switch (temp_r0_9) {
                case 0x28:
                case 0x48:
                    *var_r1_4 = 0x38;
                    return;
                case 0x38:
                case 0x58:
                    *var_r1_4 = 0x48;
                    return;
                case 0x48:
                    arg0->unk648 = 0x58;
                    return;
                default:
                    arg0->unk10 = (s32) (arg0->unk10 - 1);
                    return;
                }
            } else {
                temp_r5_2 = arg0->unk6A0;
                if (temp_r5_2 != 0) {
                    arg0->unk6A1 = 1U;
                    arg0->unk6A0 = var_r6_6;
                    return;
                }
                if (arg0->unk6A2 != 0) {
                    arg0->unk6A3 = 1U;
                    arg0->unk6A2 = temp_r5_2;
                }
            }
        }
    } else {
        var_r3 = arg0 + 0x6A0;
        temp_r2_5 = arg0->unk6A0;
        if (temp_r2_5 != 0) {
block_189:
            var_r0_11 = arg0 + 0x6A1;
block_190:
            *var_r0_11 = 1;
            *var_r3 = 0;
            return;
        }
        arg0->unk6A1 = temp_r2_5;
        var_r3_2 = arg0 + 0x6A2;
        temp_r1_4 = arg0->unk6A2;
        if (temp_r1_4 != 0) {
block_192:
            arg0->unk6A3 = 1U;
            *var_r3_2 = arg0->unk6A0;
            return;
        }
        arg0->unk6A3 = temp_r1_4;
        var_r3_3 = (u8) (u16) (arg0->unk1C->unkE - 0xA0);
        temp_r1_5 = arg0->unk648;
        if (temp_r1_5 <= 0x47) {
            switch (temp_r1_5) {
            case 0x28:
                var_r0_12 = 0x38;
block_88:
                arg0->unk648 = var_r0_12;
                break;
            case 0x38:
                var_r0_12 = 0x48;
                goto block_88;
            case 0x48:
                var_r0_12 = 0x58;
                goto block_88;
            }
            temp_r1_6 = arg0->unk648;
            if (temp_r1_6 > var_r7) {
                switch (temp_r1_6) {
                case 0x38:
                    arg0->unk648 = 0x28;
                    return;
                case 0x48:
                    arg0->unk648 = 0x38;
                    return;
                case 0x58:
                    arg0->unk648 = 0x48;
                    return;
                }
            } else {
                arg0->unk10 = (s32) (arg0->unk10 + 1);
                switch (temp_r1_6) {
                case 0x28:
                    var_r0_13 = 0x38;
block_108:
                    arg0->unk648 = var_r0_13;
                    break;
                case 0x38:
                    var_r0_13 = 0x48;
                    goto block_108;
                case 0x48:
                    var_r0_13 = 0x58;
                    goto block_108;
                }
                temp_r0_10 = arg0->unk648;
                if (temp_r0_10 > var_r7) {
                    switch (temp_r0_10) {
                    case 0x38:
                        arg0->unk648 = 0x28;
                        break;
                    case 0x48:
                        arg0->unk648 = 0x38;
                        break;
                    case 0x58:
                        arg0->unk648 = 0x48;
                        break;
                    }
                } else {
                    var_r0_10 = arg0->unk10 + 1;
                    goto block_164;
                }
                goto block_165;
            }
        } else {
            if (temp_r1_5 == 0x48) {
                arg0->unk648 = 0x58;
                if (var_r7 < 0x58) {
                    arg0->unk648 = temp_r1_5;
                } else {
                    if ((s32) (s16) arg0->unkC >= (s32) (s16) var_r3_3) {
                        arg0->unkC = (u16) var_r3_3;
                        var_r0_10 = arg0->unk10 + 1;
                    } else {
                        arg0->unk680 = 4;
                        var_r0_10 = arg0->unk10 + 2;
                    }
                    goto block_164;
                }
                goto block_165;
            }
            temp_r0_11 = (s16) var_r3_3;
            if ((s32) (s16) arg0->unkC < (s32) temp_r0_11) {
                if ((s32) (s16) arg0->unkC >= (s32) (temp_r0_11 - 0x10)) {
                    arg0->unk680 = 4;
                    var_r0_10 = arg0->unk10 + 1;
                } else {
                    arg0->unk680 = 8;
                    var_r0_10 = arg0->unk10 + 2;
                }
block_164:
                arg0->unk10 = var_r0_10;
block_165:
                func_08008B6C(arg0 + 0x18, 0xCB);
                return;
            }
block_158:
            arg0->unkC = (u16) var_r3_3;
        }
    }
}
