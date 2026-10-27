s32 func_080AC388(void *, void *, void *, s32, s32, s32); /* extern */

typedef struct GenObj {
    s32 unk0;
    u8 _pad4[32];
    s32 unk24;
} GenObj;
void func_080ABBA0(GenObj *arg0) {
    GenObj *t = arg0;
    s32 a = t->unk24;

    t->unk0 = a;
    func_080AC388((u8 *)t + 0x10, (u8 *)t + 0x1C, t, 0, 0, 0);
}

/* ATTEMPT-NOTE opencode: 6-arg (r2=t live dari copy awal, r3=0, stack 0,0). */
