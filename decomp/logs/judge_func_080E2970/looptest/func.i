# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E2970/looptest/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E2970/looptest/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E2970/looptest/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E2970/looptest/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E2970/looptest/func.c" 2
u32 *func_080E2354(u32 *);
s32 func_080E27FC(u32 **, void *, u32 *, u32 *, s32);
s32 func_080E28BC(u32 **, void *, u32 *);
u32 *func_080E2B28(u32 *);

u32 **func_080E2970(u32 **arg0, void *arg1, u32 **arg2, u32 *arg3) {
    u32 *sp8;
    u32 *spC;
    u32 *sp10;
    s32 var_ip;
    s32 var_ip_2;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r1;
    s32 var_r3_2;
    s32 var_r5_2;
    s32 var_r5_3;
    s32 var_r5_4;
    u32 *temp_r0;
    u32 *temp_r0_2;
    u32 *temp_r0_3;
    u32 *temp_r0_4;
    u32 *temp_r2;
    u32 *var_r0;
    u32 *var_r2;
    u32 *var_r3;
    u32 *var_r5;
    u32 temp_r1_2;
    u32 temp_r1_3;
    u32 temp_r2_2;
    u32 temp_r2_3;
    void *temp_r1;

    temp_r1 = arg1->unk4;
    temp_r2 = *arg2;
    if (temp_r2 == temp_r1->unk8) {
        if (arg1->unk8 == 0) {
            func_080E28BC(&sp8, arg1, arg3);
            var_r0 = sp8;
            goto block_50;
        }
        var_r0_2 = 0;
        temp_r1_2 = temp_r2->unk10;
        var_r3 = temp_r2;
        temp_r2_2 = *arg3;
        if (temp_r2_2 < temp_r1_2) {
            var_r0_2 = 1;
        }
        if (var_r0_2 == 0) {
            var_r0_3 = 0;
            if (temp_r1_2 < temp_r2_2) {
                var_r0_3 = 1;
            }
            if (var_r0_3 == 0) {
                *arg0 = var_r3;
            } else {
                sp8 = var_r3;
                temp_r0 = func_080E2B28(var_r3);
                sp8 = temp_r0;
                if (temp_r0 == arg1->unk4) {
                    goto block_42;
                }
                var_r3_2 = 0;
                var_r5 = temp_r0;
                if ((u32) *arg3 < (u32) temp_r0->unk10) {
                    var_r3_2 = 1;
                }
                if (var_r3_2 == 0) {
                    goto block_49;
                }
                if ((*arg2)->unkC != 0) {
                    goto block_45;
                }
                goto block_42;
            }
        } else {
            goto block_32;
        }
    } else {
        if (temp_r2 == temp_r1) {
            var_r5_2 = 0;
            if ((u32) temp_r2->unkC->unk10 < (u32) *arg3) {
                var_r5_2 = 1;
            }
            if (var_r5_2 != 0) {
                goto block_43;
            }
            func_080E28BC(&sp8, arg1, arg3);
            var_r0 = sp8;
            goto block_50;
        }
        sp8 = temp_r2;
        temp_r0_2 = func_080E2354(temp_r2);
        sp8 = temp_r0_2;
        var_r3 = *arg2;
        var_r5_3 = 0;
        temp_r1_3 = *arg3;
        if (temp_r1_3 < (u32) var_r3->unk10) {
            var_r5_3 = 1;
        }
        if (var_r5_3 != 0) {
            var_ip = 0;
            var_r5 = temp_r0_2;
            if ((u32) temp_r0_2->unk10 < temp_r1_3) {
                var_ip = 1;
            }
            if (var_ip != 0) {
                if (var_r5->unkC == 0) {
                    var_r2 = 0;
                    goto block_46;
                }
block_32:
                func_080E27FC(arg0, arg1, var_r3, arg3, 0);
            } else {
                goto block_33;
            }
        } else {
block_33:
            spC = *arg2;
            temp_r0_3 = func_080E2B28();
            spC = temp_r0_3;
            var_r1 = var_r5_3 ^ 1;
            if (var_r5_3 == 0) {
                temp_r0_4 = *arg2;
                var_r5_4 = 0;
                temp_r2_3 = *arg3;
                if ((u32) temp_r0_4->unk10 < temp_r2_3) {
                    var_r5_4 = 1;
                }
                var_r1 = var_r5_4;
                if (var_r1 != 0) {
                    var_r5 = temp_r0_3;
                    if (var_r5 != arg1->unk4) {
                        var_ip_2 = 0;
                        if (temp_r2_3 < (u32) var_r5->unk10) {
                            var_ip_2 = 1;
                        }
                        if (var_ip_2 != 0) {
                            goto block_41;
                        }
                        goto block_47;
                    }
block_41:
                    if (temp_r0_4->unkC == 0) {
block_42:
block_43:
                        func_080E27FC(arg0, arg1, 0);
                    } else {
block_45:
                        var_r2 = var_r5;
block_46:
                        func_080E27FC(arg0, arg1, var_r2, var_r5);
                    }
                } else {
                    goto block_47;
                }
            } else {
block_47:
                if (var_r5_3 == var_r1) {
                    var_r0 = *arg2;
                } else {
block_49:
                    func_080E28BC(&sp10, arg1, arg3);
                    var_r0 = sp10;
                }
block_50:
                *arg0 = var_r0;
            }
        }
    }
    return arg0;
}
