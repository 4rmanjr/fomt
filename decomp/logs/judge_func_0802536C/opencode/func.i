# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802536C/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802536C/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802536C/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802536C/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802536C/opencode/func.c" 2
s32 func_08008B6C(s32, s32);
s32 func_08008CD0(s32);
u32 func_080251FC(void *, s32 *, s32 *, s32, s32);
u32 func_08025248(void *, s32 *, s32 *, s32, s32);
s32 func_08025294(void *, s32 *, s32, s32 *);
s32 func_080AC070(s32 *);
s32 func_080AC124(s32 *, s32 *, s32 *, s32 *, s32, s32);

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    s32 unk4;
    s32 unk6;
    s32 unk8;
    s32 unkA;
    s32 unkC;
    s32 unkE;
    u8 _pad12[2];
    struct GenObj *unk14;
    u8 _pad18[36];
    s32 unk3C;
    s32 unk3E;
    u8 _pad42[62];
    s32 unk80;
    s32 unk84;
} GenObj;
void func_0802536C(GenObj *arg0, s32 arg1, s32 arg2) {
s32 sp8;
    s32 sp14;
    s32 sp1C;
    GenObj *sp20;
    s32 sp24;
GenObj sp28;
GenObj sp30;
s32 sp38;
s32 sp40;
    u32 sp48;
    s32 sp4C;
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s16 var_r0;
    s16 var_r5;
    s32 *var_r4;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r5;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r1;
    s32 var_r3;
    s32 var_r7;
    u32 *var_r2;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r0_4;
    u32 temp_r0_7;
    u8 temp_r0_6;
    void **temp_r1;
    void *temp_r0_5;

    sp4C = arg2;
    sp50 = (s32) arg0->unk4;
    temp_r1 = arg0->unk0;
    (*temp_r1)->unk34(&sp8, temp_r1, sp50);
    sp54 = (s32) arg0->unkA;
    sp58 = (s32) arg0->unkE;
    ((void (*)(void *,...))(arg0->unk14->unkC))(&sp14, arg0);
    switch (arg1) {
    case 0:
        sp1C = sp4C;
        func_080AC124(&sp8, &sp14, &sp1C, 0, arg1, arg1);
        if (sp1C != 0) {
            sp58 += sp1C;
            sp14.unk2 = (u16) (sp14.unk2 + sp1C);
            sp14.unk6 = (u16) (sp14.unk6 + sp1C);
block_16:
            var_r1 = sp1C;
            if (var_r1 < 0) {
                var_r1 = 0 - var_r1;
            }
            sp4C -= var_r1;
        }
block_19:
        if (sp4C == 0) {

        } else {
            var_r7 = arg1;
            sp48 = 0;
            sp20 = sp14;
            sp24 = sp18;
            switch (var_r7) {
            case 0:
                sp20.unk2 = (u16) (sp20.unk2 + 1);
                sp20.unk6 = (u16) (sp20.unk6 + 1);
                break;
            case 1:
                sp20.unk2 = (u16) (sp20.unk2 - 1);
                sp20.unk6 = (u16) (sp20.unk6 - 1);
                break;
            case 2:
                sp20.unk0 = (u16) (sp20.unk0 - 1);
                var_r0 = sp20.unk4 - 1;
block_32:
                sp20.unk4 = var_r0;
                break;
            case 3:
                sp20.unk0 = (u16) (sp20.unk0 + 1);
                var_r0 = sp20.unk4 + 1;
                goto block_32;
            }
            if (arg1 < 0) {

            } else if (arg1 > 1) {
                if (arg1 > 3) {

                } else {
                    temp_r0 = func_08025248(arg0, &sp8, &sp20, -1, 8);
                    sp48 = temp_r0;
                    if ((temp_r0 <= 8U) && (temp_r2 = 0 - temp_r0, sp28 = (s16) sp14, sp28.unk2 = (s16) (temp_r2 + (s16) sp14.unk2), sp28.unk4 = (s16) sp14.unk4, sp28.unk6 = (s16) (temp_r2 + (s16) sp14.unk6), (((func_080AC070(&sp8) ^ 1) << 0x18) != 0))) {
                        var_r7 = 1;
                    } else {
                        temp_r0_2 = func_08025248(arg0, &sp8, &sp20, 1, 8);
                        sp48 = temp_r0_2;
                        if (temp_r0_2 <= 8U) {
                            sp40 = (s16) sp14;
                            sp40.unk2 = (s16) (sp48 + (s16) sp14.unk2);
                            sp40.unk4 = (s16) sp14.unk4;
                            sp40.unk6 = (s16) (sp48 + (s16) sp14.unk6);
                            if (((func_080AC070(&sp8) ^ 1) << 0x18) != 0) {
                                var_r7 = 0;
                            }
                        }
                    }
                }
            } else {
                temp_r0_3 = func_080251FC(arg0, &sp8, &sp20, -1, 8);
                sp48 = temp_r0_3;
                if ((temp_r0_3 <= 8U) && (temp_r2_2 = 0 - temp_r0_3, sp30 = (s16) (temp_r2_2 + (s16) sp14), sp30.unk2 = (s16) sp14.unk2, sp30.unk4 = (s16) (temp_r2_2 + (s16) sp14.unk4), sp30.unk6 = (s16) sp14.unk6, (((func_080AC070(&sp8) ^ 1) << 0x18) != 0))) {
                    var_r7 = 2;
                } else {
                    temp_r0_4 = func_080251FC(arg0, &sp8, &sp20, 1, 8);
                    sp48 = temp_r0_4;
                    if (temp_r0_4 <= 8U) {
                        sp38 = (s16) ((s16) sp14 + sp48);
                        sp38.unk2 = (s16) sp14.unk2;
                        sp38.unk4 = (s16) (sp48 + (s16) sp14.unk4);
                        sp38.unk6 = (s16) sp14.unk6;
                        if (((func_080AC070(&sp8) ^ 1) << 0x18) != 0) {
                            var_r7 = 3;
                        }
                    }
                }
            }
            if (((var_r7 == arg1) || (sp48 > 3U)) && (sp50 == 2) && (arg0->unk3E == 2) && ((func_08025294(arg0, &sp8, arg1, &sp14) << 0x18) != 0)) {
                temp_r0_5 = (*arg0->unk0)->unk14C();
                var_r4 = temp_r0_5->unk0;
                temp_r5 = temp_r0_5->unk4;
                if (var_r4 != temp_r5) {
loop_58:
                    if ((func_08008CD0(*var_r4) << 0x18) != 0) {
                        var_r4 += 4;
                        if (var_r4 == temp_r5) {
                            goto block_60;
                        }
                        goto loop_58;
                    }
                    var_r0_2 = *var_r4;
                } else {
block_60:
                    var_r0_2 = *(temp_r5 - 4);
                }
                func_08008B6C(var_r0_2, 0x69);
                var_r3 = 0;
                var_r5 = 0;
                switch (arg1) {
                case 0:
                    var_r3 = ((s16) sp14.unk6 - (s16) sp14.unk2) + 0x10;
                    var_r0_3 = sp58;
block_73:
                    var_r5 = var_r0_3 + var_r3;
                    break;
                case 1:
                    var_r3 = 0 - (((s16) sp14.unk6 - (s16) sp14.unk2) + 0x10);
                    var_r0_3 = sp58;
                    goto block_73;
                case 2:
                    var_r3 = 0 - (((s16) sp14.unk4 - (s16) sp14) + 0x10);
block_72:
                    var_r0_3 = sp54;
                    goto block_73;
                case 3:
                    var_r3 = ((s16) sp14.unk4 - (s16) sp14) + 0x10;
                    goto block_72;
                }
                temp_r0_6 = arg0->unk3C;
                if (temp_r0_6 == 0) {
                    arg0->unk3C = 0x2CU;
                    arg0->unk80 = (s32) (var_r3 << 0xC);
                    goto block_78;
                }
                if (temp_r0_6 == 7) {
                    arg0->unk3C = 0x2DU;
                    arg0->unk80 = (s32) ((s32) (var_r3 << 0x10) / 12);
block_78:
                    arg0->unk84 = var_r5;
                }
            } else if (var_r7 != arg1) {
                var_r2 = &sp48;
                if (sp48 > (u32) sp4C) {
                    var_r2 = (u32 *) &sp4C;
                }
                temp_r0_7 = *var_r2;
                switch (var_r7) {
                case 0:
                    sp58 += temp_r0_7;
                    break;
                case 1:
                    sp58 -= temp_r0_7;
                    break;
                case 2:
                    sp54 -= temp_r0_7;
                    break;
                case 3:
                    sp54 += temp_r0_7;
                    break;
                }
            }
        }
        arg0->unk8 = (s32) (sp54 << 0x10);
        arg0->unkC = (s32) (sp58 << 0x10);
        return;
    case 1:
        sp1C = 0 - sp4C;
        func_080AC124(&sp8, &sp14, 0, &sp1C, 0, 0);
        if (sp1C != 0) {
            sp58 += sp1C;
            sp14.unk2 = (u16) (sp14.unk2 + sp1C);
            sp14.unk6 = (u16) (sp14.unk6 + sp1C);
            goto block_16;
        }
        goto block_19;
    case 2:
        sp1C = 0 - sp4C;
        func_080AC124(&sp8, &sp14, 0, 0, (s32) &sp1C, 0);
        if (sp1C != 0) {
            sp54 += sp1C;
block_15:
            sp14 = (u16) (sp14 + sp1C);
            sp14.unk4 = (u16) (sp14.unk4 + sp1C);
            goto block_16;
        }
        goto block_19;
    case 3:
        sp1C = sp4C;
        func_080AC124(&sp8, &sp14, 0, 0, 0, (s32) &sp1C);
        if (sp1C != 0) {
            sp54 += sp1C;
            goto block_15;
        }
        goto block_19;
    }
}
