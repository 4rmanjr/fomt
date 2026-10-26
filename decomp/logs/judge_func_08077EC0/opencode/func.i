# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08077EC0/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08077EC0/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08077EC0/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08077EC0/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08077EC0/opencode/func.c" 2
s32 Unpack(s32 *, s32);
s32 func_08008E64(s32 *, s32, s32);
s32 func_0800E324(s32);
s32 func_08010E48(s32);
s32 func_08010E50(s32);
s32 func_08010E58(s32);
s32 func_08077E34(void *, s32, s32 *);
s32 func_08077E64(void *, s32, s32, s32, s32 *, s32, s32 *);
extern s32 gUnk_08755230;
extern s32 gUnk_0875553C;
extern s32 gUnk_08755848;
extern s32 gUnk_08757AE0;
extern s32 gUnk_08757BA0;
extern s32 gUnk_08757BAC;
extern s32 gUnk_08757BCC;
extern s32 gUnk_08757BD8;
extern s32 gUnk_08757BF8;
extern s32 gUnk_08757C0C;
extern s32 gUnk_08757C14;
extern s32 gUnk_08757F20;
extern s32 gUnk_0875822C;
extern s32 gUnk_0875A358;
extern s32 gUnk_0875A418;
extern s32 gUnk_0875A424;
extern s32 gUnk_0875A438;

typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
} GenObj;
void func_08077EC0(GenObj *arg0) {
    s32 *var_r0_2;
    s32 *var_r0_3;
    s32 *var_r0_4;
    s32 *var_r0_5;
    s32 *var_r0_6;
    s32 *var_r2;
    s32 *var_r2_2;
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_0800E324(arg0->unk8 + 0x10);
    var_r0 = 0;
    if (temp_r0 == 3) {
        var_r0 = 1;
    }
    var_r0_2 = &gUnk_08755848;
    if (var_r0 != 0) {
        var_r0_2 = &gUnk_0875822C;
    }
    Unpack(var_r0_2, 0x06000000);
    var_r0_3 = &gUnk_08757AE0;
    if (var_r0 != 0) {
        var_r0_3 = &gUnk_0875A358;
    }
    func_08008E64(var_r0_3, 0x05000020, 0xC0);
    var_r2 = &gUnk_08755230;
    if (var_r0 != 0) {
        var_r2 = &gUnk_08757C14;
    }
    func_08077E34(arg0, 0x1E, var_r2);
    var_r2_2 = &gUnk_0875553C;
    if (var_r0 != 0) {
        var_r2_2 = &gUnk_08757F20;
    }
    func_08077E34(arg0, 0x1D, var_r2_2);
    if (temp_r0 == 0) {
        func_08077E64(arg0, 0x1E, 0xA, 0xA, (s32 *)5, 3, &gUnk_08757BD8);
    } else if (temp_r0 == 2) {
        func_08077E64(arg0, 0x1E, 0xA, 0xA, (s32 *)5, 3, &gUnk_08757BAC);
    }
    if (temp_r0 == 1) {
        func_08077E64(arg0, 0x1D, 0x18, 7, (s32 *)3, 2, &gUnk_08757BCC);
    }
    if ((func_08010E48(arg0->unk8) << 0x18) != 0) {
        if (var_r0 != 0) {
            var_r0_4 = &gUnk_0875A418;
        } else {
            var_r0_4 = &gUnk_08757BA0;
        }
        func_08077E64(arg0, 0x1D, 0, 5, var_r0_4);
    }
    if ((func_08010E50(arg0->unk8) << 0x18) != 0) {
        if (var_r0 != 0) {
            var_r0_5 = &gUnk_0875A438;
        } else {
            var_r0_5 = &gUnk_08757C0C;
        }
        func_08077E64(arg0, 0x1D, 0xE, 5, var_r0_5);
    }
    if ((func_08010E58(arg0->unk8) << 0x18) != 0) {
        if (var_r0 != 0) {
            var_r0_6 = &gUnk_0875A424;
        } else {
            var_r0_6 = &gUnk_08757BF8;
        }
        func_08077E64(arg0, 0x1D, 0x1B, 6, var_r0_6);
    }
}
