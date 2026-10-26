# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08024A80/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08024A80/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08024A80/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08024A80/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08024A80/opencode/func.c" 2
s32 GetChicken__4CoopUi(s32, s32);
s32 GetId__C7Article();
s32 GetLocation__C12AActorEntity(s32 *, void *);
s32 GetLocation__C7AEntity(s32 *, void *);
s32 SetLocation__5ActorRC13ActorLocation(s32, s32 *);
s32 __builtin_delete(void *);
s32 func_0800EB34(s32, s32 *);
s32 func_0800F190(s32);
u32 func_0800F204(s32);
s8 func_0800F258(s32);
s32 func_0800F344(s32);
s32 func_08010014(s32, s32 *);
s32 memcpy(s32, s32 *, s32);
extern s32 __vt_7AEntity;
extern s32 vtable_unk_080E6658;

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    struct GenObj *unk8;
    u8 _padC[4];
    s32 unk10;
    void *unk14;
    u8 _pad18[28];
    s32 unk34;
    s32 unk38;
} GenObj;
void func_08024A80(GenObj *arg0, s32 arg1) {
s32 sp0;
    s8 sp8;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r6;
    s32 var_r4;
    u32 temp_r0;
    GenObj *temp_r1;

    arg0->unk14 = &vtable_unk_080E6658;
    temp_r4 = arg0->unk38;
    GetLocation__C12AActorEntity(&sp0, arg0);
    func_0800EB34(temp_r4, &sp0);
    temp_r6 = arg0->unk38 + 0x54;
    if ((func_0800F190(temp_r6) << 0x18) == 0) {
        temp_r0 = func_0800F204(temp_r6);
        switch (temp_r0) {
        case 0:
        case 5:
            break;
        case 1:
            sp8 = func_0800F258(temp_r6);
            if (GetId__C7Article() == 0x35) {
                temp_r4_2 = arg0->unk34 + 0x1CCC;
                GetLocation__C7AEntity(&sp0, arg0);
                memcpy(temp_r4_2, &sp0, 6);
            }
            break;
        case 2:
            var_r4 = arg0->unk34 + 0x1C70;
block_7:
            GetLocation__C12AActorEntity(&sp0, arg0);
            SetLocation__5ActorRC13ActorLocation(var_r4, &sp0);
            break;
        case 3:
            temp_r4_3 = arg0->unk34 + 0x410;
            var_r4 = GetChicken__4CoopUi(temp_r4_3, func_0800F344(temp_r6));
            if (var_r4 != 0) {
                goto block_7;
            }
            break;
        case 4:
            temp_r4_4 = arg0->unk34 + 0x1CA0;
            GetLocation__C7AEntity(&sp0, arg0);
            func_08010014(temp_r4_4, &sp0);
            break;
        }
    }
    arg0->unk14 = &__vt_7AEntity;
    temp_r1 = arg0->unk10;
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk4->unk8))(temp_r1, 3);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
