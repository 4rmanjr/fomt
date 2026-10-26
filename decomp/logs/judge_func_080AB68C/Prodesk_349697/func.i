# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AB68C/Prodesk_349697/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AB68C/Prodesk_349697/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AB68C/Prodesk_349697/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AB68C/Prodesk_349697/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AB68C/Prodesk_349697/func.c" 2
s32 func_08007B54(void *, s32);
s32 func_08007C28(void *, s32);

void func_080AB68C(void **arg0, s16 arg1, s16 arg2, s8 arg3) {
    s32 sp0;
    s32 temp_r0;
    s32 var_r1;
    s8 *var_sb;
    s8 var_r2;
    u32 var_r4;
    u32 var_r6;
    void *temp_r3;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r7;
    void *var_r4_2;

    var_r2 = arg3;
    temp_r7 = *arg0;
    var_r4 = 0;
loop_1:
    temp_r3 = temp_r7 + ((var_r4 * 8) + 0x368);
    if (temp_r3->unk4 == 0) {
        temp_r3->unk0 = arg1;
        temp_r3->unk2 = arg2;
        temp_r3->unk4 = 1U;
        temp_r3->unk5 = 0xC;
        temp_r3->unk6 = var_r2;
        var_sb = temp_r7 + 0x364;
        if (((var_r2 * 0x54) + temp_r7)->unk8 == 0) {
            switch (var_r2) {
            case 1:
            case 2:
                var_r1 = 2;
                break;
            default:
                var_r1 = 3;
                break;
            case 6:
            case 7:
                var_r1 = 5;
                break;
            case 8:
                var_r1 = 4;
                break;
            case 9:
                var_r1 = 6;
                break;
            }
            temp_r5 = (0x54 * var_r2) + temp_r7;
            temp_r5_2 = temp_r5 + 8;
            var_r6 = 0;
            var_sb = temp_r7 + 0x364;
            var_r4_2 = temp_r5_2 + 0x44;
loop_11:
            sp0 = (s32) var_r2;
            func_08007C28(var_r4_2, var_r4_2->unk4);
            temp_r0 = func_08007B54(var_r4_2, var_r1);
            var_r4_2->unk4 = temp_r0;
            if ((s32) ((0 - temp_r0) | temp_r0) < 0) {
                var_r4_2 += 8;
                var_r6 += 1;
                if (var_r6 > 1U) {
                    temp_r5->unk8 = 1;
                    temp_r5_2->unk1 = 1;
                } else {
                    goto loop_11;
                }
            }
            temp_r7->unk5 = 1;
        }
        temp_r7->unk6 = 1;
        *var_sb = var_r2;
        return;
    }
    var_r4 += 1;
    if (var_r4 > 0xFU) {
        return;
    }
    goto loop_1;
}
