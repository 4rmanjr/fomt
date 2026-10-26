# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080212C0/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080212C0/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080212C0/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080212C0/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080212C0/opencode/func.c" 2
s32 func_080384FC(void *);
s32 func_080AC070(s32 *, s32 *);

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    u8 _pad10[4];
    struct GenObj *unk14;
    u8 _pad18[8];
    s32 unk20;
    u8 _pad24[2];
    s32 unk26;
} GenObj;
void func_080212C0(GenObj *arg0) {
s32 sp0;
s32 spC;
    s32 temp_r1;
    s32 temp_r8;
    s32 temp_sb;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_sl;
    u16 temp_r7;
    u8 temp_r0_3;
    void **temp_r0;
    void **temp_r4;
    void *temp_r0_2;

    temp_r0 = arg0->unk0;
    temp_r0_2 = (*temp_r0)->unk40(temp_r0, 0x4B);
    if ((temp_r0_2 != 0) && (temp_r0_2->unk26 != 0)) {
        temp_sb = arg0->unk8;
        temp_r8 = arg0->unkC;
        var_sl = 8;
        temp_r7 = arg0->unk4;
        temp_r4 = arg0->unk0;
        if ((temp_r7 != (*temp_r4)->unk14(temp_r4)) && (temp_r7 != 2)) {
            var_sl = 0;
        }
        (*temp_r4)->unk34(&sp0, temp_r4, temp_r7);
loop_7:
        temp_r1 = var_sl << 0x10;
        temp_r0_3 = arg0->unk20;
        switch (temp_r0_3) {
        case 0:
            temp_r0_2->unk8 = temp_sb;
            var_r0 = temp_r8 + temp_r1;
block_19:
            temp_r0_2->unkC = var_r0;
            break;
        case 1:
            temp_r0_2->unk8 = temp_sb;
            var_r0 = temp_r8 - temp_r1;
            goto block_19;
        case 2:
            var_r0_2 = temp_sb - temp_r1;
block_18:
            temp_r0_2->unk8 = var_r0_2;
            var_r0 = temp_r8;
            goto block_19;
        case 3:
            var_r0_2 = temp_sb + temp_r1;
            goto block_18;
        }
        var_sl -= 1;
        if (var_sl >= 0) {
            ((void (*)(void *,...))(temp_r0_2->unk14->unkC))(&spC, temp_r0_2);
            if ((func_080AC070(&sp0, &spC) << 0x18) != 0) {
                goto loop_7;
            }
        }
        func_080384FC(temp_r0_2);
    }
}
