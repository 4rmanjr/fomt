typedef struct GenObj {
    u8 _pad0[2];
    struct GenObj *unk2;
    u8 _pad6[54];
    s32 unk3C;
} GenObj;
void func_08024C74(GenObj *arg0) {
    u16 z;
    u8 *p;

    p = (u8 *) arg0 + 0x3C;
    z = 0;
    *p = (u8) z;
    p += 2;
    *p = (u8) z;
    p += 0x68;
    *(u16 *) p = z;
}
