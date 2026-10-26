# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804F69C/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804F69C/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804F69C/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804F69C/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0804F69C/opencode/func.c" 2
s32 __builtin_delete(void *);
s32 func_08007184(void *, s32);
s32 func_080073E0(void *, s32);
s32 func_080079E8(void *, s32);
s32 func_08007C28(void *, s32);
s32 func_080098AC(void *, s32);
s32 func_080098DC(void *, s32);
s32 func_080ADC84(void *, s32);
s32 func_080E105C(void *, s32);
extern s32 vtable_unk_080E5A28;

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    u8 _pad8[52];
    s32 unk3C;
    u8 _pad40[288];
    void *unk160;
    u8 _pad164[44];
    void *unk190;
    u8 _pad194[880];
    void *unk504;
} GenObj;
void func_0804F69C(GenObj *arg0, s32 arg1) {
    void *temp_r1;
    GenObj *temp_r4;
    GenObj *temp_r4_2;
    GenObj *temp_r4_3;
    GenObj *temp_r4_4;
    void *temp_r4_5;
    void *var_r0;

    temp_r4 = (GenObj *)((u8 *)arg0 + 0x548);
    func_080073E0(temp_r4, temp_r4->unk4);
    func_08007184(temp_r4, 2);
    arg0->unk504 = &vtable_unk_080E5A28;
    temp_r4_2 = (GenObj *)((u8 *)arg0 + 0x1E8);
    func_080073E0(temp_r4_2, temp_r4_2->unk4);
    func_08007184(temp_r4_2, 2);
    func_080ADC84((GenObj *)((u8 *)arg0 + 0x1E4), 2);
    temp_r4_3 = (GenObj *)((u8 *)arg0 + 0x1D4);
    func_08007C28(temp_r4_3, temp_r4_3->unk4);
    func_080079E8(temp_r4_3, 2);
    arg0->unk190 = &vtable_unk_080E5A28;
    arg0->unk160 = &vtable_unk_080E5A28;
    func_080098AC((GenObj *)((u8 *)arg0 + 0x148), 2);
    func_080098AC((GenObj *)((u8 *)arg0 + 0x130), 2);
    func_080098AC((GenObj *)((u8 *)arg0 + 0x120), 2);
    func_080E105C((GenObj *)((u8 *)arg0 + 0xD0), 2);
    func_080098AC((GenObj *)((u8 *)arg0 + 0xC0), 2);
    temp_r1 = (GenObj *)((u8 *)arg0 + 0x3C) + ((arg0->unk3C * 0x10) + 4);
    var_r0 = (GenObj *)((u8 *)arg0 + 0x40);
    if (var_r0 != temp_r1) {
        do {
            var_r0 += 0x10;
        } while (var_r0 != temp_r1);
    }
    func_080098DC((GenObj *)((u8 *)arg0 + 0x20), 2);
    temp_r4_4 = (GenObj *)((u8 *)arg0 + 0x18);
    func_08007C28(temp_r4_4, temp_r4_4->unk4);
    func_080079E8(temp_r4_4, 2);
    temp_r4_5 = temp_r4_4 - 8;
    func_080073E0(temp_r4_5, temp_r4_5->unk4);
    func_08007184(temp_r4_5, 2);
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
