s32 CpuSet(s16 *, void *, s32);                       /* extern */

typedef struct GenObj {
    s32 unk0;
    u8 _pad4[28];
    u16 unk20;
    u16 unk22;
    u16 unk24;
    u16 unk26;
    u8 _pad28[8];
    u16 unk30;
    u16 unk32;
    u16 unk34;
    u16 unk36;
} GenObj;
void *func_080096B0(GenObj *arg0) {
    s16 sp0;
    s16 *p = &sp0;

    sp0 = 0;
    CpuSet(p, arg0, 0x0100002B);
    arg0->unk0 = 0x80;
    arg0->unk20 = 0x100;
    arg0->unk22 = 0;
    arg0->unk24 = 0;
    arg0->unk26 = 0x100;
    arg0->unk30 = 0x100;
    arg0->unk32 = 0;
    arg0->unk34 = 0;
    arg0->unk36 = 0x100;
    return arg0;
}
