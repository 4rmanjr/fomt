# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08076E0C/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08076E0C/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08076E0C/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08076E0C/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08076E0C/opencode/func.c" 2
s32 __builtin_delete(void *);
s32 free();
s32 func_08075DEC(s32, s32);
extern s32 vtable_unk_080E7B88;

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[16];
    struct GenObj *unk18;
    u8 _pad1C[1400];
    s32 unk594;
    u8 _pad598[12];
    s32 unk5A4;
    u8 _pad5A8[12];
    void *unk5B4;
} GenObj;
void func_08076E0C(GenObj *arg0, s32 arg1) {
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_3;
    GenObj *temp_r0;

    arg0->unk5B4 = &vtable_unk_080E7B88;
    temp_r2 = ((GenObj *)((u8 *)arg0 + 0x5A4))->unk4;
    var_r1 = arg0->unk5A4;
    if (var_r1 != temp_r2) {
        do {
            var_r1 += 0x10;
        } while (var_r1 != temp_r2);
    }
    if (arg0->unk5A4 != 0) {
        free();
    }
    temp_r2_2 = ((GenObj *)((u8 *)arg0 + 0x594))->unk4;
    var_r1_2 = arg0->unk594;
    if (var_r1_2 != temp_r2_2) {
        do {
            var_r1_2 += 0x10;
        } while (var_r1_2 != temp_r2_2);
    }
    if (arg0->unk594 != 0) {
        free();
    }
    temp_r0 = arg0->unk4;
    if (temp_r0 != 0) {
        func_08075DEC((GenObj *)((u8 *)temp_r0 + 0x28), 2);
        temp_r2_3 = ((GenObj *)((u8 *)temp_r0 + 0x18))->unk4;
        var_r1_3 = temp_r0->unk18;
        if (var_r1_3 != temp_r2_3) {
            do {
                var_r1_3 += 0x40;
            } while (var_r1_3 != temp_r2_3);
        }
        if (temp_r0->unk18 != 0) {
            free();
        }
        __builtin_delete(temp_r0);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
