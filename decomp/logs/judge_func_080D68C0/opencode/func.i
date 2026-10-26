# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D68C0/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D68C0/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D68C0/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D68C0/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D68C0/opencode/func.c" 2
s32 func_080D6A80(void *, void *);
s32 memcpy(void *, void *, s32);
s32 strcpy(s32, s32);

void *func_080D68C0(void *arg0, void *arg1) {
    s32 *var_r2;
    s32 *var_r3;
    s32 temp_r0;
    s32 var_r1;
    u32 temp_r2;
    u8 temp_r3;
    void *temp_r1;
    void *temp_r2_2;
    void *temp_r3_2;

    strcpy();
    strcpy(arg0 + 0x10, arg1 + 0x10);
    temp_r1 = arg0 + 0x20;
    arg0->unk20 = (u8) arg1->unk20;
    temp_r1->unk4 = (s32) arg1->unk24;
    (temp_r1 + 4)->unk4 = (s32) (arg1 + 0x24)->unk4;
    var_r3 = arg0 + 0x2C;
    var_r1 = 5;
    var_r2 = arg1 + 0x2C;
    do {
        temp_r0 = *var_r2;
        var_r2 += 4;
        *var_r3 = temp_r0;
        var_r3 += 4;
        var_r1 -= 1;
    } while (var_r1 != -1);
    temp_r3 = arg1->unk44;
    arg0->unk44 = (u8) ((((((((-0x10 & arg0->unk44) | ((u32) (temp_r3 << 0x1C) >> 0x1C)) & ~0x10) | (0x10 & temp_r3)) & ~0x20) | (0x20 & temp_r3)) & ~0x40) | (0x40 & temp_r3));
    arg0->unk44 = (s16) ((0xFFFF807F & (u16) arg0->unk44) | (0x7F80 & (u16) arg1->unk44));
    arg0->unk44 = (s32) (((s32) arg0->unk44 & 0xFF807FFF) | ((s32) arg1->unk44 & 0x7F8000));
    arg0->unk46 = (u16) ((0xFFFF807F & arg0->unk46) | (0x7F80 & arg1->unk46));
    arg0->unk47 = (u8) ((0x7F & arg0->unk47) | (((u8) arg1->unk47 >> 7) << 7));
    arg0->unk48 = (s32) ((arg0->unk48 & 0xE0000000) | (arg1->unk48 & 0x1FFFFFFF));
    temp_r3_2 = arg0 + 0x4B;
    arg0->unk4B = (u8) ((0x1F & arg0->unk4B) | (((u8) arg1->unk4B >> 5) << 5));
    temp_r3_2->unk1 = (u8) ((-0x80 & temp_r3_2->unk1) | ((u32) (arg1->unk4C << 0x19) >> 0x19));
    temp_r3_2->unk1 = (s16) ((0xFFFF807F & (u16) temp_r3_2->unk1) | (0x7F80 & (u16) arg1->unk4C));
    temp_r2 = (u32) arg1->unk4C >> 0xF;
    arg0->unk4C = (s32) ((arg0->unk4C & 0x7FFF) | (temp_r2 << 0xF));
    temp_r2_2 = arg0 + 0x50;
    arg0->unk50 = (u16) ((0xFFFFE000 & arg0->unk50) | (((temp_r2 >> 0x11) | (arg1->unk50 & 0x1FFF)) & 0x1FFF));
    temp_r2_2->unk1 = (u8) ((0x1F & temp_r2_2->unk1) | (((u8) arg1->unk51 >> 5) << 5));
    arg0->unk54 = (s32) arg1->unk54;
    (arg0 + 0x54)->unk4 = (s32) (arg1 + 0x54)->unk4;
    memcpy(arg0 + 0x5C, arg1 + 0x5C, 2);
    func_080D6A80(arg0 + 0x60, arg1 + 0x60);
    return arg0;
}
