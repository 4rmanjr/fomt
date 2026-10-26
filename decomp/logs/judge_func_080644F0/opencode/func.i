# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080644F0/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080644F0/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080644F0/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080644F0/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080644F0/opencode/func.c" 2
u32 GetCapacity__C4Barn(s32);
s32 GetGrowthStage__C5Sheep();
s32 GetSheep__C4BarnUi(s32, u32);
s32 IsPregnant__C10BarnAnimal(s32);
s32 IsSheared__C5Sheep(s32);
s32 func_08062E9C(void *, s32, ?, s32, s32 *);
s32 func_08063EB8(void *, u32, s32, s32 *, s32 *);
s32 func_08075E24(s32, s16);
extern s32 gUnk_080FB8A4;
extern s32 gUnk_0875320C;
extern s32 gUnk_0875328C;
extern s32 gUnk_087532AC;
extern s32 gUnk_0875332C;
extern s32 gUnk_0875334C;
extern s32 gUnk_087533CC;
extern s32 gUnk_087533EC;
extern s32 gUnk_0875346C;
extern s32 vtable_unk_080E7A38;

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[1412];
    s32 unk58C;
    u8 _pad590[36];
    void *unk5B4;
} GenObj;
void *func_080644F0(GenObj *arg0, ? arg1, ? arg2) {
    s32 *var_r5;
    s32 *var_r6;
    s32 temp_r0_2;
    s32 temp_r0_3;
    u32 temp_r0;
    u32 var_r8;
    u32 var_sb;

    func_08062E9C(arg0, arg1, arg2, 0x55, &gUnk_080FB8A4);
    arg0->unk5B4 = &vtable_unk_080E7A38;
    var_r8 = 0;
    var_sb = 0;
    temp_r0 = GetCapacity__C4Barn(arg0->unk58C + 0x5F0);
    if (temp_r0 > 0U) {
        do {
            temp_r0_2 = GetSheep__C4BarnUi(arg0->unk58C + 0x5F0, var_sb);
            if (temp_r0_2 != 0) {
                temp_r0_3 = GetGrowthStage__C5Sheep();
                if ((temp_r0_3 != 0) && (temp_r0_3 == 1)) {
                    var_r6 = &gUnk_0875320C;
                    var_r5 = &gUnk_0875328C;
                    if ((IsPregnant__C10BarnAnimal(temp_r0_2) << 0x18) != 0) {
                        var_r6 = &gUnk_0875334C;
                        var_r5 = &gUnk_087533CC;
                    } else if ((IsSheared__C5Sheep(temp_r0_2) << 0x18) != 0) {
                        var_r6 = &gUnk_087532AC;
                        var_r5 = &gUnk_0875332C;
                    }
                } else {
                    var_r6 = &gUnk_087533EC;
                    var_r5 = &gUnk_0875346C;
                }
                func_08063EB8(arg0, var_r8, temp_r0_2, var_r6, var_r5);
                var_r8 += 1;
            }
            var_sb += 1;
        } while (var_sb < temp_r0);
    }
    func_08075E24(arg0->unk4, (s16) (((var_r8 * 5) + 5) * 8));
    return arg0;
}
