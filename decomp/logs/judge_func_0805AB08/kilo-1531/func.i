# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805AB08/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805AB08/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805AB08/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805AB08/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805AB08/kilo-1531/func.c" 2
s32 Unpack(s32 *, s32);
s16 *func_08008918(void *);
s32 func_08008E64(s32 *, s32, s32);
s32 func_08008EB8(s32, s32, s32);
extern ? gUnk_0872F11C;
extern ? gUnk_0872F1BC;
extern ? gUnk_0872F1EC;
extern ? gUnk_0872F21C;
extern ? gUnk_0872FA9C;
extern ? gUnk_0872FBFC;

void func_0805AB08(void *arg0) {
    s16 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s16 *temp_r0;
    s16 *temp_r0_2;
    s16 *temp_r0_3;
    s16 *temp_r0_4;
    s16 *temp_r0_6;
    s16 *temp_r0_7;
    s16 *temp_r0_8;
    s32 temp_r0_5;
    s32 temp_r2;
    s32 var_r1;
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;
    s32 var_sb;

    func_08008EB8(0, 0x06007FE0, 0x20);
    func_08008EB8(-1, 0x0600C800, 0x1000);
    func_08008EB8(-1, 0x0600D800, 0x1000);
    func_08008EB8(-1, 0x0600E800, 0x1000);
    Unpack(&gUnk_0872F11C, arg0 + 0xBEA);
    Unpack(&gUnk_0872F1BC, arg0 + 0xCEA);
    Unpack(&gUnk_0872F1EC, arg0 + 0xDEA);
    Unpack(&gUnk_0872FBFC, arg0 + 0xEEA);
    Unpack(&gUnk_0872F21C, 0x06000000);
    func_08008E64(&gUnk_0872FA9C, 0x05000000, 0x200);
    temp_r0 = func_08008918(arg0);
    sp0 = 0x1E40;
    *temp_r0 = 0x1E40;
    temp_r0_2 = func_08008918(arg0);
    sp0 = 0x5943;
    temp_r0_2->unkE = 0x5943;
    temp_r0_3 = func_08008918(arg0);
    sp0 = 0x5B42;
    temp_r0_3->unkC = 0x5B42;
    temp_r0_4 = func_08008918(arg0);
    sp0 = 0x5D41;
    temp_r0_4->unkA = 0x5D41;
    var_r1 = 0;
    do {
        var_sb = 0;
        temp_r2 = var_r1 << 6;
        sp10 = var_r1 + 1;
        temp_r0_5 = var_r1 * 0xC;
        sp8 = temp_r0_5 + 0xEEA;
        spC = temp_r0_5 + 0xDEA;
        var_r6 = temp_r2 + 0x0600E800;
        var_r5 = temp_r2 + 0x0600D800;
        var_r4 = temp_r2 + 0x0600C800;
        sp4 = temp_r0_5 + 0xBEA;
loop_2:
        func_08008E64(arg0 + sp4, var_r4, 0xC);
        if (var_sb != 0x12) {
            func_08008E64(arg0 + (temp_r0_5 + 0xCEA), var_r5, 0xC);
        } else {
            func_08008E64(arg0 + sp8, temp_r2 + 0x0600D824, 0xC);
        }
        func_08008E64(arg0 + spC, var_r6, 0xC);
        var_r6 += 0xC;
        var_r5 += 0xC;
        var_r4 += 0xC;
        var_sb += 6;
        if (var_sb <= 0x1D) {
            goto loop_2;
        }
        var_r1 = sp10;
    } while (var_r1 <= 0x1F);
    arg0->unk13EA = 0x600;
    arg0->unk13EC = 0x600;
    arg0->unk13EE = 0x600;
    arg0->unk13F0 = 0;
    arg0->unk13F2 = 0;
    arg0->unk13F4 = 0;
    arg0->unk13F6 = 0;
    arg0->unk13F8 = 0;
    arg0->unk13FA = 0;
    temp_r0_6 = func_08008918(arg0);
    sp0 = 0;
    temp_r0_6->unk16 = 0;
    temp_r0_7 = func_08008918(arg0);
    sp0 = 0;
    temp_r0_7->unk1A = 0;
    temp_r0_8 = func_08008918(arg0);
    sp0 = 0;
    temp_r0_8->unk1E = 0;
}
