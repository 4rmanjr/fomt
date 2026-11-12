s32 func_08034EB4(void *);                            /* extern */

typedef struct Vt {
    u8 _pad0[0x114];
    void *unk114;
} Vt;

typedef struct GenObj {
    void *unk0;
    u16 unk4;
    u8 _pad6[4];
    s16 unkA;
    u8 _padC[2];
    s16 unkE;
} GenObj;

void func_08036BB0(GenObj *arg0) {
    register s32 oa __asm__("r0");
    register s32 oa2 __asm__("r1");
    register s32 oe __asm__("r2");
    register s32 temp_r5 __asm__("r5");
    register s32 temp_r6 __asm__("r6");
    s32 a;
    s32 e;
    void *o;
    Vt *vt;

    oa = 0xA;
    temp_r5 = *(s16 *) ((u8 *) arg0 + oa);
    oe = 0xE;
    __asm__ volatile("" : "+r"(oe));
    temp_r6 = *(s16 *) ((u8 *) arg0 + oe);
    func_08034EB4(arg0);
    if ((arg0->unk4 == 2) && ((temp_r5 != 0xF4) || (temp_r6 != 0xAB))) {
        oa2 = 0xA;
        __asm__ volatile("" : "+r"(oa2));
        a = *(s16 *) ((u8 *) arg0 + oa2);
        oe = 0xE;
        e = *(s16 *) ((u8 *) arg0 + oe);
        if ((a == 0xF4) && (e == 0xAB)) {
            o = arg0->unk0;
            vt = *(Vt **) o;
            ((void (*)(void *)) vt->unk114)(o);
        }
    }
}
