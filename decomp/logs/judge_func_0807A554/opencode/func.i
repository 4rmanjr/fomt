# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0807A554/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0807A554/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0807A554/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0807A554/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0807A554/opencode/func.c" 2
s32 free();
void *func_08008910(void *);
s32 func_08008F0C(s32 *, void *, s32, s32);
s32 func_0804E7A0(s32, void *, s32);
s32 func_0804E958(s32, void *, s32, s32, s32 *, s32, s32);
s32 func_0807A708(void *, s32, s32 *);
void *func_080D3BC0(s32);
void *malloc(s32);

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk2;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    u8 _pad10[2096];
    s32 unk840;
    s32 unk842;
    u8 _pad846[534];
    s32 unkA5C;
} GenObj;
void func_0807A554(GenObj *arg0) {
GenObj spC;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    void *sp3C;
    s32 *var_r0_2;
    s32 temp_r0_3;
    s32 temp_r1;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 var_r3_2;
    s32 var_r5;
    s32 var_r6;
    s32 var_r8;
    u16 temp_r0;
    u32 temp_r0_2;
    u32 temp_r2;
    u32 var_r0;
    void *temp_r0_4;
    GenObj *temp_r1_2;
    void *temp_r2_2;
    void *temp_r4;
    GenObj *temp_r6;
    void *var_r0_3;
    void *var_r1;
    GenObj *var_r2;
    GenObj *var_r2_2;
    GenObj *var_r3;
    void *var_r4;

    temp_r0 = arg0->unk840;
    temp_r2 = temp_r0 << 0x10;
    if ((u32) temp_r0 > (u32) arg0->unk842) {
        temp_r0_2 = temp_r2 >> 0x14;
        var_r6 = temp_r0_2 + 8;
        var_r5 = temp_r0_2 + 0xA;
        var_r0 = 0xF;
    } else {
        var_r0 = temp_r2 >> 0x14;
        var_r6 = var_r0 - 2;
        var_r5 = 0xF;
    }
    sp2C = 0x1C;
    sp2C.unk2 = 2;
    temp_r4 = (GenObj *)((u8 *)arg0 + 0x14);
    func_0804E7A0(sp2C, temp_r4, 0);
    if (var_r6 >= 0) {
        temp_r1 = ((var_r6 * 4) + arg0->unkA5C)->unk4;
        if (temp_r1 != 0) {
            func_0807A708(arg0, temp_r1, &spC);
            sp30 = 0x1C;
            sp30.unk2 = 2;
            func_0804E958(sp30, temp_r4, 0, 0, &spC, 0, 1);
        }
    }
    temp_r6 = func_08008910(arg0);
    func_08008F0C(&spC, temp_r4, ((var_r5 & var_r0) * 0x700) + 0x06000C00, 0x700);
    temp_r1_2 = temp_r6->unk4;
    if (temp_r1_2 != temp_r6->unkC) {
        if (temp_r1_2 != 0) {
            temp_r1_2->unk0 = (s32) spC;
            temp_r1_2->unk4 = (s32) spC.unk4;
            temp_r1_2->unk8 = (s32) spC.unk8;
            temp_r1_2->unkC = (s32) spC.unkC;
        }
        temp_r6->unk4 = (void *) (temp_r6->unk4 + 0x10);
        return;
    }
    sp38 = 1;
    temp_r4_2 = (s32) (temp_r1_2 - temp_r6->unk0) >> 4;
    sp34 = temp_r4_2;
    var_r0_2 = &sp34;
    if ((u32) temp_r4_2 < 1U) {
        var_r0_2 = &sp38;
    }
    temp_r0_3 = temp_r4_2 + *var_r0_2;
    if (temp_r0_3 != 0) {
        temp_r4_3 = temp_r0_3 * 0x10;
        var_r0_3 = malloc(temp_r4_3);
        var_r8 = temp_r4_3;
        if (var_r0_3 == 0) {
            var_r0_3 = func_080D3BC0(var_r8);
        }
    } else {
        var_r0_3 = 0;
        var_r8 = 0;
    }
    sp3C = var_r0_3;
    var_r2 = temp_r6->unk0;
    var_r3 = var_r0_3;
    if (var_r2 != temp_r1_2) {
        do {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32) var_r2->unk0;
                var_r3->unk4 = (s32) var_r2->unk4;
                var_r3->unk8 = (s32) var_r2->unk8;
                var_r3->unkC = (s32) var_r2->unkC;
            }
            var_r2 += 0x10;
            var_r3 += 0x10;
        } while (var_r2 != temp_r1_2);
    }
    if (sp38 == 1) {
        if (var_r3 != 0) {
            var_r3->unk0 = (s32) spC;
            var_r3->unk4 = (s32) spC.unk4;
            var_r3->unk8 = (s32) spC.unk8;
            var_r3->unkC = (s32) spC.unkC;
        }
        var_r4 = (GenObj *)((u8 *)var_r3 + 0x10);
    } else {
        var_r3_2 = sp38;
        var_r2_2 = var_r3;
        if (var_r3_2 != 0) {
            do {
                if (var_r2_2 != 0) {
                    var_r2_2->unk0 = (s32) spC;
                    var_r2_2->unk4 = (s32) spC.unk4;
                    var_r2_2->unk8 = (s32) spC.unk8;
                    var_r2_2->unkC = (s32) spC.unkC;
                }
                var_r3_2 -= 1;
                var_r2_2 += 0x10;
            } while (var_r3_2 != 0);
        }
        var_r4 = var_r2_2;
    }
    temp_r2_2 = temp_r6->unk4;
    temp_r0_4 = temp_r6->unk0;
    var_r1 = temp_r0_4;
    if (temp_r0_4 != temp_r2_2) {
        do {
            var_r1 += 0x10;
        } while (var_r1 != temp_r2_2);
    }
    if (temp_r0_4 != 0) {
        free();
    }
    temp_r6->unk0 = sp3C;
    temp_r6->unk4 = var_r4;
    temp_r6->unkC = (void *) (sp3C + var_r8);
}
