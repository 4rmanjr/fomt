# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802A7E0/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802A7E0/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802A7E0/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802A7E0/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802A7E0/opencode/func.c" 2
s32 CanBeDiscarded__C7Article(s8 *);
s32 GetId__C7Article(s8 *);
s32 func_0800F190();
u32 func_0800F204(s32);
s8 func_0800F258(s32);
s32 func_0800F388(s32);
s32 func_080AC070(s32 *);
s32 func_080AC5D0(s32 *, s16, s16);

s32 func_0802A7E0(void *arg0) {
s32 sp0;
s32 spC;
    s8 sp14;
s32 sp18;
s32 sp20;
s32 sp28;
    void **sp30;
    ? *var_r1_2;
    s16 var_r4;
    s16 var_r7;
    s16 var_sb;
    s16 var_sl;
    s32 temp_r0_4;
    s32 temp_r8;
    s32 var_r1;
    u16 temp_r6;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u8 temp_r0;
    void **temp_r1;

    temp_r8 = arg0->unk38 + 0x54;
    if ((func_0800F190() << 0x18) != 0) {
        goto block_41;
    }
    if ((func_0800F388(temp_r8) << 0x18) != 0) {
        goto block_34;
    }
    var_sb = arg0->unkA;
    var_sl = arg0->unkE;
    var_r4 = var_sb;
    var_r7 = var_sl;
    temp_r0 = arg0->unk20;
    switch (temp_r0) {
    case 1:
        var_sl = var_r7 - 0x14;
        var_r7 -= 0x10;
        break;
    case 0:
        var_sl = var_r7 + 0x14;
        var_r7 += 0x10;
        break;
    case 2:
        var_sb = var_r4 - 0x14;
        var_r4 -= 0x10;
        break;
    case 3:
        var_sb = var_r4 + 0x14;
        var_r4 += 0x10;
        break;
    }
    temp_r1 = arg0->unk0;
    sp30 = temp_r1;
    temp_r6 = arg0->unk4;
    (*temp_r1)->unk34(&sp0, temp_r1, temp_r6);
    temp_r0_2 = func_0800F204(temp_r8);
    switch (temp_r0_2) {
    case 1:
        sp14 = func_0800F258(temp_r8);
        if ((CanBeDiscarded__C7Article(&sp14) << 0x18) == 0) {
            goto block_41;
        }
        temp_r0_3 = GetId__C7Article(&sp14) - 0x31;
        switch (temp_r0_3) {
        case 0:
            if ((func_080AC5D0(&sp0, var_sb, var_sl) << 0x18) != 0) {
                goto block_34;
            }
        case 1:
        case 40:
        case 41:
            spC.unk0 = (u16) ((0xFFFFFC00 & spC.unk0) | (temp_r6 & 0x3FF));
            spC.unk1 = (u8) ((3 & spC.unk1) | (((u16) var_r4 & 0x3F) * 4));
            spC.unk2 = (u16) ((0xFFFFFC00 & spC.unk2) | (((u32) (var_r4 << 0x10) >> 0x16) & 0x3FF));
            spC.unk3 = (u8) ((3 & spC.unk3) | (((u16) var_r7 & 0x3F) * 4));
            spC.unk4 = (u16) ((0xFFFFFC00 & spC.unk4) | (((u32) (var_r7 << 0x10) >> 0x16) & 0x3FF));
            temp_r0_4 = (*sp30)->unkE8(sp30, &spC, &sp14);
            switch (temp_r0_4) {
            case 0:
                return 1;
            case 2:
                if (GetId__C7Article(&sp14) != 0x31) {
                case 0:
                case 2:
                case 3:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                case 11:
                case 12:
                case 13:
                case 14:
                case 15:
                case 16:
                case 17:
                case 18:
                case 19:
                case 20:
                case 21:
                case 22:
                case 23:
                case 24:
                case 25:
                case 26:
                case 27:
                case 28:
                case 29:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                case 35:
                case 36:
                case 37:
                case 38:
                case 39:
block_34:
                    return 0;
                }
            case 5:
            case 1:
block_41:
                return 2;
            }
            break;
        case 4:
            return 3;
        }
        break;
    case 2:
        var_r1_2 = &sp18;
block_38:
        var_r1_2->unk0 = (s16) (var_r4 - 7);
        var_r1_2->unk2 = (s16) (var_r7 - 4);
        var_r1_2->unk4 = (s16) (var_r4 + 7);
        var_r1_2->unk6 = (s16) (var_r7 + 5);
        var_r1 = 1;
        if ((func_080AC070(&sp0) << 0x18) != 0) {
            var_r1 = 2;
        }
        return var_r1;
    case 3:
        var_r1_2 = &sp20;
        goto block_38;
    case 4:
        var_r1_2 = &sp28;
        goto block_38;
    }
}
