# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000240/kilo/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000240/kilo/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000240/kilo/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000240/kilo/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000240/kilo/func.c" 2
s32 SoftReset(s32);
s32 func_08000528(s32);

typedef struct GenObj {
    u8 _pad0[10];
    struct GenObj *unkA;
} GenObj;
void func_08000240(void) {
    void *temp_r1;
    GenObj *temp_r1_2;

    func_08000528(0xFFFF);
    (void *)0x04000000->unk0 = 0x80;
    (void *)0x04000000->unk84 = 0;
    if (0xF & ~*(u16 *)0x04000130) {
        do {

        } while (0xF & ~*(u16 *)0x04000130);
    }
    (void *)0x040000B0->unkA = (u16) (0xC5FF & (void *)0x040000B0->unkA);
    (void *)0x040000B0->unkA = (u16) (0x7FFF & (void *)0x040000B0->unkA);
    temp_r1 = (void *)0x040000B0 + 0xC;
    temp_r1->unkA = (u16) (0xC5FF & temp_r1->unkA);
    temp_r1->unkA = (u16) (0x7FFF & temp_r1->unkA);
    temp_r1_2 = (GenObj *)((u8 *)temp_r1 + 0xC);
    temp_r1_2->unkA = (u16) (0xC5FF & temp_r1_2->unkA);
    temp_r1_2->unkA = (u16) (0x7FFF & temp_r1_2->unkA);
    (void *)0x040000D4->unkA = (u16) (0xC5FF & (void *)0x040000D4->unkA);
    (void *)0x040000D4->unkA = (u16) (0x7FFF & (void *)0x040000D4->unkA);
    SoftReset(0xFF);
loop_4:
    goto loop_4;
}
