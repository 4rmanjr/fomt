# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802BE68/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802BE68/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802BE68/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802BE68/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802BE68/opencode/func.c" 2
s32 SetAnim__12AActorEntityUi(void *, u16);
u16 func_0802BC48(void *);

typedef struct GenObj {
    u8 _pad0[12];
    struct GenObj *unkC;
    struct GenObj *unk10;
    u8 _pad14[4];
    struct GenObj *unk18;
    u8 _pad1C[4];
    s32 unk20;
    u8 _pad24[16];
    s32 unk34;
    u8 _pad38[28];
    s32 unk54;
} GenObj;
void func_0802BE68(GenObj *arg0) {
    s32 var_r1;
    u8 var_r2;
    GenObj *var_r0;

    var_r2 = arg0->unk20;
    switch (var_r2) {
    case 2:
        var_r0 = (GenObj *)((u8 *)arg0 + 0x38);
        var_r2 = 0;
        var_r0->unkC = 0xFFFE5556;
        var_r0->unk10 = 0;
block_12:
        var_r0->unk18 = (s32) var_r2;
        break;
    case 3:
        var_r0 = (GenObj *)((u8 *)arg0 + 0x38);
        var_r2 = 0;
        var_r0->unkC = 0x1AAAA;
        var_r0->unk10 = 0;
        goto block_12;
    case 1:
        var_r0 = (GenObj *)((u8 *)arg0 + 0x38);
        var_r2 = 0;
        var_r1 = 0xFFFE5556;
block_11:
        var_r0->unkC = (s32) var_r2;
        var_r0->unk10 = var_r1;
        goto block_12;
    case 0:
        var_r0 = (GenObj *)((u8 *)arg0 + 0x38);
        var_r1 = 0x1AAAA;
        goto block_11;
    }
    arg0->unk34 = 1;
    ((GenObj *)((u8 *)arg0 + 0x34))->unk24 = 1;
    SetAnim__12AActorEntityUi(arg0, func_0802BC48(arg0));
    arg0->unk54 = 1;
}
