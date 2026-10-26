# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08050478/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08050478/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08050478/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08050478/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08050478/opencode/func.c" 2
s32 func_0804F0E0(void *);
s32 func_080503E4(void *);
s8 func_080507D0(u32, s32);
s32 func_080507F8(void *, s8 *, s32 *, s32);
s32 func_0805E850(void *, void *, s32);
u32 strlen(s32 *);
extern s32 gUnk_080F9F3C;

typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
    u8 _padC[332];
    s32 unk158;
    s32 unk15C;
} GenObj;
void func_08050478(GenObj *arg0, s32 *arg1, s32 *arg2, s32 arg3, s32 *arg4, s32 *arg5, s32 *arg6, s32 arg7) {
    s8 sp0;
    s8 sp4;
    s32 *sp8;
    s32 *spC;
    s32 *var_r7;
    s32 *var_r8;
    s32 *var_sl;
    s32 temp_r0;
    s32 var_sb;
    u32 var_r5;
    u32 var_r6;

    sp8 = arg1;
    spC = arg2;
    var_sb = arg3;
    var_sl = arg4;
    var_r8 = arg5;
    var_r7 = arg6;
    temp_r0 = arg0->unk8;
    if (temp_r0 >= 0) {
        if (temp_r0 <= 2) {
            func_080503E4(arg0);
        } else if (temp_r0 <= 6) {
            func_0804F0E0(arg0 + 0xD0);
        }
    }
    var_r5 = 4;
    var_r6 = 0xC;
    if (var_r7 == 0) {
        var_r5 = 3;
        if (var_r8 == 0) {
            var_r5 = 2;
            if (var_sl == 0) {
                var_r6 = 0x1A;
                var_r5 = (u32) ((0 - var_sb) | var_sb) >> 0x1F;
            }
        }
    }
    switch (var_r5) {
    default:
        var_r5 = 0;

    case 4:
        if ((var_r7 == 0) || (strlen(var_r7) > var_r6)) {
            var_r7 = &gUnk_080F9F3C;
        }

    case 3:
        if ((var_r8 == 0) || (strlen(var_r8) > var_r6)) {
            var_r8 = &gUnk_080F9F3C;
        }

    case 2:
        if ((var_sl == 0) || (strlen(var_sl) > var_r6)) {
            var_sl = &gUnk_080F9F3C;
        }

    case 1:
        if ((var_sb == 0) || (strlen() > var_r6)) {
            var_sb = (s32) &gUnk_080F9F3C;
        }
        break;
    }
    if ((spC == 0) || (strlen(spC) > var_r6)) {
        spC = &gUnk_080F9F3C;
    }
    if ((sp8 == 0) || (strlen(sp8) > var_r6)) {
        sp8 = &gUnk_080F9F3C;
    }
    switch (var_r5) {
    case 4:
        sp0 = func_080507D0(var_r5, 6);
        func_080507F8(arg0, &sp0, var_r7, arg7);

    case 3:
        sp0.unk1 = func_080507D0(var_r5, 5);
        func_080507F8(arg0, &sp0 + 1, var_r8, arg7);

    case 2:
        sp0.unk2 = func_080507D0(var_r5, 4);
        func_080507F8(arg0, &sp0 + 2, var_sl, arg7);

    case 1:
        sp0.unk3 = func_080507D0(var_r5, 3);
        func_080507F8(arg0, &sp0 + 3, (s32 *) var_sb, arg7);

        sp4 = func_080507D0(var_r5, 2);
        func_080507F8(arg0, &sp4, spC, arg7);
        sp0.unk5 = func_080507D0(var_r5, 1);
        func_080507F8(arg0, &sp0 + 5, sp8, arg7);
        break;
    default:
        var_r5 = 0;
        break;
    }
    arg0->unk15C = var_r5;
    arg0->unk158 = 1;
    arg0->unk8 = 6;
    func_0805E850(arg0 + 0x1C0, arg0 + 0x160, 0);
}
