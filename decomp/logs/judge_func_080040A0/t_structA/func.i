# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080040A0/t_structA/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080040A0/t_structA/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080040A0/t_structA/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080040A0/t_structA/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080040A0/t_structA/func.c" 2
s32 __builtin_delete(s32);
s32 **__builtin_new(s32);
s32 func_080003DC(void *, u8);
s32 func_08000470(void *, u8);
s32 func_080004F4();
s32 func_08000528(s32);
s32 func_08008B6C(void *, s32);
s32 func_08011650(s32 **, void *, s32, s32 *);
s32 func_08050DC8(void *, s32 *, s32, s32);
s32 func_080D4178(s32, s32);
s32 func_080D4480(s32, s32);
extern s32 gUnk_080E88D8;
extern s32 vtable_unk_080E5A4C;

typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
    s32 unkC;
    u8 _pad10[117];
    s32 unk85;
    u8 _pad89[3];
    s32 unk8C;
} GenObj;
s32 func_080040A0(GenObj *arg0) {
    u16 sp0;
    s32 sp4;
    s32 sp8;
    void *spC;
    s32 **temp_r0_4;
    s32 **temp_r1_2;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r1;
    s32 temp_r4_2;
    s32 temp_sl;
    s32 var_r7;
    u8 temp_r0;
    void *temp_r4;

    temp_r0 = arg0->unk85;
    temp_r4 = arg0 + 0x90;
    temp_sl = func_080003DC(temp_r4, temp_r0);
    sp8 = 0;
    var_r7 = 3;
    spC = temp_r4;
loop_1:
    sp0 = 0x1000 & func_08000528(0x1000);
    temp_r0_2 = func_08011650(__builtin_new(0x34F4), arg0 + 0x90, temp_sl, &sp8);
    sp4 = temp_r0_2;
    if (sp8 == 0) {
        temp_r4_2 = arg0->unk8;
        if (temp_r4_2 != 0) {
            func_080D4480(temp_r4_2, 2);
            temp_r0_3 = arg0->unk8;
            if (temp_r0_3 != 0) {
                func_080D4178(temp_r0_3, sp4);
            }
        } else {
            temp_r0_4 = __builtin_new(8);
            temp_r0_4->unk0 = &vtable_unk_080E5A4C;
            temp_r1 = sp4;
            sp4 = temp_r4_2;
            temp_r0_4->unk4 = temp_r1;
            temp_r1_2 = arg0->unkC;
            if ((temp_r0_4 != temp_r1_2) && (temp_r1_2 != 0)) {
                (*temp_r1_2)->unk8(temp_r1_2, 3);
            }
            arg0->unkC = temp_r0_4;
        }
        func_08008B6C(arg0 + 0x18, 0xC5);
        func_08000470(spC, temp_r0);
        if (sp4 != 0) {
            func_080D4480(sp4, 3);
        }
        if (sp0 != 0) {
            func_080004F4();
        }
        return 1;
    }
    sp4 = 0;
    __builtin_delete(temp_r0_2);
    if (0 != 0) {
        func_080D4480(0, 3);
    }
    if (sp0 != 0) {
        func_080004F4();
    }
    var_r7 -= 1;
    if (var_r7 == 0) {
        func_08050DC8(arg0 + 0x10, &gUnk_080E88D8, 0, 0);
        arg0->unk8C = 3;
        func_08008B6C(arg0 + 0x18, 0xC7);
        return 0;
    }
    goto loop_1;
}
