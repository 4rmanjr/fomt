s32 func_08009140();                                  /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
} GenObj;
void *func_08009168(GenObj *arg0) {
    func_08009140();
    arg0->unk4 = (u16) arg0->unk0;
    return arg0;
}
