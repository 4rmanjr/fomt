# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_AgbMain/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_AgbMain/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_AgbMain/common.h" 1
# 1 "/home/armanjr/.local/share/decompnet/toolchains/agbcc/include/stdint.h" 1
# 31 "/home/armanjr/.local/share/decompnet/toolchains/agbcc/include/stdint.h"
# 1 "/home/armanjr/.local/share/decompnet/toolchains/agbcc/include/limits.h" 1
# 32 "/home/armanjr/.local/share/decompnet/toolchains/agbcc/include/stdint.h" 2



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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_AgbMain/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_AgbMain/func.c" 2
s32 __builtin_new(s32);
s32 func_080002E0(s32);
s32 func_08000358(s32);
s32 func_080004C4(void);
s32 func_0800050C(s32);
s32 func_08000640(s32);
s32 func_0800082C(s32);
s32 func_080036F8(void);
s32 func_08008980(s32);
s32 func_08008A68(s32, s32);
s32 func_08008AFC(void);
s32 func_080D100C(s32, s32);
extern s32 func_03000490;
extern s32 func_08000240;

void AgbMain(void) {
s32 sp0;
    s32 sp4;
    s32 *sp8;
s32 spC;
    s32 *sp14;
    s32 sp18;
    s32 temp_r0;

    *(s16 *)0x04000204 = 0x4014;
    func_080004C4();
    func_080D100C(0xD, (s32)&func_03000490);
    func_0800050C(0x2000);
    func_08000640((s32)&spC);
    if ((func_080002E0((s32)&spC) << 0x18) == 0) {
        func_08000358((s32)&spC);
    }
    func_080D100C(0xC, (s32)&func_08000240);
    *(s16 *)0x04000132 = 0xC00F;
    func_0800050C(0x1000);
    func_08008AFC();
    func_08008980((s32)&sp0);
    __builtin_new(8);
    temp_r0 = func_080036F8();
    sp14 = &sp8;
    sp18 = temp_r0;
    sp8 = 0;
    sp4 = temp_r0;
    func_0800082C((s32)&sp4);
    if (sp8 != 0) {
        ((s32 (**)(s32, s32))(*sp8 + 8))(sp8, 3);
    }
    func_08008A68((s32)&sp0, 2);
}
