s32 func_080087C8(void *);                            /* extern */
s32 func_080088B8(void *);                            /* extern */
s32 func_080088C4(void *);                          /* extern */
s32 func_080088CC(void *);                          /* extern */
s32 func_080088D4(void *);                          /* extern */
void *func_08008918(void *);                        /* extern */
void *func_08008940(void *);                        /* extern */
s32 func_08009300(s32 *, void *);                       /* extern */
s32 func_0800934C(s32 *, s32, s32, s32);                /* extern */
s32 func_08009378(s32 *, s32, s32, s32);                /* extern */
s32 func_080094B8(s32 *, s32);                        /* extern */
s32 func_0807628C(void *);                            /* extern */
s32 func_08076BE0(void *, s32);                       /* extern */
s32 func_08076BEC(void *);                          /* extern */
extern s32 vtable_unk_080E5B80;

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    struct GenObj *unk4;
    struct GenObj *unk8;
    s32 unkC;
    s32 unk10;
    u8 _pad14[60];
    s32 unk50;
    u8 _pad54[200];
    s32 unk11C;
} GenObj;
void func_080769A0(GenObj *arg0) {
    s16 sp0;
    GenObj *sp4;
    s32 *spC;
s32 sp10;
    GenObj *sp14;
    s16 temp_r2;
    s32 temp_r4;
    s32 temp_r7;
    s32 var_r5;
    s32 var_r8;
    u8 temp_r1_2;
    u8 temp_r1_3;
    u8 temp_r1_4;
    GenObj *temp_r0;
    GenObj *temp_r0_2;
    GenObj *temp_r0_3;
    GenObj *temp_r0_4;
    void *temp_r1;

    temp_r0 = func_08008918();
    sp0 = 0x3F;
    temp_r0->unk50 = 0x3F;
    temp_r1 = func_08008918(arg0);
    sp4 = 0;
    sp4.unk4 = 0;
    spC = &vtable_unk_080E5B80;
    func_08009300(&sp10, temp_r1);
    func_0800934C(&sp10, 0x889, 1, 1);
    temp_r0_2 = func_08008940(arg0);
    ((void (*)(void *,...))(temp_r0_2->unk8->unk10))(temp_r0_2, &sp4);
    var_r8 = 0;
    var_r5 = func_08076BEC(arg0) * 0x10;
loop_1:
    func_080087C8(arg0);
    func_080088B8(arg0);
    sp14 = func_080088C4(arg0);
    temp_r4 = func_080088CC(arg0);
    temp_r7 = func_080088D4(arg0);
    if ((s32) ((0 - sp4) | sp4) < 0) {
block_9:
        temp_r1_2 = sp14.unk0;
        if (0x40 & temp_r1_2) {
            if (var_r5 > 0) {
                temp_r1_3 = sp14.unk1;
                if (1 & temp_r1_3) {
                    var_r5 -= 0x80;
                } else if (2 & temp_r1_3) {
                    var_r5 -= 8;
                } else {
                    var_r5 -= 0x40;
                }
            }
            if (var_r5 < 0) {
                var_r5 = 0;
            }
            goto block_27;
        }
        if (0x80 & temp_r1_2) {
            temp_r2 = arg0->unk8->unk4->unkE - 0xA0;
            if ((s32) (var_r5 >> 4) < (s32) temp_r2) {
                temp_r1_4 = sp14.unk1;
                if (1 & temp_r1_4) {
                    var_r5 += 0x80;
                } else if (2 & temp_r1_4) {
                    var_r5 += 8;
                } else {
                    var_r5 += 0x40;
                }
            }
            if ((s32) (var_r5 >> 4) > (s32) temp_r2) {
                var_r5 = temp_r2 * 0x10;
            }
block_27:
            func_08076BE0(arg0, var_r5 >> 4);
        } else if (((u32) (temp_r7 << 0x1B) >> 0x1F) != ((u32) (temp_r7 << 0x1A) >> 0x1F)) {
            ((void (*)(void *,...))(arg0->unk4->unkC))(arg0, 1 & ~((u32) (temp_r7 << 0x18) >> 0x1C));
            var_r5 = func_08076BEC(arg0) * 0x10;
        }
        func_0807628C(arg0);
        goto loop_1;
    }
    if (var_r8 == 0) {
        if (2 & temp_r4) {
            var_r8 = 1;
            func_08009378(&sp10, 0x889, 1, 1);
            temp_r0_3 = func_08008940(arg0);
            ((void (*)(void *,...))(temp_r0_3->unk8->unk10))(temp_r0_3, &sp4);
        } else if ((arg0->unk11C != 0) && (4 & temp_r4)) {
            var_r8 = 1;
            func_08009378(&sp10, 0x889, 1, 1);
            temp_r0_4 = func_08008940(arg0);
            ((void (*)(void *,...))(temp_r0_4->unk8->unk10))(temp_r0_4, &sp4);
        }
        goto block_9;
    }
    func_080094B8(&sp4, 2);
}
