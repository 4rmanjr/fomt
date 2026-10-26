s32 func_080CD8A0(void *);                            /* extern */
s32 func_080CDDD4();                                  /* extern */
s32 func_080CE790();                                  /* extern */
s32 func_080CECE8();                                  /* extern */

typedef struct GenObj {
    u8 _pad0[140];
    s32 unk8C;
    s32 unk90;
    s32 unk94;
} GenObj;
void func_080CE2C4(GenObj *arg0) {
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
