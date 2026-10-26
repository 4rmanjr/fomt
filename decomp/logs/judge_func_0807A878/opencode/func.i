# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0807A878/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0807A878/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0807A878/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0807A878/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0807A878/opencode/func.c" 2
s32 func_080074C0(void *, s32);
s32 func_08007D4C(void *, s32);
s32 func_08008E64(s32, s32, u16);
s32 func_0805E790(s32 *, void *, s32);
s32 memcpy(s32 *, s32 *, s32);

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
    s32 unk8;
    s32 unkC;
    u8 _pad10[1892];
    s32 unk774;
    s32 unk778;
} GenObj;
void func_0807A878(GenObj *arg0) {
    GenObj *sp0;
    GenObj *sp8;
    GenObj *sp10;
    GenObj *sp18;
GenObj sp20;
    s32 temp_r1_3;
    s32 temp_r1_5;
    s32 temp_r1_6;
    u16 var_r2;
    u16 var_r2_2;
    u16 var_r2_3;
    void **temp_r1;
    void *temp_r0;
    GenObj *temp_r0_2;
    void *temp_r0_3;
    GenObj *temp_r0_4;
    GenObj *temp_r0_5;
    void *temp_r1_2;
    void *temp_r1_4;

    sp0 = 0;
    sp0.unk4 = 0;
    sp8 = 0;
    sp8.unk4 = 0U;
    sp10 = 0;
    sp10.unk4 = 0U;
    sp18 = 0;
    sp18.unk4 = 0;
    temp_r1 = arg0->unk774;
    (*temp_r1)->unk10(&sp20, temp_r1, *(arg0->unk778 + (((GenObj *)((u8 *)arg0 + 0x774))->unkC * 4)));
    memcpy(&sp20, &sp20, 0x20);
    temp_r0 = &(GenObj *)((u8 *)sp20 + 0xC);
    sp0.unk0 = sp20;
    sp0.unk4 = (s32) sp20.unk4;
    sp0.unk8 = (s32) sp20.unk8;
    temp_r1_2 = &(GenObj *)((u8 *)sp0 + 0xC);
    sp0.unkC = (s32) sp20.unkC;
    temp_r1_2->unk4 = (s32) temp_r0->unk4;
    temp_r1_2->unk8 = (s32) temp_r0->unk8;
    temp_r1_2->unkC = (s32) temp_r0->unkC;
    ((GenObj *)((u8 *)temp_r1_2 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r0 + 0xC))->unk4;
    temp_r0_2 = (GenObj *)((u8 *)arg0 + 0x818);
    temp_r1_3 = (func_080074C0(temp_r0_2, temp_r0_2->unk4) << 5) + 0x05000200;
    var_r2 = 0;
    if (sp10 != 0) {
        var_r2 = sp10.unk4;
    }
    func_08008E64(sp10, temp_r1_3, var_r2);
    func_0805E790(&sp20, (GenObj *)((u8 *)arg0 + 0x744), 0);
    temp_r0_3 = &(GenObj *)((u8 *)sp20 + 0xC);
    sp0.unk0 = sp20;
    sp0.unk4 = (s32) sp20.unk4;
    sp0.unk8 = (s32) sp20.unk8;
    temp_r1_4 = &(GenObj *)((u8 *)sp0 + 0xC);
    sp0.unkC = (s32) sp20.unkC;
    temp_r1_4->unk4 = (s32) temp_r0_3->unk4;
    temp_r1_4->unk8 = (s32) temp_r0_3->unk8;
    temp_r1_4->unkC = (s32) temp_r0_3->unkC;
    ((GenObj *)((u8 *)temp_r1_4 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_3 + 0xC))->unk4;
    temp_r0_4 = (GenObj *)((u8 *)arg0 + 0x838);
    temp_r1_5 = (func_080074C0(temp_r0_4, temp_r0_4->unk4) << 5) + 0x05000200;
    var_r2_2 = 0;
    if (sp10 != 0) {
        var_r2_2 = sp10.unk4;
    }
    func_08008E64(sp10, temp_r1_5, var_r2_2);
    temp_r0_5 = (GenObj *)((u8 *)arg0 + 0x830);
    temp_r1_6 = (func_08007D4C(temp_r0_5, temp_r0_5->unk4) << 5) + 0x06010000;
    var_r2_3 = 0;
    if (sp8 != 0) {
        var_r2_3 = sp8.unk4;
    }
    func_08008E64(sp8, temp_r1_6, var_r2_3);
}
