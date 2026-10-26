# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08016DB0/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08016DB0/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08016DB0/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08016DB0/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08016DB0/opencode/func.c" 2
s32 AddBonuses__4FoodScSc(s32 *, s8, s8);
s32 __4FoodUi(s32 *, s32);
s32 func_0809AAD4(s32);
s32 func_0809AB08(s32 *, s32, s32);
s32 memcpy(s32 *, s32 *, s32);
u32 rand();

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    s32 unk4;
    u8 _pad8[12];
    s32 unk14;
    u8 _pad18[64];
    struct GenObj *unk58;
    u8 _pad5C[48];
    struct GenObj *unk8C;
    u8 _pad90[12];
    struct GenObj *unk9C;
    u8 _padA0[8];
    struct GenObj *unkA8;
} GenObj;
void func_08016DB0(GenObj *arg0) {
s32 sp0;
GenObj sp4;
s32 sp18;
    u16 temp_r0_3;
    u32 temp_r0_2;
    u32 temp_r4;
    void **temp_r0;
    GenObj *temp_r6;
    void *temp_r7;
    GenObj *temp_r8;

    temp_r6 = arg0->unk4;
    temp_r0 = temp_r6->unkA8;
    temp_r7 = (*temp_r0)->unk40(temp_r0, 0);
    temp_r8 = temp_r7->unk14;
    temp_r4 = func_0809AAD4(temp_r6->unk8C + 0x2214) + 2;
    temp_r0_2 = rand() % temp_r4;
    if (temp_r0_2 != 0) {
        if (temp_r0_2 != 1) {
            func_0809AB08(&sp4, temp_r6->unk8C + 0x2214, temp_r0_2 - 2);
            temp_r0_3 = sp4;
            if (temp_r0_3 != 0) {
                __4FoodUi(&sp18, temp_r0_3 - 1);
                AddBonuses__4FoodScSc(&sp18, (s8) sp4.unk2, sp4.unk4);
                memcpy(&sp0, &sp18, 3);
            } else {
                __4FoodUi(&sp0, 0x40);
            }
        } else {
            __4FoodUi(&sp0, 0x40);
        }
    } else {
        __4FoodUi(&sp0, 0x3F);
    }
    memcpy(&sp0, &sp0, 3);
    temp_r8->unk58(temp_r7, &sp0);
    temp_r6->unk9C = 0x19;
}
