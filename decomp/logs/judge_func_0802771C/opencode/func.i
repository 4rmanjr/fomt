# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802771C/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802771C/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802771C/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802771C/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
typedef struct { u8 pad[0x24]; u8 v; } S_AD0;typedef struct { u8 pad[0x25]; u8 v; } S_AD8;typedef struct { u8 pad[0x26]; u8 v; } S_AE0;typedef struct { u8 pad[0x14]; u8 v; } S_CD8;typedef struct { u8 pad[3]; u8 v; } S_39C;typedef struct { u8 pad[0x58]; u8 v; } S_601C;typedef struct { u8 pad[0x14]; u8 v; } S_B68;typedef struct { u8 pad[0x26]; u8 v; } S_AEC;typedef struct { u8 pad[0xB30]; u8 v; } S_44E0;typedef struct { u8 pad[0x92C]; u8 v; } S_4D8;typedef struct {
    s32 unk0;
    s32 unk4;
    void (*unk8)(void *, s32);
} Vtbl;typedef struct {
    Vtbl *vtbl;
} Obj;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802771C/opencode/func.c" 2
s16 GetIconId__C4Tool(s8 *);
s32 GetTool__C9ToolStack(s32);
s32 SetAnim__12AActorEntityUi(void *, u16);
s32 func_08008B6C(s32, s32);
s32 func_08008CD0(s32);
s8 func_0800E550(s32, s32);
s32 func_0800F190(s32);
s32 func_0805E850(void *, s32, s32);
s32 func_0809ABD8(s32);
extern s32 gUnk_080F0FCC;

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk1;
    struct GenObj *unk4;
    struct GenObj *unk8;
    u8 _padC[4];
    s32 unk10;
    struct GenObj *unk14;
    u8 _pad18[10];
    s32 unk22;
    u8 _pad26[14];
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk3D;
    s32 unk3E;
    s32 unk3F;
    s32 unk40;
    s32 unk44;
    u8 _pad48[6];
    s32 unk4E;
    s32 unk4F;
    u8 _pad53[41];
    s32 unk7C;
    u8 _pad80[8];
    s32 unk88;
    u8 _pad8C[39];
    s32 unkB3;
    u8 _padB7[9];
    s32 unkC0;
    u8 _padC4[4];
    struct GenObj *unkC8;
} GenObj;
void func_0802771C(GenObj *arg0) {
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
    s32 var_r0_2;
    s32 var_r1_3;
    s8 *var_r0;
    s8 var_r1_2;
    u16 var_r1;
    u16 var_r5;
    u8 temp_r0_3;
    u8 temp_r0_4;
    u8 temp_r0_5;
    u8 temp_r0_7;
    u8 temp_r3;
    void **temp_r0_10;
    void **temp_r0_6;
    void **temp_r0_8;
    void **temp_r0_9;
    GenObj *temp_r0;
    void *temp_r0_11;
    void *temp_r0_2;
    GenObj *temp_r4;
    void *var_r2;

    func_0809ABD8(arg0->unk34 + 0x1AA8);
    temp_r0 = (GenObj *)((u8 *)arg0 + 0x88);
    arg0->unk88 = 1;
    temp_r0->unk1 = 0;
    temp_r0->unk4 = 0;
    temp_r0->unk8 = 0;
    temp_r0->unk14 = 0x150000;
    temp_r4 = arg0->unk10;
    if (temp_r4 != 0) {
        func_0805E850((GenObj *)((u8 *)temp_r4 + 0xB4), (**temp_r4->unk0)->unk64(), 0x6A);
        temp_r0_2 = (GenObj *)((u8 *)temp_r4 + 0xC8);
        temp_r4->unkC8 = 1;
        temp_r0_2->unk2 = 0;
        (temp_r0_2 + 2)->unk1 = 1;
    }
    arg0->unk3C = 0x31U;
    var_r5 = 0x192;
    arg0->unk7C = 0xFFFF;
    temp_r0_3 = arg0->unk3C;
    switch ((u32) temp_r0_3) {
    case 0x0:
        if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) == 0) {
            temp_r0_4 = arg0->unk3E;
            switch (temp_r0_4) {
            case 1:
block_89:
                var_r5 = 0x156;
                break;
            case 0:
            case 0x30:
            case 0x32:
            case 0x38:
            case 0x39:
block_85:
                var_r5 = 0x152;
                break;
            case 2:
                var_r5 = 0x14E;
                break;
            }
        } else {
            temp_r0_5 = arg0->unk3E;
            switch (temp_r0_5) {
            case 0:
            case 0x19:
            case 0x1A:
block_47:
                var_r5 = 0x192;
                break;
            case 1:
                var_r1 = 0x132;
                if (arg0->unkB3 == 0) {
                    var_r1 = 0x1C6;
                }
block_26:
                var_r5 = var_r1;
                break;
            case 2:
                var_r1 = 0x132;
                if (arg0->unkB3 == 0) {
                    var_r1 = 0x15E;
                }
                goto block_26;
            }
        }
        break;
    case 0x2:
        if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) == 0) {
            goto block_85;
        }
        temp_r3 = arg0->unk3F;
        if (((s32) temp_r3 <= 5) && ((s32) temp_r3 >= 0)) {
            var_r5 = *((((temp_r3 * 7) + arg0->unk40) * 2) + &gUnk_080F0FCC);
            temp_r4_2 = arg0->unk38;
            sp0 = func_0800E550(temp_r4_2, GetTool__C9ToolStack(temp_r4_2 + 0x5C));
            var_r0 = &sp0;
block_55:
            arg0->unk7C = GetIconId__C4Tool(var_r0);
        } else {
            goto block_47;
        }
        break;
    case 0x4:
        var_r5 = 0x192;
        if ((func_0800F190(arg0->unk38 + 0x54) << 0x18) != 0) {

        } else {
            goto block_85;
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
        var_r0 = &sp0 + 1;
block_54:
        *var_r0 = var_r1_2;
        goto block_55;
    case 0x1B:
        var_r5 = 0x1EA;
        temp_r4_4 = arg0->unk38;
        var_r1_2 = func_0800E550(temp_r4_4, GetTool__C9ToolStack(temp_r4_4 + 0x5C));
        var_r0 = &sp0 + 2;
        goto block_54;
    case 0x1C:
    case 0x1D:
        if (arg0->unk4E == arg0->unk4F) {
            goto block_47;
        }
        var_r5 = 0x182;
        if ((arg0->unk4F - arg0->unk4E) == 1) {
            var_r5 = 0x186;
        }
        temp_r4_5 = arg0->unk38;
        var_r1_2 = func_0800E550(temp_r4_5, GetTool__C9ToolStack(temp_r4_5 + 0x5C));
        var_r0 = &sp0 + 3;
        goto block_54;
    case 0x1E:
        var_r5 = 0x76;
        temp_r4_6 = arg0->unk38;
        var_r1_2 = func_0800E550(temp_r4_6, GetTool__C9ToolStack(temp_r4_6 + 0x5C));
        var_r0 = &sp4;
        goto block_54;
    case 0x1F:
        var_r5 = 0x6E;
        temp_r4_7 = arg0->unk38;
        var_r1_2 = func_0800E550(temp_r4_7, GetTool__C9ToolStack(temp_r4_7 + 0x5C));
        var_r0 = &sp0 + 5;
        goto block_54;
    case 0x20:
        var_r5 = 0x72;
        temp_r4_8 = arg0->unk38;
        var_r1_2 = func_0800E550(temp_r4_8, GetTool__C9ToolStack(temp_r4_8 + 0x5C));
        var_r0 = &sp0 + 6;
        goto block_54;
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
        temp_r0_6 = arg0->unk0;
        var_r2 = (*temp_r0_6)->unk40(temp_r0_6, 0x2C);
        temp_r0_7 = arg0->unk3E;
        switch (temp_r0_7) {
        case 0:
            var_r5 = 0xEA;
            var_r1_3 = 0x77A;
block_81:
            if (var_r2->unk22 != var_r1_3) {
                SetAnim__12AActorEntityUi(var_r2);
            }
            break;
        case 1:
            var_r5 = 0xEE;
            var_r1_3 = 0x77E;
            goto block_81;
        case 2:
            var_r5 = 0xE6;
            var_r1_3 = 0x782;
            goto block_81;
        }
        break;
    case 0x22:
        var_r5 = 0x15A;
        temp_r0_8 = arg0->unk0;
        var_r2 = (*temp_r0_8)->unk40(temp_r0_8, 0x2C);
        var_r1_3 = 0x77A;
        goto block_81;
    case 0x23:
        var_r5 = 0x9A;
        temp_r0_9 = arg0->unk0;
        var_r2 = (*temp_r0_9)->unk40(temp_r0_9, 0x2C);
        var_r1_3 = 0x77A;
        goto block_81;
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
        temp_r0_10 = arg0->unk0;
        var_r2 = (*temp_r0_10)->unk40(temp_r0_10, 0x2C);
        var_r1_3 = 0x792;
        goto block_81;
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
            goto block_89;
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
    temp_r0_11 = (*arg0->unk0)->unk14C();
    var_r4 = temp_r0_11->unk0;
    temp_r5 = temp_r0_11->unk4;
    if (var_r4 != temp_r5) {
loop_94:
        if ((func_08008CD0(*var_r4) << 0x18) != 0) {
            var_r4 += 4;
            if (var_r4 == temp_r5) {
                goto block_96;
            }
            goto loop_94;
        }
        var_r0_2 = *var_r4;
    } else {
block_96:
        var_r0_2 = *(temp_r5 - 4);
    }
    func_08008B6C(var_r0_2, 0x6A);
    arg0->unkC0 = 1;
}
