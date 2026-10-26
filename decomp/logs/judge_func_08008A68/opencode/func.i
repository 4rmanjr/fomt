# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08008A68/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08008A68/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08008A68/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08008A68/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08008A68/opencode/func.c" 2
s32 __builtin_delete(s32 *);
s32 func_08008D90();
s32 func_0800959C(void *, s32);
s32 func_080098AC(s32 *, s32);
s32 func_080D7944(void *, s32);
extern s32 vtable_unk_080E5B0C;
extern s32 vtable_unk_080E5B18;

typedef struct GenObj {
    u8 _pad0[8];
    struct GenObj *unk8;
    u8 _padC[36];
    struct GenObj *unk30;
    u8 _pad34[52];
    s32 unk68;
} GenObj;
void func_08008A68(s32 *arg0, s32 arg1) {
    GenObj *temp_r5;
    GenObj *temp_r4;

    temp_r5 = *arg0;
    if (temp_r5 != 0) {
        if (temp_r5->unk68 != 0) {
            func_08008D90();
        }
        temp_r4 = (GenObj *)((u8 *)temp_r5 + 0x34);
        temp_r4->unk30 = &vtable_unk_080E5B0C;
        temp_r4->unk8 = &vtable_unk_080E5B18;
        func_080D7944((GenObj *)((u8 *)temp_r5 + 0x50), 0);
        func_0800959C(temp_r4, 2);
        func_080098AC((GenObj *)((u8 *)temp_r5 + 0x28), 2);
        func_0800959C((GenObj *)((u8 *)temp_r5 + 0xC), 2);
        func_080098AC(temp_r5, 2);
        __builtin_delete(temp_r5);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
