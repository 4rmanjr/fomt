# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803B718/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803B718/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803B718/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803B718/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803B718/opencode/func.c" 2
s32 __13AScriptEngine(s32 **);
? **__builtin_new(s32);
s32 func_08008444(s32);
s32 func_08008B54(s32 **, s32);
extern ? __vt_6AScene;
extern ? vtable_unk_080E7708;
extern ? vtable_unk_080E7714;
extern ? vtable_unk_080E7728;
extern ? vtable_unk_080E7738;

? ***func_0803B718(s32 ***arg0, void *arg1) {
    ? **sp0;
    void **sp4;
    ? ***spC;
    ? **sp10;
    ? **temp_r5;
    s32 temp_r4;
    void **temp_r0;

    temp_r5 = __builtin_new(0x3A4);
    temp_r0 = arg1->unk4;
    arg1->unk4 = 0;
    sp4 = temp_r0;
    temp_r4 = arg1->unk8;
    temp_r5->unk0 = &__vt_6AScene;
    temp_r5->unk0 = &vtable_unk_080E7738;
    func_08008444(temp_r5 + 4);
    __13AScriptEngine(temp_r5 + 0xC);
    temp_r5->unk8 = &vtable_unk_080E7708;
    temp_r5->unk358 = &vtable_unk_080E7714;
    temp_r5->unk0 = &vtable_unk_080E7728;
    sp4 = 0;
    temp_r5->unk35C = temp_r0;
    temp_r5->unk360 = temp_r4;
    temp_r5->unk368 = 0;
    temp_r5->unk36C = 0;
    temp_r5->unk370 = 0;
    func_08008B54(temp_r5 + 0x374, 0);
    func_08008B54(temp_r5 + 0x378, 1);
    func_08008B54(temp_r5 + 0x37C, 2);
    func_08008B54(temp_r5 + 0x380, 3);
    func_08008B54(temp_r5 + 0x384, 4);
    temp_r5->unk388 = 0;
    (temp_r5 + 0x388)->unk4 = 0;
    (temp_r5 + 0x390)->unk4 = 0;
    temp_r5->unk398 = 0;
    temp_r5->unk39C = 0;
    temp_r5->unk3A0 = 1;
    temp_r5->unk3A1 = 0;
    if (sp4 != 0) {
        (*sp4)->unk8(sp4, 3);
    }
    sp0 = temp_r5;
    spC = &sp0;
    sp10 = temp_r5;
    sp0 = 0;
    *arg0 = temp_r5;
    if (sp0 != 0) {
        (*sp0)->unk8(sp0, 3);
    }
    return arg0;
}
