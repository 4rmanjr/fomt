# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E25FC/looptest/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E25FC/looptest/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E25FC/looptest/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E25FC/looptest/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E25FC/looptest/func.c" 2
s32 func_080E2170(u8 *, u8 **);
s32 func_080E21A8(u8 *, u8 **);

u8 *func_080E25FC(u8 *arg0, u8 **arg1, u8 **arg2, u8 **arg3) {
    s8 *temp_r0_3;
    s8 *temp_r0_4;
    u8 *temp_r0;
    u8 *temp_r0_2;
    u8 *temp_r1;
    u8 *temp_r1_2;
    u8 *temp_r1_4;
    u8 *temp_r1_6;
    u8 *temp_r1_8;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *var_r1;
    u8 *var_r1_2;
    u8 *var_r2;
    u8 *var_r4;
    u8 *var_r6;
    u8 *var_r7;
    u8 temp_r1_3;
    u8 temp_r1_5;
    u8 temp_r1_7;

    var_r7 = arg0;
    temp_r1 = var_r7->unk8;
    if (temp_r1 != 0) {
        temp_r0 = var_r7->unkC;
        if (temp_r0 == 0) {
            var_r6 = temp_r1;
        } else {
            var_r7 = temp_r0;
loop_5:
            if (var_r7->unk8 != 0) {
                var_r7 = var_r7->unk8;
                goto loop_5;
            }
            goto block_6;
        }
    } else {
block_6:
        var_r6 = var_r7->unkC;
    }
    if (var_r7 != arg0) {
        arg0->unk8->unk4 = var_r7;
        var_r7->unk8 = (u8 *) arg0->unk8;
        if (var_r7 != arg0->unkC) {
            var_r4 = var_r7->unk4;
            if (var_r6 != 0) {
                var_r6->unk4 = var_r4;
            }
            var_r7->unk4->unk8 = var_r6;
            var_r7->unkC = (u8 *) arg0->unkC;
            arg0->unkC->unk4 = var_r7;
        } else {
            var_r4 = var_r7;
        }
        if (*arg1 == arg0) {
            *arg1 = var_r7;
        } else {
            temp_r1_2 = arg0->unk4;
            if (temp_r1_2->unk8 == arg0) {
                temp_r1_2->unk8 = var_r7;
            } else {
                temp_r1_2->unkC = var_r7;
            }
        }
        var_r7->unk4 = (u8 *) arg0->unk4;
        temp_r1_3 = var_r7->unk0;
        var_r7->unk0 = arg0->unk0;
        arg0->unk0 = temp_r1_3;
        var_r7 = arg0;
    } else {
        var_r4 = var_r7->unk4;
        if (var_r6 != 0) {
            var_r6->unk4 = var_r4;
        }
        if (*arg1 == var_r7) {
            *arg1 = var_r6;
        } else {
            temp_r1_4 = var_r7->unk4;
            if (temp_r1_4->unk8 == var_r7) {
                temp_r1_4->unk8 = var_r6;
            } else {
                temp_r1_4->unkC = var_r6;
            }
        }
        if (*arg2 == arg0) {
            if (arg0->unkC == 0) {
                *arg2 = arg0->unk4;
            } else {
                var_r1 = var_r6;
                if (var_r6->unk8 != 0) {
                    do {
                        var_r1 = var_r1->unk8;
                    } while (var_r1->unk8 != 0);
                }
                *arg2 = var_r1;
            }
        }
        if (*arg3 == arg0) {
            if (arg0->unk8 == 0) {
                *arg3 = arg0->unk4;
            } else {
                var_r1_2 = var_r6;
                if (var_r6->unkC != 0) {
                    do {
                        var_r1_2 = var_r1_2->unkC;
                    } while (var_r1_2->unkC != 0);
                }
                *arg3 = var_r1_2;
            }
        }
    }
    if (*var_r7 == 0) {

    } else {
loop_71:
        if ((var_r6 != *arg1) && ((var_r6 == 0) || (*var_r6 == 1))) {
            temp_r0_2 = var_r4->unk8;
            if (var_r6 == temp_r0_2) {
                var_r2 = var_r4->unkC;
                temp_r1_5 = *var_r2;
                if (temp_r1_5 == 0) {
                    *var_r2 = 1;
                    var_r4->unk0 = temp_r1_5;
                    func_080E2170(var_r4, arg1);
                    var_r2 = var_r4->unkC;
                }
                temp_r3 = var_r2->unk8;
                if (((temp_r3 != 0) && (*temp_r3 != 1)) || ((temp_r1_6 = var_r2->unkC, (temp_r1_6 != 0)) && (*temp_r1_6 != 1))) {
                    if ((var_r2->unkC == 0) || (*var_r2->unkC == 1)) {
                        if (temp_r3 != 0) {
                            *temp_r3 = 1;
                        }
                        var_r2->unk0 = 0;
                        func_080E21A8(var_r2, arg1);
                    }
                    *var_r4->unkC = var_r4->unk0;
                    var_r4->unk0 = 1;
                    temp_r0_3 = var_r4->unkC->unkC;
                    if (temp_r0_3 != 0) {
                        *temp_r0_3 = 1;
                    }
                    func_080E2170(var_r4, arg1);
                } else {
                    goto block_62;
                }
            } else {
                var_r2 = temp_r0_2;
                temp_r1_7 = *var_r2;
                if (temp_r1_7 == 0) {
                    *var_r2 = 1;
                    var_r4->unk0 = temp_r1_7;
                    func_080E21A8(var_r4, arg1);
                    var_r2 = var_r4->unk8;
                }
                temp_r3_2 = var_r2->unkC;
                if (((temp_r3_2 == 0) || (*temp_r3_2 == 1)) && ((temp_r1_8 = var_r2->unk8, (temp_r1_8 == 0)) || (*temp_r1_8 == 1))) {
block_62:
                    *var_r2 = 0;
                    var_r6 = var_r4;
                    var_r4 = var_r6->unk4;
                    goto loop_71;
                }
                if ((var_r2->unk8 == 0) || (*var_r2->unk8 == 1)) {
                    if (temp_r3_2 != 0) {
                        *temp_r3_2 = 1;
                    }
                    var_r2->unk0 = 0;
                    func_080E2170(var_r2, arg1);
                }
                *var_r4->unk8 = var_r4->unk0;
                var_r4->unk0 = 1;
                temp_r0_4 = var_r4->unk8->unk8;
                if (temp_r0_4 != 0) {
                    *temp_r0_4 = 1;
                }
                func_080E21A8(var_r4, arg1);
            }
        }
        if (var_r6 != 0) {
            *var_r6 = 1;
        }
    }
    return var_r7;
}
