s32 func_080CD578();                                  /* extern */
extern s32 vtable_unk_080E85DC;

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    u8 _pad8[132];
    s32 unk8C;
} GenObj;
void *func_080CE19C(GenObj *arg0) {
    GenObj *temp_r0;

    func_080CD578();
    arg0->unk4 = &vtable_unk_080E85DC;
    temp_r0 = (GenObj *)((u8 *)arg0 + 0x8C);
    arg0->unk8C = 0;
    temp_r0->unk4 = 0;
    ((GenObj *)((u8 *)temp_r0 + 4))->unk4 = 0;
    return arg0;
}
