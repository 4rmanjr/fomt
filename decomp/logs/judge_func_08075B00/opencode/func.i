# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08075B00/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08075B00/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08075B00/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08075B00/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08075B00/opencode/func.c" 2
s32 *func_080D3BC0(s32);
s32 *malloc(s32);
s32 memcpy(s32 *, s32 *, s32);
s32 memset(s32 *, s32, s32 *);
extern s32 vtable_unk_080E7B68;

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
    s32 unk6;
    struct GenObj *unk8;
    s32 unkA;
    struct GenObj *unkC;
    s32 unkE;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    u8 _pad1C[12];
    s32 unk28;
} GenObj;
void *func_08075B00(GenObj *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
s32 sp4;
    s32 *var_r0;
    s32 *var_r4;
    s16 temp_sl;
    s32 temp_r4;
    s32 var_r5;
    s32 var_r8;
    GenObj *temp_r0;
    GenObj *temp_r7;

    var_r5 = arg1;
    arg0->unk0 = arg2;
    arg0->unk14 = arg3;
    temp_r7 = (GenObj *)((u8 *)arg0 + 0x18);
    arg0->unk18 = 0;
    temp_r7->unk4 = 0;
    ((GenObj *)((u8 *)arg0 + 0x20))->unk4 = 0;
    if (var_r5 != 0) {
        temp_r4 = var_r5 << 6;
        var_r0 = malloc(temp_r4);
        var_r8 = temp_r4;
        if (var_r0 == 0) {
            var_r0 = func_080D3BC0(var_r8);
        }
    } else {
        var_r0 = 0;
        var_r8 = 0;
    }
    arg0->unk18 = var_r0;
    temp_r7->unk4 = var_r0;
    temp_r7->unkC = (void *) (var_r0 + var_r8);
    memset(&sp4, 0, (s32 *)0x40);
    var_r4 = arg0->unk18;
    temp_r0 = (GenObj *)((u8 *)arg0 + 0x28);
    temp_sl = var_r5 * 8;
    if (var_r5 != 0) {
        do {
            if (var_r4 != 0) {
                memcpy(var_r4, &sp4, 0x40);
            }
            var_r5 -= 1;
            var_r4 += 0x40;
        } while (var_r5 != 0);
    }
    temp_r7->unk4 = var_r4;
    arg0->unk28 = 0;
    temp_r0->unk4 = 0;
    temp_r0->unk8 = &vtable_unk_080E7B68;
    memset(arg0->unk18, 0xFF, (s32 *) var_r8);
    arg0->unk4 = temp_sl;
    arg0->unk6 = 0xFFFF;
    arg0->unk8 = 0;
    arg0->unkA = -1;
    arg0->unkC = 0;
    arg0->unkE = 0xA0;
    arg0->unk10 = arg4;
    return arg0;
}
