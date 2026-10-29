s32 __7AEntityP10GameObjectRC8Location(void *, s32, s32 *); /* extern */
void *__builtin_new(s32);                           /* extern */
extern s32 vtable_unk_080E7568;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
    s32 unk18;
    u8 unk1C;
} GenObj;
void *func_0803A798(s32 arg0, s32 arg1) {
    u8 buf[8];
    GenObj *r5;
    u8 *p;
    s32 m;
    register u16 t0 asm("r2");

    r5 = __builtin_new(0x20);
    p = buf;
    t0 = *(u16 *)p;
    m = 0xFFFFFC00;
    *(u16 *)p = (u16)(m & t0);
    p[1] = (u8)(3 & p[1]);
    *(u16 *)&p[2] = (u16)(m & *(u16 *)&p[2]);
    p[3] = (u8)(3 & p[3]);
    *(u16 *)&p[4] = (u16)(m & *(u16 *)&p[4]);
    __7AEntityP10GameObjectRC8Location(r5, arg0, (s32 *)buf);
    r5->unk14 = &vtable_unk_080E7568;
    r5->unk18 = arg1;
    r5->unk1C = 1;
    return r5;
}
