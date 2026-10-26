# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08011DC4/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08011DC4/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08011DC4/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08011DC4/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08011DC4/opencode/func.c" 2
s32 SetUnk__12ScriptEnginePv(s32, void *);
void *__builtin_new(s32);
s32 func_08008980(void *);
s32 func_08008B54(void *, s32);
s32 func_080096B0(void *);
extern s32 gUnk_0300040C;
extern ? vtable_unk_080E5BB4;
extern ? vtable_unk_080E5BD8;
extern ? vtable_unk_080E5C08;
extern ? vtable_unk_080E5E64;

void *func_08011DC4(void *arg0, s32 arg1, void *arg2) {
    u16 temp_r0_16;
    void *temp_r0;
    void *temp_r0_10;
    void *temp_r0_11;
    void *temp_r0_12;
    void *temp_r0_13;
    void *temp_r0_14;
    void *temp_r0_15;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r0_9;
    void *temp_r1;
    void *temp_r2;

    arg0->unk0 = &vtable_unk_080E5E64;
    temp_r0 = __builtin_new(0xF8);
    temp_r0->unkF4 = &vtable_unk_080E5C08;
    temp_r0->unk0 = 0;
    temp_r0->unk4 = 0;
    temp_r0_2 = temp_r0 + 8;
    temp_r0_2->unk4 = 0;
    func_080096B0(temp_r0_2 + 8);
    func_08008980(temp_r0 + 0x68);
    temp_r2 = temp_r0 + 0x6C;
    temp_r0->unk6C = 0;
    temp_r2->unk4 = 0;
    temp_r2->unk8 = &vtable_unk_080E5BB4;
    temp_r1 = temp_r0 + 0x7C;
    temp_r2->unkC = temp_r1;
    temp_r0->unk7C = 0;
    temp_r1->unk4 = 0;
    temp_r1->unk8 = &vtable_unk_080E5BD8;
    temp_r0_3 = temp_r0 + 0x78;
    temp_r2->unk10 = temp_r0_3;
    temp_r2->unk14 = temp_r1;
    temp_r0_4 = temp_r0_3 + 0x10;
    temp_r0_3->unk10 = arg0;
    temp_r0_5 = temp_r0_4 + 4;
    temp_r0_4->unk4 = arg1;
    temp_r0_6 = temp_r0_5 + 4;
    temp_r0_5->unk4 = (s32) arg2->unk0;
    temp_r0_6->unk4 = (s32) arg2->unk4;
    temp_r0_6->unk8 = (s32) arg2->unk8;
    temp_r0_7 = temp_r0 + 0xA0;
    temp_r0->unkA0 = 0;
    temp_r0_8 = temp_r0_7 + 4;
    temp_r0_7->unk4 = 0;
    temp_r0_9 = temp_r0_8 + 4;
    temp_r0_8->unk4 = 0;
    temp_r0_10 = temp_r0_9 + 4;
    temp_r0_9->unk4 = 0;
    temp_r0_11 = temp_r0_10 + 4;
    temp_r0_10->unk4 = 0;
    temp_r0_12 = temp_r0_11 + 4;
    temp_r0_11->unk4 = 0;
    temp_r0_12->unk4 = 0;
    func_08008B54(temp_r0_12 + 4 + 4, 0);
    func_08008B54(temp_r0 + 0xC0, 1);
    func_08008B54(temp_r0 + 0xC4, 2);
    func_08008B54(temp_r0 + 0xC8, 3);
    func_08008B54(temp_r0 + 0xCC, 4);
    temp_r0_13 = temp_r0 + 0xD0;
    temp_r0->unkD0 = 0;
    temp_r0_13->unk4 = 0;
    temp_r0_14 = temp_r0_13 + 8;
    temp_r0_14->unk4 = 0;
    temp_r0_15 = temp_r0_14 + 0x10;
    temp_r0_14->unk10 = 0;
    temp_r0_15->unk2 = 0;
    (temp_r0_15 + 2)->unk6 = 0;
    temp_r0_16 = temp_r0->unk14 | 8;
    temp_r0->unk14 = temp_r0_16;
    *(u16 *)0x04000004 = temp_r0_16;
    arg0->unk4 = temp_r0;
    SetUnk__12ScriptEnginePv(gUnk_0300040C + 8, arg0);
    return arg0;
}
