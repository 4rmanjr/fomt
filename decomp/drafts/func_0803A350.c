s32 func_08008B6C(s32, u16);                          /* extern */
s32 func_08008CD0(s32);                              /* extern */

typedef struct Iter0803A350 {
    s32 *unk0;
    s32 *unk4;
} Iter0803A350;

typedef struct Vt0803A350 {
    u8 _pad0[0x14C];
    Iter0803A350 *(*unk14C)(void *);
} Vt0803A350;

void func_0803A350(void **arg0, s32 arg1) {
    void *obj;
    Iter0803A350 *it;
    s32 *p;
    s32 *end;
    s32 v;

    obj = *arg0;
    it = ((Vt0803A350 *) *(void **) obj)->unk14C(obj);
    p = it->unk0;
    end = it->unk4;
    if (p != end) {
        do {
            if ((func_08008CD0(*p) << 0x18) == 0) {
                v = *p;
                goto done;
            }
            p += 1;
        } while (p != end);
    }
    v = *(end - 1);
done:
    func_08008B6C(v, (u16) arg1);
}
