# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E15C0/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E15C0/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E15C0/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E15C0/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E15C0/opencode/func.c" 2
s32 func_08007184(void *, s32);
s32 func_080073E0(void *, s32);
s32 func_080079E8(void *, s32);
s32 func_08007C28(void *, s32);
s32 func_080086BC(void *, s32);
s32 func_08050D0C(s32, s32);
extern ? vtable_unk_080E5A28;
extern ? vtable_unk_080E76F8;

void func_080E15C0(void *arg0, ? arg1) {
    ? **temp_r1;
    s32 temp_r0_3;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r4;
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
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_7;
    void *temp_r4_8;
    void *temp_r4_9;
    void *var_r4;
    void *var_r5;

    arg0->unk14E0 = &vtable_unk_080E76F8;
    temp_r0 = arg0 + 0x658;
    if (temp_r0 != 0) {
        var_r5 = arg0 + 0x6B8;
        if (temp_r0 != var_r5) {
            do {
                var_r5 -= 0x18;
                temp_r0_2 = var_r5 + 8;
                if (temp_r0_2 != 0) {
                    var_r4 = var_r5 + 0x18;
                    if (temp_r0_2 != var_r4) {
                        do {
                            var_r4 -= 8;
                            func_080073E0(var_r4, var_r4->unk4);
                            func_08007184(var_r4, 2);
                        } while (temp_r0_2 != var_r4);
                    }
                }
                func_08007C28(var_r5, var_r5->unk4);
                func_080079E8(var_r5, 2);
            } while ((arg0 + 0x658) != var_r5);
        }
    }
    temp_r4 = arg0 + 0x650;
    func_08007C28(temp_r4, temp_r4->unk4);
    func_080079E8(temp_r4, 2);
    temp_r4_2 = arg0 + 0x648;
    func_080073E0(temp_r4_2, temp_r4_2->unk4);
    func_08007184(temp_r4_2, 2);
    temp_r4_3 = arg0 + 0x640;
    func_08007C28(temp_r4_3, temp_r4_3->unk4);
    func_080079E8(temp_r4_3, 2);
    temp_r4_4 = arg0 + 0x638;
    func_080073E0(temp_r4_4, temp_r4_4->unk4);
    func_08007184(temp_r4_4, 2);
    temp_r4_5 = arg0 + 0x630;
    func_08007C28(temp_r4_5, temp_r4_5->unk4);
    func_080079E8(temp_r4_5, 2);
    temp_r4_6 = arg0 + 0x628;
    func_08007C28(temp_r4_6, temp_r4_6->unk4);
    func_080079E8(temp_r4_6, 2);
    temp_r4_7 = arg0 + 0x620;
    func_080073E0(temp_r4_7, temp_r4_7->unk4);
    func_08007184(temp_r4_7, 2);
    temp_r4_8 = arg0 + 0x618;
    func_080073E0(temp_r4_8, temp_r4_8->unk4);
    func_08007184(temp_r4_8, 2);
    temp_r4_9 = arg0 + 0x610;
    func_08007C28(temp_r4_9, temp_r4_9->unk4);
    func_080079E8(temp_r4_9, 2);
    temp_r4_10 = arg0 + 0x608;
    func_080073E0(temp_r4_10, temp_r4_10->unk4);
    func_08007184(temp_r4_10, 2);
    temp_r4_11 = arg0 + 0x600;
    func_08007C28(temp_r4_11, arg0->unk604);
    func_080079E8(temp_r4_11, 2);
    temp_r4_12 = arg0 + 0x5F8;
    func_080073E0(temp_r4_12, temp_r4_12->unk4);
    func_08007184(temp_r4_12, 2);
    temp_r4_13 = arg0 + 0x5F0;
    func_08007C28(temp_r4_13, temp_r4_13->unk4);
    func_080079E8(temp_r4_13, 2);
    temp_r4_14 = arg0 + 0x5E8;
    func_080073E0(temp_r4_14, temp_r4_14->unk4);
    func_08007184(temp_r4_14, 2);
    temp_r4_15 = arg0 + 0x5E0;
    func_08007C28(temp_r4_15, temp_r4_15->unk4);
    func_080079E8(temp_r4_15, 2);
    temp_r4_16 = arg0 + 0x5D8;
    func_080073E0(temp_r4_16, temp_r4_16->unk4);
    func_08007184(temp_r4_16, 2);
    temp_r4_17 = arg0 + 0x5D0;
    func_08007C28(temp_r4_17, temp_r4_17->unk4);
    func_080079E8(temp_r4_17, 2);
    temp_r4_18 = arg0 + 0x5C8;
    func_080073E0(temp_r4_18, temp_r4_18->unk4);
    func_08007184(temp_r4_18, 2);
    temp_r4_19 = arg0 + 0x5C0;
    func_08007C28(temp_r4_19, temp_r4_19->unk4);
    func_080079E8(temp_r4_19, 2);
    arg0->unk1A0 = &vtable_unk_080E5A28;
    arg0->unk170 = &vtable_unk_080E5A28;
    arg0->unk140 = &vtable_unk_080E5A28;
    arg0->unk110 = &vtable_unk_080E5A28;
    arg0->unkE0 = &vtable_unk_080E5A28;
    temp_r1 = (arg0 + 0xE0) - 0x30;
    *temp_r1 = &vtable_unk_080E5A28;
    *(temp_r1 - 0x30) = &vtable_unk_080E5A28;
    arg0->unk50 = &vtable_unk_080E5A28;
    arg0->unk20 = &vtable_unk_080E5A28;
    temp_r0_3 = arg0->unk10;
    if (temp_r0_3 != 0) {
        func_08050D0C(temp_r0_3, 3);
    }
    func_080086BC(arg0, arg1);
}
