s32 func_080CD8A0(void *);                            /* extern */
s32 func_080CDDD4();                                  /* extern */
s32 func_080CE790();                                  /* extern */
s32 func_080CECE8();                                  /* extern */

void func_080CE2C4(void *arg0) {
    if (arg0->unk8C != 0) {
        func_080CDDD4();
    }
    if (arg0->unk90 != 0) {
        func_080CECE8();
    }
    if (arg0->unk94 != 0) {
        func_080CE790();
    }
    func_080CD8A0(arg0);
}
