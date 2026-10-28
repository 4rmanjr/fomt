s32 func_080CE19C();                                  /* extern */
extern s32 vtable_unk_080E7D68;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    s32 unk8;
    u8 _padC[140];
    u8 unk98;
    u8 _pad99[99];
    s32 unkFC;
    s32 unk100;
    s32 unk104;
    s32 unk108;
} GenObj;
void *func_0808ABC4(GenObj *arg0) {
    s32 temp_r1;
    s32 *temp_r2;

    func_080CE19C();
    arg0->unk4 = &vtable_unk_080E7D68;
    arg0->unk98 = 0;
    temp_r2 = &arg0->unkFC;
    temp_r1 = arg0->unk8;
    *temp_r2 = temp_r1 + 0x1C34;
    arg0->unk100 = (s32) (temp_r1 + 0x1C2C);
    arg0->unk104 = (s32) (temp_r1 + 0x1C38);
    arg0->unk108 = 0;
    return arg0;
}
