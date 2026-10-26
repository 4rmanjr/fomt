# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000914/kilo/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000914/kilo/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000914/kilo/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000914/kilo/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000914/kilo/func.c" 2
s32 Unpack(s32 *, ? *);
s32 func_08007128(void *);
s32 func_080071BC(void *, s32, s32);
s32 func_0800736C(void *);
s32 func_08007874(void *);
s32 func_08007A28(void *, s32, s32);
s32 func_08007B54(void *, s32);
s32 func_08008444();
s32 func_08008B54(void *, s32);
s32 func_0805E6CC(void *, ? *);
s32 func_0805E824(void *, void *, s32, s32);
extern ? gUnk_0858BA28;
extern ? gUnk_08747A74;
extern ? gUnk_0874E530;
extern ? vtable_unk_080E5A0C;

void *func_08000914(void *arg0) {
    ? *temp_r4;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r1;
    void *temp_r4_10;
    void *temp_r4_11;
    void *temp_r4_12;
    void *temp_r4_13;
    void *temp_r4_14;
    void *temp_r4_15;
    void *temp_r4_16;
    void *temp_r4_17;
    void *temp_r4_18;
    void *temp_r4_19;
    void *temp_r4_20;
    void *temp_r4_21;
    void *temp_r4_22;
    void *temp_r4_23;
    void *temp_r4_24;
    void *temp_r4_25;
    void *temp_r4_26;
    void *temp_r4_27;
    void *temp_r4_28;
    void *temp_r4_29;
    void *temp_r4_2;
    void *temp_r4_30;
    void *temp_r4_31;
    void *temp_r4_32;
    void *temp_r4_33;
    void *temp_r4_34;
    void *temp_r4_35;
    void *temp_r4_36;
    void *temp_r4_37;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_7;
    void *temp_r4_8;
    void *temp_r4_9;

    func_08008444();
    arg0->unk4 = &vtable_unk_080E5A0C;
    func_08008B54(arg0 + 8, 0);
    func_08008B54(arg0 + 0xC, 1);
    temp_r4 = arg0 + 0x10;
    Unpack(&gUnk_08747A74, temp_r4);
    temp_r0 = arg0 + 0x6A10;
    func_0805E6CC(temp_r0, temp_r4);
    temp_r1 = arg0 + 0x6A40;
    func_0805E6CC(temp_r1, &gUnk_0874E530);
    temp_r0_2 = arg0 + 0x6A70;
    func_0805E6CC(temp_r0_2, &gUnk_0858BA28);
    temp_r4_2 = arg0 + 0x6AA0;
    func_0805E824(temp_r4_2, temp_r0_2, 0x160, 0x100);
    temp_r4_2->unk18 = 0;
    temp_r4_2->unk1C = 0;
    temp_r4_3 = arg0 + 0x6AC0;
    func_0805E824(temp_r4_3, temp_r0_2, 0x342, 0x100);
    temp_r4_3->unk18 = 0;
    temp_r4_3->unk1C = 0;
    temp_r4_4 = arg0 + 0x6AE0;
    func_0805E824(temp_r4_4, temp_r0_2, 0x788, 0x100);
    temp_r4_4->unk18 = 0;
    temp_r4_4->unk1C = 0;
    func_0805E824(arg0 + 0x6B00, temp_r0_2, 0x2B2, 0x100);
    arg0->unk6B18 = 0;
    arg0->unk6B1C = 0;
    temp_r4_5 = arg0 + 0x6B20;
    func_0805E824(temp_r4_5, temp_r0_2, 0x924, 0x100);
    temp_r4_5->unk18 = 0;
    temp_r4_5->unk1C = 0;
    temp_r4_6 = arg0 + 0x6B40;
    func_0805E824(temp_r4_6, temp_r0_2, 0x730, 0x100);
    temp_r4_6->unk18 = 0;
    temp_r4_6->unk1C = 0;
    temp_r4_7 = arg0 + 0x6B60;
    func_0805E824(temp_r4_7, temp_r0_2, 0x730, 0x100);
    temp_r4_7->unk18 = 0;
    temp_r4_7->unk1C = 0;
    temp_r4_8 = arg0 + 0x6B80;
    func_0805E824(temp_r4_8, temp_r0_2, 0x91A, 0x100);
    temp_r4_8->unk18 = 0;
    temp_r4_8->unk1C = 0;
    temp_r4_9 = arg0 + 0x6BA0;
    func_0805E824(temp_r4_9, temp_r0, 0, 0x100);
    temp_r4_9->unk18 = 0;
    temp_r4_9->unk1C = 0;
    temp_r4_10 = arg0 + 0x6BC0;
    func_0805E824(temp_r4_10, temp_r0, 0, 0x100);
    temp_r4_10->unk18 = 0;
    temp_r4_10->unk1C = 0;
    temp_r4_11 = arg0 + 0x6BE0;
    func_0805E824(temp_r4_11, temp_r0, 1, 0x100);
    temp_r4_11->unk18 = 0;
    temp_r4_11->unk1C = 0;
    func_0805E824(arg0 + 0x6C00, temp_r0, 4, 0x100);
    arg0->unk6C18 = 0;
    arg0->unk6C1C = 0;
    temp_r4_12 = arg0 + 0x6C20;
    func_0805E824(temp_r4_12, temp_r0, 7, 0x100);
    temp_r4_12->unk18 = 0;
    temp_r4_12->unk1C = 0;
    temp_r4_13 = arg0 + 0x6C40;
    func_0805E824(temp_r4_13, temp_r1, 0, 0x100);
    temp_r4_13->unk18 = 0;
    temp_r4_13->unk1C = 0;
    temp_r4_14 = arg0 + 0x6C70;
    func_08007874(temp_r4_14);
    func_08007A28(temp_r4_14, 0, 0x300);
    temp_r4_15 = arg0 + 0x6C74;
    func_08007128(temp_r4_15);
    func_080071BC(temp_r4_15, 9, 7);
    temp_r4_16 = arg0 + 0x6C78;
    func_08007874(temp_r4_16);
    temp_r4_16->unk4 = func_08007B54(temp_r4_16, 4);
    temp_r4_17 = arg0 + 0x6C80;
    func_08007128(temp_r4_17);
    temp_r4_17->unk4 = func_0800736C(temp_r4_17);
    temp_r4_18 = arg0 + 0x6C88;
    func_08007874(temp_r4_18);
    temp_r4_18->unk4 = func_08007B54(temp_r4_18, 4);
    temp_r4_19 = arg0 + 0x6C90;
    func_08007128(temp_r4_19);
    temp_r4_19->unk4 = func_0800736C(temp_r4_19);
    temp_r4_20 = arg0 + 0x6C98;
    func_08007874(temp_r4_20);
    temp_r4_20->unk4 = func_08007B54(temp_r4_20, 4);
    temp_r4_21 = arg0 + 0x6CA0;
    func_08007128(temp_r4_21);
    temp_r4_21->unk4 = func_0800736C(temp_r4_21);
    temp_r4_22 = arg0 + 0x6CA8;
    func_08007874(temp_r4_22);
    temp_r4_22->unk4 = func_08007B54(temp_r4_22, 4);
    temp_r4_23 = arg0 + 0x6CB0;
    func_08007874(temp_r4_23);
    temp_r4_23->unk4 = func_08007B54(temp_r4_23, 2);
    temp_r4_24 = arg0 + 0x6CB8;
    func_08007128(temp_r4_24);
    temp_r4_24->unk4 = func_0800736C(temp_r4_24);
    temp_r4_25 = arg0 + 0x6CC0;
    func_08007874(temp_r4_25);
    temp_r4_25->unk4 = func_08007B54(temp_r4_25, 2);
    temp_r4_26 = arg0 + 0x6CC8;
    func_08007128(temp_r4_26);
    temp_r4_26->unk4 = func_0800736C(temp_r4_26);
    temp_r4_27 = arg0 + 0x6CD0;
    func_08007874(temp_r4_27);
    temp_r4_27->unk4 = func_08007B54(temp_r4_27, 1);
    temp_r4_28 = arg0 + 0x6CD8;
    func_08007874(temp_r4_28);
    temp_r4_28->unk4 = func_08007B54(temp_r4_28, 1);
    temp_r4_29 = arg0 + 0x6CE0;
    func_08007874(temp_r4_29);
    temp_r4_29->unk4 = func_08007B54(temp_r4_29, 3);
    temp_r4_30 = arg0 + 0x6CE8;
    func_08007128(temp_r4_30);
    temp_r4_30->unk4 = func_0800736C(temp_r4_30);
    temp_r4_31 = arg0 + 0x6CF0;
    func_08007874(temp_r4_31);
    temp_r4_31->unk4 = func_08007B54(temp_r4_31, 5);
    temp_r4_32 = arg0 + 0x6CF8;
    func_08007874(temp_r4_32);
    temp_r4_32->unk4 = func_08007B54(temp_r4_32, 5);
    temp_r4_33 = arg0 + 0x6D00;
    func_08007128(temp_r4_33);
    arg0->unk6D04 = func_0800736C(temp_r4_33);
    temp_r4_34 = arg0 + 0x6D08;
    func_08007874(temp_r4_34);
    temp_r4_34->unk4 = func_08007B54(temp_r4_34, 6);
    temp_r4_35 = arg0 + 0x6D10;
    func_08007128(temp_r4_35);
    temp_r4_35->unk4 = func_0800736C(temp_r4_35);
    temp_r4_36 = arg0 + 0x6D18;
    func_08007874(temp_r4_36);
    temp_r4_36->unk4 = func_08007B54(temp_r4_36, 2);
    temp_r4_37 = arg0 + 0x6D20;
    func_08007128(temp_r4_37);
    temp_r4_37->unk4 = func_0800736C(temp_r4_37);
    arg0->unk6D28 = 0;
    arg0->unk6D2C = 0;
    arg0->unk6C6D = 0;
    arg0->unk6C6E = 0;
    return arg0;
}
