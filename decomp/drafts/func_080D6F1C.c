s32 func_080D6F0C(s32);                               /* extern */

typedef struct GenObj {
    u8 unk0;
    u8 unk1;
} GenObj;
void func_080D6F1C(GenObj *arg0) {
    GenObj *t = arg0;
    func_080D6F0C((s32)t + 0x10);
    func_080D6F0C((u8 *)t + 4);
    t->unk0 = 0;
    t->unk1 = 1;
}

/* ATTEMPT-NOTE opencode: call-1 langsung (adds r0), call-2 via copy; u8 member. */
