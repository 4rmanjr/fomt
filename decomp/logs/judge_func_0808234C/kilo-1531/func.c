#include "common.h"
u16 GetIconId__C4Tool(s32 *);                         /* extern */
s32 __4ToolUi(s32 *, s32);                                /* extern */
s32 free();                                           /* extern */
void *func_08008910(void *);                        /* extern */
s32 func_08008F0C(s32 *, s32, s32, s32);                /* extern */
s32 func_0804E9F4(s32, u32, s32, s32, s32, s32);      /* extern */
s32 func_0805E6CC(s32 **, ? *);                         /* extern */
s32 func_0805E824(void ***, ? **, s32, s32);          /* extern */
s32 func_0805E860(void ***, u16);                     /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
s32 memcpy(s32 *, ? *, s32);                            /* extern */
extern ? gUnk_086678A0;
extern ? vtable_unk_080E5A28;

void func_0808234C(void *arg0, ? arg1, u32 arg2, s32 arg3) {
    ? *sp8;
s32 sp38;
    void **sp3C;
s32 sp50;
    s8 sp6C;
    s32 sp70;
    s32 sp78;
    s32 sp80;
s32 sp88;
s32 sp90;
s32 spB0;
    u32 spB4;
    u32 spB8;
    u32 spBC;
    u32 spC0;
    void *spC4;
    s32 spC8;
    u32 spCC;
    s32 spD0;
    s32 spD4;
    void *spD8;
    void *spDC;
    s32 temp_r0_2;
    s32 temp_r0_4;
    s32 temp_r1;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r5_2;
    s32 var_r8;
    s32 var_sb;
    u32 *var_r0;
    u32 *var_r0_3;
    u32 var_r3_2;
    u32 var_r3_4;
    u32 var_sl;
    void *temp_r0;
    void *temp_r0_3;
    void *temp_r0_5;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r5;
    void *temp_r6;
    void *temp_r6_2;
    void *var_r0_2;
    void *var_r0_4;
    void *var_r1;
    void *var_r1_2;
    void *var_r2;
    void *var_r2_2;
    void *var_r2_3;
    void *var_r2_4;
    void *var_r3;
    void *var_r3_3;
    void *var_r5;
    void *var_r5_2;

    spC4 = arg0;
    spC8 = arg3;
    func_0805E6CC(&sp8, &gUnk_086678A0);
    sp38.unk0 = 0;
    sp38.unk2 = 0;
    func_0805E824(&sp3C, &sp8, 0, 0x100);
    sp50.unk0 = 0;
    sp50.unk2 = 0;
    sp50.unk4 = 0;
    sp50.unk6 = 0;
    sp50.unk8 = 0;
    sp50.unkC = 0;
    sp50.unk10 = 0;
    sp50.unk11 = 0;
    sp50.unk14 = 0;
    sp50.unk18 = 0;
    sp6C = 0;
    sp70 = 0;
    sp70.unk4 = 0;
    sp78 = 0;
    sp78.unk4 = 0;
    sp80 = 0;
    sp80.unk4 = 0;
    sp88.unk0 = 0;
    sp88.unk4 = 0;
    __4ToolUi(&spB0, arg1);
    func_0805E860(&sp3C, GetIconId__C4Tool(&spB0));
    (*sp3C)->unk10(&sp90, sp3C, *(sp40 + (sp3C.unkC * 4)));
    memcpy(&sp90, &sp90, 0x20);
    temp_r0 = &sp90 + 0xC;
    sp70.unk0 = sp90.unk0;
    sp70.unk4 = (s32) sp90.unk4;
    sp70.unk8 = (s32) sp90.unk8;
    temp_r5 = &sp70 + 0xC;
    sp70.unkC = (s32) sp90.unkC;
    temp_r5->unk4 = (s32) temp_r0->unk4;
    temp_r5->unk8 = (s32) temp_r0->unk8;
    temp_r5->unkC = (s32) temp_r0->unkC;
    (temp_r5 + 0xC)->unk4 = (s32) (temp_r0 + 0xC)->unk4;
    temp_r5_2 = arg2 * 2;
    temp_r1 = temp_r5_2 + 0x30C;
    temp_r6 = func_08008910(spC4);
    func_08008F0C(&sp90, sp78, (temp_r1 << 5) + 0x06000000, 0x80);
    temp_r1_2 = temp_r6->unk4;
    if (temp_r1_2 != temp_r6->unkC) {
        if (temp_r1_2 != 0) {
            temp_r1_2->unk0 = (s32) sp90.unk0;
            temp_r1_2->unk4 = (s32) sp90.unk4;
            temp_r1_2->unk8 = (s32) sp90.unk8;
            temp_r1_2->unkC = (s32) sp90.unkC;
        }
        temp_r6->unk4 = (void *) (temp_r6->unk4 + 0x10);
        spD0 = temp_r5_2;
        var_sl = arg2 >> 1;
        spD4 = spC8 << 6;
        spCC = temp_r1 << 0x10;
    } else {
        spD8 = temp_r1_2;
        spB8 = 1;
        temp_r4 = (s32) (spD8 - temp_r6->unk0) >> 4;
        var_r0 = &spB4;
        *var_r0 = (u32) temp_r4;
        if ((u32) temp_r4 < (u32) spB8) {
            var_r0 = &spB8;
        }
        temp_r0_2 = temp_r4 + *var_r0;
        if (temp_r0_2 != 0) {
            temp_r4_2 = temp_r0_2 * 0x10;
            var_r0_2 = malloc(temp_r4_2);
            var_r8 = temp_r4_2;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(var_r8);
            }
        } else {
            var_r0_2 = 0;
            var_r8 = 0;
        }
        spDC = var_r0_2;
        var_r2 = temp_r6->unk0;
        var_r3 = var_r0_2;
        spD0 = arg2 * 2;
        var_sl = arg2 >> 1;
        spD4 = spC8 << 6;
        spCC = temp_r1 << 0x10;
        if (var_r2 != spD8) {
            do {
                if (var_r3 != 0) {
                    var_r3->unk0 = (s32) var_r2->unk0;
                    var_r3->unk4 = (s32) var_r2->unk4;
                    var_r3->unk8 = (s32) var_r2->unk8;
                    var_r3->unkC = (s32) var_r2->unkC;
                }
                var_r2 += 0x10;
                var_r3 += 0x10;
            } while (var_r2 != spD8);
        }
        if (spB8 == 1) {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32) sp90.unk0;
                var_r3->unk4 = (s32) sp90.unk4;
                var_r3->unk8 = (s32) sp90.unk8;
                var_r3->unkC = (s32) sp90.unkC;
            }
            var_r5 = var_r3 + 0x10;
        } else {
            var_r3_2 = spB8;
            var_r2_2 = var_r3;
            if (var_r3_2 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32) sp90.unk0;
                        var_r2_2->unk4 = (s32) sp90.unk4;
                        var_r2_2->unk8 = (s32) sp90.unk8;
                        var_r2_2->unkC = (s32) sp90.unkC;
                    }
                    var_r3_2 -= 1;
                    var_r2_2 += 0x10;
                } while (var_r3_2 != 0);
            }
            var_r5 = var_r2_2;
        }
        temp_r2 = temp_r6->unk4;
        temp_r0_3 = temp_r6->unk0;
        var_r1 = temp_r0_3;
        if (temp_r0_3 != temp_r2) {
            do {
                var_r1 += 0x10;
            } while (var_r1 != temp_r2);
        }
        if (temp_r0_3 != 0) {
            free();
        }
        temp_r6->unk0 = spDC;
        temp_r6->unk4 = var_r5;
        temp_r6->unkC = (void *) (spDC + var_r8);
    }
    temp_r6_2 = func_08008910(spC4);
    func_08008F0C(&sp90, sp80, (var_sl << 5) + 0x05000020, 0x20);
    temp_r1_3 = temp_r6_2->unk4;
    if (temp_r1_3 != temp_r6_2->unkC) {
        if (temp_r1_3 != 0) {
            temp_r1_3->unk0 = (s32) sp90.unk0;
            temp_r1_3->unk4 = (s32) sp90.unk4;
            temp_r1_3->unk8 = (s32) sp90.unk8;
            temp_r1_3->unkC = (s32) sp90.unkC;
        }
        temp_r6_2->unk4 = (void *) (temp_r6_2->unk4 + 0x10);
    } else {
        spD8 = temp_r1_3;
        spC0 = 1;
        temp_r4_3 = (s32) (spD8 - temp_r6_2->unk0) >> 4;
        var_r0_3 = &spBC;
        *var_r0_3 = (u32) temp_r4_3;
        if ((u32) temp_r4_3 < (u32) spC0) {
            var_r0_3 = &spC0;
        }
        temp_r0_4 = temp_r4_3 + *var_r0_3;
        if (temp_r0_4 != 0) {
            temp_r4_4 = temp_r0_4 * 0x10;
            var_r0_4 = malloc(temp_r4_4);
            var_sb = temp_r4_4;
            if (var_r0_4 == 0) {
                var_r0_4 = func_080D3BC0(var_sb);
            }
        } else {
            var_r0_4 = 0;
            var_sb = 0;
        }
        spDC = var_r0_4;
        var_r2_3 = temp_r6_2->unk0;
        var_r3_3 = var_r0_4;
        if (var_r2_3 != spD8) {
            do {
                if (var_r3_3 != 0) {
                    var_r3_3->unk0 = (s32) var_r2_3->unk0;
                    var_r3_3->unk4 = (s32) var_r2_3->unk4;
                    var_r3_3->unk8 = (s32) var_r2_3->unk8;
                    var_r3_3->unkC = (s32) var_r2_3->unkC;
                }
                var_r2_3 += 0x10;
                var_r3_3 += 0x10;
            } while (var_r2_3 != spD8);
        }
        if (spC0 == 1) {
            if (var_r3_3 != 0) {
                var_r3_3->unk0 = (s32) sp90.unk0;
                var_r3_3->unk4 = (s32) sp90.unk4;
                var_r3_3->unk8 = (s32) sp90.unk8;
                var_r3_3->unkC = (s32) sp90.unkC;
            }
            var_r5_2 = var_r3_3 + 0x10;
        } else {
            var_r3_4 = spC0;
            var_r2_4 = var_r3_3;
            if (var_r3_4 != 0) {
                do {
                    if (var_r2_4 != 0) {
                        var_r2_4->unk0 = (s32) sp90.unk0;
                        var_r2_4->unk4 = (s32) sp90.unk4;
                        var_r2_4->unk8 = (s32) sp90.unk8;
                        var_r2_4->unkC = (s32) sp90.unkC;
                    }
                    var_r3_4 -= 1;
                    var_r2_4 += 0x10;
                } while (var_r3_4 != 0);
            }
            var_r5_2 = var_r2_4;
        }
        temp_r2_2 = temp_r6_2->unk4;
        temp_r0_5 = temp_r6_2->unk0;
        var_r1_2 = temp_r0_5;
        if (temp_r0_5 != temp_r2_2) {
            do {
                var_r1_2 += 0x10;
            } while (var_r1_2 != temp_r2_2);
        }
        if (temp_r0_5 != 0) {
            free();
        }
        temp_r6_2->unk0 = spDC;
        temp_r6_2->unk4 = var_r5_2;
        temp_r6_2->unkC = (void *) (spDC + var_sb);
    }
    func_0804E9F4(spC4->unk1C->unk18 + spD4 + spD0, spCC >> 0x10, 2, 2, (s32) (u16) (var_sl + 1), 0x20);
    sp8 = &vtable_unk_080E5A28;
}

