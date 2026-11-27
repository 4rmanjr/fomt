s32 func_0805E8F0(void *);

typedef struct GenObj {
    u8 _pad0[0x44];
    u8 unk44;
    u8 _pad45[2];
    u8 unk47;
} GenObj;

void func_080DD3D4(GenObj *arg0) {
    u8 *p = &arg0->unk47;
    u8 *q = p;
    u8 v;
    s32 f;

    if (*p == 0) {
        f = func_0805E8F0((u8 *)arg0 + 0x30);
        if ((f << 30) < 0) {
            q = &arg0->unk44;
            v = 1;
        } else {
            return;
        }
    } else {
        v = 0;
    }
    *q = v;
}
