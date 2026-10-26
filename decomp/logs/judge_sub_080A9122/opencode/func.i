# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_080A9122/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_080A9122/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_080A9122/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_080A9122/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_080A9122/opencode/func.c" 2
s32 Unpack(s32, s32);
s32 free(void *);
s32 func_08008F0C(s32 *, s32, s32, u16);
s32 func_080AAF10(s32);
s32 func_080AAF1C(s32);
u16 func_080AAF28(s32, s32);
void *func_080D3BC0(s32);
s32 func_080E2B28(void *);
void *malloc(s32);
extern ? gUnk_08107204;
extern ? gUnk_08107230;
extern ? gUnk_0810725C;
extern ? gUnk_08107288;
extern ? gUnk_081072B4;
extern ? gUnk_081072E0;
extern ? gUnk_0810730C;
extern ? vtable_unk_080E5A28;

void sub_080A9122(void *arg1, ? *arg4, s32 arg12, ? arg18, u16 *arg64, u32 arg66, u32 arg67, void *arg68, void *arg69, s32 arg6B, void *arg6C, s32 arg71, void *arg73, void *arg74) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r1;
    s32 temp_r1_4;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_r8;
    s32 var_sl;
    u16 var_r3;
    u32 *var_r0;
    u32 temp_r0_4;
    u32 var_r3_3;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r3;
    void *var_r0_2;
    void *var_r0_3;
    void *var_r2;
    void *var_r2_2;
    void *var_r3_2;
    void *var_r5;

    if (arg1 != 0) {
        arg1->unk0 = (s32) saved_reg_r9->unk0;
        arg1->unk4 = (s32) saved_reg_r9->unk4;
        arg1->unk8 = (s32) saved_reg_r9->unk8;
        arg1->unkC = (s32) saved_reg_r9->unkC;
    }
    saved_reg_r7->unk4 = (void *) (saved_reg_r7->unk4 + 0x10);
    temp_r0 = arg68->unk0;
    switch (temp_r0) {
    case 8:
        break;
    case 29:
        arg68->unk98 = 1;
        break;
    case 6:
        if ((((u32) (arg69->unk5D << 0x1E) >> 0x1E) == 1) && (gUnk_0810725C.unk18 != 0)) {
            Unpack(gUnk_0810725C.unk18, (gUnk_0810725C.unk1C << 5) + 0x06000000);
        }
        if ((((u32) (arg69->unk54 << 0x1E) >> 0x1E) == 1) && (gUnk_0810730C.unk18 != 0)) {
            Unpack(gUnk_0810730C.unk18, (gUnk_0810730C.unk1C << 5) + 0x06000000);
        }
        if ((((u32) (arg69->unk4E << 0x17) >> 0x1E) == 1) && (gUnk_08107230.unk18 != 0)) {
            Unpack(gUnk_08107230.unk18, (gUnk_08107230.unk1C << 5) + 0x06000000);
        }
        if ((((u32) (arg69->unk4F << 0x1A) >> 0x1E) == 1) && (gUnk_08107230.unk18 != 0)) {
            Unpack(gUnk_08107230.unk18, (gUnk_08107230.unk1C << 5) + 0x06000000);
        }
        if (((u32) ((u8) arg69->unk4E << 0x1C) >> 0x1E) == 1) {
            if (gUnk_08107204.unk18 != 0) {
                Unpack(gUnk_08107204.unk18, (gUnk_08107204.unk1C << 5) + 0x06000000);
            }
            if (gUnk_081072B4.unk18 != 0) {
                Unpack(gUnk_081072B4.unk18, (gUnk_081072B4.unk1C << 5) + 0x06000000);
            }
        }
        if ((((u32) (arg69->unk51 << 0x1B) >> 0x1E) == 1) && (gUnk_08107288.unk18 != 0)) {
            Unpack(gUnk_08107288.unk18, (gUnk_08107288.unk1C << 5) + 0x06000000);
        }
        if ((((u32) (arg69->unk52 << 0x1D) >> 0x1E) == 1) && (gUnk_08107204.unk18 != 0)) {
            Unpack(gUnk_08107204.unk18, (gUnk_08107204.unk1C << 5) + 0x06000000);
        }
        if (((u32) (arg69->unk55 << 0x1B) >> 0x1E) == 1) {
            if (gUnk_08107204.unk18 != 0) {
                Unpack(gUnk_08107204.unk18, (gUnk_08107204.unk1C << 5) + 0x06000000);
            }
            if (gUnk_081072B4.unk18 != 0) {
                Unpack(gUnk_081072B4.unk18, (gUnk_081072B4.unk1C << 5) + 0x06000000);
            }
        }
        if ((((u32) (arg69->unk56 << 0x1D) >> 0x1E) == 1) && (gUnk_08107204.unk18 != 0)) {
            Unpack(gUnk_08107204.unk18, (gUnk_08107204.unk1C << 5) + 0x06000000);
        }
        if (((u8) arg69->unk4C >> 6) == 1) {
            if (gUnk_081072E0.unk18 != 0) {
                Unpack(gUnk_081072E0.unk18, (gUnk_081072E0.unk1C << 5) + 0x06000000);
            }
            if (gUnk_08107230.unk18 != 0) {
                Unpack(gUnk_08107230.unk18, (gUnk_08107230.unk1C << 5) + 0x06000000);
            }
        }
        break;
    }
    var_sl = func_080AAF10(arg71);
    temp_r0_2 = func_080AAF1C(arg71);
    arg6B = temp_r0_2;
    temp_r1 = var_sl ^ temp_r0_2;
    if ((s32) ((0 - temp_r1) | temp_r1) >= 0) {

    } else {
        arg6C = &arg4 + 0x30;
loop_76:
        arg4->unkC(&arg64, &arg4, func_080AAF28(var_sl->unk10, 0));
        arg4->unk10(arg6C, &arg4, *arg64);
        var_r3 = 0;
        if (arg12 != 0) {
            var_r3 = arg12.unk4;
        }
        func_08008F0C(&arg18, arg12, (var_sl->unk14 << 5) + 0x06000000, var_r3);
        temp_r1_2 = saved_reg_r7->unk4;
        if (temp_r1_2 != saved_reg_r7->unkC) {
            if (temp_r1_2 != 0) {
                temp_r1_2->unk0 = (s32) arg18.unk0;
                temp_r1_2->unk4 = (s32) arg18.unk4;
                temp_r1_2->unk8 = (s32) arg18.unk8;
                temp_r1_2->unkC = (s32) arg18.unkC;
            }
            saved_reg_r7->unk4 = (void *) (saved_reg_r7->unk4 + 0x10);
        } else {
            arg74 = temp_r1_2;
            arg67 = 1;
            temp_r4 = (s32) (arg74 - saved_reg_r7->unk0) >> 4;
            var_r0 = &arg66;
            *var_r0 = temp_r4;
            if ((u32) temp_r4 < (u32) arg67) {
                var_r0 = &arg67;
            }
            temp_r0_3 = temp_r4 + *var_r0;
            if (temp_r0_3 != 0) {
                temp_r4_2 = temp_r0_3 * 0x10;
                var_r0_2 = malloc(temp_r4_2);
                var_r8 = temp_r4_2;
                if (var_r0_2 == 0) {
                    var_r0_2 = func_080D3BC0(var_r8);
                }
            } else {
                var_r0_2 = 0;
                var_r8 = 0;
            }
            arg73 = var_r0_2;
            var_r2 = saved_reg_r7->unk0;
            var_r3_2 = var_r0_2;
            if (var_r2 != arg74) {
                do {
                    if (var_r3_2 != 0) {
                        var_r3_2->unk0 = (s32) var_r2->unk0;
                        var_r3_2->unk4 = (s32) var_r2->unk4;
                        var_r3_2->unk8 = (s32) var_r2->unk8;
                        var_r3_2->unkC = (s32) var_r2->unkC;
                    }
                    var_r2 += 0x10;
                    var_r3_2 += 0x10;
                } while (var_r2 != arg74);
            }
            temp_r0_4 = arg67;
            if (temp_r0_4 == 1) {
                if (var_r3_2 != 0) {
                    var_r3_2->unk0 = (s32) arg18.unk0;
                    var_r3_2->unk4 = (s32) arg18.unk4;
                    var_r3_2->unk8 = (s32) arg18.unk8;
                    var_r3_2->unkC = (s32) arg18.unkC;
                }
                var_r5 = var_r3_2 + 0x10;
            } else {
                var_r3_3 = temp_r0_4;
                var_r2_2 = var_r3_2;
                if (var_r3_3 != 0) {
                    do {
                        if (var_r2_2 != 0) {
                            var_r2_2->unk0 = (s32) arg18.unk0;
                            var_r2_2->unk4 = (s32) arg18.unk4;
                            var_r2_2->unk8 = (s32) arg18.unk8;
                            var_r2_2->unkC = (s32) arg18.unkC;
                        }
                        var_r3_3 -= 1;
                        var_r2_2 += 0x10;
                    } while (var_r3_3 != 0);
                }
                var_r5 = var_r2_2;
            }
            temp_r1_3 = saved_reg_r7->unk4;
            temp_r3 = saved_reg_r7->unk0;
            var_r0_3 = temp_r3;
            if (temp_r3 != temp_r1_3) {
                do {
                    var_r0_3 += 0x10;
                } while (var_r0_3 != temp_r1_3);
            }
            if (temp_r3 != 0) {
                free(temp_r3);
            }
            saved_reg_r7->unk0 = arg73;
            saved_reg_r7->unk4 = var_r5;
            saved_reg_r7->unkC = (void *) (arg73 + var_r8);
        }
        var_sl = func_080E2B28((void *) var_sl);
        temp_r1_4 = var_sl ^ arg6B;
        if ((s32) ((0 - temp_r1_4) | temp_r1_4) < 0) {
            goto loop_76;
        }
    }
    arg4 = &vtable_unk_080E5A28;
}
