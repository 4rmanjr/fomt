s32 func_08009140();                                  /* extern */

typedef struct GenObj {
    u16 unk0;
    u8 _pad2[2];
    u16 unk4;
} GenObj;
void *func_08009168(GenObj *arg0) {
    func_08009140();
    arg0->unk4 = arg0->unk0;
    return arg0;
}
