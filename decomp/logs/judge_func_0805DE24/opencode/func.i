# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805DE24/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805DE24/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805DE24/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805DE24/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805DE24/opencode/func.c" 2
s32 func_0805DEC0(void *, s32, s32, s32, s32, s32, s32);
s32 func_0805DF68(void *, s32, s32, s32, s32);
extern s32 gUnk_080FB000;

typedef struct GenObj {
    u8 _pad0[332];
    s32 unk14C;
    u8 _pad150[382];
    s32 unk2CE;
    u8 _pad2D2[2046];
    s32 unkAD0;
} GenObj;
void func_0805DE24(GenObj *arg0) {
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r6;

    arg0->unk2CE = 0;
    var_r4 = 0;
    do {
        func_0805DEC0(arg0, 0x90, (var_r4 * 0x10) - (arg0->unk14C - 0x20), 3, (s32) ((*((u8 *)arg0 + 0xAE0 + var_r4) * 0x14) + &gUnk_080FB000)->unk10, 4, 0xA);
        var_r4 += 1;
    } while (var_r4 <= 9);
    var_r4_2 = 0;
    var_r6 = 8;
    do {
        func_0805DF68(arg0, var_r6, 4, var_r4_2 + 0xD, 1);
        var_r6 += 8;
        var_r4_2 += 1;
    } while (var_r4_2 <= 0xA);
    func_0805DEC0(arg0, 0x88, 4, 1, arg0->unkAD0, 5, 0xA);
}
