s32 func_0805E8F0(void *);

typedef struct GenObj {
    u8 _pad0[0x44];
    u8 unk44;
    u8 _pad45[2];
    u8 unk47;
} GenObj;

void func_080DD3D4(GenObj *arg0) {
    u8 *p = &arg0->unk47;
    u8 v = 0;

    if (arg0->unk47 == 0) {
        if (!(func_0805E8F0((u8 *)arg0 + 0x30) & 2)) {
            return;
        }
        p = &arg0->unk44;
        v = 1;
    }
    *p = v;
}
