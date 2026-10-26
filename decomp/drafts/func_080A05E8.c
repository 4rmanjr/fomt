s32 func_0809EA6C(s32 *, s32, s32 *);                       /* extern */
s32 memcpy(s32 *, s32 *, s32);                            /* extern */
s32 strcpy(void *, s32 *);                              /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk2;
    s32 unk3;
    struct GenObj *unk4;
    s32 unk6;
    struct GenObj *unk8;
    struct GenObj *unkC;
    u8 _pad10[21];
    s32 unk25;
    s32 unk26;
    s32 unk28;
    s32 unk2A;
} GenObj;
void func_080A05E8(GenObj *arg0, ? arg1) {
GenObj sp0;
s32 sp14;
    u8 sp24;
s32 sp28;
s32 sp30;
    u32 temp_r0;
    u8 temp_r1;
    GenObj *temp_r1_2;

    temp_r1 = arg0->unk3;
    temp_r0 = (u32) (temp_r1 << 0x1E) >> 0x1F;
    if (temp_r0 == 0) {
        arg0->unk3 = (u8) (2 | temp_r1);
        sp30 = (u16) ((0xFFFFFC00 & sp30) | 0x1D);
        sp30.unk1 = (u8) ((3 & sp30.unk1) | 0x90);
        sp30.unk2 = (u16) ((0xFFFFFC00 & sp30.unk2) | 1);
        sp30.unk3 = (u8) ((3 & sp30.unk3) | 0x90);
        sp30.unk4 = (u16) ((0xFFFFFC00 & sp30.unk4) | 1);
        memcpy(&sp28, &sp30, 6);
        sp28.unk6 = (s8) temp_r0;
        func_0809EA6C(&sp0, arg1, &sp28);
        temp_r1_2 = (GenObj *)((u8 *)arg0 + 4);
        arg0->unk4 = (s32) sp0;
        temp_r1_2->unk4 = (s32) sp0.unk4;
        temp_r1_2->unk8 = (s32) sp0.unk8;
        temp_r1_2->unkC = (s32) sp0.unkC;
        ((GenObj *)((u8 *)temp_r1_2 + 0xC))->unk4 = (s32) (&(GenObj *)((u8 *)sp0 + 0xC))->unk4;
        strcpy((GenObj *)((u8 *)arg0 + 0x18), &sp14);
        arg0->unk28 = (u8) sp24;
        ((GenObj *)((u8 *)arg0 + 0x28))->unk1 = (u8) sp0.unk25;
        arg0->unk2A = (u8) ((-2 & arg0->unk2A) | ((u32) (sp0.unk26 << 0x1F) >> 0x1F));
    }
}
