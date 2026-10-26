# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CE598/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CE598/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CE598/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CE598/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CE598/opencode/func.c" 2
s32 free();
s32 func_080074C0(void *, s32);
void *func_08008910(s32);
s32 func_08008F0C(s32 *, s32, s32, u16);
s32 func_080CE480(void *, s32, s32, s32, s32, s32, s32);
s32 func_080CE510(void *, s32, s32, s32, s32, s32);
void *func_080D3BC0(s32);
void *malloc(s32);

void func_080CE598(void *arg0) {
s32 spC;
    s32 sp1C;
s32 sp2C;
    s32 sp3C;
    s32 sp40;
    s16 *sp44;
    s16 *sp48;
    s16 *sp4C;
    s16 *sp50;
    s32 *sp54;
    void *sp58;
    void *sp5C;
    s32 *var_r0;
    s32 temp_r0_2;
    s32 temp_r2;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_r3_3;
    s32 var_sl;
    u16 var_r3;
    void **temp_r1;
    void *temp_r0;
    void *temp_r0_3;
    void *temp_r1_2;
    void *temp_r2_2;
    void *temp_r5;
    void *var_r0_2;
    void *var_r1;
    void *var_r2;
    void *var_r2_2;
    void *var_r3_2;
    void *var_r5;

    temp_r1 = arg0->unk50;
    (*temp_r1)->unk10(&spC, temp_r1, *(arg0->unk54 + ((arg0 + 0x50)->unkC * 4)));
    temp_r5 = func_08008910(arg0->unk0);
    temp_r0 = arg0 + 0x14;
    temp_r2 = func_080074C0(temp_r0, temp_r0->unk4);
    var_r3 = 0;
    if (sp1C != 0) {
        var_r3 = sp1C.unk4;
    }
    sp58 = temp_r5;
    func_08008F0C(&sp2C, sp1C, (temp_r2 << 5) + 0x05000200, var_r3);
    temp_r1_2 = temp_r5->unk4;
    if (temp_r1_2 != temp_r5->unkC) {
        if (temp_r1_2 != 0) {
            temp_r1_2->unk0 = (s32) sp2C.unk0;
            temp_r1_2->unk4 = (s32) sp2C.unk4;
            temp_r1_2->unk8 = (s32) sp2C.unk8;
            temp_r1_2->unkC = (s32) sp2C.unkC;
        }
        sp58->unk4 = (void *) (sp58->unk4 + 0x10);
        sp4C = arg0 + 0x4C;
        sp50 = arg0 + 0x4E;
        sp44 = arg0 + 0x84;
        sp48 = arg0 + 0x86;
        sp54 = arg0 + 0xBC;
    } else {
        sp40 = 1;
        temp_r4 = (s32) (temp_r1_2 - sp58->unk0) >> 4;
        sp3C = temp_r4;
        var_r0 = &sp3C;
        if ((u32) temp_r4 < 1U) {
            var_r0 = &sp40;
        }
        temp_r0_2 = temp_r4 + *var_r0;
        if (temp_r0_2 != 0) {
            temp_r4_2 = temp_r0_2 * 0x10;
            var_r0_2 = malloc(temp_r4_2);
            var_sl = temp_r4_2;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(var_sl);
            }
        } else {
            var_r0_2 = 0;
            var_sl = 0;
        }
        sp5C = var_r0_2;
        var_r2 = sp58->unk0;
        var_r3_2 = var_r0_2;
        sp4C = arg0 + 0x4C;
        sp50 = arg0 + 0x4E;
        sp44 = arg0 + 0x84;
        sp48 = arg0 + 0x86;
        sp54 = arg0 + 0xBC;
        if (var_r2 != temp_r1_2) {
            do {
                if (var_r3_2 != 0) {
                    var_r3_2->unk0 = (s32) var_r2->unk0;
                    var_r3_2->unk4 = (s32) var_r2->unk4;
                    var_r3_2->unk8 = (s32) var_r2->unk8;
                    var_r3_2->unkC = (s32) var_r2->unkC;
                }
                var_r2 += 0x10;
                var_r3_2 += 0x10;
            } while (var_r2 != temp_r1_2);
        }
        if (sp40 == 1) {
            if (var_r3_2 != 0) {
                var_r3_2->unk0 = (s32) sp2C.unk0;
                var_r3_2->unk4 = (s32) sp2C.unk4;
                var_r3_2->unk8 = (s32) sp2C.unk8;
                var_r3_2->unkC = (s32) sp2C.unkC;
            }
            var_r5 = var_r3_2 + 0x10;
        } else {
            var_r3_3 = sp40;
            var_r2_2 = var_r3_2;
            if (var_r3_3 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32) sp2C.unk0;
                        var_r2_2->unk4 = (s32) sp2C.unk4;
                        var_r2_2->unk8 = (s32) sp2C.unk8;
                        var_r2_2->unkC = (s32) sp2C.unkC;
                    }
                    var_r3_3 -= 1;
                    var_r2_2 += 0x10;
                } while (var_r3_3 != 0);
            }
            var_r5 = var_r2_2;
        }
        temp_r2_2 = sp58->unk4;
        temp_r0_3 = sp58->unk0;
        var_r1 = temp_r0_3;
        if (temp_r0_3 != temp_r2_2) {
            do {
                var_r1 += 0x10;
            } while (var_r1 != temp_r2_2);
        }
        if (temp_r0_3 != 0) {
            free();
        }
        sp58->unk0 = sp5C;
        sp58->unk4 = var_r5;
        sp58->unkC = (void *) (sp5C + var_sl);
    }
    *sp4C = 0xE8;
    *sp50 = 0x28;
    *sp44 = 0xE8;
    *sp48 = 0x50;
    func_080CE510(arg0, *sp54 + 1, 0x0600F0F6, 0x20, 0, 0x20);
    func_080CE480(arg0, 0x0600F0F8, 0x2D, 1, 1, 0, 0x20);
    func_080CE510(arg0, 8, 0x0600F0FA, 0x20, 0, 0x20);
}
