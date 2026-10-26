# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806E43C/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806E43C/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806E43C/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806E43C/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806E43C/kilo-1531/func.c" 2
s32 func_080074C0(void *, s32);
s32 func_08007D4C(void *, s32);
s32 func_08008E64(s32, s32, s32);
s32 func_08008EB8(s32, s32, s32);
extern s32 gUnk_080F9F78;

void func_0806E43C(void *arg0) {
    s32 temp_r4;
    s32 var_r5;
    s32 var_r7;
    void *temp_r4_2;
    void *temp_r5;

    temp_r4 = gUnk_080F9F78;
    temp_r5 = arg0 + 0x30;
    func_08008E64(temp_r4, (func_080074C0(temp_r5, temp_r5->unk4) << 5) + 0x05000200, 0x20);
    *(0x0500020E + (func_080074C0(temp_r5, temp_r5->unk4) << 5)) = 0x27F;
    func_08008EB8(0, arg0 + 0x3C, 8);
    arg0->unk3F = (u8) ((0x3F & arg0->unk3F) | 0x40);
    arg0->unk3D = (u8) ((0x3F & arg0->unk3D & ~0xC) | 4);
    temp_r4_2 = arg0 + 0x28;
    arg0->unk40 = (u16) ((0xFFFFFC00 & arg0->unk40) | (func_08007D4C(temp_r4_2, temp_r4_2->unk4) & 0x3FF));
    arg0->unk41 = (u8) ((0xF & arg0->unk41) | (func_080074C0(temp_r5, temp_r5->unk4) * 0x10) | 0xC);
    var_r7 = 0;
    do {
        var_r5 = 0;
loop_2:
        *(0x06010000 + (s32) (((func_08007D4C(temp_r4_2, temp_r4_2->unk4) + var_r7) << 5) + (var_r5 * 4))) = 0x77777777;
        var_r5 += 1;
        if (var_r5 <= 7) {
            goto loop_2;
        }
        var_r7 += 1;
    } while (var_r7 <= 7);
    arg0->unk3E = (u16) ((0xFFFFFE00 & arg0->unk3E) | ((arg0->unk38 * 0x10) & 0x1FF));
    arg0->unk3C = 0x28;
}
