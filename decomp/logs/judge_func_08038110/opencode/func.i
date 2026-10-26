# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038110/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038110/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038110/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038110/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038110/opencode/func.c" 2
s32 GetLocation__C7AEntity(s32 *, void *);
s32 func_0802151C(s32, s32 *);
s32 func_080ABBA0(s32 *);
s32 func_080ABBC4(s32 *);
s32 func_080ABBEC(s32 *);
s32 func_080ABC14(s32 *);
s32 memcpy(s32, s32 *, s32);

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkA;
    s32 unkC;
    u8 _pad10[4];
    struct GenObj *unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk25;
} GenObj;
void func_08038110(GenObj *arg0, ? arg3) {
    GenObj sp0;
    GenObj *spC;
s32 sp1C;
    s32 sp28;
    s32 sp2C;
    s32 sp34;
    s32 sp3C;
    s32 sp40;
    s32 *var_r0_2;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_5;
    s32 temp_r1;
    s32 temp_r3;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r4;
    s32 var_r7;
    u16 temp_r0_3;
    u8 temp_r0_6;
    u8 var_r0;
    void **temp_r0_4;
    void **temp_r7;

    if (arg0->unk25 == 0) {
        return;
    }
    temp_r7 = arg0->unk0;
    (*temp_r7)->unk34(&sp0, temp_r7, arg0->unk4);
    temp_r1 = arg0->unk20 + 0xFFFFB85D;
    arg0->unk20 = temp_r1;
    temp_r0 = arg0->unk1C + temp_r1;
    arg0->unk1C = temp_r0;
    if (temp_r0 <= 0) {
        arg0->unk1C = 0;
        arg0->unk25 = 0U;
        GetLocation__C7AEntity(&spC, arg0);
        memcpy(arg0->unk18, &spC, 6);
        temp_r0_2 = (s32) arg0->unk8 >> 0x13;
        temp_r3 = (s32) arg0->unkC >> 0x13;
        temp_r0_3 = sp0.unk8;
        if ((sp0 != 0) && ((u32) temp_r0_2 <= (u32) temp_r0_3) && ((u32) temp_r3 <= (u32) sp0.unkA)) {
            var_r0 = (temp_r3 * temp_r0_3) + temp_r0_2;
            if (sp4 != 0) {
                var_r0 = *((u8 *)sp4 + var_r0);
            }
            var_r0_2 = sp0 + (var_r0 * 4);
        } else {
            var_r0_2 = 0;
        }
        if (var_r0_2 == 0) {
            (*temp_r7)->unk13C(temp_r7, 1);
            return;
        }
        if ((s32) (*var_r0_2 << 0x1E) < 0) {
            (*temp_r7)->unk13C(temp_r7, 0);
            return;
        }
        temp_r0_4 = arg0->unk0;
        temp_r0_5 = (*temp_r0_4)->unk40(temp_r0_4, 0x2B);
        if (temp_r0_5 != 0) {
            func_0802151C(temp_r0_5, &spC);
        }
        return;
    }
    ((void (*)(void *,...))(arg0->unk14->unkC))(&sp34, arg0);
    sp3C = sp34;
    sp40 = sp38;
    spC = 0x21;
    spC.unk4 = -0x21;
    spC.unk8 = -0x21;
    spC.unkC = 0x21;
    sp1C = (s32) sp0;
    sp1C.unk4 = (s32) sp0.unk4;
    sp1C.unk8 = (s32) sp0.unk8;
    sp28 = sp3C;
    sp2C = sp40;
    spC.unk24 = 0x20;
    var_r4 = arg0->unk8;
    var_r7 = arg0->unkC;
    temp_r0_6 = arg0->unk24;
    switch (temp_r0_6) {
    case 1:
        if ((s64) (sp10 + sp30) < 0) {
            func_080ABBC4(&spC);
        }
        var_r1 = sp10 << 0x10;
        if (var_r1 <= 0xFFFE38E4) {
            var_r7 += 0xFFFE38E4;
        } else {
block_20:
            var_r7 += var_r1;
        }
        break;
    case 0:
        if (spC > sp30) {
            func_080ABBA0(&spC);
        }
        var_r1 = spC << 0x10;
        if (var_r1 <= 0x1C71B) {
            goto block_20;
        }
        var_r7 += 0x1C71C;
        break;
    case 3:
        if (sp18 > sp30) {
            func_080ABC14(&spC);
        }
        var_r1_2 = sp18 << 0x10;
        if (var_r1_2 > 0x1C71B) {
            var_r1_2 = 0x1C71C;
        }
block_27:
        var_r4 += var_r1_2;
        break;
    case 2:
        if ((s64) (sp14 + sp30) < 0) {
            func_080ABBEC(&spC);
        }
        var_r1_2 = sp14 << 0x10;
        if (var_r1_2 <= 0xFFFE38E4) {
            var_r4 += 0xFFFE38E4;
        } else {
            goto block_27;
        }
        break;
    }
    arg0->unk8 = var_r4;
    arg0->unkC = var_r7;
}
