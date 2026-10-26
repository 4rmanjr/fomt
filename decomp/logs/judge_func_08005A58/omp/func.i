# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08005A58/omp/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08005A58/omp/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08005A58/omp/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08005A58/omp/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08005A58/omp/func.c" 2
s32 __builtin_new(s32);
s32 func_0800770C(s32 *);
s32 func_08007714(s32 *, s32);
s32 func_0800835C(s32 *);
s32 func_08008364(s32 *, s32);
s32 func_08008444();
s32 func_08008B54(void *, s32);
s32 func_08050CC0(s32, s32, s32, s32, s32, s32 *, s32 *);
extern s32 gUnk_080E8BE4;
extern s32 vtable_unk_080E5AB4;

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    u8 _pad10[17896];
    s32 unk45F8;
    s32 unk45FC;
    u8 _pad4600[28];
    s32 unk461C;
} GenObj;
void *func_08005A58(GenObj *arg0, s32 arg1, u8 *arg2) {
s32 spC;
s32 sp10;
    s32 temp_r4;
    s32 var_r0;
    s32 var_r3;
    u8 *var_r2;
    GenObj *temp_r2;

    func_08008444();
    arg0->unk4 = &vtable_unk_080E5AB4;
    var_r0 = 7;
    do {
        var_r0 -= 1;
    } while (var_r0 != -1);
    func_08008B54((GenObj *)((u8 *)arg0 + 0x45F0), 1);
    func_08008B54((GenObj *)((u8 *)arg0 + 0x45F4), 2);
    temp_r4 = __builtin_new(4);
    func_0800835C(&spC);
    func_0800770C(&sp10);
    arg0->unk45F8 = func_08050CC0(temp_r4, 0, 0xF, 4, 0, &spC, &sp10);
    func_08007714(&sp10, 2);
    func_08008364(&spC, 2);
    arg0->unk45FC = arg1;
    temp_r2 = (GenObj *)((u8 *)arg0 + 0x461C);
    arg0->unk461C = (s32) gUnk_080E8BE4.unk0;
    temp_r2->unk4 = (s32) gUnk_080E8BE4.unk4;
    temp_r2->unk8 = (s32) gUnk_080E8BE4.unk8;
    temp_r2->unkC = (u8) gUnk_080E8BE4.unkC;
    if (arg2 != 0) {
        var_r3 = 0;
        if (*arg2 != 0) {
            var_r2 = arg2;
loop_5:
            *((u8 *)temp_r2 + var_r3) = *var_r2;
            var_r2 += 1;
            var_r3 += 1;
            if (var_r3 <= 0xC) {
                if (*var_r2 != 0) {
                    goto loop_5;
                }
            }
        }
    }
    return arg0;
}
