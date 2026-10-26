# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801F3E4/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801F3E4/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801F3E4/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801F3E4/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801F3E4/opencode/func.c" 2
u16 GetIconId__C7Article(s32 *);
s32 GetVaseArticleId__C9FarmHouse(s32);
s32 __7ArticleUi(s32 *);
void *__builtin_new(s32);
s32 func_0805E824(void ***, void **, u16, s32);
s32 func_080A4740(void *, void *, s32, s32);
s32 memcpy(s32 *, s32 *, s32);
extern s32 vtable_unk_080E602C;

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    u8 _pad18[12];
    struct GenObj *unk24;
    struct GenObj *unk28;
    u8 _pad2C[28];
    struct GenObj *unk48;
    u8 _pad4C[24];
    s32 unk64;
    u8 _pad68[4048];
    s32 unk1038;
    u8 _pad103C[44];
    s32 unk1068;
} GenObj;
void func_0801F3E4(GenObj *arg0) {
GenObj sp0;
    void **sp20;
s32 sp34;
    u16 *sp38;
    u16 temp_r7;
    void **temp_r4_2;
    void **var_r4;
    void *temp_r0;
    void *temp_r1;
    void *temp_r1_2;
    GenObj *temp_r1_3;
    GenObj *temp_r4;
    GenObj *temp_r6;
    GenObj *var_r5;

    if (((void (*)(void *,...))(arg0->unk0->unk14))(arg0) == 0x1D) {
        if (GetVaseArticleId__C9FarmHouse(arg0->unk1038 + 0x1F4) != 0x5F) {
            __7ArticleUi(&sp34);
            temp_r7 = GetIconId__C7Article(&sp34);
            temp_r4 = arg0->unk1068;
            if (temp_r4 != 0) {
                func_0805E824(&sp20, ((void (*)(void *,...))(arg0->unk0->unk64))(arg0), temp_r7, 0x100);
                (*sp20)->unk10(&sp0, sp20, *((u8 *)sp24 + (sp20.unkC * 4)));
                memcpy(&sp0, &sp0, 0x20);
                temp_r1 = (GenObj *)((u8 *)temp_r4 + 0x28);
                temp_r0 = &(GenObj *)((u8 *)sp0 + 0xC);
                temp_r4->unk28 = (s32) sp0;
                temp_r1->unk4 = (s32) sp0.unk4;
                temp_r1->unk8 = (s32) sp0.unk8;
                temp_r1_2 = temp_r1 + 0xC;
                temp_r1->unkC = (s32) sp0.unkC;
                temp_r1_2->unk4 = (s32) temp_r0->unk4;
                temp_r1_2->unk8 = (s32) temp_r0->unk8;
                temp_r1_2->unkC = (s32) temp_r0->unkC;
                (temp_r1_2 + 0xC)->unk4 = (s32) ((GenObj *)((u8 *)temp_r0 + 0xC))->unk4;
                temp_r4->unk48 = 1;
                return;
            }
            var_r5 = __builtin_new(0x4C);
            temp_r4_2 = ((void (*)(void *,...))(arg0->unk0->unk64))(arg0);
            func_080A4740(var_r5, arg0, 2, 0x1B);
            var_r5->unk24 = &vtable_unk_080E602C;
            temp_r6 = *temp_r4_2;
            temp_r6->unkC(&sp38, temp_r4_2, temp_r7);
            temp_r6->unk10((GenObj *)((u8 *)var_r5 + 0x28), temp_r4_2, *sp38);
            var_r5->unk48 = 1;
            var_r4 = (GenObj *)((u8 *)arg0 + 0x1068);
            goto block_6;
        }
    } else {
        var_r4 = (GenObj *)((u8 *)arg0 + 0x1068);
        var_r5 = 0;
block_6:
        temp_r1_3 = *var_r4;
        if ((var_r5 != temp_r1_3) && (temp_r1_3 != 0)) {
            ((void (*)(void *,...))(temp_r1_3->unk24->unk8))(temp_r1_3, 3);
        }
        *var_r4 = var_r5;
    }
}
