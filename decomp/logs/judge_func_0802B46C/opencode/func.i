# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802B46C/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802B46C/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802B46C/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802B46C/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802B46C/opencode/func.c" 2
s32 func_0805E860(void *, s32);

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk2;
    u8 _pad6[4];
    struct GenObj *unkA;
    struct GenObj *unkE;
    u8 _pad12[14];
    struct GenObj *unk20;
    u8 _pad24[28];
    struct GenObj *unk40;
    struct GenObj *unk44;
    u8 _pad48[568];
    s32 unk280;
} GenObj;
void func_0802B46C(GenObj *arg0) {
    s32 sp0;
    s32 temp_r5;
    s32 var_r1;
    s32 var_r3;
    u32 temp_r0_2;
    u32 var_r1_2;
    u8 temp_r6;
    u8 temp_r7;
    void *temp_r0;
    GenObj *temp_r1;
    GenObj *temp_r4;

    temp_r1 = arg0->unk0;
    temp_r7 = arg0->unk280;
    temp_r6 = temp_r1->unk20;
    temp_r5 = temp_r7 & 1;
    temp_r4 = (GenObj *)((u8 *)arg0 + 0xCC) + ((temp_r7 * 0x48) + 4);
    temp_r4->unk0 = 1;
    sp0 = (s16) temp_r1->unkA;
    sp0.unk2 = (s16) temp_r1->unkE;
    temp_r4->unk44 = sp0;
    switch (temp_r6) {
    default:
        var_r1 = temp_r5 + 0x650;
        break;
    case 1:
        var_r3 = 0x652;
block_8:
        var_r1 = temp_r5 + var_r3;
        break;
    case 2:
        var_r1 = temp_r5 + 0x654;
        break;
    case 3:
        var_r3 = 0x656;
        goto block_8;
    }
    func_0805E860((GenObj *)((u8 *)temp_r4 + 0x2C), var_r1);
    temp_r0 = (GenObj *)((u8 *)temp_r4 + 0x40);
    temp_r4->unk40 = 1;
    temp_r0->unk2 = 0;
    (temp_r0 + 2)->unk1 = 1;
    temp_r0_2 = temp_r7 + 1;
    var_r1_2 = 0;
    if (temp_r0_2 <= 5U) {
        var_r1_2 = temp_r0_2;
    }
    arg0->unk280 = (u8) var_r1_2;
}
