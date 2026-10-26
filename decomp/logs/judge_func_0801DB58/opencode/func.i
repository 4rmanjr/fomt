# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801DB58/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801DB58/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801DB58/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801DB58/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801DB58/opencode/func.c" 2
s32 func_0800E4FC(s32);
s32 func_080123CC(s32, s32, s32, s32 *);

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk2;
    s32 unk4;
    s32 unk6;
    s32 unk7;
    s32 unk8;
    u8 _padC[8];
    s32 unk14;
    u8 _pad18[304];
    s32 unk148;
    u8 _pad14C[3820];
    s32 unk1038;
    u8 _pad103C[24];
    s32 unk1054;
} GenObj;
void func_0801DB58(GenObj *arg0) {
s32 sp0;
    s16 temp_r2_2;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;
    s32 var_r0;
    u32 temp_r2;
    u32 var_r1;

    sp0 = 0x100;
    sp0.unk2 = 0x100;
    sp0.unk4 = 0;
    sp0.unk6 = 0;
    sp0.unk7 = 0;
    sp0.unk8 = 0;
    temp_r0 = ((void (*)(void *,...))(arg0->unk0->unk14))(arg0);
    temp_r2 = temp_r0 - 0x34;
    if ((temp_r2 <= 0x1FFU) || (temp_r0 == 0x2B)) {
        if (temp_r0 != 0x2B) {
            if (temp_r0 > 0x133) {
                var_r1 = temp_r0 + 0xFFFFFECC;
            } else {
                var_r1 = temp_r2;
            }
        } else {
            var_r1 = 9;
        }
        temp_r2_2 = sp0.unk4;
        var_r0 = (var_r1 + 1) * (0xFFFFF600 - temp_r2_2);
        if (var_r0 < 0) {
            var_r0 += 0xFF;
        }
        sp0.unk4 = (s16) (temp_r2_2 + (var_r0 >> 8));
    }
    temp_r0_2 = func_0800E4FC(arg0->unk1038 + 0x1BD8);
    if (temp_r0_2 > 0x4F) {
        sp0.unk7 = (s8) (temp_r0_2 - 0x4F);
        sp0.unk8 = 3;
    }
    temp_r4 = arg0->unk1054;
    func_080123CC(temp_r4, 1, ((void (*)(void *,...))(arg0->unk0->unk148))(arg0), &sp0);
}
