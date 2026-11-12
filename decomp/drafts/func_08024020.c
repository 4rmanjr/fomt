typedef struct GenObj {
    u8 _pad0[40];
    s32 unk28;
    u8 _pad2C[2];
    u8 unk2E;
    u8 _pad2F[5];
    struct GenObj *unk34;
} GenObj;

s32 func_08024020(GenObj *arg0) {
    s32 n;
    register s32 v __asm__("r1");
    GenObj *o;

    o = arg0->unk34;
    n = o->unk28;
    if (n != 1) {
        if (n <= 1) {
            if (n == 0) {
                return o->unk2E;
            } else {
                return 0;
            }
        }
        if (n > 3) {
            return 0;
        }
        return 1;
    }
    v = 1;
    if (0x7F & o->unk2E) {
        v = 6;
    }
    return v;
}
