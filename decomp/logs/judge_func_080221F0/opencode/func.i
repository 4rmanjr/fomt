# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080221F0/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080221F0/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080221F0/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080221F0/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080221F0/opencode/func.c" 2
s32 GetAffection__C6Animal(s32);
s32 SetHasTalkedToday__3Pet(s32);
s32 func_08020018();
s32 func_08022048(void *, s32, u8);
s32 func_080220D4(void *);
s32 method_0809BC30__5HorsePC18UnkBarnAnimal2C_x2(s32, s32 *);

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk2;
    s32 unk3;
    s32 unk4;
    u8 _pad8[2];
    s32 unkA;
    s32 unkE;
    u8 _pad12[14];
    s32 unk20;
    u8 _pad24[16];
    s32 unk34;
    u8 _pad38[5];
    s32 unk3D;
} GenObj;
void func_080221F0(GenObj *arg0, GenObj *arg1) {
    s32 sp0;
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r2;

    if (((u32) (arg1->unk0 << 0x16) >> 0x16) == arg0->unk4) {
        GetAffection__C6Animal(arg0->unk34);
        temp_r0 = func_08020018();
        temp_r2 = (s16) (((arg1->unk2 & 0x3FF) << 6) | ((u8) arg1->unk1 >> 2)) - arg0->unkA;
        temp_r1 = (s16) (((arg1->unk4 & 0x3FF) << 6) | ((u8) arg1->unk3 >> 2)) - arg0->unkE;
        if ((s32) ((temp_r2 * temp_r2) + (temp_r1 * temp_r1)) <= (s32) (temp_r0 * temp_r0)) {
            sp0 = (s32) (u16) (((u32) (GetAffection__C6Animal(arg0->unk34) * 0x3C0) >> 8) + 0x1E0);
            method_0809BC30__5HorsePC18UnkBarnAnimal2C_x2(arg0->unk34, &sp0);
            if (arg0->unk3D == 0) {
                func_08022048(arg0, func_080220D4(arg0), arg0->unk20);
            }
            SetHasTalkedToday__3Pet(arg0->unk34);
        }
    }
}
