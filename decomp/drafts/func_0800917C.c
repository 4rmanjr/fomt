s32 func_08009154();                                  /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
} GenObj;
void *func_0800917C(GenObj *arg0) {
    func_08009154();
    arg0->unk4 = (u16) arg0->unk0;
    return arg0;
}
