s32 GetDesc__C4Food(s32 *);                           /* extern */
s32 __4FoodUi(s32 *, s32);                              /* extern */
s32 func_080CABEC(s32, s32);                          /* extern */
extern s32 gUnk_080FE050;

typedef struct S_E51C { u8 _pad2A8[0x2A8]; s32 unk2A8; } S_E51C;

void func_0807E51C(s32 arg0, s32 arg1) {
    register s32 a0sv __asm__("r4") = arg0;
    s32 sp0;
    u8 *tbl;

    tbl = (u8 *) &gUnk_080FE050;
    __4FoodUi(&sp0, *(u32 *)(tbl + (*(s32 *)((u8 *)a0sv + arg1 * 4 + 0x2A8)) * 8));
    func_080CABEC(a0sv, GetDesc__C4Food(&sp0));
}
