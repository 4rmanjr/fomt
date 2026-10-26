# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801004C/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801004C/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801004C/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801004C/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801004C/opencode/func.c" 2
s32 __builtin_new(s32);
s32 func_0800082C(void ***);
s32 func_08008980(s32 *);
s32 func_08008A68(s32 *, s32);
void **func_08011DC4(s32, s32, void ***);

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[860];
    s32 unk364;
} GenObj;
s32 *func_0801004C(s32 *arg0, GenObj *arg1) {
s32 sp0;
    void **sp4;
    void **sp8;
    void ***sp14;
    void **temp_r0;
    void **temp_r0_2;

    func_08008980(&sp0);
    sp4 = 0;
    if (arg1->unk364 != 0) {
        sp8 = 0;
    } else {
        sp8 = (void **)1;
    }
    temp_r0 = func_08011DC4(__builtin_new(8), arg1->unk4, &sp8);
    if ((temp_r0 != sp4) && (sp4 != 0)) {
        (*sp4)->unk8(sp4, 3);
    }
    sp4 = temp_r0;
    temp_r0_2 = sp4;
    sp4 = 0;
    sp8 = temp_r0_2;
    func_0800082C(&sp8);
    sp8 = 0;
    sp14 = &sp8;
    sp14.unk4 = 0;
    sp8 = 0;
    *arg0 = 0;
    if (sp8 != 0) {
        (*sp8)->unk8(sp8, 3);
    }
    if (sp4 != 0) {
        (*sp4)->unk8(sp4, 3);
    }
    func_08008A68(&sp0, 2);
    return arg0;
}
