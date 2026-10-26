# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08037008/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08037008/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08037008/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08037008/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08037008/opencode/func.c" 2
s32 __12AActorEntityP10GameObjectRC13ActorLocationUiUi(void *, s32, s32, s32, s32);
extern s32 vtable_unk_080E7328;

typedef struct GenObj {
    u8 _pad0[2];
    struct GenObj *unk2;
    struct GenObj *unk4;
    struct GenObj *unk6;
    u8 _padA[2];
    struct GenObj *unkC;
    u8 _pad10[4];
    void *unk14;
    u8 _pad18[24];
    s32 unk30;
    s32 unk34;
    u8 _pad38[4];
    s32 unk3C;
    s32 unk3E;
} GenObj;
void *func_08037008(GenObj *arg0, ? arg1, s32 arg2, s32 arg3, s32 arg4) {
    GenObj *temp_r1;

    __12AActorEntityP10GameObjectRC13ActorLocationUiUi(arg0, arg1, arg2, 2, arg3);
    arg0->unk14 = &vtable_unk_080E7328;
    arg0->unk30 = arg2;
    temp_r1 = (GenObj *)((u8 *)arg0 + 0x34);
    arg0->unk34 = 0;
    temp_r1->unk2 = 0;
    temp_r1->unk4 = 0;
    temp_r1->unk6 = 0;
    arg0->unk3C = (s16) arg4;
    arg0->unk3E = 0;
    temp_r1->unkC = 1;
    return arg0;
}
