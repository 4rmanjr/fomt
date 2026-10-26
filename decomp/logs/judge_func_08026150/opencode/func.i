# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08026150/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08026150/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08026150/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08026150/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08026150/opencode/func.c" 2
s32 ForceEnableDisplay__11ShippingBini(s32, s32);
s32 GetArticle__C12RucksackItem(s32 *);
s32 GetFood__C12RucksackItem(s32 *, s32 *);
s32 GetId__C7Product(u8 *);
s32 GetKind__C12RucksackItem(s32 *);
s32 GetPrice__C7Product(u8 *);
s32 IsDisplayEnabled__C11ShippingBini(s32, s32);
s32 __7Product(u8 *);
s32 __7ProductG4Food(u8 *, s32);
s32 __7ProductG7Article(u8 *, s32);
s32 func_08008B6C(s32, s32);
s32 func_08008CD0(s32);
s32 func_0800F418(s32);
s32 func_0800F528(s32);
s32 func_0802A588(void *);

void func_08026150(void *arg0, s32 *arg1, u8 arg2) {
s32 sp0;
    s32 sp4;
    u8 sp8;
    s32 *var_r4_2;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;
    s32 var_r0_2;
    s32 var_r1;
    u8 *var_r4;
    u8 temp_r3;
    void *temp_r0_2;
    void *var_r0;

    __7Product(&sp8);
    temp_r0 = GetKind__C12RucksackItem(arg1);
    switch (temp_r0) {
    case 0:
        var_r4 = &sp0 + 9;
        GetFood__C12RucksackItem(&sp0, arg1);
        __7ProductG4Food(var_r4, (sp0.unk2 << 0x10) | ((sp0.unk1 << 8) | sp0.unk0));
block_5:
        sp8 = *var_r4;
        break;
    case 1:
        var_r4 = &sp0 + 0xA;
        __7ProductG7Article(var_r4, GetArticle__C12RucksackItem(arg1));
        goto block_5;
    }
    temp_r4 = arg0->unk34 + 0x54;
    if ((GetPrice__C7Product(&sp8) != 0) && ((IsDisplayEnabled__C11ShippingBini(temp_r4, GetId__C7Product(&sp8)) << 0x18) == 0)) {
        ForceEnableDisplay__11ShippingBini(temp_r4, GetId__C7Product(&sp8));
    }
    sp4 = *arg1;
    func_0800F418(arg0->unk38 + 0x54);
    if (arg2 != 0) {
        func_0800F528(arg0->unk38 + 0x54);
    }
    func_0802A588(arg0);
    arg0->unk3C = 0x11;
    temp_r3 = *((arg0 + 0x3C) - 0x1C);
    switch (temp_r3) {
    case 2:
        var_r0 = arg0 + 0x88;
        var_r0->unk4 = 0xFFF60000;
        var_r0->unk8 = 0;
block_24:
        var_r0->unk14 = 0xC0000;
        break;
    case 3:
        var_r0 = arg0 + 0x88;
        var_r0->unk4 = 0xA0000;
        var_r0->unk8 = 0;
        goto block_24;
    case 1:
        var_r0 = arg0 + 0x88;
        var_r1 = 0xFFF60000;
        var_r0->unk4 = 0;
block_23:
        var_r0->unk8 = var_r1;
        goto block_24;
    case 0:
        var_r0 = arg0 + 0x88;
        var_r1 = 0xA0000;
        var_r0->unk4 = (s32) temp_r3;
        goto block_23;
    }
    temp_r0_2 = (*arg0->unk0)->unk14C();
    var_r4_2 = temp_r0_2->unk0;
    temp_r5 = temp_r0_2->unk4;
    if (var_r4_2 != temp_r5) {
loop_26:
        if ((func_08008CD0(*var_r4_2) << 0x18) != 0) {
            var_r4_2 += 4;
            if (var_r4_2 == temp_r5) {
                goto block_28;
            }
            goto loop_26;
        }
        var_r0_2 = *var_r4_2;
    } else {
block_28:
        var_r0_2 = *(temp_r5 - 4);
    }
    func_08008B6C(var_r0_2, 0x6A);
}
