# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08093F48/t_mass3/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08093F48/t_mass3/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08093F48/t_mass3/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08093F48/t_mass3/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08093F48/t_mass3/func.c" 2
extern s32 gUnk_081007D4;
extern s32 gUnk_0810089C;
extern s32 gUnk_081008C4;

typedef struct GenObj {
    struct GenObj *unk0;
    u8 _pad4[4];
    s32 unk8;
    u8 _padC[4];
    s32 unk10;
    u8 _pad14[40];
    s32 unk3C;
    s32 unk40;
    s32 unk44;
    s32 unk48;
} GenObj;
void func_08093F48(GenObj *arg0, s32 arg1) {
    s32 *var_r0;

    if (arg1 == 1) {
        ((void (*)(void *,...))(arg0->unk0->unk3C))(arg0);
    }
    if ((((void (*)(void *,...))(arg0->unk0->unk40))(arg0) << 0x18) != 0) {
        if ((((void (*)(void *,...))(arg0->unk0->unk48))(arg0) << 0x18) != 0) {
            var_r0 = &gUnk_081008C4;
        } else if ((((void (*)(void *,...))(arg0->unk0->unk44))(arg0) << 0x18) != 0) {
            arg0->unk10 = 1;
            var_r0 = &gUnk_0810089C;
        } else {
            var_r0 = &gUnk_081007D4;
        }
        arg0->unk8 = var_r0;
    }
}
