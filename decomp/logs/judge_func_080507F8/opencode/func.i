# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080507F8/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080507F8/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080507F8/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080507F8/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080507F8/opencode/func.c" 2
s32 func_080ADD5C(s32, s32, s32);
s32 func_080ADD78(s32, void *, s32 **);
extern s32 vtable_unk_080E78F0;

typedef struct GenObj {
    u8 _pad0[20];
    s32 unk14;
    s32 unk16;
    s32 unk19;
} GenObj;
void func_080507F8(s32 arg0, u8 *arg1, s32 arg2, ? arg3) {
    s32 *sp0;
    s32 temp_r0_2;
    s32 temp_r4;
    u32 var_r0;
    u32 var_r0_2;
    u8 temp_r0;
    void *temp_r5;

    temp_r0 = *arg1;
    temp_r5 = arg0 + 0xD0;
    var_r0 = (u32) (temp_r0 << 0x1E) >> 0x1E;
    if (var_r0 > 2U) {
        var_r0 = var_r0 % 3U;
    }
    temp_r5->unk16 = (s16) var_r0;
    var_r0_2 = (u32) (temp_r0 << 0x19) >> 0x1B;
    if (var_r0_2 > 0x1BU) {
        var_r0_2 = var_r0_2 % 28U;
    }
    temp_r5->unk14 = (s16) var_r0_2;
    temp_r5->unk19 = 0;
    temp_r4 = arg0 + 0xEC;
    func_080ADD5C(temp_r4, arg2, arg3);
    do {
        sp0 = &vtable_unk_080E78F0;
        temp_r0_2 = func_080ADD78(temp_r4, temp_r5, &sp0);
        sp0 = &vtable_unk_080E78F0;
    } while (temp_r0_2 == 1);
}
