# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C5648/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C5648/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C5648/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C5648/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C5648/opencode/func.c" 2
s32 func_080087C8(void *);
void *func_08008940(void *);
s32 func_08008B6C(void *, s32);
s32 func_0800934C(s32, s32, s32, s32);
s32 func_080C2D54(void *);

void func_080C5648(void *arg0) {
    s32 var_r1;
    s32 var_r7;
    void *temp_r0;
    void *var_r0;

    var_r7 = 0;
    var_r0 = arg0 + 0x904;
    var_r1 = 0x18;
    do {
        var_r0->unk0 = 0;
        var_r0->unk1 = 0;
        var_r0 += 4;
        var_r1 -= 1;
    } while (var_r1 >= 0);
    arg0->unk8B4 = 0x78;
    arg0->unk8B5 = 0x51;
    arg0->unk8B7 = 2;
    arg0->unk8B6 = 2;
    arg0->unk8B9 = 0;
    arg0->unk8B8 = 0;
    func_0800934C(arg0->unk544 + 0xC, 0x889, 1, 1);
    temp_r0 = func_08008940(arg0);
    temp_r0->unk8->unk10(temp_r0, arg0->unk544);
    func_080C2D54(arg0);
    func_08008B6C(arg0 + 0x818, 0xBB);
    if (arg0->unk89C == 3) {
        do {
            func_080087C8(arg0);
            if (var_r7 == 0x78) {
                arg0->unk89C = 4;
            }
            var_r7 += 1;
            func_080C2D54(arg0);
        } while (arg0->unk89C == 3);
    }
}
