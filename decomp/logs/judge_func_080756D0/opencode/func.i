# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080756D0/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080756D0/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080756D0/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080756D0/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080756D0/opencode/func.c" 2
s32 __builtin_delete(void *);
s32 free();
s32 func_08007184(void *, s32);
s32 func_080073E0(void *, s32);
s32 func_080079E8(void *, s32);
s32 func_08007C28(void *, s32);
s32 func_080E2B28(void *);
s32 func_080E2B5C(void *, s32);
s32 func_080E2B88(void *, s32);
extern s32 vtable_unk_080E7B5C;

typedef struct GenObj {
    s32 unk0;
    void *unk4;
    struct GenObj *unk8;
    u8 _padC[8];
    s32 unk14;
} GenObj;
void func_080756D0(GenObj *arg0, s32 arg1) {
    GenObj *sp0;
    void *sp4;
    GenObj *sp8;
    void *spC;
    s32 temp_r0_3;
    s32 temp_r1;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r2_4;
    GenObj *temp_r0;
    void *temp_r0_2;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r1_2;
    void *temp_r2_3;
    void *temp_r6;
    void *var_r0;
    void *var_r1;

    arg0->unk4 = &vtable_unk_080E7B5C;
    temp_r0 = arg0->unk0;
    if (temp_r0 != 0) {
        var_r0 = temp_r0->unk8;
        var_r1 = var_r0->unk8;
        sp0 = var_r1;
        sp4 = var_r0;
loop_3:
        temp_r1 = (s32) var_r1 ^ (s32) var_r0;
        if ((s32) ((0 - temp_r1) | temp_r1) < 0) {
            func_08007C28(temp_r0, sp0->unk14);
            var_r0 = (void *) func_080E2B28(sp0);
            sp0 = var_r0;
            var_r1 = sp4;
            goto loop_3;
        }
        temp_r0_2 = (GenObj *)((u8 *)temp_r0 + 0x18);
        temp_r1_2 = temp_r0_2->unk4;
        temp_r2 = temp_r1_2->unk8;
        sp8 = temp_r2;
        spC = temp_r1_2;
        temp_r2_2 = temp_r2 ^ (s32) temp_r1_2;
        temp_r2_3 = (GenObj *)((u8 *)temp_r0 + 4);
        temp_r6 = (GenObj *)((u8 *)temp_r0 + 0x14);
        if ((s32) ((0 - temp_r2_2) | temp_r2_2) < 0) {
            do {
                func_080073E0(temp_r6, sp8->unk14);
                temp_r0_3 = func_080E2B28((void *) sp8);
                sp8 = temp_r0_3;
                temp_r2_4 = (s32) spC ^ temp_r0_3;
            } while ((s32) ((0 - temp_r2_4) | temp_r2_4) < 0);
        }
        if (temp_r0_2->unk8 != 0) {
            func_080E2B88(temp_r0_2, temp_r0_2->unk4->unk4);
            temp_r0_4 = temp_r0_2->unk4;
            temp_r0_4->unk8 = temp_r0_4;
            temp_r0_2->unk4->unk4 = 0;
            temp_r0_5 = temp_r0_2->unk4;
            temp_r0_5->unkC = temp_r0_5;
            temp_r0_2->unk8 = 0;
        }
        if (temp_r0_2->unk4 != 0) {
            free();
        }
        func_08007184(temp_r6, 2);
        if (temp_r2_3->unk8 != 0) {
            func_080E2B5C(temp_r2_3, temp_r2_3->unk4->unk4);
            temp_r0_6 = temp_r2_3->unk4;
            temp_r0_6->unk8 = temp_r0_6;
            temp_r2_3->unk4->unk4 = 0;
            temp_r0_7 = temp_r2_3->unk4;
            temp_r0_7->unkC = temp_r0_7;
            temp_r2_3->unk8 = 0;
        }
        if (temp_r2_3->unk4 != 0) {
            free();
        }
        func_080079E8(temp_r0, 2);
        __builtin_delete(temp_r0);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
