s32 func_08009154();                                  /* extern */

typedef struct GenObj {
    u16 unk0;
    u8 _pad2[2];
    u16 unk4;
} GenObj;
void *func_0800917C(GenObj *arg0) {
    func_08009154();
    arg0->unk4 = arg0->unk0;
    return arg0;
}
