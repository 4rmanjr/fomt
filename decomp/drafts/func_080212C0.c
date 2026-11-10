s32 func_080384FC(void *);                            /* extern */
s32 func_080AC070(s32 *, s32 *);                        /* extern */

typedef struct Vt {
    u8 _pad0[0xC];
    void *fnC;
    u8 _pad10[4];
    void *fn14;
    u8 _pad18[0x1C];
    void *fn34;
    u8 _pad38[8];
    void *fn40;
} Vt;

typedef struct Vt2 {
    u8 _pad0[0xC];
    void *fnC;
} Vt2;

typedef struct Obj {
    Vt *unk0;
} Obj;

typedef struct Res {
    u8 _pad0[8];
    s32 unk8;
    s32 unkC;
    Vt2 *unk14;
    u8 _pad18[0xE];
    u8 unk26;
} Res;

typedef struct GenObj {
    Obj *unk0;
    u16 unk4;
    u16 _pad6;
    s32 unk8;
    s32 unkC;
    u8 _pad10[0x10];
    u8 unk20;
} GenObj;

void func_080212C0(GenObj *arg0) {
    s32 sp0[3];
    s32 spC[2];
    s32 temp_r1;
    s32 temp_r8;
    s32 temp_sb;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_sl;
    u16 temp_r7;
    u8 temp_r0_3;
    Obj *temp_r4;
    Res *temp_r0_2;

    temp_r0_2 = ((Res *(*)(Obj *, s32)) arg0->unk0->unk0->fn40)(arg0->unk0, 0x4B);
    if ((temp_r0_2 != 0) && (temp_r0_2->unk26 != 0)) {
        temp_sb = arg0->unk8;
        temp_r8 = arg0->unkC;
        var_sl = 8;
        temp_r7 = arg0->unk4;
        temp_r4 = arg0->unk0;
        if ((temp_r7 != ((s32 (*)(Obj *)) temp_r4->unk0->fn14)(temp_r4)) && (temp_r7 != 2)) {
            var_sl = 0;
        }
        ((void (*)(s32 *, Obj *, s32)) temp_r4->unk0->fn34)(sp0, temp_r4, temp_r7);
loop_7:
        temp_r1 = var_sl << 0x10;
        temp_r0_3 = arg0->unk20;
        switch (temp_r0_3) {
        case 0:
            temp_r0_2->unk8 = temp_sb;
            var_r0 = temp_r8 + temp_r1;
block_19:
            temp_r0_2->unkC = var_r0;
            break;
        case 1:
            temp_r0_2->unk8 = temp_sb;
            var_r0 = temp_r8 - temp_r1;
            goto block_19;
        case 2:
            var_r0_2 = temp_sb - temp_r1;
block_18:
            temp_r0_2->unk8 = var_r0_2;
            var_r0 = temp_r8;
            goto block_19;
        case 3:
            var_r0_2 = temp_sb + temp_r1;
            goto block_18;
        }
        var_sl -= 1;
        if (var_sl >= 0) {
            ((void (*)(s32 *, Res *)) temp_r0_2->unk14->fnC)(spC, temp_r0_2);
            if ((func_080AC070(sp0, spC) << 0x18) != 0) {
                goto loop_7;
            }
        }
        func_080384FC(temp_r0_2);
    }
}
