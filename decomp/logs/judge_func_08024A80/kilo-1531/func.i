# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08024A80/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08024A80/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08024A80/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08024A80/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08024A80/kilo-1531/func.c" 2
s32 GetChicken__4CoopUi(s32, s32);
s32 GetId__C7Article();
s32 GetLocation__C12AActorEntity(s32 *, void *);
s32 GetLocation__C7AEntity(s32 *, void *);
s32 SetLocation__5ActorRC13ActorLocation(s32, ? *);
s32 __builtin_delete(void *);
s32 func_0800EB34(s32, ? *);
s32 func_0800F190(s32);
u32 func_0800F204(s32);
s8 func_0800F258(s32);
s32 func_0800F344(s32);
s32 func_08010014(s32, ? *);
s32 memcpy(s32, ? *, s32);
extern ? __vt_7AEntity;
extern ? vtable_unk_080E6658;

void func_08024A80(void *arg0, s32 arg1) {
s32 sp0;
    s8 sp8;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r6;
    s32 var_r4;
    u32 temp_r0;
    void *temp_r1;

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
        temp_r1->unk4->unk8(temp_r1, 3);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
