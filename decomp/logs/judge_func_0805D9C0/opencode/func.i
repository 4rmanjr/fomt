# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805D9C0/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805D9C0/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805D9C0/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805D9C0/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805D9C0/opencode/func.c" 2
s32 func_080074C0(void *, s32);
s32 func_08007D4C(void *, s32);
s16 *func_08008918(void *);
s32 func_08008E64(s32 *, s32, s32);
s32 func_08008EB8(s32, s32, s32);
s32 func_0804E5AC(s32, s32 *, s32, s32, s32, s32, s32);
s32 func_08051320(s32, s32, s32, s32, s32, s32, s32);
extern s32 *gUnk_080F9F70;
extern s32 gUnk_080F9F74;
extern s32 *gUnk_080F9F78;
extern s32 gUnk_080FB1A6;

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    struct GenObj *unk4;
    u8 _pad8[324];
    s32 unk14C;
} GenObj;
void func_0805D9C0(GenObj *arg0) {
    u16 spC;
s32 sp14;
    s32 sp54;
    s16 *temp_r0;
    s16 *temp_r0_10;
    s16 *temp_r0_11;
    s16 *temp_r0_12;
    s16 *temp_r0_13;
    s16 *temp_r0_14;
    s16 *temp_r0_15;
    s16 *temp_r0_16;
    s16 *temp_r0_2;
    s16 *temp_r0_3;
    s16 *temp_r0_4;
    s16 *temp_r0_5;
    s16 *temp_r0_6;
    s16 *temp_r0_7;
    s16 *temp_r0_8;
    s16 *temp_r0_9;
    s32 temp_r4_2;
    s32 var_r5;
    u16 temp_r1;
    GenObj *temp_r4;
    GenObj *temp_r6;

    temp_r0 = func_08008918();
    spC = 0;
    temp_r0->unk14 = 0;
    temp_r0_2 = func_08008918(arg0);
    temp_r1 = arg0->unk14C;
    spC = temp_r1;
    temp_r0_2->unk16 = temp_r1;
    temp_r0_3 = func_08008918(arg0);
    spC = 0;
    temp_r0_3->unk18 = 0;
    temp_r0_4 = func_08008918(arg0);
    spC = 0;
    temp_r0_4->unk1A = 0;
    temp_r0_5 = func_08008918(arg0);
    spC = 0;
    temp_r0_5->unk1C = 0;
    temp_r0_6 = func_08008918(arg0);
    spC = 0;
    temp_r0_6->unk1E = 0;
    func_08008EB8(0, 0x06007FE0, 0x20);
    func_08008EB8(-1, 0x0600E000, 0x800);
    func_08008EB8(-1, 0x0600E800, 0x800);
    func_08008EB8(-1, 0x0600F000, 0x800);
    temp_r0_7 = func_08008918(arg0);
    spC = 0x1E40;
    var_r5 = 0;
    *temp_r0_7 = 0x1E40;
    temp_r0_8 = func_08008918(arg0);
    spC = 0x5C43;
    temp_r0_8->unkE = 0x5C43;
    temp_r0_9 = func_08008918(arg0);
    spC = 0x1D41;
    temp_r0_9->unkC = 0x1D41;
    temp_r0_10 = func_08008918(arg0);
    spC = 0x5E42;
    temp_r0_10->unkA = 0x5E42;
    func_08008E64(gUnk_080F9F70, 0x06000000, gUnk_080F9F74);
    func_08008EB8(0x30003, 0x0600E000, 0x800);
    temp_r0_11 = func_08008918(arg0);
    spC = 0;
    temp_r0_11->unk1C = 0;
    temp_r0_12 = func_08008918(arg0);
    spC = 0;
    temp_r0_12->unk1E = 0;
    func_08051320(0x0600E800, 0, 0, 0x20, 3, 0, 0);
    temp_r0_13 = func_08008918(arg0);
    spC = 0;
    temp_r0_13->unk18 = 0;
    temp_r0_14 = func_08008918(arg0);
    spC = 0;
    temp_r0_14->unk1A = 0;
    temp_r0_15 = func_08008918(arg0);
    spC = 0;
    temp_r0_15->unk14 = 0;
    temp_r0_16 = func_08008918(arg0);
    spC = 0;
    temp_r0_16->unk16 = 0;
    func_08008E64(gUnk_080F9F78, 0x05000000, 0x20);
    (void *)0x05000040->unk0 = 0x3E0;
    (void *)0x05000040->unk2 = 0;
    ((void *)0x05000040 + 2)->unk2 = 0x4218;
    temp_r4 = (GenObj *)((u8 *)arg0 + 0x124);
    *(0x05000200 + (func_080074C0(temp_r4, temp_r4->unk4) << 5)) = 0x3E0;
    *(0x05000202 + (func_080074C0(temp_r4, temp_r4->unk4) << 5)) = 0;
    *(0x05000204 + (func_080074C0(temp_r4, temp_r4->unk4) << 5)) = 0x4218;
    temp_r6 = (GenObj *)((u8 *)arg0 + 0x11C);
    do {
        temp_r4_2 = var_r5 * 2;
        sp54 = 1;
        sp54.unk2 = 2;
        func_0804E5AC(sp54, &sp14, 0, 0, (s32) *((u8 *)temp_r4_2 + &gUnk_080FB1A6), 0, 1);
        func_08008E64(&sp14, ((func_08007D4C(temp_r6, temp_r6->unk4) + temp_r4_2) << 5) + 0x06010000, 0x40);
        var_r5 += 1;
    } while (var_r5 <= 0x17);
}
