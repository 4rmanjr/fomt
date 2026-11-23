s32 gUnk_081005D8;                                     /* extern */

void func_08050D8C(u8 *, s32 *);                       /* extern */
void func_08050E50(u8 *, s32);                         /* extern */

void func_080E3774(u8 *arg0) {
    u8 *p;

    p = arg0 + 0x1C8;
    func_08050D8C(p, &gUnk_081005D8);
    func_08050E50(p, 0x38);
}
