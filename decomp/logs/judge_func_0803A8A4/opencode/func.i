# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803A8A4/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803A8A4/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803A8A4/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803A8A4/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803A8A4/opencode/func.c" 2
s32 func_0803A8A4(s32 arg0, s32 arg1, u32 arg2, s32 arg3, s32 arg4) {
    s32 var_r0;
    s32 var_r0_2;
    u32 temp_r1;
    u32 var_r4;

    temp_r1 = arg0 - 0x34;
    if (temp_r1 <= 0x1FFU) {
        if (arg0 > 0x133) {
            var_r4 = arg0 + 0xFFFFFECC;
            var_r0_2 = 1;
        } else {
            var_r4 = temp_r1;
            var_r0_2 = 0;
        }
        if (var_r4 == 0) {
            return 0x38;
        }
        if ((var_r4 == 9) && (var_r0_2 == 1)) {
            return 0x3D;
        }
        if ((var_r4 % 5U) == 0) {
            return 0x39;
        }
        if ((var_r4 % 3U) == 0) {
            return 0x3A;
        }
        return 0x3B;
    }
    switch ((u32) arg0) {
    case 0x2:
        if (arg1 != 3) {
            return 0;
        }
        return 1;
    case 0x6:
        if (arg1 == 3) {
            return 3;
        }
        return 2;
    case 0x5:
        if (arg1 == 3) {
            return 5;
        }
        return 4;
    case 0x7:
        if (arg1 == 3) {
            return 7;
        }
        return 6;
    case 0x1:
        if (arg1 == 3) {
            return 9;
        }
        return 8;
    case 0x3:
        var_r0 = 0xD;
        if (arg1 != 3) {
            return 0xC;
        }
        return var_r0;
    case 0x4:
        var_r0 = 0xB;
        if (arg1 != 3) {
            return 0xA;
        }

        return var_r0;
    case 0x0:
        var_r0 = 0xF;
        if (arg1 != 3) {
            return 0xE;
        }

        return var_r0;
    case 0x8:
        var_r0 = 0x11;
        if (arg1 != 3) {
            return 0x10;
        }

        return var_r0;
    case 0x11:
        switch (arg3) {
        case 0:
            return 0x24;
        case 1:
            return 0x25;
        }
        break;
    case 0x25:
        switch (arg4) {
        case 0:
            return 0x26;
        case 1:
            return 0x27;
        }
        break;
    case 0x1D:
        if (arg2 != 1) {
            if (arg2 >= 1U) {
                if (arg2 != 2) {
                default:
                    var_r0 = 0;

                    return var_r0;
                }
                return 0x2B;
            }
            return 0x29;
        }
        return 0x2A;
    case 0x1F:
        return 0x12;
    case 0x20:
        return 0x13;
    case 0x21:
        return 0x14;
    case 0x22:
        return 0x15;
    case 0x15:
        return 0x16;
    case 0x16:
        return 0x17;
    case 0x17:
        return 0x18;
    case 0xF:
        return 0x19;
    case 0x10:
        return 0x1A;
    case 0x24:
        return 0x1B;
    case 0xD:
        return 0x1C;
    case 0x13:
        return 0x1D;
    case 0x14:
        return 0x1E;
    case 0xC:
        return 0x1F;
    case 0x18:
        return 0x20;
    case 0x19:
        return 0x21;
    case 0x1A:
        return 0x22;
    case 0x1B:
        return 0x23;
    case 0x9:
        return 0x28;
    case 0xA:
        return 0x2C;
    case 0xB:
        return 0x2D;
    case 0x29:
        return 0x2E;
    case 0x2A:
        return 0x2F;
    case 0x26:
        return 0x30;
    case 0x28:
        return 0x31;
    case 0x1E:
        return 0x32;
    case 0xE:
        return 0x33;
    case 0x1C:
        return 0x34;
    case 0x12:
        return 0x35;
    case 0x23:
        return 0x36;
    case 0x27:
        return 0x37;
    case 0x2B:
        return 0x3C;
    case 0x30:
        return 0x3E;
    case 0x31:
        return 0x3F;
    case 0x32:
        return 0x40;
    case 0x33:
        return 0x41;
    case 0x2C:
    case 0x2D:
    case 0x2E:
        return 0x10;
    case 0x2F:
        return 0x11;
    }
}
