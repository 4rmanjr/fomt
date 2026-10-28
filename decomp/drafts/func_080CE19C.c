s32 func_080CD578();                                  /* extern */
extern s32 vtable_unk_080E85DC;

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    u8 _pad8[132];
    s32 unk8C;
    s32 unk90;
    s32 unk94;
} GenObj;
void *func_080CE19C(GenObj *arg0) {
    func_080CD578();
    arg0->unk4 = &vtable_unk_080E85DC;
    arg0->unk8C = 0;
    arg0->unk90 = 0;
    arg0->unk94 = 0;
    return arg0;
}
