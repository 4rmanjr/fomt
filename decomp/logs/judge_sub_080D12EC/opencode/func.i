# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_080D12EC/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_080D12EC/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_080D12EC/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_080D12EC/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_080D12EC/opencode/func.c" 2
? .L080D145C();
s32 *func_080D11A4(s32 *, s32, s32, s32);
s32 *func_080D14EC();

void sub_080D12EC(void) {
    s32 *temp_r0;
    s32 *temp_ret;
    s32 *temp_ret_2;
    s32 *var_r0;
    s32 var_r1;
    s32 var_r3;
    u8 temp_r4;
    u8 temp_r4_2;


    temp_ret = func_080D14EC();
    var_r0 = temp_ret;
    var_r1 = SECOND_REG(temp_ret);
    var_r3 = M2C_ERROR( ) - 1;
    if (var_r3 < 0) {
        goto block_11;
    }
block_1:
    if (!M2C_CARRY(M2C_ERROR( ))) {
        goto block_10;
    }
    func_080D11A4(var_r0, var_r1, M2C_ERROR( ) * 2, var_r3);
    if (3 == 7) {
        goto block_4;
    }
    temp_r4 = (saved_reg_r7 + 0xC)->unk6;
    func_080D11A4();
    func_080D11A4();
    .L080D145C();
    return;
block_4:
loop_5:
    temp_r0 = func_080D11A4();
    if (M2C_CARRY(M2C_ERROR( ))) {
        goto loop_5;
    }
    if ((s32) (M2C_ERROR( ) - 1) < 0) {
        goto block_12;
    }
block_7:
    if (!M2C_CARRY(M2C_ERROR( ))) {
        goto block_9;
    }
    func_080D11A4();
    temp_r4_2 = (saved_reg_r7 + 0xC)->unk6;
    func_080D11A4();
    func_080D11A4();
    .L080D145C();
    return;
block_9:
    saved_reg_r9();
block_10:
    temp_ret_2 = saved_reg_r9();
    var_r0 = temp_ret_2;
    var_r1 = SECOND_REG(temp_ret_2);
block_11:
    var_r0 += 4;
    var_r3 = M2C_ERROR( ) + 0x20;
    goto block_1;
block_12:
    goto block_7;
}
