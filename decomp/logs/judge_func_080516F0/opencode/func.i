# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080516F0/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080516F0/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080516F0/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080516F0/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080516F0/opencode/func.c" 2
s32 GetName__C6Animal(s32);
s32 func_080074C0(void *, s32);
s16 *func_08008918(void *);
s32 func_08008E64(s32 *, s32, s32);
s32 func_08008EB8(s32, s32 *, s32);
s32 func_0804E5AC(s32, s32 *, s32, s32);
s32 func_0804E7A0(s32, s32 *, s32);
s32 func_0804E958(s32, s32 *, s32, s32);
s32 func_08051320(s32, s32, s32, s32);
s32 func_08051D30(void *, s32, s32, s32);
s32 func_080522D8(s32, u8 *, s32);
extern s32 *gUnk_080F9F70;
extern s32 gUnk_080F9F74;
extern s32 *gUnk_080F9F78;
extern s32 gUnk_080F9F7C;
extern u16 gUnk_080FA12E;
extern s32 gUnk_080FA158;

typedef struct GenObj {
    u8 _pad0[2];
    s32 unk2;
    struct GenObj *unk4;
    s32 unk8;
    struct GenObj *unkC;
    u8 _pad10[48];
    s32 unk40;
    s32 unk44;
} GenObj;
void func_080516F0(GenObj *arg0, ? arg12, ? argD3, ? arg283, u8 arg284, s16 arg285, ? arg286, ? arg287, s16 arg288, s16 arg289, s32 arg28A, s32 arg28B, GenObj *arg28C, s32 *arg28D, void *arg28E, s32 *arg28F, GenObj *arg290, s32 *arg291, s32 arg292, s32 *arg293, void *arg294, u8 *arg295, s16 *arg296, s16 *arg297, s16 *arg298) {
    s32 *temp_r4;
    s16 *temp_r0;
    s16 *temp_r0_10;
    s16 *temp_r0_11;
    s16 *temp_r0_12;
    s16 *temp_r0_13;
    s16 *temp_r0_2;
    s16 *temp_r0_3;
    s16 *temp_r0_4;
    s16 *temp_r0_5;
    s16 *temp_r0_6;
    s16 *temp_r0_7;
    s16 *temp_r0_8;
    s16 *temp_r0_9;
    s16 *var_r1;
    s16 *var_r2;
    s16 *var_r2_2;
    s16 *var_r3;
    s16 var_r4_3;
    s16 var_r6;
    s32 temp_r0_14;
    s32 temp_r1_3;
    s32 temp_r4_3;
    s32 temp_r5;
    s32 temp_r6;
    s32 var_r3_2;
    s32 var_r4_2;
    s32 var_r5;
    s32 var_r8;
    s32 var_sb;
    u16 *var_r4;
    u16 var_r2_3;
    u32 temp_r7;
    u8 *temp_r3;
    u8 temp_r4_2;
    void **temp_r1_2;
    void *temp_r1;

    temp_r0 = func_08008918();
    unkspC = 0;
    temp_r0->unk10 = 0;
    temp_r0_2 = func_08008918(arg0);
    unkspC = 4;
    temp_r0_2->unk12 = 4;
    temp_r0_3 = func_08008918(arg0);
    unkspC = 0;
    temp_r0_3->unk14 = 0;
    temp_r0_4 = func_08008918(arg0);
    unkspC = 0;
    temp_r0_4->unk16 = 0;
    temp_r0_5 = func_08008918(arg0);
    unkspC = 0;
    temp_r0_5->unk18 = 0;
    temp_r0_6 = func_08008918(arg0);
    unkspC = 0;
    temp_r0_6->unk1A = 0;
    temp_r0_7 = func_08008918(arg0);
    unkspC = 0;
    temp_r0_7->unk1C = 0;
    temp_r0_8 = func_08008918(arg0);
    unkspC = 0;
    temp_r0_8->unk1E = 0;
    func_08008EB8(0, (s32 *)0x06007FE0, 0x20);
    func_08008EB8(-1, (s32 *)0x0600E000, 0x800);
    func_08008EB8(-1, (s32 *)0x0600E800, 0x800);
    func_08008EB8(-1, (s32 *)0x0600F000, 0x800);
    func_08008EB8(-1, (s32 *)0x0600F800, 0x800);
    temp_r0_9 = func_08008918(arg0);
    unkspC = 0x1F40;
    *temp_r0_9 = 0x1F40;
    temp_r0_10 = func_08008918(arg0);
    unkspC = 0x1C43;
    temp_r0_10->unkE = 0x1C43;
    temp_r0_11 = func_08008918(arg0);
    unkspC = 0x1D41;
    temp_r0_11->unkC = 0x1D41;
    temp_r0_12 = func_08008918(arg0);
    unkspC = 0x1E42;
    temp_r0_12->unkA = 0x1E42;
    temp_r0_13 = func_08008918(arg0);
    unkspC = 0x1F40;
    temp_r0_13->unk8 = 0x1F40;
    func_08008E64(gUnk_080F9F70, 0x06000000, gUnk_080F9F74);
    func_08008EB8(0x30003, (s32 *)0x0600E000, 0x800);
    unksp0 = 3;
    unksp4 = 0;
    unksp8 = 0;
    func_08051320(0x0600E800, 0, 0, 0x20);
    func_08008E64(gUnk_080F9F78, 0x05000000, 0x20);
    (void *)0x05000040->unk0 = 0x3E0;
    *(s16 *)0x05000042 = 0;
    (void *)0x05000040->unk4 = 0x4218;
    var_sb = 0;
    arg28F = &unksp0 + 0x14;
    arg295 = &arg284;
    arg296 = &arg285;
    arg293 = &unksp0 + 0x58;
    arg297 = &arg288;
    arg298 = &arg289;
    arg291 = &argD3;
    arg290 = &unksp0 + 0x1C;
    var_r5 = 0x06001800;
    var_r4 = &gUnk_080FA12E;
    do {
        arg283.unk0 = 1;
        arg283.unk2 = 2;
        unksp0 = (s32) *var_r4;
        unksp4 = 0;
        unksp8 = 1;
        func_0804E5AC((s32) arg283.unk0, &unksp14, 0, 0);
        func_08008E64(arg28F, var_r5, 0x40);
        var_r5 += 0x40;
        var_r4 += 2;
        var_sb += 1;
    } while (var_sb <= 0xC);
    temp_r4 = arg0 + 0xB8;
    func_08008EB8(0x03FF03FF, temp_r4, 0x800);
    arg284 = 0;
    arg295->unk2 = 0;
    arg28A = 0;
    arg28B = 0x3E8;
    var_r8 = 0;
    arg28D = temp_r4;
    arg28E = temp_r4 + 0x40;
    arg294 = arg0 + 0x40;
    arg28C = arg0 + 0xB0;
loop_3:
    func_080522D8(arg0->unk8 + 0x2C4C, arg295, var_r8);
    arg285 = 0xC;
    arg296->unk2 = 2;
    func_0804E7A0((s32) arg285, &arg12, 0);
    temp_r4_2 = arg284;
    if (temp_r4_2 == 0) {
        temp_r0_14 = GetName__C6Animal(arg0->unk8 + 0x1C70);
        arg286.unk0 = 0xC;
        arg286.unk2 = 2;
        unksp0 = temp_r0_14;
        unksp4 = (s32) temp_r4_2;
        unksp8 = 1;
        func_0804E958((s32) arg286.unk0, &arg12, 0, 0);
    } else {
        arg287.unk0 = 0xC;
        arg287.unk2 = 2;
        unksp0 = (arg284 * 0xE) + &gUnk_080F9F7C;
        unksp4 = 0;
        unksp8 = 1;
        func_0804E958((s32) arg287.unk0, &arg12, 0, 0);
    }
    temp_r5 = var_r8 * 2;
    func_08008E64(arg293, (var_r8 * 0x300) + 0x06002800, 0x300);
    temp_r7 = (u32) ((var_r8 * 0x180000) + 0x21400000) >> 0x10;
    var_r4_2 = 0;
    arg292 = var_r8 + 1;
    var_r6 = temp_r7 + 0xC;
    temp_r1 = arg28D + 0xE;
    var_r3 = ((temp_r5 + 5) << 6) + temp_r1;
    var_r2 = ((temp_r5 + 4) << 6) + temp_r1;
    do {
        *var_r2 = temp_r7 + var_r4_2;
        *var_r3 = var_r6;
        var_r6 += 1;
        var_r3 += 2;
        var_r2 += 2;
        var_r4_2 += 1;
    } while (var_r4_2 <= 0xB);
    if ((var_r8 == 0) || (arg295->unk2 != arg28B)) {
        arg28A = var_r8;
        arg28B = (s32) arg295->unk2;
    }
    if (arg28A == 9) {
        func_08051D30(arg0, 2, temp_r5 + 4, 1);
    }
    temp_r6 = temp_r5 + 4;
    func_08051D30(arg0, 4, temp_r6, (s32) (arg28A + 1) % 10);
    func_08051D30(arg0, 1, temp_r6, 0xC);
    temp_r3 = arg295;
    if ((s16) ((s16) temp_r3->unk2 / 100) != 0) {
        func_08051D30(arg0, 0x14, temp_r6);
    }
    func_08051D30(arg0, 0x16, temp_r6, (s32) (s16) ((s16) (temp_r3->unk2 % 100) / 10));
    func_08051D30(arg0, 0x18, temp_r6, 0xA);
    func_08051D30(arg0, 0x19, temp_r6, (s32) (s16) ((temp_r3->unk2 % 100) % 10));
    func_08051D30(arg0, 0x1B, temp_r6, 0xB);
    temp_r4_3 = arg292;
    var_r8 = temp_r4_3;
    if (temp_r4_3 <= 9) {
        goto loop_3;
    }
    func_08008E64(arg28D, 0x0600F000, 0x800);
    func_08008EB8(0x03FF03FF, arg28D, 0x800);
    arg288 = 0x1B;
    arg297->unk2 = 2;
    func_0804E7A0((s32) arg288, &argD3, 0);
    arg289 = 0x1B;
    arg298->unk2 = 2;
    unksp0 = &gUnk_080FA158;
    unksp4 = 0;
    unksp8 = 1;
    func_0804E958((s32) arg289, &argD3, 0, 0);
    func_08008E64(arg291, 0x06002000, 0x6C0);
    var_r3_2 = 0;
    var_r4_3 = 0x211B;
    var_r2_2 = arg0 + 0x13C;
    var_r1 = arg28E + 4;
    do {
        *var_r1 = var_r3_2 + 0x2100;
        *var_r2_2 = var_r4_3;
        var_r4_3 += 1;
        var_r2_2 += 2;
        var_r1 += 2;
        var_r3_2 += 1;
    } while (var_r3_2 <= 0x1A);
    func_08008E64(arg28D, 0x0600F800, 0x800);
    temp_r1_2 = arg0->unk40;
    (*temp_r1_2)->unk10(&unkspC, temp_r1_2, *(arg0->unk44 + (arg294->unkC * 4)));
    temp_r1_3 = (func_080074C0(arg28C, arg28C->unk4) << 5) + 0x05000200;
    var_r2_3 = 0;
    if (unksp1C != 0) {
        var_r2_3 = arg290->unk4;
    }
    func_08008E64(unksp1C, temp_r1_3, (s32) var_r2_3);
}
