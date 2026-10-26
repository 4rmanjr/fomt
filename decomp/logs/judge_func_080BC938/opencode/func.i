# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080BC938/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080BC938/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080BC938/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080BC938/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080BC938/opencode/func.c" 2
void *__builtin_new(s32);
s32 func_0800770C(s32 *);
s32 func_08007714(s32 *, s32);
s32 func_08007874(void *);
s32 func_0800835C(s32 *);
s32 func_08008364(s32 *, s32);
s32 func_08008444();
s32 func_08008918(void *);
s32 func_08008B54(void *, s32);
s32 func_08009300(void *, s32);
s32 func_08050CC0(void *, s32, s32, s32, s32, ? *, ? *);
s32 func_0805E6CC(void *, ? *);
extern ? gUnk_0858BA28;
extern ? gUnk_086678A0;
extern ? gUnk_0871D51C;
extern ? gUnk_0872BE64;
extern ? gUnk_0873D6D8;
extern ? gUnk_0873DE44;
extern ? gUnk_0873E5B0;
extern ? gUnk_087405A0;
extern ? vtable_unk_080E5B60;
extern ? vtable_unk_080E5B70;
extern ? vtable_unk_080E5B80;
extern ? vtable_unk_080E8538;

void *func_080BC938(void *arg0, void *arg1) {
s32 spC;
s32 sp10;
    s32 temp_r1;
    s32 var_r0;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r5;
    void *temp_r5_10;
    void *temp_r5_11;
    void *temp_r5_2;
    void *temp_r5_3;
    void *temp_r5_4;
    void *temp_r5_5;
    void *temp_r5_6;
    void *temp_r5_7;
    void *temp_r5_8;
    void *temp_r5_9;

    func_08008444();
    arg0->unk4 = &vtable_unk_080E8538;
    var_r0 = 2;
    do {
        var_r0 -= 1;
    } while (var_r0 != -1);
    temp_r5 = __builtin_new(4);
    func_0800835C(&spC);
    func_0800770C(&sp10);
    arg0->unk418 = func_08050CC0(temp_r5, 0, 0x18, 0, 0, &spC, &sp10);
    func_08007714(&sp10, 2);
    func_08008364(&spC, 2);
    arg0->unk41C = func_0805E6CC(__builtin_new(0x30), &gUnk_0873E5B0);
    arg0->unk420 = func_0805E6CC(__builtin_new(0x30), &gUnk_0873DE44);
    arg0->unk424 = func_0805E6CC(__builtin_new(0x30), &gUnk_086678A0);
    arg0->unk428 = func_0805E6CC(__builtin_new(0x30), &gUnk_087405A0);
    arg0->unk42C = func_0805E6CC(__builtin_new(0x30), &gUnk_0858BA28);
    arg0->unk430 = func_0805E6CC(__builtin_new(0x30), &gUnk_0871D51C);
    arg0->unk434 = func_0805E6CC(__builtin_new(0x30), &gUnk_0872BE64);
    arg0->unk438 = func_0805E6CC(__builtin_new(0x30), &gUnk_0873D6D8);
    temp_r5_2 = __builtin_new(0x10);
    temp_r1 = func_08008918(arg0);
    temp_r5_2->unk0 = 0;
    temp_r5_2->unk4 = 0;
    temp_r5_2->unk8 = &vtable_unk_080E5B80;
    func_08009300(temp_r5_2 + 0xC, temp_r1);
    arg0->unk43C = temp_r5_2;
    arg0->unk460 = 0;
    arg0->unk464 = 0;
    arg0->unk468 = 0;
    (arg0 + 0x468)->unk4 = 0;
    arg0->unk470 = 0;
    (arg0 + 0x470)->unk4 = 0;
    arg0->unk478 = 0;
    (arg0 + 0x478)->unk4 = 0;
    arg0->unk480 = 0;
    (arg0 + 0x480)->unk4 = 0;
    arg0->unk488 = 0;
    arg0->unk48C = 0;
    arg0->unk490 = 0;
    (arg0 + 0x490)->unk4 = 0;
    arg0->unk498 = 0;
    (arg0 + 0x498)->unk4 = 0;
    arg0->unk4A0 = 0;
    (arg0 + 0x4A0)->unk4 = 0;
    arg0->unk4A8 = 0;
    (arg0 + 0x4A8)->unk4 = 0;
    arg0->unk4B0 = 0;
    arg0->unk4B4 = 0;
    arg0->unk4B8 = 0;
    (arg0 + 0x4B8)->unk4 = 0;
    arg0->unk4C0 = 0;
    (arg0 + 0x4C0)->unk4 = 0;
    arg0->unk4C8 = 0;
    (arg0 + 0x4C8)->unk4 = 0;
    arg0->unk4D0 = 0;
    (arg0 + 0x4D0)->unk4 = 0;
    arg0->unk4D8 = 0;
    arg0->unk4DC = 0;
    arg0->unk4E0 = 0;
    (arg0 + 0x4E0)->unk4 = 0;
    arg0->unk4E8 = 0;
    (arg0 + 0x4E8)->unk4 = 0;
    arg0->unk4F0 = 0;
    (arg0 + 0x4F0)->unk4 = 0;
    arg0->unk4F8 = 0;
    (arg0 + 0x4F8)->unk4 = 0;
    arg0->unk500 = 0;
    arg0->unk504 = 0;
    arg0->unk508 = 0;
    (arg0 + 0x508)->unk4 = 0;
    arg0->unk510 = 0;
    (arg0 + 0x510)->unk4 = 0;
    arg0->unk518 = 0;
    (arg0 + 0x518)->unk4 = 0;
    arg0->unk520 = 0;
    (arg0 + 0x520)->unk4 = 0;
    arg0->unk528 = 0;
    arg0->unk52C = 0;
    arg0->unk530 = 0;
    (arg0 + 0x530)->unk4 = 0;
    arg0->unk538 = 0;
    (arg0 + 0x538)->unk4 = 0;
    arg0->unk540 = 0;
    (arg0 + 0x540)->unk4 = 0;
    arg0->unk548 = 0;
    (arg0 + 0x548)->unk4 = 0;
    arg0->unk550 = 0;
    arg0->unk554 = 0;
    arg0->unk558 = 0;
    (arg0 + 0x558)->unk4 = 0;
    arg0->unk560 = 0;
    (arg0 + 0x560)->unk4 = 0;
    arg0->unk568 = 0;
    (arg0 + 0x568)->unk4 = 0;
    arg0->unk570 = 0;
    (arg0 + 0x570)->unk4 = 0;
    func_08008B54(arg0 + 0x578, 0);
    func_08008B54(arg0 + 0x57C, 1);
    func_08008B54(arg0 + 0x580, 2);
    func_08008B54(arg0 + 0x584, 3);
    temp_r0 = arg0 + 0x588;
    arg0->unk588 = 0;
    temp_r0->unk4 = 0;
    temp_r0->unk8 = &vtable_unk_080E5B70;
    temp_r0_2 = arg0 + 0x594;
    arg0->unk594 = 0;
    temp_r0_2->unk4 = 0;
    temp_r0_2->unk8 = &vtable_unk_080E5B60;
    temp_r5_3 = arg0 + 0x5B0;
    func_08007874(temp_r5_3);
    temp_r5_3->unk4 = 0;
    temp_r5_4 = arg0 + 0x5B8;
    func_08007874(temp_r5_4);
    temp_r5_4->unk4 = 0;
    temp_r5_5 = arg0 + 0x5C0;
    func_08007874(temp_r5_5);
    temp_r5_5->unk4 = 0;
    temp_r5_6 = arg0 + 0x5C8;
    func_08007874(temp_r5_6);
    temp_r5_6->unk4 = 0;
    temp_r5_7 = arg0 + 0x5D0;
    func_08007874(temp_r5_7);
    temp_r5_7->unk4 = 0;
    temp_r5_8 = arg0 + 0x5D8;
    func_08007874(temp_r5_8);
    temp_r5_8->unk4 = 0;
    temp_r5_9 = arg0 + 0x5E0;
    func_08007874(temp_r5_9);
    temp_r5_9->unk4 = 0;
    temp_r5_10 = arg0 + 0x5E8;
    func_08007874(temp_r5_10);
    temp_r5_10->unk4 = 0;
    temp_r5_11 = arg0 + 0x5F0;
    func_08007874(temp_r5_11);
    temp_r5_11->unk4 = 0;
    arg0->unk604 = 0;
    arg0->unk614 = (s32) arg1->unk0;
    arg0->unk61C = (u8) arg1->unk4;
    return arg0;
}
