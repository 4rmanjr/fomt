# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AC9EC/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AC9EC/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AC9EC/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AC9EC/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AC9EC/opencode/func.c" 2
s32 __builtin_new(s32);
s32 func_0803AB30(s32, void *);
s32 func_0803AC78(s32, s32);
s32 func_080A56DC(void *, ? *, s32, s32, s32);
s32 func_080AAFC8(s32, void *, s32);
s32 func_080AB2E4(s32, s32);
s32 func_080AC674(s32, void **);
s32 func_080AD49C(void *, u32);
extern ? vtable_unk_080E8344;
extern ? vtable_unk_080E8440;

void *func_080AC9EC(void *arg0, void **arg1) {
    void *sp4;
s32 sp8;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    u32 var_r4;
    void *temp_r1;
    void *temp_r2;

    arg0->unk0 = &vtable_unk_080E8440;
    arg0->unk0 = &vtable_unk_080E8344;
    temp_r2 = *arg1;
    *arg1 = 0;
    sp4 = temp_r2;
    func_080AC674(arg0 + 4, &sp4);
    sp8.unk0 = (u16) ((0xFFFFFC00 & sp8.unk0) | 0x30);
    sp8.unk1 = (u8) (3 & sp8.unk1);
    sp8.unk2 = (u16) (0xFFFFFC00 & sp8.unk2);
    sp8.unk3 = (u8) (3 & sp8.unk3);
    sp8.unk4 = (u16) (0xFFFFFC00 & sp8.unk4);
    func_080A56DC(arg0->unk4, &sp8, 0, 0, 0x1E);
    temp_r0 = func_0803AB30(__builtin_new(0xA0), arg0);
    temp_r0_2 = arg0->unk1024;
    if ((temp_r0 != temp_r0_2) && (temp_r0_2 != 0)) {
        func_0803AC78(temp_r0_2, 3);
    }
    arg0->unk1024 = temp_r0;
    temp_r0_3 = arg0->unk1028;
    if ((temp_r0_3 != 0) && (temp_r0_3 != 0)) {
        func_080AB2E4(temp_r0_3, 3);
    }
    arg0->unk1028 = 0;
    temp_r0_4 = func_080AAFC8(__builtin_new(4), arg0, arg0->unk4->unk4);
    temp_r0_5 = arg0->unk1028;
    if ((temp_r0_4 != temp_r0_5) && (temp_r0_5 != 0)) {
        func_080AB2E4(temp_r0_5, 3);
    }
    arg0->unk1028 = temp_r0_4;
    var_r4 = 0;
    do {
        func_080AD49C(arg0, var_r4);
        var_r4 += 1;
    } while (var_r4 <= 0x63U);
    temp_r1 = *arg1;
    if (temp_r1 != 0) {
        temp_r1->unk90->unk8(temp_r1, 3);
    }
    return arg0;
}
