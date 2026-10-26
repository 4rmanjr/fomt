# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08054D34/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08054D34/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08054D34/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08054D34/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08054D34/kilo-1531/func.c" 2
s32 GetFirstFreeItemSlot__C8Rucksack(s32);
s32 rand();
extern ? gUnk_080FA246;
extern ? gUnk_080FA264;
extern ? gUnk_080FA2E8;

s32 func_08054D34(void *arg0) {
    s16 temp_r0;
    s16 temp_r0_3;
    s16 temp_r2;
    s32 var_r0_2;
    s32 var_r4;
    s32 var_r8;
    u16 var_r0;
    u16 var_r5;
    u32 temp_r7;
    u8 temp_r0_2;
    u8 temp_r0_4;
    u8 temp_r0_5;
    u8 temp_r1;
    u8 temp_r4;
    u8 var_r3;

    var_r8 = 0;
    if (arg0->unk2324 == 0) {
        temp_r0 = arg0->unk2266;
        if (temp_r0 != 0) {
            var_r0 = (u16) ((s32) (temp_r0 - 1) / 50);
        } else {
            var_r0 = 0;
        }
        temp_r0_2 = arg0->unk2326;
        var_r3 = 5;
        if ((u32) temp_r0_2 <= 5U) {
            var_r3 = temp_r0_2;
        }
        temp_r4 = *(var_r3 + ((s16) var_r0 * 6) + &gUnk_080FA246);
        if ((s32) temp_r4 > (s32) (rand() % 100)) {
            arg0->unk2326 = 5U;
            return 6;
        }
        goto block_8;
    }
block_8:
    if (arg0->unk22D8 == 0x8F) {
        return 7;
    }
    temp_r2 = arg0->unk22D8;
    temp_r1 = arg0->unk22DC;
    if ((s32) temp_r2 > (s32) temp_r1) {
        var_r4 = 0x64;
    } else if ((s32) temp_r2 > (s32) (temp_r1 - 8)) {
        var_r4 = 0x46;
    } else {
        var_r4 = 0;
        if ((s32) temp_r2 > (s32) (temp_r1 - 0x10)) {
            var_r4 = 0x1E;
        }
    }
    var_r0_2 = arg0->unk22D8 - 0x30;
    if (var_r0_2 < 0) {
        var_r0_2 += 7;
    }
    temp_r7 = (u32) (var_r0_2 << 0xD) >> 0x10;
    temp_r0_3 = arg0->unk2264;
    if (temp_r0_3 != 0) {
        var_r5 = ((s32) (temp_r0_3 - 1) / 25) + 1;
    } else {
        var_r5 = 0;
    }
    if (var_r4 > (s32) (rand() % 100)) {
        temp_r0_4 = *((s16) var_r5 + (0xB * (s16) temp_r7) + &gUnk_080FA2E8);
        switch (temp_r0_4) {
        case 2:
            var_r8 = 2;
            break;
        case 3:
            var_r8 = 2;
            if ((s32) (rand() % 100) <= 0x45) {
            case 1:
                var_r8 = 1;
            }
            break;
        }
        if ((arg0->unk2324 == 0) && (GetFirstFreeItemSlot__C8Rucksack(arg0->unk8 + 0x1C38) != -1) && ((s32) arg0->unk2270 > 0x12B) && ((s32) arg0->unk2264 > 0x64) && ((s32) (rand() % 100) <= 4)) {
            var_r8 = 8;
        }
    } else {
        temp_r0_5 = *((s16) var_r5 + (0xB * (s16) temp_r7) + &gUnk_080FA264);
        switch (temp_r0_5) {
        case 2:
            var_r8 = 5;
            break;
        case 3:
            var_r8 = 4;
            if ((s32) (rand() % 100) <= 0x45) {
            case 1:
                var_r8 = 3;
            }
            break;
        }
    }
    return var_r8;
}
