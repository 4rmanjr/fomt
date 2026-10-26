# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038028/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038028/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038028/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038028/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038028/opencode/func.c" 2
s32 __7AEntityP10GameObjectRC8Location();
s32 func_08020460(void *);
s32 func_08038374(void *, s32, s32, u16, s32);
extern s32 vtable_unk_080E73B4;

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    s32 unk8;
    s32 unkC;
    u8 _pad10[4];
    void *unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk22;
    s32 unk25;
    s32 unk28;
} GenObj;
void *func_08038028(GenObj *arg0, void **arg1, s32 arg2) {
    void *temp_r0;

    __7AEntityP10GameObjectRC8Location();
    arg0->unk14 = &vtable_unk_080E73B4;
    arg0->unk18 = arg2;
    arg0->unk1C = 0;
    arg0->unk25 = 0;
    (arg0 + 0x25)->unk1 = 0;
    arg0->unk28 = 0x31;
    temp_r0 = (*arg1)->unk40(arg1, 0x2B);
    if ((temp_r0 != 0) && (temp_r0->unk4 == arg0->unk4) && ((func_08020460(temp_r0) << 0x18) != 0)) {
        func_08038374(arg0, temp_r0->unk8, temp_r0->unkC, temp_r0->unk22, (s32) temp_r0->unk20);
    }
    return arg0;
}
