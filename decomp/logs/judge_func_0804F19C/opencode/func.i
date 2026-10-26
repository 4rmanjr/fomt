# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804F19C/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804F19C/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804F19C/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804F19C/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804F19C/opencode/func.c" 2
s32 CpuFastSet(s32 *, s32, s32);
s32 func_08051320(s32, s32, s32, s32, s32, u32, u32);
s32 func_0805E6CC(s32 **, s32 *);
s32 func_0805E790(s32 *, s32 **, s32);
extern s32 *gUnk_080F9F78;
extern s32 gUnk_08728208;
extern s32 vtable_unk_080E5A28;

typedef struct GenObj {
    u8 _pad0[12];
    s32 unkC;
    s32 unkE;
} GenObj;
s32 func_0804F19C(GenObj *arg0) {
    s32 spC;
s32 sp10;
    s32 *sp30;
    s32 temp_r2;

    temp_r2 = ((((u32) (arg0->unkC << 0x11) >> 0x16) + 3) & 0x3FF) | (((u32) ((s32) arg0->unkC << 0xD) >> 0x1C) << 0xC);
    spC = temp_r2 | (temp_r2 << 0x10);
    CpuFastSet(&spC, (u16) ((u8) arg0->unkC << 0xB) + 0x06000000, 0x010000A0);
    func_08051320((u16) ((u8) arg0->unkC << 0xB) + 0x06000000, 0x10, 0, 0xE, 3, (u32) (arg0->unkC << 0x11) >> 0x16, (u32) ((s32) arg0->unkC << 0xD) >> 0x1C);
    func_08051320((u16) ((u8) arg0->unkC << 0xB) + 0x06000000, 0, 3, 0x1E, 7, (u32) (arg0->unkC << 0x11) >> 0x16, (u32) ((s32) arg0->unkC << 0xD) >> 0x1C);
    CpuFastSet(gUnk_080F9F78, (((u32) ((s32) arg0->unkC << 0xD) >> 0x1C) << 5) + 0x05000000, 8);
    func_0805E6CC(&sp30, &gUnk_08728208);
    func_0805E790(&sp10, &sp30, 0);
    CpuFastSet(sp20, (((u32) (arg0->unkE << 0x19) >> 0x1C) << 5) + 0x05000200, 8);
    sp30 = &vtable_unk_080E5A28;
    return 0;
}
