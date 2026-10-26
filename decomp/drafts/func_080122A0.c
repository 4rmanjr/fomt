s32 func_080323C8();                                  /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[160];
    s32 unkA8;
} GenObj;
void func_080122A0(GenObj *arg0) {
    if ((*arg0->unk4->unkA8)->unk40() != 0) {
        func_080323C8();
    }
}
