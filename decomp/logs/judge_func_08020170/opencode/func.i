# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08020170/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08020170/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08020170/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08020170/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08020170/opencode/func.c" 2
s32 func_080AB85C(void *);
s32 func_080AB8D0(void *);
s32 func_080AB948(void *);
s32 func_080AB9C4(void *);

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    u8 _pad10[8];
    s32 unk18;
    s32 unk1C;
    u8 _pad20[8];
    s32 unk28;
} GenObj;
void func_08020170(GenObj *arg0, GenObj *arg1) {
    s32 sp0;
    s32 temp_r0;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 temp_r3;
    s32 temp_r5;
    s32 temp_r6;
    s32 var_sb;
    s32 var_sl;

    temp_r2 = arg0->unk8;
    temp_r3 = arg0->unkC;
    var_sl = arg0->unk18 + temp_r2;
    temp_r0 = arg0->unk1C + temp_r3;
    var_sb = temp_r0;
    if (arg1 != 0) {
        temp_r2_2 = temp_r2 >> 0x10;
        sp0 = temp_r2_2;
        temp_r6 = temp_r3 >> 0x10;
        temp_r5 = (temp_r0 >> 0x10) - temp_r6;
        temp_r2_3 = (var_sl >> 0x10) - temp_r2_2;
        if (temp_r5 > 0) {
            if ((s32) arg1->unk0 > (s32) arg1->unk28) {
                func_080AB85C(arg1);
            }
            if (temp_r5 > arg1->unk0) {
                if ((s32) arg1->unk0 > (s32) arg1->unk28) {
                    func_080AB85C(arg1);
                }
                var_sb = (temp_r6 + arg1->unk0) << 0x10;
            }
        }
        if (temp_r5 < 0) {
            if ((s64) (arg1->unk4 + arg1->unk28) < 0) {
                func_080AB8D0(arg1);
            }
            if (temp_r5 < arg1->unk4) {
                if ((s64) (arg1->unk4 + arg1->unk28) < 0) {
                    func_080AB8D0(arg1);
                }
                var_sb = (temp_r6 + arg1->unk4) << 0x10;
            }
        }
        if (temp_r2_3 < 0) {
            if ((s64) (arg1->unk8 + arg1->unk28) < 0) {
                func_080AB948(arg1);
            }
            if (temp_r2_3 < arg1->unk8) {
                if ((s64) (arg1->unk8 + arg1->unk28) < 0) {
                    func_080AB948(arg1);
                }
                var_sl = (sp0 + arg1->unk8) << 0x10;
            }
        }
        if (temp_r2_3 > 0) {
            if ((s32) arg1->unkC > (s32) arg1->unk28) {
                func_080AB9C4(arg1);
            }
            if (temp_r2_3 > arg1->unkC) {
                if ((s32) arg1->unkC > (s32) arg1->unk28) {
                    func_080AB9C4(arg1);
                }
                var_sl = (sp0 + arg1->unkC) << 0x10;
            }
        }
    }
    arg0->unk8 = var_sl;
    arg0->unkC = var_sb;
}
