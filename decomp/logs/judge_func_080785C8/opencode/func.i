# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080785C8/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080785C8/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080785C8/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080785C8/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080785C8/opencode/func.c" 2
s32 func_08008920(void *);
s32 func_08008940(void *);
s32 func_0803C7C8(void *, s32, s32, s32, s32);
s32 func_08075AE8(void *, s32, s32 *, s32, s32);
s32 func_08077DD8();
s32 memcpy(s32 *, s32 *, s32);

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    u8 _pad10[4];
    struct GenObj *unk14;
    u8 _pad18[436];
    s32 unk1CC;
    u8 _pad1D0[8256];
    s32 unk2210;
} GenObj;
void func_080785C8(GenObj *arg0) {
s32 sp4;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r7;
    void **temp_r1;
    GenObj *var_r5;

    func_08077DD8();
    var_r5 = arg0->unk1CC;
    temp_r7 = ((GenObj *)((u8 *)arg0 + 0x1CC))->unk4;
    if (var_r5 != temp_r7) {
        do {
            temp_r4 = func_08008920(arg0);
            temp_r1 = var_r5->unk8;
            (*temp_r1)->unk10(&sp4, temp_r1, *(var_r5->unkC + (var_r5->unk14 * 4)));
            memcpy(&sp4, &sp4, 0x20);
            func_08075AE8((GenObj *)((u8 *)arg0 + 0x20), temp_r4, &sp4, var_r5->unk0, var_r5->unk4);
            var_r5 += 0x1C;
        } while (var_r5 != temp_r7);
    }
    if ((s32) (arg0->unk8->unk2210 << 0x1E) < 0) {
        temp_r4_2 = func_08008920(arg0);
        func_0803C7C8((GenObj *)((u8 *)arg0 + 0x1C), 0x98, 0x50, temp_r4_2, func_08008940(arg0));
    }
}
