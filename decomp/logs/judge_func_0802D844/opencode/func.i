# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802D844/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802D844/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802D844/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802D844/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802D844/opencode/func.c" 2
s32 SetAnimFacing__12AActorEntityUi(void *, s32);
s32 func_080323C8(void *);

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[24];
    s32 unk20;
    u8 _pad24[24];
    s32 unk3C;
    u8 _pad40[131];
    s32 unkC3;
} GenObj;
void func_0802D844(GenObj *arg0, GenObj *arg1) {
    u16 var_r5;

    var_r5 = 0;
    if (arg1 != 0) {
        var_r5 = arg1->unk4;
    }
    if ((arg0->unkC3 != 0) || (0x3F3 & var_r5)) {
        func_080323C8(arg0);
        arg0->unk3C = 0x18;
        if (0x20 & var_r5) {
            if (arg0->unk20 != 2) {
                SetAnimFacing__12AActorEntityUi(arg0, 2);
            }
        } else if (0x10 & var_r5) {
            if (arg0->unk20 != 3) {
                SetAnimFacing__12AActorEntityUi(arg0, 3);
            }
        } else if (0x40 & var_r5) {
            if (arg0->unk20 != 1) {
                SetAnimFacing__12AActorEntityUi(arg0, 1);
            }
        } else if ((var_r5 & 0x80) && (arg0->unk20 != 0)) {
            SetAnimFacing__12AActorEntityUi(arg0, 0);
        }
    }
}
