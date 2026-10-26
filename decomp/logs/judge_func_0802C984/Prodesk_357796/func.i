# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802C984/Prodesk_357796/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802C984/Prodesk_357796/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802C984/Prodesk_357796/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802C984/Prodesk_357796/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802C984/Prodesk_357796/func.c" 2
u32 GetId__C4Tool();
s32 GetTool__C9ToolStack(s32);
s32 IsEmpty__C9ToolStack(s32);
s32 func_08008B6C(s32, s32);
s32 func_08008CD0(s32);
s8 func_0800E550(s32, s32);
s32 func_0800E94C(s32);
s32 func_08025B10(void *);

void func_0802C984(void *arg0) {
    s32 sp0;
    s8 spC;
    s16 var_r4;
    s16 var_r5;
    s32 *var_r0_4;
    s32 *var_r4_2;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 var_r0_5;
    s8 *var_r1;
    s8 *var_r1_2;
    s8 var_r0;
    s8 var_r0_2;
    u16 temp_r0_4;
    u32 temp_r0;
    u32 temp_r0_2;
    u8 temp_r0_3;
    u8 var_r0_3;
    void **temp_r7;
    void *temp_r0_5;
    void *temp_r4_3;

    arg0->unk40 = 0;
    (arg0 + 0x40)->unk2 = 0;
    if ((IsEmpty__C9ToolStack(arg0->unk38 + 0x5C) << 0x18) != 0) {
        var_r1 = arg0 + 0x3F;
        var_r0 = 0xF;
        goto block_60;
    }
    temp_r4 = arg0->unk38;
    spC = func_0800E550(temp_r4, GetTool__C9ToolStack(temp_r4 + 0x5C));
    temp_r0 = GetId__C4Tool();
    switch (temp_r0) {
    case 0x0:
    case 0x1:
    case 0x2:
    case 0x3:
    case 0x4:
    case 0x5:
    case 0x6:
    case 0x7:
        var_r1_2 = arg0 + 0x3F;
        var_r0_2 = 0;
block_49:
        *var_r1_2 = var_r0_2;
        temp_r4_2 = arg0->unk38;
        sp0.unkD = func_0800E550(temp_r4_2, GetTool__C9ToolStack(temp_r4_2 + 0x5C));
        temp_r0_2 = GetId__C4Tool();
        switch (temp_r0_2) {
        case 0:
        case 8:
        case 16:
        case 24:
        case 32:
        case 40:
            var_r1 = arg0 + 0x41;
            var_r0 = 1;
            break;
        case 1:
        case 9:
        case 17:
        case 25:
        case 33:
        case 41:
            var_r1 = arg0 + 0x41;
            var_r0 = 2;
            break;
        case 2:
        case 10:
        case 18:
        case 26:
        case 34:
        case 42:
            var_r1 = arg0 + 0x41;
            var_r0 = 3;
            break;
        case 3:
        case 11:
        case 19:
        case 27:
        case 35:
        case 43:
            var_r1 = arg0 + 0x41;
            var_r0 = 4;
            break;
        case 4:
        case 12:
        case 20:
        case 28:
        case 36:
        case 44:
            var_r1 = arg0 + 0x41;
            var_r0 = 5;
            break;
        case 5:
        case 6:
        case 13:
        case 14:
        case 21:
        case 22:
        case 29:
        case 30:
        case 37:
        case 38:
        case 45:
        case 46:
            var_r1 = arg0 + 0x41;
            var_r0 = 6;
            break;
        case 7:
        case 15:
        case 23:
        case 31:
        case 39:
        case 47:
            var_r1 = arg0 + 0x41;
            var_r0 = 7;
            break;
        default:
            var_r1 = arg0 + 0x41;
            var_r0 = 0;
            break;
        }
block_60:
        *var_r1 = var_r0;
        return;
    case 0x8:
    case 0x9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
        var_r1_2 = arg0 + 0x3F;
        var_r0_2 = 3;
        goto block_49;
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
        var_r1_2 = arg0 + 0x3F;
        var_r0_2 = 1;
        goto block_49;
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
        var_r1_2 = arg0 + 0x3F;
        var_r0_2 = 4;
        goto block_49;
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
        var_r5 = arg0->unkA;
        var_r4 = arg0->unkE;
        temp_r0_3 = arg0->unk20;
        switch (temp_r0_3) {
        case 1:
            var_r4 -= 0x10;
            break;
        case 0:
            var_r4 += 0x10;
            break;
        case 2:
            var_r5 -= 0x10;
            break;
        case 3:
            var_r5 += 0x10;
            break;
        }
        temp_r7 = arg0->unk0;
        (*temp_r7)->unk34(&sp0, temp_r7, arg0->unk4);
        temp_r5 = var_r5 >> 3;
        temp_r3 = var_r4 >> 3;
        temp_r0_4 = sp0.unk8;
        if ((sp0 != 0) && ((u32) temp_r5 <= (u32) temp_r0_4) && ((u32) temp_r3 <= (u32) sp0.unkA)) {
            var_r0_3 = (temp_r3 * temp_r0_4) + temp_r5;
            if (sp4 != 0) {
                var_r0_3 = *(sp4 + var_r0_3);
            }
            var_r0_4 = sp0 + (var_r0_3 * 4);
        } else {
            var_r0_4 = 0;
        }
        if ((var_r0_4 != 0) && ((s32) (*var_r0_4 << 0x1E) < 0)) {
            arg0->unk3C = 0x1B;
            (arg0 + 0x3C)->unk3 = 0xF;
            temp_r4_3 = arg0->unk14;
            temp_r4_3->unk64(arg0, -2, func_08025B10(arg0));
            temp_r0_5 = (*temp_r7)->unk14C(temp_r7);
            var_r4_2 = temp_r0_5->unk0;
            temp_r5_2 = temp_r0_5->unk4;
            if (var_r4_2 != temp_r5_2) {
loop_31:
                if ((func_08008CD0(*var_r4_2) << 0x18) != 0) {
                    var_r4_2 += 4;
                    if (var_r4_2 == temp_r5_2) {
                        goto block_33;
                    }
                    goto loop_31;
                }
                var_r0_5 = *var_r4_2;
            } else {
block_33:
                var_r0_5 = *(temp_r5_2 - 4);
            }
            func_08008B6C(var_r0_5, 0x92);
            return;
        }
        if (func_0800E94C(arg0->unk38) != 0) {
            var_r1_2 = arg0 + 0x3F;
            var_r0_2 = 2;
            goto block_49;
        }
        var_r1 = arg0 + 0x3F;
        var_r0 = 0xF;
        goto block_60;
    case 0x28:
    case 0x29:
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x2D:
    case 0x2E:
    case 0x2F:
        var_r1_2 = arg0 + 0x3F;
        var_r0_2 = 5;
        goto block_49;
    case 0x30:
        var_r1_2 = arg0 + 0x3F;
        var_r0_2 = 6;
        goto block_49;
    case 0x31:
        var_r1_2 = arg0 + 0x3F;
        var_r0_2 = 7;
        goto block_49;
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3A:
    case 0x3B:
    case 0x3C:
    case 0x3D:
    case 0x3E:
    case 0x3F:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
        var_r1_2 = arg0 + 0x3F;
        var_r0_2 = 8;
        goto block_49;
    case 0x46:
        var_r1_2 = arg0 + 0x3F;
        var_r0_2 = 9;
        goto block_49;
    case 0x47:
        var_r1_2 = arg0 + 0x3F;
        var_r0_2 = 0xA;
        goto block_49;
    case 0x48:
        var_r1_2 = arg0 + 0x3F;
        var_r0_2 = 0xB;
        goto block_49;
    case 0x49:
        var_r1_2 = arg0 + 0x3F;
        var_r0_2 = 0xC;
        goto block_49;
    case 0x4A:
        var_r1_2 = arg0 + 0x3F;
        var_r0_2 = 0xD;
        goto block_49;
    case 0x4B:
    case 0x4C:
    case 0x4D:
    case 0x4E:
    case 0x4F:
    case 0x50:
        var_r1_2 = arg0 + 0x3F;
        var_r0_2 = 0xE;
        goto block_49;
    default:
        var_r1_2 = arg0 + 0x3F;
        var_r0_2 = 0xF;
        goto block_49;
    }
}
