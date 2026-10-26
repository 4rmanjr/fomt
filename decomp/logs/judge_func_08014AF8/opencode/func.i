# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08014AF8/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08014AF8/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08014AF8/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08014AF8/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08014AF8/opencode/func.c" 2
s32 func_08010F54(s32);
s32 func_0801FB7C(void ***, s32, s32, s32);
extern void *gUnk_0300040C;

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[12];
    struct GenObj *unk14;
    u8 _pad18[76];
    s32 unk64;
    u8 _pad68[32];
    struct GenObj *unk88;
    struct GenObj *unk8C;
    u8 _pad90[24];
    struct GenObj *unkA8;
} GenObj;
void func_08014AF8(GenObj *arg0) {
    void **sp0;
    void ***sp4;
    void **sp8;
    s32 temp_r2;
    s32 var_r0;
    u32 temp_r1_4;
    void **temp_r0;
    void **temp_r1;
    void **temp_r1_2;
    void **temp_r1_3;
    void *temp_r4;
    GenObj *temp_r5;

    temp_r5 = arg0->unk4;
    temp_r1 = temp_r5->unkA8;
    if ((temp_r1 != 0) && (temp_r1 != 0)) {
        (*temp_r1)->unk8(temp_r1, 3);
    }
    temp_r5->unkA8 = 0;
    func_08010F54(temp_r5->unk8C);
    func_0801FB7C(&sp0, temp_r5->unk8C, temp_r5->unk88, 0);
    temp_r1_2 = sp0;
    sp4 = &sp0;
    sp8 = temp_r1_2;
    sp0 = 0;
    temp_r1_3 = temp_r5->unkA8;
    if ((temp_r1_2 != temp_r1_3) && (temp_r1_3 != 0)) {
        (*temp_r1_3)->unk8(temp_r1_3, 3);
    }
    temp_r5->unkA8 = temp_r1_2;
    if (sp0 != 0) {
        (*sp0)->unk8(sp0, 3);
    }
    (*temp_r5->unkA8)->unk138();
    temp_r0 = temp_r5->unkA8;
    temp_r4 = (*temp_r0)->unk40(temp_r0, 0);
    if (gUnk_0300040C->unk36C != 0) {
        temp_r1_4 = (u32) (gUnk_0300040C->unk374 << 0x1B) >> 0x1B;
        if (temp_r1_4 <= 5U) {
            var_r0 = 6;
        } else {
            var_r0 = 0x1E;
        }
        temp_r2 = var_r0 - temp_r1_4;
        ((void (*)(void *,...))(temp_r4->unk14->unk64))(temp_r4, temp_r2 * 7, 0 - (temp_r2 * 2));
    }
}
