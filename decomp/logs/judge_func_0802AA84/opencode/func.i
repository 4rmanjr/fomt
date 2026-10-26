# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802AA84/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802AA84/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802AA84/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802AA84/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802AA84/opencode/func.c" 2
u32 GetSize__C8Rucksack(s32);
s32 GetToolAt__C8RucksackUi(s32, u32);
s32 GetToolStackAt__C9ToolChestUi(s32, u32);
s32 GetTool__C9ToolStack(s32);
s32 IsEmpty__C9ToolStack(s32);
s8 func_0800E550(s32, s32);
s32 func_080246BC(s32);
s32 memcpy(s32 *, s32 *, s32);
extern s32 gUnk_080F11B4;

typedef struct GenObj {
    u8 _pad0[9];
    s32 unk9;
    s32 unkA;
    u8 _padE[38];
    s32 unk34;
} GenObj;
u8 func_0802AA84(GenObj *arg0) {
GenObj sp0;
    s8 sp8;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r7;
    s32 temp_r7_2;
    s32 var_sb;
    u32 var_r6;
    u32 var_r6_2;

    var_sb = 0;
    temp_r5 = arg0->unk34 + 0x1C34;
    if ((IsEmpty__C9ToolStack(temp_r5) << 0x18) == 0) {
        temp_r4 = arg0->unk34 + 0x1BD8;
        sp8 = func_0800E550(temp_r4, GetTool__C9ToolStack(temp_r5));
        var_sb = func_080246BC(0);
    }
    temp_r7 = arg0->unk34 + 0x1C38;
    var_r6 = 0;
loop_6:
    if (var_r6 < GetSize__C8Rucksack(temp_r7)) {
        temp_r5_2 = GetToolAt__C8RucksackUi(temp_r7, var_r6);
        if ((IsEmpty__C9ToolStack() << 0x18) == 0) {
            temp_r4_2 = arg0->unk34 + 0x1BD8;
            sp0.unk9 = func_0800E550(temp_r4_2, GetTool__C9ToolStack(temp_r5_2));
            var_sb = func_080246BC(var_sb);
        }
        var_r6 += 1;
        goto loop_6;
    }
    temp_r7_2 = arg0->unk34 + 0x380;
    var_r6_2 = 0;
    do {
        temp_r5_3 = GetToolStackAt__C9ToolChestUi(temp_r7_2, var_r6_2);
        if ((IsEmpty__C9ToolStack() << 0x18) == 0) {
            temp_r4_3 = arg0->unk34 + 0x1BD8;
            sp0.unkA = func_0800E550(temp_r4_3, GetTool__C9ToolStack(temp_r5_3));
            var_sb = func_080246BC(var_sb);
        }
        var_r6_2 += 1;
    } while (var_r6_2 <= 0x3FU);
    memcpy(&sp0, &gUnk_080F11B4, 7);
    return *(&sp0 + var_sb);
}
