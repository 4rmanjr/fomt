# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803B0A8/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803B0A8/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803B0A8/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803B0A8/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803B0A8/opencode/func.c" 2
s32 __builtin_delete(void *);
s32 func_080079E8(void *, s32);
s32 func_08007C28(void *, s32);

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    u8 _pad8[204];
    s32 unkD4;
    u8 _padD8[16];
    s32 unkE8;
} GenObj;
void func_0803B0A8(GenObj *arg0, s32 arg1) {
    void **temp_r0;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r4;
    void *temp_r6;
    void *var_r0;
    void *var_r5;

    temp_r0 = arg0->unk0;
    (*temp_r0)->unk4C(temp_r0, arg0->unkD4);
    temp_r2 = arg0 + 0xE8 + ((arg0->unkE8 * 0x1C) + 4);
    var_r0 = arg0 + 0xEC;
    if (var_r0 != temp_r2) {
        do {
            var_r0 += 0x1C;
        } while (var_r0 != temp_r2);
    }
    temp_r2_2 = arg0 + 4;
    temp_r6 = temp_r2_2 + ((arg0->unk4 * 0x28) + 4);
    var_r5 = temp_r2_2 + 4;
    if (var_r5 != temp_r6) {
        do {
            temp_r4 = var_r5 + 0x20;
            func_08007C28(temp_r4, temp_r4->unk4);
            func_080079E8(temp_r4, 2);
            var_r5 += 0x28;
        } while (var_r5 != temp_r6);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
