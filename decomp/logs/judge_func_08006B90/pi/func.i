# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08006B90/pi/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08006B90/pi/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08006B90/pi/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08006B90/pi/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08006B90/pi/func.c" 2
extern s32 gUnk_080E89B6;

typedef struct GenObj {
    u8 _pad0[17920];
    s32 unk4600;
    s32 unk4604;
    s32 unk4605;
    u8 _pad4609[7];
    s32 unk4610;
} GenObj;
void func_08006B90(GenObj *arg0) {
    u8 sp0;
    u8 *temp_r3;
    u8 temp_r1;
    u8 temp_r4;
    u8 var_r0;

    temp_r1 = *((arg0->unk4604 * 2) + (arg0->unk4605 * 0x1F) + (arg0->unk4600 * 0xBA) + &gUnk_080E89B6);
    sp0 = temp_r1;
    temp_r4 = arg0->unk4610;
    temp_r3 = arg0 + 0x461C + temp_r4;
    if (*temp_r3 == temp_r1) {
        var_r0 = temp_r4 + 1;
    } else {
        *temp_r3 = temp_r1;
        var_r0 = arg0->unk4610 + 1;
    }
    arg0->unk4610 = var_r0;
    if ((u32) arg0->unk4610 > 0xBU) {
        arg0->unk4604 = 0xC;
        arg0->unk4605 = 6;
        arg0->unk4610 = 0xBU;
    }
}
