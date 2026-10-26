# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080228B4/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080228B4/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080228B4/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080228B4/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080228B4/opencode/func.c" 2
s32 GetGrowthStage__C7Chicken(s32);
s32 SetAnimFacing__12AActorEntityUi(void *, s32);
s32 SetAnim__12AActorEntityUi(void *);
s32 func_08020080(void *, s32);
s32 func_08022980();
s32 func_080229A4(void *, u8);
s32 func_08032384(void *, s32, s32);
s32 func_080323C8(void *);

typedef struct GenObj {
    s32 unk0;
    u8 _pad4[28];
    s32 unk20;
    s32 unk22;
    u8 _pad26[14];
    s32 unk34;
    s32 unk38;
} GenObj;
void func_080228B4(GenObj *arg0, u8 arg1, s32 arg2) {
    s32 var_r1;
    s32 var_r6;

    if (arg0->unk22 != func_08022980()) {
        SetAnim__12AActorEntityUi(arg0);
    }
    if (arg0->unk20 != arg2) {
        SetAnimFacing__12AActorEntityUi(arg0, arg2);
    }
    func_08020080(arg0, func_080229A4(arg0, arg1));
    if (arg1 != arg0->unk38) {
        var_r6 = -1;
        var_r1 = 0;
        if (GetGrowthStage__C7Chicken(arg0->unk34) != 0) {
            var_r1 = 3;
        }
        if ((arg1 == var_r1) && ((u32) (((u32) ((*arg0->unk0)->unk144()->unkA << 0x1B) >> 0x1B) - 6) > 0xEU)) {
            var_r6 = 8;
        }
        if (var_r6 >= 0) {
            func_08032384(arg0, var_r6, 1);
        } else {
            func_080323C8(arg0);
        }
    }
    arg0->unk38 = arg1;
}
