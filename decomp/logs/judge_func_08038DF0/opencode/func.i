# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038DF0/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038DF0/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038DF0/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038DF0/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038DF0/opencode/func.c" 2
s32 __builtin_delete(void *);
void *__builtin_new(s32);
s32 func_080A4740(void *, void **, s32, s32);
s32 func_080A47B4(void *, s32);
extern s32 vtable_unk_080E602C;

typedef struct GenObj {
    s32 unk0;
    u8 _pad4[8];
    s32 unkC;
    s32 unk10;
    u8 _pad14[16];
    void *unk24;
    u8 _pad28[32];
    s32 unk48;
    s32 unk4C;
    s32 unk50;
} GenObj;
void func_08038DF0(GenObj *arg0) {
    u16 *sp0;
    void **temp_r4;
    void **temp_r5;
    GenObj *temp_r4_2;
    void *temp_r4_3;
    GenObj *temp_r7;

    temp_r7 = __builtin_new(0x54);
    temp_r4 = *arg0->unk0;
    temp_r5 = (*temp_r4)->unk70(temp_r4);
    func_080A4740(temp_r7, temp_r4, 6, 0x1B);
    temp_r7->unk24 = &vtable_unk_080E602C;
    temp_r4_2 = *temp_r5;
    temp_r4_2->unkC(&sp0, temp_r5, 0);
    temp_r4_2->unk10((GenObj *)((u8 *)temp_r7 + 0x28), temp_r5, *sp0);
    temp_r7->unk48 = 1;
    temp_r7->unk4C = 0x01200000;
    temp_r7->unk50 = 0;
    ((GenObj *)((u8 *)temp_r7 + 0x50))->unk1 = 0;
    temp_r4_3 = arg0->unkC;
    if ((temp_r7 != temp_r4_3) && (temp_r4_3 != 0)) {
        func_080A47B4(temp_r4_3, 2);
        __builtin_delete(temp_r4_3);
    }
    arg0->unkC = temp_r7;
}
