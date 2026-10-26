void *func_08008AE0(void *);                        /* extern */
s32 func_08008AF0(void *);                            /* extern */
s32 func_080098AC(s32 *, s32);                        /* extern */
extern s32 vtable_unk_080E5AF0;

typedef struct GenObj {
    u8 _pad0[8];
    struct GenObj *unk8;
    u8 _padC[4];
    s32 unk10;
    u8 _pad14[32];
    s32 unk34;
} GenObj;
void func_08008724(void **arg0) {
    s32 sp0;
    s32 sp4;
    s32 *sp8;
    s32 spC;
    GenObj *temp_r0;
    GenObj *temp_r4;
    void *temp_r4_2;

    temp_r4 = *arg0;
    temp_r4->unk34 = (u16) (temp_r4->unk34 | 0x80);
    sp0 = 0;
    sp4 = 0;
    sp8 = &vtable_unk_080E5AF0;
    spC = (GenObj *)((u8 *)temp_r4 + 0x34);
    temp_r4_2 = (GenObj *)((u8 *)temp_r4 + 0x490);
    temp_r0 = func_08008AE0(temp_r4_2);
    ((void (*)(void *,...))(temp_r0->unk8->unk10))(temp_r0, &sp0);
    func_08008AF0(temp_r4_2);
    func_080098AC(&sp0, 2);
}
