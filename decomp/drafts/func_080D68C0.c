s32 func_080D6A80(void *, void *);                    /* extern */
s32 memcpy(void *, void *, s32);                      /* extern */
s32 strcpy(s32, s32);                                 /* extern */

typedef struct GenObj {
    u8 _pad0[1];
    struct GenObj *unk1;
    struct GenObj *unk4;
    u8 _pad8[24];
    s32 unk20;
    s32 unk24;
    u8 _pad28[28];
    s32 unk44;
    s32 unk46;
    s32 unk47;
    s32 unk48;
    s32 unk4B;
    s32 unk4C;
    s32 unk50;
    s32 unk51;
    s32 unk54;
} GenObj;
void *func_080D68C0(GenObj *arg0, GenObj *arg1) {
    s32 *var_r2;
    s32 *var_r3;
    s32 temp_r0;
    s32 var_r1;
    u32 temp_r2;
    u8 temp_r3;
    GenObj *temp_r1;
    GenObj *temp_r2_2;
    GenObj *temp_r3_2;

    strcpy();
    strcpy((GenObj *)((u8 *)arg0 + 0x10), (GenObj *)((u8 *)arg1 + 0x10));
    temp_r1 = (GenObj *)((u8 *)arg0 + 0x20);
    arg0->unk20 = (u8) arg1->unk20;
    temp_r1->unk4 = (s32) arg1->unk24;
    ((GenObj *)((u8 *)temp_r1 + 4))->unk4 = (s32) ((GenObj *)((u8 *)arg1 + 0x24))->unk4;
    var_r3 = (GenObj *)((u8 *)arg0 + 0x2C);
    var_r1 = 5;
    var_r2 = (GenObj *)((u8 *)arg1 + 0x2C);
    do {
        temp_r0 = *var_r2;
        var_r2 += 4;
        *var_r3 = temp_r0;
        var_r3 += 4;
        var_r1 -= 1;
    } while (var_r1 != -1);
    temp_r3 = arg1->unk44;
    arg0->unk44 = (u8) ((((((((-0x10 & arg0->unk44) | ((u32) (temp_r3 << 0x1C) >> 0x1C)) & ~0x10) | (0x10 & temp_r3)) & ~0x20) | (0x20 & temp_r3)) & ~0x40) | (0x40 & temp_r3));
    arg0->unk44 = (s16) ((0xFFFF807F & (u16) arg0->unk44) | (0x7F80 & (u16) arg1->unk44));
    arg0->unk44 = (s32) (((s32) arg0->unk44 & 0xFF807FFF) | ((s32) arg1->unk44 & 0x7F8000));
    arg0->unk46 = (u16) ((0xFFFF807F & arg0->unk46) | (0x7F80 & arg1->unk46));
    arg0->unk47 = (u8) ((0x7F & arg0->unk47) | (((u8) arg1->unk47 >> 7) << 7));
    arg0->unk48 = (s32) ((arg0->unk48 & 0xE0000000) | (arg1->unk48 & 0x1FFFFFFF));
    temp_r3_2 = (GenObj *)((u8 *)arg0 + 0x4B);
    arg0->unk4B = (u8) ((0x1F & arg0->unk4B) | (((u8) arg1->unk4B >> 5) << 5));
    temp_r3_2->unk1 = (u8) ((-0x80 & temp_r3_2->unk1) | ((u32) (arg1->unk4C << 0x19) >> 0x19));
    temp_r3_2->unk1 = (s16) ((0xFFFF807F & (u16) temp_r3_2->unk1) | (0x7F80 & (u16) arg1->unk4C));
    temp_r2 = (u32) arg1->unk4C >> 0xF;
    arg0->unk4C = (s32) ((arg0->unk4C & 0x7FFF) | (temp_r2 << 0xF));
    temp_r2_2 = (GenObj *)((u8 *)arg0 + 0x50);
    arg0->unk50 = (u16) ((0xFFFFE000 & arg0->unk50) | (((temp_r2 >> 0x11) | (arg1->unk50 & 0x1FFF)) & 0x1FFF));
    temp_r2_2->unk1 = (u8) ((0x1F & temp_r2_2->unk1) | (((u8) arg1->unk51 >> 5) << 5));
    arg0->unk54 = (s32) arg1->unk54;
    ((GenObj *)((u8 *)arg0 + 0x54))->unk4 = (s32) ((GenObj *)((u8 *)arg1 + 0x54))->unk4;
    memcpy((GenObj *)((u8 *)arg0 + 0x5C), (GenObj *)((u8 *)arg1 + 0x5C), 2);
    func_080D6A80((GenObj *)((u8 *)arg0 + 0x60), (GenObj *)((u8 *)arg1 + 0x60));
    return arg0;
}
