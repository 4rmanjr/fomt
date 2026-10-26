# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08050868/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08050868/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08050868/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08050868/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08050868/opencode/func.c" 2
s32 func_08050868(u32 arg0, s32 arg1, s32 arg2) {
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r0_4;
    u32 temp_r0_5;
    u32 temp_r0_6;

    switch (arg0) {
    case 0:
    case 5:
        if (arg2 & 0xC0) {
block_4:
            if (arg1 == 1) {
            case 4:
            case 2:
            case 0:
            case 4:
            case 2:
            case 0:
block_80:
                return 2;
            }
            goto block_82;
        }
block_22:
        if (!(arg2 & 0x30)) {
        default:
        case 1:
        case 2:
        default:
        default:
        default:
block_82:
        default:
            return 1;
        }
        return arg1;
    case 1:
        if (arg2 & 0x80) {
            if (arg1 == 2) {
                goto block_81;
            }
            if (arg1 > 2) {
                goto block_82;
            }
            goto block_4;
        }
        if (arg2 & 0x40) {
            if (arg1 == 2) {
                goto block_82;
            }
            if (arg1 <= 2) {
block_16:
                if (arg1 == 1) {
                case 0:
                case 1:
                case 5:
                case 0:
                case 1:
block_81:
                    return 3;
                }
                goto block_82;
            }
block_19:
            if (arg1 != 3) {
                goto block_82;
            }
            goto block_80;
        }
        goto block_22;
    case 6:
        if (arg2 & 0x80) {
            goto block_26;
        }
        if (!(arg2 & 0x40)) {
            if (!(arg2 & 0x30)) {
                goto block_82;
            }
            if (arg1 == 2) {
                goto block_81;
            }
            if (arg1 > 2) {
                goto block_82;
            }
            goto block_16;
        }
block_26:
        if (arg1 == 2) {
            goto block_82;
        }
        if (arg1 > 2) {
            goto block_19;
        }
        goto block_4;
    case 2:
    case 7:
        if (arg2 & 0x80) {
            goto block_38;
        }
        if (!(arg2 & 0x40)) {
            if (!(arg2 & 0x30)) {
                goto block_82;
            }
            switch (arg1) {
            case 2:
                goto block_77;
            case 3:
                goto block_82;
            case 4:
                goto block_80;
            }
        } else {
block_38:
            switch (arg1) {
            case 2:
                goto block_82;
            case 3:
            case 0:
            case 4:
            case 4:
            case 0:
            case 4:
            case 5:
block_77:
                return 4;
            case 4:
                goto block_81;
            }
        }
        break;
    case 3:
        if (arg2 & 0x80) {
            temp_r0 = arg1 - 1;
            switch (temp_r0);
        } else if (arg2 & 0x40) {
            temp_r0_2 = arg1 - 1;
            switch (temp_r0_2);
        } else if (arg2 & 0x30) {
            temp_r0_3 = arg1 - 1;
            switch (temp_r0_3) {
            case 1:
            case 2:
            case 3:
            case 3:
            case 1:
            case 5:
            case 3:
                return 5;
            }
        } else {
            goto block_82;
        }
        break;
    case 4:
        if (arg2 & 0x80) {
            temp_r0_4 = arg1 - 1;
            switch (temp_r0_4);
        } else if (arg2 & 0x40) {
            temp_r0_5 = arg1 - 1;
            switch (temp_r0_5);
        } else if (arg2 & 0x30) {
            temp_r0_6 = arg1 - 1;
            switch (temp_r0_6) {
            case 2:
            case 3:
            case 4:
                return 6;
            }
        } else {
            goto block_82;
        }
        break;
    }
}
