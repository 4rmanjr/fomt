s32 GetLocation__C3Npc(void *);                       /* extern */
s32 func_080A0030(s32, s32);                        /* extern */
s32 memcpy(void *, void *, s32);                        /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    u8 unk6;
} GenObj;
void *func_080A03B8(GenObj *arg0, s32 arg1, s32 arg2) {
    u8 sp0[8];
    u8 *p;

    if (func_080A0030(arg1, arg2) != 0) {
        GetLocation__C3Npc(arg0);
    } else {
        p = sp0;
        *(u16 *) p = (u16) ((0xFFFFFC00 & *(u16 *) p) | 2);
        *(p + 1) &= 3;
        *(u16 *) (p + 2) &= 0xFFFFFC00;
        *(p + 3) &= 3;
        *(u16 *) (p + 4) &= 0xFFFFFC00;
        memcpy(arg0, p, 6);
        ((u8 *) arg0)[6] = 0;
    }
    return arg0;
}
