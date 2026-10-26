# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0807B188/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0807B188/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0807B188/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0807B188/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0807B188/opencode/func.c" 2
u16 GetIconId__C4Tool(void *);
u16 GetIconId__C7Article(s32 *);
s32 __4ToolUi(void *, s32);
s32 __7ArticleUi(s32 *, s32);
s32 func_0804E9F4(s32, u16, s32, s32);
s32 func_0804EDB4(s32, s32, s32, s32);
s32 func_0805E6CC(s32 **, s32 *);
s32 func_0805E824(void ***, s32 **, s32, s32);
s32 func_0805E860(void ***, u16);
s32 memcpy(s32 *, s32 *, s32);
extern s32 gUnk_080FD988;
extern s32 gUnk_086678A0;
extern s32 vtable_unk_080E5A28;

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk2;
    struct GenObj *unk4;
    s32 unk6;
    struct GenObj *unk8;
    struct GenObj *unkC;
    s32 unk10;
    s32 unk11;
    s32 unk14;
    s32 unk18;
    void *unk1C;
    s32 unk20;
    u8 _pad24[640];
    s32 unk2A4;
} GenObj;
s32 func_0807B188(GenObj *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
GenObj sp1C;
    s32 *sp2C;
s32 sp5C;
    void **sp60;
s32 sp74;
    s8 sp90;
s32 sp94;
s32 sp9C;
s32 spA4;
s32 spAC;
GenObj spB4;
s32 spD4;
    s32 spD8;
    u32 spDC;
    s32 spE0;
    s32 *spE4;
    s32 spE8;
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r4_3;
    s32 temp_r5;
    s32 var_r1;
    u16 var_r0;
    u32 temp_r0_3;
    u32 temp_r4_4;
    void *temp_r0_2;
    GenObj *temp_r0_4;
    void *temp_r1;
    void *temp_r4;
    void *temp_r4_2;

    spD8 = 4;
    temp_r5 = (GenObj *)((u8 *)arg0 + 0x24);
    temp_r0 = (GenObj *)((u8 *)arg0 + 0x20) + ((arg0->unk20 * 0x10) + 4);
    var_r1 = temp_r5;
    if (var_r1 != temp_r0) {
        do {
            var_r1 += 0x10;
        } while (var_r1 != temp_r0);
    }
    arg0->unk20 = (u32) (arg0->unk20 - ((s32) (temp_r0 - temp_r5) >> 4));
    spDC = 0;
    if ((u32) arg0->unk2A4 <= 0U) {

    } else {
        spE4 = &sp0 + 0x1C;
        spE8 = 4;
loop_5:
        temp_r3 = *((u8 *)(GenObj *)((u8 *)arg0 + 0x2A4) + spE8);
        temp_r1 = (temp_r3 * 0x14) + &gUnk_080FD988;
        sp8 = temp_r1->unk0;
        sp8.unk4 = (s32) temp_r1->unk4;
        sp8.unk8 = (s32) temp_r1->unk8;
        sp8.unkC = (s32) temp_r1->unkC;
        (&(GenObj *)((u8 *)sp8 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r1 + 0xC))->unk4;
        spE0 = (temp_r3 * 0x18) + 0xD0;
        if (sp18 > 1U) {

        } else {
            spE4->unk4 = 0x10;
            func_0805E6CC(&sp2C, &gUnk_086678A0);
            sp5C = 0;
            sp5C.unk2 = 0;
            func_0805E824(&sp60, &sp2C, 0, 0x100);
            sp74 = 0;
            sp74.unk2 = 0;
            sp74.unk4 = 0;
            sp74.unk6 = 0;
            sp74.unk8 = 0;
            sp74.unkC = 0;
            sp74.unk10 = 0;
            sp74.unk11 = 0;
            sp74.unk14 = 0;
            sp74.unk18 = 0;
            sp90 = 0;
            sp94 = 0;
            sp94.unk4 = 0;
            sp9C = 0;
            sp9C.unk4 = 0;
            spA4 = 0;
            spA4.unk4 = 0;
            spAC = 0;
            spAC.unk4 = 0;
            spE4->unk0 = (s16) (spD8 * 8);
            if (sp18 == 0) {
                __7ArticleUi(&spD4, sp8);
                var_r0 = GetIconId__C7Article(&spD4);
            } else {
                temp_r4 = &sp0 + 0xD5;
                __4ToolUi(temp_r4, sp8);
                var_r0 = GetIconId__C4Tool(temp_r4);
            }
            func_0805E860(&sp60, var_r0);
            (*sp60)->unk10(&spB4, sp60, *((u8 *)sp64 + (sp60.unkC * 4)));
            memcpy(&spB4, &spB4, 0x20);
            temp_r4_2 = &(GenObj *)((u8 *)spB4 + 0xC);
            sp94 = (s32) spB4;
            sp94.unk4 = (s32) spB4.unk4;
            sp94.unk8 = (s32) spB4.unk8;
            temp_r0_2 = &(GenObj *)((u8 *)sp94 + 0xC);
            sp94.unkC = (s32) spB4.unkC;
            temp_r0_2->unk4 = (s32) temp_r4_2->unk4;
            temp_r0_2->unk8 = (s32) temp_r4_2->unk8;
            temp_r0_2->unkC = (s32) temp_r4_2->unkC;
            ((GenObj *)((u8 *)temp_r0_2 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r4_2 + 0xC))->unk4;
            sp1C.unk8 = (s32) sp9C;
            sp1C.unkC = (s32) spA4;
            temp_r0_3 = arg0->unk20;
            if (temp_r0_3 <= 0x27U) {
                temp_r0_4 = (GenObj *)((u8 *)arg0 + 0x20) + ((temp_r0_3 * 0x10) + 4);
                if (temp_r0_4 != 0) {
                    temp_r0_4->unk0 = (s32) sp1C;
                    temp_r0_4->unk4 = (s32) sp1C.unk4;
                    temp_r0_4->unk8 = (s32) sp1C.unk8;
                    temp_r0_4->unkC = sp28;
                }
                arg0->unk20 = (u32) (arg0->unk20 + 1);
            }
            sp2C = &vtable_unk_080E5A28;
        }
        temp_r4_3 = spD8 << 6;
        sp0 = 0;
        sp4 = 0x20;
        func_0804E9F4(arg0->unk1C->unk18 + temp_r4_3 + 4, (u16) spE0, 0xC, 2);
        if ((u32) *((u8 *)spE8 + ((GenObj *)((u8 *)arg0 + 0x2A4))) <= 2U) {
            sp0 = 0x20;
            func_0804EDB4(sp10, arg0->unk1C->unk18 + temp_r4_3 + 0x32, 0xA0, 0);
            sp0 = 0;
            sp4 = 0x20;
            func_0804E9F4(arg0->unk1C->unk18 + temp_r4_3 + 0x34, 0x20U, 2, 2);
        }
        spD8 += 2;
        spE8 += 4;
        temp_r4_4 = spDC + 1;
        spDC = temp_r4_4;
        if (temp_r4_4 < (u32) arg0->unk2A4) {
            goto loop_5;
        }
    }
    return spD8;
}
