# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038398/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038398/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038398/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038398/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038398/opencode/func.c" 2
s32 func_0805E860(s32);

typedef struct GenObj {
    u8 _pad0[16];
    s32 unk10;
    u8 _pad14[20];
    s32 unk28;
    u8 _pad2C[24];
    struct GenObj *unk44;
} GenObj;
void func_08038398(GenObj *arg0, s32 arg1, s32 arg2) {
    s32 var_r3;
    u16 temp_r1;
    void *temp_r0;
    GenObj *temp_r4;

    var_r3 = 0x15;
    if ((u32) (arg1 + 0xFFFFFCC8) > 0x3DU) {

    } else {
        switch (arg1) {
        case -4294966468:
            var_r3 = 0x19;
            break;
        case -4294966464:
            var_r3 = 0x1D;
            break;
        case -4294966460:
            var_r3 = 0x21;
            break;
        case -4294966456:
            var_r3 = 0x25;
            break;
        case -4294966452:
            var_r3 = 0x29;
            break;
        case -4294966411:
            var_r3 = 0x2D;
            break;
        }
    }
    temp_r1 = var_r3 + arg2;
    if (temp_r1 != arg0->unk28) {
        temp_r4 = arg0->unk10;
        if (temp_r4 != 0) {
            func_0805E860((GenObj *)((u8 *)temp_r4 + 0x30));
            temp_r0 = (GenObj *)((u8 *)temp_r4 + 0x44);
            temp_r4->unk44 = 1;
            temp_r0->unk2 = 0;
            (temp_r0 + 2)->unk1 = 1;
        }
        arg0->unk28 = temp_r1;
    }
}
