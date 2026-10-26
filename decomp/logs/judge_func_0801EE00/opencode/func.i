# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801EE00/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801EE00/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801EE00/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801EE00/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801EE00/opencode/func.c" 2
s8 GetArticle__C12RucksackItem(s32);
s32 GetFood__C12RucksackItem(s32 *, s32);
u16 GetIconId__C4Food(s32 *);
u16 GetIconId__C7Article(s8 *);
s32 GetId__C4Food(s32 *);
s32 GetId__C7Article(s8 *);
s32 GetKind__C12RucksackItem(s32);
s32 IsWrapped__C12RucksackItem(s32);
s32 __12RucksackItemG4Food(s32 *, s32);
s32 __4FoodUi(u8 *, s32);
s32 __builtin_new(s32);
s32 func_08008B6C(s32, s32);
s32 func_08008CD0(s32);
s32 func_08011458(s32);
s32 func_080A1484(s32, void *, s32);
s32 func_080A45A8(void *);
void *func_080A4A00(s32, s32, u16, void *);
s32 func_080AC5D0(s32 *, s16, s16);

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk1;
    s32 unk2;
    s32 unk3;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unk9;
    struct GenObj *unkA;
    u8 _padE[6];
    struct GenObj *unk14;
    u8 _pad18[1];
    s32 unk19;
    s32 unk1A;
    u8 _pad1E[6];
    struct GenObj *unk24;
    u8 _pad28[12];
    s32 unk34;
    u8 _pad38[44];
    s32 unk64;
    u8 _pad68[216];
    s32 unk140;
    u8 _pad144[8];
    s32 unk14C;
    u8 _pad150[3804];
    s32 unk102C;
    u8 _pad1030[8];
    s32 unk1038;
} GenObj;
s32 func_0801EE00(GenObj *arg0, GenObj *arg1, s32 arg2) {
    GenObj *sp0;
    s32 sp4;
s32 spC;
s32 sp10;
s32 sp14;
    u8 sp18;
    GenObj *sp1C;
    s8 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s8 *sp34;
    s32 *sp38;
    s32 *var_r4;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_6;
    s32 temp_r2;
    s32 temp_r5;
    s32 temp_r6_2;
    s32 var_r0;
    s32 var_r5;
    s32 var_r6;
    u16 var_r0_2;
    u16 var_r5_2;
    GenObj *temp_r0;
    void *temp_r0_5;
    void *temp_r0_7;
    GenObj *temp_r1;
    GenObj *temp_r1_2;
    GenObj *temp_r1_3;
    GenObj *temp_r4;
    GenObj *temp_r6;
    void *temp_r8;

    ((void (*)(void *,...))(arg0->unk0->unk34))(&spC, arg0, (u32) (arg1->unk0 << 0x16) >> 0x16);
    sp2C = (s32) (u8) (func_080AC5D0(&spC, (s16) (((arg1->unk2 & 0x3FF) << 6) | ((u8) arg1->unk1 >> 2)), (s16) (((arg1->unk4 & 0x3FF) << 6) | ((u8) arg1->unk3 >> 2))) ^ 1);
    sp30 = 0;
    var_r6 = 1;
    sp38 = &(GenObj *)((u8 *)sp0 + 0x28);
    sp34 = (s8 *) (&(GenObj *)((u8 *)sp0 + 8));
    if (sp2C != 0) {

    } else {
        temp_r0 = ((void (*)(void *,...))(arg0->unk0->unk14C))(arg0);
        var_r4 = temp_r0->unk0;
        temp_r5 = temp_r0->unk4;
        if (var_r4 != temp_r5) {
loop_3:
            if ((func_08008CD0(*var_r4) << 0x18) != 0) {
                var_r4 += 4;
                if (var_r4 == temp_r5) {
                    goto block_5;
                }
                goto loop_3;
            }
            var_r0 = *var_r4;
        } else {
block_5:
            var_r0 = *(temp_r5 - 4);
        }
        func_08008B6C(var_r0, 0x6D);
        temp_r0_2 = func_080A45A8(arg1);
        switch (temp_r0_2) {
        case 4:
            if (GetKind__C12RucksackItem(arg2) == 0) {
                GetFood__C12RucksackItem(&spC, arg2);
                if (GetId__C4Food(&spC) == 0xA0) {
                    func_08011458(arg0->unk1038);
                }
            }
            break;
        case 6:
            var_r5 = 0;
            if (GetKind__C12RucksackItem(arg2) == 0) {
                GetFood__C12RucksackItem(&spC, arg2);
                if (GetId__C4Food(&spC) > 0xE) {
                    GetFood__C12RucksackItem(&sp10, arg2);
                    if (GetId__C4Food(&sp10) <= 0x14) {
                        var_r5 = 1;
                    }
                }
            }
            if (var_r5 != 0) {
                temp_r6 = arg0->unk8;
                temp_r8 = temp_r6->unk14;
                __4FoodUi(&sp18, 0x15);
                __12RucksackItemG4Food(&sp14, (sp0.unk1A << 0x10) | ((sp0.unk19 << 8) | sp18));
                temp_r8->unk5C(temp_r6, &sp14, 0);
block_27:
                var_r6 = 0;
            }
            break;
        case 2:
            sp30 = 0x23B;
            goto block_27;
        case 0:
            if (GetKind__C12RucksackItem(arg2) == 0) {
                GetFood__C12RucksackItem(&spC, arg2);
                if (GetId__C4Food(&spC) == 2) {
                    sp30 = 0x23C;
                    goto block_27;
                }
            }
            break;
        }
    }
    if (sp30 != 0) {
        sp1C = sp30;
        sp1C.unk4 = 0;
        ((void (*)(void *,...))(arg0->unk0->unk140))(arg0);
    }
    if (var_r6 != 0) {
        temp_r2 = arg0->unk1038;
        func_080A1484(temp_r2 + 0x1CD4, arg1, temp_r2 + 0x214C);
    }
    if ((IsWrapped__C12RucksackItem(arg2) << 0x18) == 0) {
        temp_r0_3 = GetKind__C12RucksackItem(arg2);
        if ((temp_r0_3 == 0) || (temp_r0_3 != 1)) {
            GetFood__C12RucksackItem(&spC, arg2);
            var_r0_2 = GetIconId__C4Food(&spC);
            goto block_38;
        }
        sp24 = GetArticle__C12RucksackItem(arg2);
        if (GetId__C7Article(&sp24) != 0x1B) {
            var_r0_2 = GetIconId__C7Article(&sp24);
block_38:
            var_r5_2 = var_r0_2;
        } else {
            var_r5_2 = 3;
            if ((s32) ((u32) (arg1->unk0 << 0x16) >> 0x16) <= 8) {
                var_r5_2 = 4;
            }
        }
    } else {
        var_r5_2 = 0x160;
    }
    sp28 = (s16) (((arg1->unk2 & 0x3FF) << 6) | ((u8) arg1->unk1 >> 2));
    sp38->unk2 = (s16) (((arg1->unk4 & 0x3FF) << 6) | ((u8) arg1->unk3 >> 2));
    temp_r4 = (GenObj *)((u8 *)arg0 + 0x102C);
    temp_r6_2 = ((void (*)(void *,...))(arg0->unk0->unk64))(arg0);
    temp_r4->unk4 = sp28;
    temp_r1 = arg0->unk102C;
    if ((temp_r1 != 0) && (temp_r1 != 0)) {
        ((void (*)(void *,...))(temp_r1->unk24->unk8))(temp_r1, 3);
    }
    arg0->unk102C = 0;
    temp_r4->unk8 = (u8) sp2C;
    if (sp2C != 0) {
        temp_r0_4 = __builtin_new(0x40);
        sp0 = 2;
        sp4 = 3;
        *sp34 = 0;
        temp_r0_5 = func_080A4A00(temp_r0_4, temp_r6_2, var_r5_2, arg0);
        temp_r1_2 = arg0->unk102C;
        if ((temp_r0_5 != temp_r1_2) && (temp_r1_2 != 0)) {
            ((void (*)(void *,...))(temp_r1_2->unk24->unk8))(temp_r1_2, 3);
        }
        arg0->unk102C = temp_r0_5;
        temp_r4->unk9 = 0x10;
        temp_r4->unkA = 0;
        return 0x10;
    }
    temp_r0_6 = __builtin_new(0x40);
    sp0 = 2;
    sp4 = 3;
    *sp34 = (s8) sp2C;
    temp_r0_7 = func_080A4A00(temp_r0_6, temp_r6_2, 0x1A9U, arg0);
    temp_r1_3 = arg0->unk102C;
    if ((temp_r0_7 != temp_r1_3) && (temp_r1_3 != 0)) {
        ((void (*)(void *,...))(temp_r1_3->unk24->unk8))(temp_r1_3, 3);
    }
    arg0->unk102C = temp_r0_7;
    return 0;
}
