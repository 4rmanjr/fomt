s32 __5ActorRC5Actor(s32 *, s32);                       /* extern */
s32 func_08020038(void *, s32, ? *, s32);             /* extern */
s32 func_08023308(void *, s32, u8);                   /* extern */
s32 func_08023378(void *);                          /* extern */
extern ? vtable_unk_080E6310;

void *func_08022C18(void *arg0, s32 arg1, s32 arg2) {
s32 sp0;

    __5ActorRC5Actor(&sp0, arg2);
    func_08020038(arg0, arg1, &sp0, 0x2B0);
    arg0->unk14 = &vtable_unk_080E6310;
    arg0->unk34 = arg2;
    func_08023308(arg0, func_08023378(arg0), arg0->unk20);
    return arg0;
}
