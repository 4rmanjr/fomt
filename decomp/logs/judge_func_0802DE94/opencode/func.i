# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802DE94/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802DE94/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802DE94/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802DE94/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802DE94/opencode/func.c" 2
s32 GetFatigueGain__C4Food(s32 *);
s32 GetStaminaGain__C4Food(s32 *);
s32 IsDrink__C4Food(s32 *);
s32 SetAnimFacing__12AActorEntityUi(void *, s32);
s32 func_08008B6C(s32, s32);
s32 func_08008CD0(s32);
s32 func_0800F190(s32);
s32 func_0800F204(s32);
s32 func_0800F20C(s32 *, s32);
s32 func_0800F388(s32);
s32 func_0800F390(s32);
s32 func_080258A0(void *);
s32 func_08025A40(void *, s32);
s32 func_0802A7D8(void *);
s32 func_0802C2E0(void *);
s32 func_0802C860(void *);
s32 func_0802C908(void *);

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk4;
    u8 _pad8[12];
    s32 unk14;
    u8 _pad18[8];
    s32 unk20;
    u8 _pad24[20];
    s32 unk38;
    s32 unk3C;
    s32 unk3F;
    u8 _pad43[33];
    struct GenObj *unk64;
    u8 _pad68[91];
    s32 unkC3;
} GenObj;
void func_0802DE94(GenObj *arg0, GenObj *arg1) {
s32 sp0;
    GenObj *sp4;
    GenObj *sp8;
    s32 *var_r4_2;
    s32 *var_r4_3;
    s32 temp_r4;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 var_r0;
    s32 var_r0_2;
    u16 var_r2;
    u8 temp_r0;
    u8 temp_r1;
    u8 temp_r2;
    u8 temp_r3;
    u8 var_r4;
    void **temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    GenObj *temp_r5;

    var_r2 = 0;
    sp4 = 0;
    if (arg1 != 0) {
        var_r2 = arg1->unk0;
        sp4 = (s32) arg1->unk4;
    }
    if (arg0->unkC3 != 0) {
        goto block_50;
    }
    var_r4 = var_r2 & 2;
    if (var_r4 == 0) {
        if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) == 0) {
            func_080258A0(arg0);
            return;
        }
        temp_r0 = arg0->unk3F;
        if (temp_r0 == 0xF) {
            goto block_54;
        }
        if (temp_r0 == 0xE) {
            func_0802C860(arg0);
            return;
        }
        func_0802C2E0(arg0);
        return;
    }
    if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) != 0) {
        func_0802C908(arg0);
    }
    temp_r2 = ((u32) (sp4 << 0x1B) >> 0x1F) | (((u32) (sp4 << 0x1A) >> 0x1F) | (((u32) (sp4 << 0x19) >> 0x1F) | ((u32) (sp4 << 0x18) >> 0x1F)));
    if (temp_r2 != 0) {
        temp_r1 = sp4.unk0;
        if (0x20 & temp_r1) {
            if (arg0->unk20 == 2) {
                return;
            }
            SetAnimFacing__12AActorEntityUi(arg0, 2);
            return;
        }
        if (0x10 & temp_r1) {
            if (arg0->unk20 == 3) {
                return;
            }
            SetAnimFacing__12AActorEntityUi(arg0, 3);
            return;
        }
        if (0x40 & temp_r1) {
            if (arg0->unk20 == 1) {
                return;
            }
            SetAnimFacing__12AActorEntityUi(arg0, 1);
            return;
        }
        if (!(0x80 & temp_r1)) {
            return;
        }
        if (arg0->unk20 == 0) {
            return;
        }
        SetAnimFacing__12AActorEntityUi(arg0, 0);
        return;
    }
    temp_r3 = sp4.unk1;
    var_r4 = 1 & temp_r3;
    if (var_r4 != 0) {
        arg0->unk3C = temp_r2;
        return;
    }
    if (1 & sp4.unk0) {
        temp_r0_2 = arg0->unk0;
        sp8 = 0x3CE;
        sp8.unk4 = (s32) var_r4;
        (*temp_r0_2)->unk140(temp_r0_2, &sp8, 0);
block_54:
        arg0->unk3C = var_r4;
        return;
    }
    if (!(2 & temp_r3)) {
        return;
    }
    if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) != 0) {
        func_08025A40(arg0, 0);
        return;
    }
    if (((func_0800F388(arg0->unk38 + 0x54) << 0x18) == 0) && (func_0800F204(arg0->unk38 + 0x54) == 0)) {
        func_0800F20C(&sp0, arg0->unk38 + 0x54);
        temp_r5 = arg0->unk14;
        temp_r4 = GetStaminaGain__C4Food(&sp0);
        temp_r5->unk64(arg0, temp_r4, GetFatigueGain__C4Food(&sp0));
        if (IsDrink__C4Food(&sp0) == 0) {
            arg0->unk3C = 0xFU;
            temp_r0_3 = (*arg0->unk0)->unk14C();
            var_r4_2 = temp_r0_3->unk0;
            temp_r5_2 = temp_r0_3->unk4;
            if (var_r4_2 != temp_r5_2) {
loop_39:
                if ((func_08008CD0(*var_r4_2) << 0x18) != 0) {
                    var_r4_2 += 4;
                    if (var_r4_2 == temp_r5_2) {
                        goto block_41;
                    }
                    goto loop_39;
                }
                var_r0 = *var_r4_2;
            } else {
block_41:
                var_r0 = *(temp_r5_2 - 4);
            }
            func_08008B6C(var_r0, 0x65);
        } else {
            arg0->unk3C = 0x10U;
            temp_r0_4 = (*arg0->unk0)->unk14C();
            var_r4_3 = temp_r0_4->unk0;
            temp_r5_3 = temp_r0_4->unk4;
            if (var_r4_3 != temp_r5_3) {
loop_45:
                if ((func_08008CD0(*var_r4_3) << 0x18) != 0) {
                    var_r4_3 += 4;
                    if (var_r4_3 == temp_r5_3) {
                        goto block_47;
                    }
                    goto loop_45;
                }
                var_r0_2 = *var_r4_3;
            } else {
block_47:
                var_r0_2 = *(temp_r5_3 - 4);
            }
            func_08008B6C(var_r0_2, 0x66);
        }
        func_0802A7D8(arg0);
        func_0800F390(arg0->unk38 + 0x54);
        return;
    }
block_50:
    arg0->unk3C = 0U;
}
