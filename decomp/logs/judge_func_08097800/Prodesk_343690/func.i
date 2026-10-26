# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08097800/Prodesk_343690/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08097800/Prodesk_343690/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08097800/Prodesk_343690/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08097800/Prodesk_343690/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08097800/Prodesk_343690/func.c" 2
s32 func_080977A0(void *, void *, ? *);
s32 func_0809A970(void *, void *, s32);
s32 func_0809A9C0(void *, void *);
s32 func_0809AA58(s32, u16);

s32 func_08097800(void *arg0, void *arg1) {
s32 sp0;
s32 sp14;
    s32 sp28;
    s32 temp_r1;
    s32 temp_r2_3;
    s32 var_ip;
    s32 var_r1_2;
    s32 var_r2;
    s32 var_r3;
    s32 var_r4;
    s32 var_r8;
    s8 var_r4_3;
    u16 *var_r1;
    u16 *var_r4_2;
    u16 *var_r5;
    u16 temp_r0;
    u32 var_r3_2;
    u8 temp_r2_2;
    u8 temp_r3;
    void *temp_r0_2;
    void *temp_r2;
    void *temp_r3_2;

    if ((u32) (u16) (arg1->unk0 - 0x9B) <= 5U) {
        if ((func_0809AA58(arg0->unk8C + 0x2214, arg1->unk0) << 0x18) != 0) {
            temp_r2 = arg0->unk8C;
            temp_r3 = temp_r2->unk21C3;
            temp_r2->unk21C3 = (u8) ((-0x79 & temp_r3) | (((((u32) (temp_r3 << 0x19) >> 0x1C) + 1) & 0xF) * 8));
        }
        return 0;
    }
    var_r4 = 0;
    if ((s32) arg0->unk368 > 0) {
        var_r3 = 0x2214;
loop_6:
        sp28 = var_r3;
        func_0809A970(arg0->unk8C + var_r3, arg0 + 0x334, var_r4);
        if (arg0->unk348 == arg0->unk334) {
            if (!(0x10 & arg0->unk347)) {
                func_0809A9C0(arg0->unk8C + var_r3, arg0 + 0x348);
                temp_r0 = arg1->unk0;
                if (temp_r0 != 0x50) {
                    if ((s32) temp_r0 <= 0x50) {
                        if (temp_r0 != 0x19) {

                        } else {
                            goto block_14;
                        }
                    } else if ((temp_r0 == 0x7E) || (temp_r0 == 0x8D)) {
                        goto block_14;
                    }
                } else {
block_14:
                    temp_r3_2 = arg0->unk8C;
                    temp_r2_2 = temp_r3_2->unk21C3;
                    temp_r3_2->unk21C3 = (u8) ((temp_r2_2 & ~0x78) | (((((u32) (temp_r2_2 << 0x19) >> 0x1C) + 1) & 0xF) * 8));
                }
                return 1;
            }
            goto block_17;
        }
        var_r4 += 1;
        if (var_r4 >= (s32) arg0->unk368) {
            goto block_17;
        }
        goto loop_6;
    }
block_17:
    var_ip = 0;
    temp_r0_2 = arg0 + 0x334;
    sp14.unk0 = (s32) arg0->unk334;
    sp14.unk4 = (s32) temp_r0_2->unk4;
    sp14.unk8 = (s32) temp_r0_2->unk8;
    sp14.unkC = (s32) temp_r0_2->unkC;
    (&sp14 + 0xC)->unk4 = (s32) (temp_r0_2 + 0xC)->unk4;
    var_r8 = 0;
    var_r4_2 = arg0 + 0x34A;
    var_r5 = var_r4_2;
loop_18:
    if (*var_r4_2 != 0) {
        var_r2 = 0;
        var_r1 = &sp16[0];
loop_20:
        if (*var_r5 != *var_r1) {
            var_r1 += 2;
            var_r2 += 1;
            if (var_r2 <= 7) {
                goto loop_20;
            }
        } else {
            *var_r1 = 0;
        }
        if (var_r2 == 8) {
            var_ip = 1;
        } else {
            goto block_25;
        }
    } else {
block_25:
        var_r4_2 += 2;
        var_r5 += 2;
        var_r8 += 1;
        if (var_r8 <= 7) {
            goto loop_18;
        }
    }
    var_r1_2 = 0;
    if (sp16[0] != 0) {
        var_ip = 1;
    } else {
loop_28:
        var_r1_2 += 1;
        if (var_r1_2 <= 7) {
            if ((&sp16[0])[var_r1_2] != 0) {
                var_ip = 1;
            } else {
                goto loop_28;
            }
        }
    }
    if ((arg0->unk35A << 0x14) != (arg0->unk346 << 0x14)) {
        var_ip = 1;
    }
    if (var_ip == 0) {
        return 2;
    }
    func_080977A0(arg0, arg0 + 0x334, &sp0);
    temp_r2_3 = arg1->unk2 - sp0.unk2;
    temp_r1 = arg1->unk4 - sp0.unk4;
    if (temp_r2_3 <= -0xB) {
        var_r4_3 = 0;
    } else if (temp_r2_3 <= -6) {
        var_r4_3 = 1;
    } else if (temp_r2_3 <= -2) {
        var_r4_3 = 2;
    } else {
        var_r4_3 = 3;
        if (temp_r2_3 != -1) {
            var_r4_3 = 4;
            if (temp_r2_3 != 0) {
                var_r4_3 = 5;
                if (temp_r2_3 != 1) {
                    var_r4_3 = 6;
                    if (temp_r2_3 > 5) {
                        var_r4_3 = 8;
                        if (temp_r2_3 <= 0xA) {
                            var_r4_3 = 7;
                        }
                    }
                }
            }
        }
    }
    if (temp_r1 <= -0xB) {
        var_r3_2 = 0x11;
        if (var_r4_3 == 8) {
            var_r3_2 = 0x10;
        }
    } else if (temp_r1 <= -6) {
        var_r3_2 = 0xF;
        if (var_r4_3 == 7) {
            var_r3_2 = 0xE;
        }
    } else if (temp_r1 <= -2) {
        var_r3_2 = 0xD;
        if (var_r4_3 == 6) {
            var_r3_2 = 0xC;
        }
    } else if (temp_r1 == -1) {
        var_r3_2 = 0xB;
        if (var_r4_3 == 5) {
            var_r3_2 = 0xA;
        }
    } else if (temp_r1 == 0) {
        var_r3_2 = 9;
        if (var_r4_3 == 4) {
            var_r3_2 = 8;
        }
    } else if (temp_r1 == 1) {
        var_r3_2 = 7;
        if (var_r4_3 == 3) {
            var_r3_2 = 6;
        }
    } else if (temp_r1 <= 5) {
        var_r3_2 = 5;
        if (var_r4_3 == 2) {
            var_r3_2 = 4;
        }
    } else if (temp_r1 <= 0xA) {
        var_r3_2 = 3;
        if (var_r4_3 == 1) {
            var_r3_2 = 2;
        }
    } else {
        var_r3_2 = (u32) ((0 - var_r4_3) | var_r4_3) >> 0x1F;
    }
    arg0->unk33DE = var_r4_3;
    arg0->unk33DF = (s8) var_r3_2;
    return 3;
}
