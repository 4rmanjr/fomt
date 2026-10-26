# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08028644/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08028644/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08028644/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08028644/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08028644/opencode/func.c" 2
s16 GetIconId__C4Tool(s8 *);
s32 GetTool__C9ToolStack(s32);
s32 SetAnim__12AActorEntityUi(void *, u16);
s32 func_08008B6C(s32, s32);
s32 func_08008CD0(s32);
s8 func_0800E550(s32, s32);
u8 func_0800F190(s32);
extern ? gUnk_080F0FCC;

void func_08028644(void *arg0) {
    s8 sp0;
    s8 sp4;
    s32 *var_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r5;
    s32 var_r0;
    s32 var_r0_3;
    s32 var_r1_3;
    s8 *var_r0_2;
    s8 var_r1_2;
    u16 var_r1;
    u16 var_r5;
    u8 *temp_r1;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;
    u8 temp_r0_5;
    u8 temp_r3;
    u8 temp_r3_2;
    u8 temp_r4;
    void **temp_r0_4;
    void **temp_r0_6;
    void **temp_r0_7;
    void **temp_r0_8;
    void *temp_r0_9;
    void *temp_r2;
    void *var_r2;

    temp_r4 = func_0800F190(arg0->unk34 + 0x1C2C);
    if (temp_r4 != 0) {
        return;
    }
    arg0->unkC0 = 1;
    temp_r1 = (arg0 + 0xC0) - 0x84;
    *temp_r1 = 0xB;
    temp_r2 = arg0 + 0x88;
    temp_r2->unk4 = (s32) temp_r4;
    temp_r2->unk8 = (s32) temp_r4;
    temp_r2->unk14 = 0x150000;
    temp_r3 = arg0->unk20;
    switch (temp_r3) {
    case 2:
        var_r0 = 0xFFFE5556;
block_11:
        temp_r2->unkC = var_r0;
        temp_r2->unk10 = (s32) temp_r4;
        temp_r2->unk18 = (s32) temp_r4;
        break;
    case 3:
        var_r0 = 0x1AAAA;
        goto block_11;
    case 1:
        temp_r2->unkC = (s32) temp_r4;
        temp_r2->unk10 = 0xFFFE5556;
        temp_r2->unk18 = (s32) temp_r4;
        break;
    case 0:
        temp_r2->unkC = (s32) temp_r3;
        temp_r2->unk10 = 0x1AAAA;
        temp_r2->unk18 = (s32) temp_r3;
        break;
    }
    var_r5 = 0x192;
    arg0->unk7C = 0xFFFF;
    temp_r0 = *temp_r1;
    switch ((u32) temp_r0) {
    case 0x0:
        if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) == 0) {
            temp_r0_2 = arg0->unk3E;
            switch (temp_r0_2) {
            case 1:
block_101:
                var_r5 = 0x156;
                break;
            case 0:
            case 0x30:
            case 0x32:
            case 0x38:
            case 0x39:
block_97:
                var_r5 = 0x152;
                break;
            case 2:
                var_r5 = 0x14E;
                break;
            }
        } else {
            temp_r0_3 = arg0->unk3E;
            switch (temp_r0_3) {
            case 0:
            case 0x19:
            case 0x1A:
block_59:
                var_r5 = 0x192;
                break;
            case 1:
                var_r1 = 0x132;
                if (arg0->unkB3 == 0) {
                    var_r1 = 0x1C6;
                }
block_38:
                var_r5 = var_r1;
                break;
            case 2:
                var_r1 = 0x132;
                if (arg0->unkB3 == 0) {
                    var_r1 = 0x15E;
                }
                goto block_38;
            }
        }
        break;
    case 0x2:
        if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) == 0) {
            goto block_97;
        }
        temp_r3_2 = arg0->unk3F;
        if (((s32) temp_r3_2 <= 5) && ((s32) temp_r3_2 >= 0)) {
            var_r5 = *((((temp_r3_2 * 7) + arg0->unk40) * 2) + &gUnk_080F0FCC);
            temp_r4_2 = arg0->unk38;
            sp0 = func_0800E550(temp_r4_2, GetTool__C9ToolStack(temp_r4_2 + 0x5C));
            var_r0_2 = &sp0;
block_67:
            arg0->unk7C = GetIconId__C4Tool(var_r0_2);
        } else {
            goto block_59;
        }
        break;
    case 0x4:
        var_r5 = 0x192;
        if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) != 0) {

        } else {
            goto block_97;
        }
        break;
    case 0x1:
    case 0x3:
    case 0x5:
        var_r5 = 0x192;
        if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) != 0) {

        } else {
            var_r5 = 0x152;
        }
        break;
    case 0xD:
        var_r5 = 0x136;
        break;
    case 0xB:
    case 0xC:
    case 0xE:
        var_r5 = 0x19E;
        break;
    case 0xF:
        var_r5 = 0x4E;
        break;
    case 0x10:
        var_r5 = 0x46;
        break;
    case 0x13:
        var_r5 = 0x13E;
        break;
    case 0x14:
        var_r5 = 0x142;
        break;
    case 0x9:
        var_r5 = arg0->unk44;
        temp_r4_3 = arg0->unk38;
        var_r1_2 = func_0800E550(temp_r4_3, GetTool__C9ToolStack(temp_r4_3 + 0x5C));
        var_r0_2 = &sp0 + 1;
block_66:
        *var_r0_2 = var_r1_2;
        goto block_67;
    case 0x1B:
        var_r5 = 0x1EA;
        temp_r4_4 = arg0->unk38;
        var_r1_2 = func_0800E550(temp_r4_4, GetTool__C9ToolStack(temp_r4_4 + 0x5C));
        var_r0_2 = &sp0 + 2;
        goto block_66;
    case 0x1C:
    case 0x1D:
        if (arg0->unk4E == arg0->unk4F) {
            goto block_59;
        }
        var_r5 = 0x182;
        if ((arg0->unk4F - arg0->unk4E) == 1) {
            var_r5 = 0x186;
        }
        temp_r4_5 = arg0->unk38;
        var_r1_2 = func_0800E550(temp_r4_5, GetTool__C9ToolStack(temp_r4_5 + 0x5C));
        var_r0_2 = &sp0 + 3;
        goto block_66;
    case 0x1E:
        var_r5 = 0x76;
        temp_r4_6 = arg0->unk38;
        var_r1_2 = func_0800E550(temp_r4_6, GetTool__C9ToolStack(temp_r4_6 + 0x5C));
        var_r0_2 = &sp4;
        goto block_66;
    case 0x1F:
        var_r5 = 0x6E;
        temp_r4_7 = arg0->unk38;
        var_r1_2 = func_0800E550(temp_r4_7, GetTool__C9ToolStack(temp_r4_7 + 0x5C));
        var_r0_2 = &sp0 + 5;
        goto block_66;
    case 0x20:
        var_r5 = 0x72;
        temp_r4_8 = arg0->unk38;
        var_r1_2 = func_0800E550(temp_r4_8, GetTool__C9ToolStack(temp_r4_8 + 0x5C));
        var_r0_2 = &sp0 + 6;
        goto block_66;
    case 0x16:
        var_r5 = 0x1FA;
        break;
    case 0x17:
        var_r5 = 0x196;
        break;
    case 0x6:
        var_r5 = 0x112;
        break;
    case 0x18:
        var_r5 = 0x116;
        break;
    case 0x7:
        temp_r0_4 = arg0->unk0;
        var_r2 = (*temp_r0_4)->unk40(temp_r0_4, 0x2C);
        temp_r0_5 = arg0->unk3E;
        switch (temp_r0_5) {
        case 0:
            var_r5 = 0xEA;
            var_r1_3 = 0x77A;
block_93:
            if (var_r2->unk22 != var_r1_3) {
                SetAnim__12AActorEntityUi(var_r2);
            }
            break;
        case 1:
            var_r5 = 0xEE;
            var_r1_3 = 0x77E;
            goto block_93;
        case 2:
            var_r5 = 0xE6;
            var_r1_3 = 0x782;
            goto block_93;
        }
        break;
    case 0x22:
        var_r5 = 0x15A;
        temp_r0_6 = arg0->unk0;
        var_r2 = (*temp_r0_6)->unk40(temp_r0_6, 0x2C);
        var_r1_3 = 0x77A;
        goto block_93;
    case 0x23:
        var_r5 = 0x9A;
        temp_r0_7 = arg0->unk0;
        var_r2 = (*temp_r0_7)->unk40(temp_r0_7, 0x2C);
        var_r1_3 = 0x77A;
        goto block_93;
    case 0x24:
        var_r5 = 0x106;
        break;
    case 0x25:
        var_r5 = 0x102;
        break;
    case 0x26:
        var_r5 = 0xFE;
        break;
    case 0x27:
        var_r5 = 0xFA;
        break;
    case 0x28:
        var_r5 = 0x122;
        break;
    case 0x29:
        var_r5 = 0x11E;
        break;
    case 0x2A:
    case 0x2B:
        var_r5 = 0x11A;
        break;
    case 0x2C:
        var_r5 = 0x14A;
        if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) != 0) {
            var_r5 = 0x10A;
        }
        break;
    case 0x2D:
        var_r5 = 0xE2;
        temp_r0_8 = arg0->unk0;
        var_r2 = (*temp_r0_8)->unk40(temp_r0_8, 0x2C);
        var_r1_3 = 0x792;
        goto block_93;
    case 0x2E:
        var_r5 = 0x3E;
        break;
    case 0x11:
    case 0x21:
    case 0x31:
    case 0x36:
    case 0x37:
        var_r5 = 0x146;
        break;
    case 0x12:
    case 0x33:
        var_r5 = 0x13A;
        break;
    case 0xA:
    case 0x15:
    case 0x2F:
    case 0x34:
        var_r5 = 0x42;
        break;
    case 0x35:
        var_r5 = 0x1C6;
        if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) == 0) {
            goto block_101;
        }
        break;
    case 0x8:
        var_r5 = 0xF6;
        if (arg0->unk3D != 0) {
            var_r5 = 0xF2;
        }
        break;
    }
    SetAnim__12AActorEntityUi(arg0, var_r5);
    temp_r0_9 = (*arg0->unk0)->unk14C();
    var_r4 = temp_r0_9->unk0;
    temp_r5 = temp_r0_9->unk4;
    if (var_r4 != temp_r5) {
loop_106:
        if ((func_08008CD0(*var_r4) << 0x18) != 0) {
            var_r4 += 4;
            if (var_r4 == temp_r5) {
                goto block_108;
            }
            goto loop_106;
        }
        var_r0_3 = *var_r4;
    } else {
block_108:
        var_r0_3 = *(temp_r5 - 4);
    }
    func_08008B6C(var_r0_3, 0x6C);
}
