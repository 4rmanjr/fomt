# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080773E8/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080773E8/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080773E8/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080773E8/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080773E8/opencode/func.c" 2
s32 func_080084DC(void *, s32 *);
s32 func_08008B54(void *, s32);
s32 func_0804E7A0(s32, void *, s32);
extern s32 gUnk_080FC4B4;
extern s32 vtable_unk_080E7B98;

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    void *unk4;
    u8 _pad8[1804];
    s32 unk714;
    s32 unk716;
    s32 unk718;
    s32 unk71C;
    s32 unk720;
    s32 unk724;
    s32 unk728;
    s32 unk72A;
    s32 unk72C;
} GenObj;
void *func_080773E8(GenObj *arg0) {
s32 sp0;
    s32 sp4;

    sp0 = 0x1E;
    sp0.unk2 = 1;
    func_080084DC(arg0, &sp0);
    arg0->unk4 = &vtable_unk_080E7B98;
    func_08008B54(arg0 + 8, 0);
    func_08008B54(arg0 + 0xC, 1);
    sp4 = 0x1C;
    sp4.unk2 = 2;
    func_0804E7A0(sp4, arg0 + 0x14, 0);
    arg0->unk714 = 0x100;
    arg0->unk716 = 0;
    arg0->unk718 = 0;
    arg0->unk71C = 0;
    arg0->unk720 = 0;
    arg0->unk724 = 0;
    arg0->unk728 = 1;
    arg0->unk72A = 0;
    arg0->unk72C = &gUnk_080FC4B4;
    return arg0;
}
