# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805ED4C/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805ED4C/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805ED4C/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805ED4C/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805ED4C/opencode/func.c" 2
s32 __builtin_new(s32);
s32 func_0800770C(s32 *);
s32 func_08007714(s32 *, s32);
s32 func_0800835C(s32 *);
s32 func_08008364(s32 *, s32);
s32 func_080084DC(void *);
s32 func_08008B54(void *, s32);
s32 func_0800E4E0(s32);
s32 func_08050CC0(s32, s32, s32, s32, s32, s32 *, s32 *);
s32 func_08050E98(s32, s32);
extern s32 vtable_unk_080E79DC;
extern s32 vtable_unk_080E79E8;

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    void *unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    u8 _pad14[25612];
    s32 unk6420;
    s32 unk6422;
    s32 unk6424;
    s32 unk6426;
    void *unk6428;
    s32 unk642C;
} GenObj;
void *func_0805ED4C(GenObj *arg0, s32 arg1) {
s32 spC;
s32 sp10;
s32 sp14;
    s32 temp_r6;

    sp14 = 0x1E;
    sp14.unk2 = 1;
    func_080084DC(arg0);
    arg0->unk4 = &vtable_unk_080E79DC;
    arg0->unk8 = arg1;
    arg0->unkC = 0;
    temp_r6 = __builtin_new(4);
    func_0800835C(&spC);
    func_0800770C(&sp10);
    arg0->unk10 = func_08050CC0(temp_r6, 0, 0x1F, 0xF, arg0->unkC, &spC, &sp10);
    func_08007714(&sp10, 2);
    func_08008364(&spC, 2);
    func_08008B54(arg0 + 0x14, 1);
    func_08008B54(arg0 + 0x18, 0);
    func_08008B54(arg0 + 0x1C, 2);
    arg0->unk6428 = &vtable_unk_080E79E8;
    (arg0 + 0x6428)->unk4 = 0;
    func_08050E98(arg0->unk10, 0xB);
    arg0->unk6420 = 0;
    arg0->unk6422 = 0;
    arg0->unk6426 = 2;
    arg0->unk6424 = 0;
    arg0->unk642C = func_0800E4E0(arg0->unk8 + 0x1BD8);
    return arg0;
}
