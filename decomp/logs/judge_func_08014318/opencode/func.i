# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08014318/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08014318/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08014318/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08014318/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08014318/opencode/func.c" 2
s32 func_0803CD4C(s32, void *, s32);
s32 func_080D7F08(void *);

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[10];
    struct GenObj *unk12;
    u8 _pad16[118];
    struct GenObj *unk8C;
    u8 _pad90[24];
    struct GenObj *unkA8;
    u8 _padAC[8];
    struct GenObj *unkB4;
} GenObj;
void func_08014318(GenObj *arg0) {
    s32 temp_r0;
    s32 var_r7;
    GenObj *temp_r4;

    temp_r4 = arg0->unk4;
    (*temp_r4->unkA8)->unkBC();
    temp_r0 = temp_r4->unkB4;
    if (temp_r0 != 0) {
        var_r7 = 0;
        if ((((*temp_r4->unkA8)->unkB0() << 0x18) != 0) || (1 & ((u32) (temp_r4->unk8C->unk12 << 0x15) >> 0x1A))) {
            var_r7 = 1;
        }
        func_0803CD4C(temp_r0 + 8, temp_r4->unk8C + 0x10, var_r7);
    }
    func_080D7F08(temp_r4);
}
