# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803D7E4/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803D7E4/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803D7E4/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803D7E4/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
typedef struct { u8 pad[0x24]; u8 v; } S_AD0;
typedef struct { u8 pad[0x25]; u8 v; } S_AD8;
typedef struct { u8 pad[0x26]; u8 v; } S_AE0;
typedef struct { u8 pad[0x14]; u8 v; } S_CD8;
typedef struct { u8 pad[3]; u8 v; } S_39C;
typedef struct { u8 pad[0x58]; u8 v; } S_601C;
typedef struct { u8 pad[0x14]; u8 v; } S_B68;
typedef struct { u8 pad[0x26]; u8 v; } S_AEC;
typedef struct { u8 pad[0xB30]; u8 v; } S_44E0;
typedef struct { u8 pad[0x92C]; u8 v; } S_4D8;
typedef struct {
    s32 unk0;
    s32 unk4;
    void (*unk8)(void *, s32);
} Vtbl;
typedef struct {
    Vtbl *vtbl;
} Obj;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803D7E4/opencode/func.c" 2
s32 func_0803D688(s32, s32 *, s32);
s32 func_080A0A04(s32);
extern s32 ScheduleInfo_Unk_080F1A80;
extern s32 gUnk_080F1FC0;
extern s32 gUnk_080F280C;
extern s32 gUnk_080F29C0;
extern s32 gUnk_080F2AF8;
extern s32 gUnk_080F2DC0;
extern s32 gUnk_080F3010;
extern s32 gUnk_080F33B8;
extern s32 gUnk_080F3408;
extern s32 gUnk_080F35E4;
extern s32 gUnk_080F3FD8;
extern s32 gUnk_080F42F0;
extern s32 gUnk_080F43DC;
extern s32 gUnk_080F4974;
extern s32 gUnk_080F49C0;
extern s32 gUnk_080F4D74;
extern s32 gUnk_080F5540;
extern s32 gUnk_080F597C;
extern s32 gUnk_080F59CC;
extern s32 gUnk_080F5D94;
extern s32 gUnk_080F61FC;
extern s32 gUnk_080F6370;
extern s32 gUnk_080F66C4;
extern s32 gUnk_080F6B10;
extern s32 gUnk_080F6B4C;
extern s32 gUnk_080F6DE8;
extern s32 gUnk_080F6FF8;
extern s32 gUnk_080F7294;
extern s32 gUnk_080F77FC;
extern s32 gUnk_080F7B40;
extern s32 gUnk_080F81BC;
extern s32 gUnk_080F8678;

void func_0803D7E4(s32 arg0, s32 arg1) {
    s32 temp_r0;

    func_0803D688(arg0 + 0x70, &gUnk_080F280C, arg1);
    func_0803D688(arg0 + 0x84, &ScheduleInfo_Unk_080F1A80, arg1);
    func_0803D688(arg0 + 0x98, &gUnk_080F1FC0, arg1);
    func_0803D688(arg0 + 0xB0, &gUnk_080F8678, arg1);
    func_0803D688(arg0 + 0xC4, &gUnk_080F81BC, arg1);
    func_0803D688(arg0 + 0xD8, &gUnk_080F77FC, arg1);
    func_0803D688(arg0 + 0xF0, &gUnk_080F7294, arg1);
    func_0803D688(arg0 + 0x104, &gUnk_080F6370, arg1);
    func_0803D688(arg0 + 0x118, &gUnk_080F66C4, arg1);
    func_0803D688(arg0 + 0x12C, &gUnk_080F49C0, arg1);
    func_0803D688(arg0 + 0x140, &gUnk_080F5540, arg1);
    func_0803D688(arg0 + 0x154, &gUnk_080F4D74, arg1);
    func_0803D688(arg0 + 0x16C, &gUnk_080F59CC, arg1);
    func_0803D688(arg0 + 0x180, &gUnk_080F6B4C, arg1);
    func_0803D688(arg0 + 0x194, &gUnk_080F33B8, arg1);
    func_0803D688(arg0 + 0x1A8, &gUnk_080F61FC, arg1);
    func_0803D688(arg0 + 0x1BC, &gUnk_080F3408, arg1);
    func_0803D688(arg0 + 0x1D0, &gUnk_080F3FD8, arg1);
    func_0803D688(arg0 + 0x1E4, &gUnk_080F35E4, arg1);
    func_0803D688(arg0 + 0x1FC, &gUnk_080F3010, arg1);
    func_0803D688(arg0 + 0x210, &gUnk_080F5D94, arg1);
    func_0803D688(arg0 + 0x228, &gUnk_080F6DE8, arg1);
    func_0803D688(arg0 + 0x23C, &gUnk_080F2AF8, arg1);
    func_0803D688(arg0 + 0x250, &gUnk_080F42F0, arg1);
    func_0803D688(arg0 + 0x264, &gUnk_080F43DC, arg1);
    func_0803D688(arg0 + 0x27C, &gUnk_080F6FF8, arg1);
    func_0803D688(arg0 + 0x290, &gUnk_080F7B40, arg1);
    func_0803D688(arg0 + 0x2A8, &gUnk_080F2DC0, arg1);
    func_0803D688(arg0 + 0x2BC, &gUnk_080F597C, arg1);
    func_0803D688(arg0 + 0x310, &gUnk_080F6B10, arg1);
    func_0803D688(arg0 + 0x328, &gUnk_080F4974, arg1);
    temp_r0 = func_080A0A04(arg0);
    if (temp_r0 != 0) {
        func_0803D688(temp_r0, &gUnk_080F29C0, arg1);
    }
}
