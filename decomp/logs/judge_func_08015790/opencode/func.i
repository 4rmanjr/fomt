# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08015790/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08015790/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08015790/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08015790/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08015790/opencode/func.c" 2
s32 GetBarnAnimal__4BarnUi(s32, u32);
u32 GetCapacity__C4Barn(s32);
u32 GetCapacity__C4Coop(s32);
s32 GetChicken__4CoopUi(s32, u32);
s32 RemoveAndRememberUnk__4BarnUi(s32, u32);
s32 RemoveAndRememberUnk__4CoopUi(s32, u32);
s32 func_0800F190(s32);
s32 func_0800F204(s32);
u32 func_0800F344(s32);
s32 func_0800F390(s32);
s32 method_0809B514__C9Livestock();

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[132];
    struct GenObj *unk8C;
    u8 _pad90[24];
    struct GenObj *unkA8;
} GenObj;
void func_08015790(GenObj *arg0) {
    s32 temp_r4;
    s32 temp_r5;
    u32 temp_r0_2;
    u32 temp_r0_4;
    u32 var_r4;
    u32 var_r4_2;
    void **temp_r0_3;
    void **temp_r0_5;
    GenObj *temp_r0;

    temp_r0 = arg0->unk4;
    temp_r0_2 = GetCapacity__C4Coop(temp_r0->unk8C + 0x410);
    var_r4 = 0;
    if (temp_r0_2 > 0U) {
        do {
            if ((GetChicken__4CoopUi(temp_r0->unk8C + 0x410, var_r4) != 0) && (method_0809B514__C9Livestock() == 1)) {
                temp_r0_3 = temp_r0->unkA8;
                (*temp_r0_3)->unk3C(temp_r0_3, var_r4 + 0x2E);
                RemoveAndRememberUnk__4CoopUi(temp_r0->unk8C + 0x410, var_r4);
            }
            var_r4 += 1;
        } while (var_r4 < temp_r0_2);
    }
    temp_r5 = temp_r0->unk8C + 0x1C2C;
    if (((func_0800F190(temp_r5) << 0x18) == 0) && (func_0800F204(temp_r5) == 3)) {
        temp_r4 = temp_r0->unk8C + 0x410;
        if (GetChicken__4CoopUi(temp_r4, func_0800F344(temp_r5)) == 0) {
            func_0800F390(temp_r0->unk8C + 0x1C2C);
        }
    }
    temp_r0_4 = GetCapacity__C4Barn(temp_r0->unk8C + 0x5F0);
    var_r4_2 = 0;
    if (temp_r0_4 > 0U) {
        do {
            if ((GetBarnAnimal__4BarnUi(temp_r0->unk8C + 0x5F0, var_r4_2) != 0) && (method_0809B514__C9Livestock() == 1)) {
                temp_r0_5 = temp_r0->unkA8;
                (*temp_r0_5)->unk3C(temp_r0_5, var_r4_2 + 0x36);
                RemoveAndRememberUnk__4BarnUi(temp_r0->unk8C + 0x5F0, var_r4_2);
            }
            var_r4_2 += 1;
        } while (var_r4_2 < temp_r0_4);
    }
}
