# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B0AA0/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B0AA0/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B0AA0/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B0AA0/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B0AA0/opencode/func.c" 2
void func_080B0AA0(void *arg0) {
    s16 *var_sb;
    s32 var_r2;
    void *temp_r6;
    void *var_ip;
    void *var_r4;

    arg0->unk844 = 0;
    var_r2 = 0;
    var_r4 = arg0 + 0x848;
    var_sb = arg0 + 0x8F0;
    var_ip = arg0 + 0x85C;
    do {
        var_r4->unk0 = 0;
        var_r4->unk28 = 0;
        temp_r6 = var_ip + 4;
        var_ip = temp_r6;
        *(temp_r6 - 4) = 0;
        *(arg0 + 0x8E1 + var_r2) = 0x70;
        *var_sb = 0;
        *(arg0 + 0x915 + var_r2) = 1;
        *(arg0 + 0x8FC + (var_r2 * 2)) = 0;
        *(arg0 + 0x906 + var_r2) = 0;
        *(arg0 + 0x91A + var_r2) = 1;
        *(arg0 + 0x91F + var_r2) = 1;
        *(arg0 + 0x924 + var_r2) = 1;
        var_r4 += 4;
        var_sb += 2;
        var_r2 += 1;
    } while (var_r2 <= 4);
    arg0->unk8E0 = 0x78;
    arg0->unk90B = 0x3C;
    arg0->unk8FA = 0;
    arg0->unk90C = 0;
    arg0->unk90D = 0;
    arg0->unk884 = 2;
    arg0->unk838 = 0;
    arg0->unk83C = 0;
    arg0->unk840 = 0;
    arg0->unk914 = 1;
    arg0->unk929 = 1;
    arg0->unk92A = 0;
    arg0->unk92B = 0;
    arg0->unk92C = 0;
}
