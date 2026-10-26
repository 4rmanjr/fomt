# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DCD2C/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DCD2C/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DCD2C/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DCD2C/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DCD2C/kilo-1531/func.c" 2
s32 func_080DC840();
extern ? vtable_unk_080E681C;

void *func_080DCD2C(void *arg0, void *arg1) {
    void *temp_r0;
    void *temp_r1;
    void *temp_r1_2;

    func_080DC840();
    arg0->unk24 = &vtable_unk_080E681C;
    temp_r1 = arg0 + 0x28;
    temp_r0 = arg1 + 0x28;
    arg0->unk28 = (s32) arg1->unk28;
    temp_r1->unk4 = (s32) temp_r0->unk4;
    temp_r1->unk8 = (s32) temp_r0->unk8;
    temp_r1->unkC = (s32) temp_r0->unkC;
    (temp_r1 + 0xC)->unk4 = (s32) (temp_r0 + 0xC)->unk4;
    arg0->unk3C = (u8) arg1->unk3C;
    temp_r1_2 = arg0 + 0x3D;
    arg0->unk3D = (u8) arg1->unk3D;
    temp_r1_2->unk1 = (u8) arg1->unk3E;
    (temp_r1_2 + 1)->unk1 = (u8) arg1->unk3F;
    arg0->unk40 = (s32) arg1->unk40;
    arg0->unk44 = (u16) arg1->unk44;
    arg0->unk48 = (s32) arg1->unk48;
    arg0->unk4C = (u8) arg1->unk4C;
    arg0->unk4D = (u8) arg1->unk4D;
    return arg0;
}
