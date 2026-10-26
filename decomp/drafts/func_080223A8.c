s32 __5ActorRC5Actor(s32 *, s32);                       /* extern */
s32 func_08020038(void *, s32, s32 *, s32);             /* extern */
s32 func_080228B4(void *, s32, u8);                   /* extern */
s32 func_08022950(void *);                          /* extern */
extern s32 vtable_unk_080E639C;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
    u8 _pad18[8];
    s32 unk20;
    u8 _pad24[16];
    s32 unk34;
} GenObj;
void *func_080223A8(GenObj *arg0, s32 arg1, s32 arg2) {
s32 sp0;

    __5ActorRC5Actor(&sp0, arg2);
    func_08020038(arg0, arg1, &sp0, 0x720);
    arg0->unk14 = &vtable_unk_080E639C;
    arg0->unk34 = arg2;
    func_080228B4(arg0, func_08022950(arg0), arg0->unk20);
    return arg0;
}
