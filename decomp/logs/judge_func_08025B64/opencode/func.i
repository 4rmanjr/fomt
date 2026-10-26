# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08025B64/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08025B64/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08025B64/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08025B64/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08025B64/opencode/func.c" 2
s32 __12RucksackItemG4Food(s32 *, s32);
s32 __12RucksackItemG7Article(s32 *, u8);
s32 __4FoodUi(u8 *, s32);
s32 __4ToolUi(s32 *, s32);
s32 __7ArticleUi(u8 *, s32);
s32 func_08008B6C(s32, s32);
s32 func_08008CD0(s32);
s32 func_0802720C(void *, s32 *);
s32 func_0802771C(void *, s32);
s32 rand();

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    s32 unk5;
    s32 unk6;
    u8 _padA[10];
    struct GenObj *unk14;
    u8 _pad18[13];
    s32 unk25;
    u8 _pad29[19];
    s32 unk3C;
    u8 _pad40[28];
    struct GenObj *unk5C;
    u8 _pad60[32];
    s32 unk80;
} GenObj;
void func_08025B64(GenObj *arg0, u32 arg1) {
GenObj sp0;
    u8 sp4;
s32 sp8;
s32 spC;
    u8 sp10;
    u8 sp14;
    u8 sp18;
    u8 sp1C;
    u8 sp20;
    u8 sp24;
    s32 *temp_r4;
    s32 *var_r0;
    s32 *var_r4;
    s32 *var_r4_2;
    s32 temp_r0_2;
    s32 temp_r5;
    s32 var_r0_2;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_3;
    u8 *var_r0_3;
    u8 *var_r4_3;
    void *temp_r0;
    GenObj *temp_r5_2;
    GenObj *var_r5;

    switch (arg1) {
    default:
        arg0->unk3C = 0;
        return;
    case 3:
        ((void (*)(void *,...))(arg0->unk14->unk80))(arg0);
        return;
    case 4:
        var_r4 = &sp8;
        var_r0 = var_r4;
        var_r1 = 5;
block_10:
        __4ToolUi(var_r0, var_r1);
        func_0802720C(arg0, var_r4);
        return;
    case 5:
        var_r4 = &(GenObj *)((u8 *)sp0 + 9);
        var_r0 = var_r4;
        var_r1 = 0xD;
        goto block_10;
    case 6:
        var_r4 = &(GenObj *)((u8 *)sp0 + 0xA);
        var_r0 = var_r4;
        var_r1 = 0x15;
        goto block_10;
    case 7:
        var_r4 = &(GenObj *)((u8 *)sp0 + 0xB);
        var_r0 = var_r4;
        var_r1 = 0x1D;
        goto block_10;
    case 8:
        var_r4 = &spC;
        var_r0 = var_r4;
        var_r1 = 0x25;
        goto block_10;
    case 9:
        var_r4 = &(GenObj *)((u8 *)sp0 + 0xD);
        var_r0 = var_r4;
        var_r1 = 0x2D;
        goto block_10;
    case 10:
        temp_r4 = &(GenObj *)((u8 *)sp0 + 0xE);
        __4ToolUi(temp_r4, 0x4D);
        func_0802720C(arg0, temp_r4);
        temp_r0 = (*arg0->unk0)->unk14C();
        var_r4_2 = temp_r0->unk0;
        temp_r5 = temp_r0->unk4;
        if (var_r4_2 != temp_r5) {
loop_13:
            if ((func_08008CD0(*var_r4_2) << 0x18) != 0) {
                var_r4_2 += 4;
                if (var_r4_2 == temp_r5) {
                    goto block_15;
                }
                goto loop_13;
            }
            var_r0_2 = *var_r4_2;
        } else {
block_15:
            var_r0_2 = *(temp_r5 - 4);
        }
        func_08008B6C(var_r0_2, 0xB6);
        return;
    case 2:
        temp_r0_2 = rand();
        var_r1_2 = temp_r0_2;
        if (temp_r0_2 < 0) {
            var_r1_2 += 0xF;
        }
        func_0802771C(arg0, (temp_r0_2 - ((var_r1_2 >> 4) * 0x10)) + 5);
        return;
    case 11:
        var_r5 = arg0->unk14;
        __4FoodUi(&sp4, 0x36);
        __12RucksackItemG4Food(&sp0, (sp0.unk6 << 0x10) | ((sp0.unk5 << 8) | sp4));
block_44:
        var_r5->unk5C(arg0, &sp0, 0);
        return;
    case 12:
        var_r5 = arg0->unk14;
        var_r4_3 = &(GenObj *)((u8 *)sp0 + 0xF);
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x11;
block_43:
        __7ArticleUi(var_r0_3, var_r1_3);
        __12RucksackItemG7Article(&sp0, *var_r4_3);
        goto block_44;
    case 13:
        var_r5 = arg0->unk14;
        var_r4_3 = &sp10;
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x12;
        goto block_43;
    case 14:
        var_r5 = arg0->unk14;
        var_r4_3 = &(GenObj *)((u8 *)sp0 + 0x11);
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x13;
        goto block_43;
    case 15:
        var_r5 = arg0->unk14;
        var_r4_3 = &(GenObj *)((u8 *)sp0 + 0x12);
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x14;
        goto block_43;
    case 16:
        var_r5 = arg0->unk14;
        var_r4_3 = &(GenObj *)((u8 *)sp0 + 0x13);
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x15;
        goto block_43;
    case 17:
        var_r5 = arg0->unk14;
        var_r4_3 = &sp14;
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x16;
        goto block_43;
    case 18:
        var_r5 = arg0->unk14;
        var_r4_3 = &(GenObj *)((u8 *)sp0 + 0x15);
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x17;
        goto block_43;
    case 19:
        var_r5 = arg0->unk14;
        var_r4_3 = &(GenObj *)((u8 *)sp0 + 0x16);
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x18;
        goto block_43;
    case 20:
        var_r5 = arg0->unk14;
        var_r4_3 = &(GenObj *)((u8 *)sp0 + 0x17);
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x19;
        goto block_43;
    case 21:
        var_r5 = arg0->unk14;
        var_r4_3 = &sp18;
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x1A;
        goto block_43;
    case 22:
        var_r5 = arg0->unk14;
        var_r4_3 = &(GenObj *)((u8 *)sp0 + 0x19);
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x1B;
        goto block_43;
    case 23:
        var_r5 = arg0->unk14;
        var_r4_3 = &(GenObj *)((u8 *)sp0 + 0x1A);
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x1C;
        goto block_43;
    case 24:
        var_r5 = arg0->unk14;
        var_r4_3 = &(GenObj *)((u8 *)sp0 + 0x1B);
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x1D;
        goto block_43;
    case 25:
        var_r5 = arg0->unk14;
        var_r4_3 = &sp1C;
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x1E;
        goto block_43;
    case 26:
        var_r5 = arg0->unk14;
        var_r4_3 = &(GenObj *)((u8 *)sp0 + 0x1D);
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x1F;
        goto block_43;
    case 27:
        var_r5 = arg0->unk14;
        var_r4_3 = &(GenObj *)((u8 *)sp0 + 0x1E);
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x20;
        goto block_43;
    case 28:
        var_r5 = arg0->unk14;
        var_r4_3 = &(GenObj *)((u8 *)sp0 + 0x1F);
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x21;
        goto block_43;
    case 29:
        var_r5 = arg0->unk14;
        var_r4_3 = &sp20;
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x22;
        goto block_43;
    case 30:
        var_r5 = arg0->unk14;
        var_r4_3 = &(GenObj *)((u8 *)sp0 + 0x21);
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x23;
        goto block_43;
    case 31:
        var_r5 = arg0->unk14;
        var_r4_3 = &(GenObj *)((u8 *)sp0 + 0x22);
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x24;
        goto block_43;
    case 32:
        var_r5 = arg0->unk14;
        var_r4_3 = &(GenObj *)((u8 *)sp0 + 0x23);
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x25;
        goto block_43;
    case 33:
        var_r5 = arg0->unk14;
        var_r4_3 = &sp24;
        var_r0_3 = var_r4_3;
        var_r1_3 = 0x26;
        goto block_43;
    case 34:
        temp_r5_2 = arg0->unk14;
        __7ArticleUi(&(GenObj *)((u8 *)sp0 + 0x25), 0x33);
        __12RucksackItemG7Article(&sp0, sp0.unk25);
        temp_r5_2->unk5C(arg0, &sp0, 0);
        return;
    }
}
