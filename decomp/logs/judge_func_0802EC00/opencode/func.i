# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802EC00/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802EC00/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802EC00/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802EC00/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802EC00/opencode/func.c" 2
s32 GetLocation__C7AEntity(s32 *, void *);
s32 SetAnimFacing__12AActorEntityUi(void *, u8);
s32 func_08008B6C(s32, s32);
s32 func_08008CD0(s32);
s32 func_0800E324(void *);
s32 func_0800F190(s32);
s32 func_0800F204(s32);
s32 func_0800F360(s32);
s32 func_0800F390(s32);
s32 func_0802AD80(void *);
s32 func_0802AEA4(void *);
s32 func_0802B46C();
s32 func_0802C984(void *);
s32 memcpy(s32 *, s32 *, s32);
extern s32 gUnk_080F117F;

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk1;
    struct GenObj *unk4;
    struct GenObj *unk8;
    u8 _padC[4];
    s32 unk10;
    struct GenObj *unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    u8 _pad28[12];
    void *unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk3D;
    s32 unk3E;
    s32 unk40;
    u8 _pad44[40];
    s32 unk6C;
    u8 _pad70[54];
    s32 unkA6;
    u8 _padAA[9];
    s32 unkB3;
    u8 _padB7[9];
    s32 unkC0;
    s32 unkC3;
    s32 unkC4;
    u8 _padC8[8520];
    s32 unk2210;
} GenObj;
void func_0802EC00(GenObj *arg0, GenObj *arg1) {
s32 sp0;
s32 sp4;
    GenObj *spC;
    GenObj *sp10;
    s16 *var_r6;
    s16 temp_r1_3;
    s32 (**temp_r4_3)(void **, s32 *);
    s32 *var_r4;
    s32 *var_r4_4;
    s32 *var_r4_5;
    s32 *var_r4_6;
    s32 temp_r0_2;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r5_3;
    s32 temp_r5_4;
    s32 temp_r5_5;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_6;
    s32 var_r1;
    s8 *temp_r0;
    s8 var_r0_7;
    u16 temp_r2;
    u32 var_r4_2;
    u8 temp_r0_10;
    u8 temp_r1;
    u8 temp_r1_2;
    u8 temp_r1_4;
    u8 temp_r2_2;
    u8 temp_r3;
    u8 temp_r3_2;
    u8 temp_r3_3;
    u8 temp_r4_2;
    u8 temp_r5_2;
    u8 var_r2;
    u8 var_r4_3;
    u8 var_r5;
    void **temp_r0_5;
    void **temp_r6;
    void *temp_r0_3;
    GenObj *temp_r0_4;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r0_9;
    GenObj *var_r1_2;

    arg0->unkC0 = 0;
    temp_r0 = ((GenObj *)((u8 *)arg0 + 0xC0)) - 0x46;
    *temp_r0 = 0;
    temp_r1 = arg0->unkC3;
    if (temp_r1 != 0) {
        *(temp_r0 - 0x3E) = temp_r1;
        arg0->unkA6 = 0U;
        arg0->unkC3 = 0U;
        ((void (*)(void *,...))(arg0->unk14->unk6C))(arg0);
        return;
    }
    if ((func_0802AEA4(arg0) << 0x18) != 0) {
        arg0->unk3C = 0x35;
        ((GenObj *)((u8 *)arg0 + 0x3C))->unk6A = (s16) temp_r1;
        return;
    }
    temp_r4 = arg0->unk38 + 0x54;
    if ((func_0800F190(temp_r4) << 0x18) != 0) {
        goto block_44;
    }
    if (func_0800F204(temp_r4) != 5) {
        goto block_44;
    }
    temp_r0_2 = func_0800F360(temp_r4);
    if (temp_r0_2 != 0x155) {
        if (temp_r0_2 <= 0x155) {
            if (temp_r0_2 != 0x6B) {
                if (temp_r0_2 <= 0x6B) {
                    if ((temp_r0_2 != 0xB) && (temp_r0_2 != 0x62)) {
                        goto block_44;
                    }
                    goto block_41;
                }
                if (temp_r0_2 != 0xF7) {
                    if (temp_r0_2 <= 0xF7) {
                        if (temp_r0_2 != 0xD6) {
                            goto block_44;
                        }
                        goto block_42;
                    }
                    var_r0 = 0x122;
                    goto block_33;
                }
                goto block_41;
            }
            goto block_41;
        }
        if (temp_r0_2 != 0x18C) {
            if (temp_r0_2 <= 0x18C) {
                if (temp_r0_2 != 0x167) {
                    if (temp_r0_2 <= 0x167) {
                        if (temp_r0_2 != 0x15F) {
                            goto block_44;
                        }
                        temp_r0_3 = (*arg0->unk0)->unk14C();
                        var_r4 = temp_r0_3->unk0;
                        temp_r5 = temp_r0_3->unk4;
                        temp_r0_4 = (GenObj *)((u8 *)arg0 + 0x88);
                        if (var_r4 != temp_r5) {
loop_37:
                            if ((func_08008CD0(*var_r4) << 0x18) != 0) {
                                var_r4 += 4;
                                if (var_r4 == temp_r5) {
                                    goto block_39;
                                }
                                goto loop_37;
                            }
                            var_r0_2 = *var_r4;
                        } else {
block_39:
                            var_r0_2 = *(temp_r5 - 4);
                        }
                        func_08008B6C(var_r0_2, 0xB6);
                        func_0800F390(arg0->unk38 + 0x54);
                        temp_r0_4->unk4 = 0xFFF80000;
                        temp_r0_4->unk8 = 0;
                        temp_r0_4->unk14 = 0x110000;
                        arg0->unk3C = 0x2F;
                        arg0->unkA6 = 0U;
                        arg0->unk3D = 0x78;
                        return;
                    }
                    var_r0_3 = 0x180;
                    goto block_30;
                }
                goto block_42;
            }
            if (temp_r0_2 != 0x1A6) {
                if (temp_r0_2 <= 0x1A6) {
                    var_r0_3 = 0x191;
block_30:
                    if (temp_r0_2 != var_r0_3) {
                        goto block_44;
                    }
                    goto block_41;
                }
                var_r0 = 0x1CD;
block_33:
                if (temp_r0_2 != var_r0) {
block_44:
                    temp_r5_2 = arg0->unk3E;
                    if ((temp_r5_2 == 0) && ((func_0800F190(temp_r4) << 0x18) != 0)) {
                        temp_r2 = arg0->unkA6;
                        var_r6 = (GenObj *)((u8 *)arg0 + 0xA6);
                        if ((u32) temp_r2 > 0x258U) {
                            arg0->unk3C = 0x17;
                            arg0->unkA6 = (u16) temp_r5_2;
                            return;
                        }
                        arg0->unkA6 = (u16) (temp_r2 + 1);
                        goto block_50;
                    }
                    arg0->unkA6 = 0U;
                    var_r6 = (GenObj *)((u8 *)arg0 + 0xA6);
block_50:
                    temp_r1_2 = arg0->unk3E;
                    if (temp_r1_2 == 0) {
                        arg0->unkC4 = temp_r1_2;
                    } else if (((s32) temp_r1_2 >= 0) && ((s32) temp_r1_2 <= 2)) {
                        arg0->unkC4 = (u8) (arg0->unkC4 + 1);
                    }
                    sp10 = 0;
                    spC = 0;
                    if (arg1 != 0) {
                        sp10 = (s32) arg1->unk0;
                        spC = (s32) arg1->unk4;
                    }
                    arg0->unk3E = 0U;
                    temp_r3 = spC.unk0;
                    temp_r1_3 = 1 & temp_r3;
                    if (temp_r1_3 != 0) {
                        arg0->unk3C = 1;
                        *var_r6 = 0;
                    } else {
                        temp_r3_2 = 2 & temp_r3;
                        if (temp_r3_2 != 0) {
                            arg0->unk3C = 2;
                            *var_r6 = temp_r1_3;
                            if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) == 0) {

                            } else {
                                func_0802C984(arg0);
                            }
                        } else if (2 & spC.unk1) {
                            arg0->unk3C = 3;
                            *var_r6 = (s16) temp_r3_2;
                        } else if ((((u32) (sp10 << 0x17) >> 0x1F) | (((u32) (sp10 << 0x1B) >> 0x1F) | (((u32) (sp10 << 0x1A) >> 0x1F) | (((u32) (sp10 << 0x19) >> 0x1F) | ((u32) (sp10 << 0x18) >> 0x1F))))) == 0) {

                        } else {
                            var_r5 = arg0->unk20;
                            temp_r4_2 = var_r5;
                            temp_r3_3 = sp10.unk0;
                            if (0x20 & temp_r3_3) {
                                var_r5 = 2;
                            } else if (0x10 & temp_r3_3) {
                                var_r5 = 3;
                            } else if (0x40 & temp_r3_3) {
                                var_r5 = 1;
                            } else if (0x80 & temp_r3_3) {
                                var_r5 = 0;
                            }
                            if (var_r5 != temp_r4_2) {
                                arg0->unkB3 = 0;
                                var_r4_2 = 0x2B;
                                do {
                                    temp_r0_5 = arg0->unk0;
                                    temp_r0_6 = (*temp_r0_5)->unk40(temp_r0_5, var_r4_2);
                                    if (temp_r0_6 != 0) {
                                        ((void (*)(void *,...))(temp_r0_6->unk14->unk40))(temp_r0_6);
                                    }
                                    var_r4_2 += 1;
                                } while (var_r4_2 <= 0x45U);
                            }
                            if (arg0->unk20 != var_r5) {
                                SetAnimFacing__12AActorEntityUi(arg0, var_r5);
                            }
                            temp_r2_2 = arg0->unk20;
                            switch (temp_r2_2) {
                            default:
                            case 2:
                                var_r2 = 0xFF;
                                var_r4_3 = 0;
                                break;
                            case 3:
                                var_r2 = 1;
                                var_r4_3 = 0;
                                break;
                            case 1:
                                var_r2 = 0;
                                var_r4_3 = 0xFF;
                                break;
                            case 0:
                                var_r2 = 0;
                                var_r4_3 = 1;
                                break;
                            }
                            if ((arg0->unk34->unk2210 << 0x1F) == 0) {
                                if (1 & sp10.unk1) {
                                    goto block_96;
                                }
                                goto block_98;
                            }
                            if (!(1 & sp10.unk1)) {
block_96:
                                arg0->unk3E = 2U;
                                var_r2 *= 2;
                                var_r4_3 *= 2;
                            } else {
block_98:
                                arg0->unk3E = 1U;
                            }
                            arg0->unk18 = (s32) ((s32) (var_r2 << 0x18) >> 8);
                            arg0->unk1C = (s32) ((s32) (var_r4_3 << 0x18) >> 8);
                        }
                    }
                    memcpy(&sp0, &gUnk_080F117F, 3);
                    temp_r1_4 = *(arg0->unk3E + sp);
                    if ((temp_r1_4 != 0) && ((u32) arg0->unkC4 >= (u32) temp_r1_4)) {
                        arg0->unkC4 = 0U;
                        temp_r6 = arg0->unk0;
                        temp_r4_3 = *temp_r6 + 0x120;
                        GetLocation__C7AEntity(&sp4, arg0);
                        if ((*temp_r4_3(temp_r6, &sp4) << 0x18) != 0) {
                            if (arg0->unk10 != 0) {
                                func_0802B46C();
                            }
                            if (func_0800E324(arg0->unk34 + 0x10) != 3) {
                                temp_r0_7 = (*arg0->unk0)->unk14C();
                                var_r4_4 = temp_r0_7->unk0;
                                temp_r5_3 = temp_r0_7->unk4;
                                if (var_r4_4 != temp_r5_3) {
loop_107:
                                    if ((func_08008CD0(*var_r4_4) << 0x18) != 0) {
                                        var_r4_4 += 4;
                                        if (var_r4_4 == temp_r5_3) {
                                            goto block_109;
                                        }
                                        goto loop_107;
                                    }
                                    var_r0_4 = *var_r4_4;
                                } else {
block_109:
                                    var_r0_4 = *(temp_r5_3 - 4);
                                }
                                func_08008B6C(var_r0_4, 0xD0);
                            } else {
                                temp_r0_8 = (*arg0->unk0)->unk14C();
                                var_r4_5 = temp_r0_8->unk0;
                                temp_r5_4 = temp_r0_8->unk4;
                                if (var_r4_5 != temp_r5_4) {
loop_113:
                                    if ((func_08008CD0(*var_r4_5) << 0x18) != 0) {
                                        var_r4_5 += 4;
                                        if (var_r4_5 == temp_r5_4) {
                                            goto block_115;
                                        }
                                        goto loop_113;
                                    }
                                    var_r0_5 = *var_r4_5;
                                } else {
block_115:
                                    var_r0_5 = *(temp_r5_4 - 4);
                                }
                                func_08008B6C(var_r0_5, 0xD1);
                            }
                        } else {
                            temp_r0_9 = (*arg0->unk0)->unk14C();
                            var_r4_6 = temp_r0_9->unk0;
                            temp_r5_5 = temp_r0_9->unk4;
                            if (var_r4_6 != temp_r5_5) {
loop_119:
                                if ((func_08008CD0(*var_r4_6) << 0x18) != 0) {
                                    var_r4_6 += 4;
                                    if (var_r4_6 == temp_r5_5) {
                                        goto block_121;
                                    }
                                    goto loop_119;
                                }
                                var_r0_6 = *var_r4_6;
                            } else {
block_121:
                                var_r0_6 = *(temp_r5_5 - 4);
                            }
                            func_08008B6C(var_r0_6, 0xD0);
                        }
                    }
                    var_r1 = 0;
                    if (arg0->unk24 == 0) {
                        var_r1 = 1;
                    }
                    if (var_r1 != 0) {
                        temp_r0_10 = arg0->unk3E;
                        switch (temp_r0_10) {
                        case 1:
                            func_0802AD80(arg0);
                            return;
                        case 2:
                            func_0802AD80(arg0);
                            func_0802AD80(arg0);
                            break;
                        }
                    }
                } else {
block_42:
                    var_r1_2 = (GenObj *)((u8 *)arg0 + 0x3C);
                    var_r0_7 = 0x39;
                    goto block_43;
                }
            } else {
                goto block_41;
            }
        } else {
            goto block_41;
        }
    } else {
block_41:
        var_r1_2 = (GenObj *)((u8 *)arg0 + 0x3C);
        var_r0_7 = 0x38;
block_43:
        var_r1_2->unk0 = var_r0_7;
        arg0->unkA6 = 0U;
        var_r1_2->unk1 = 0x1E;
        func_0800F390(arg0->unk38 + 0x54);
    }
}
