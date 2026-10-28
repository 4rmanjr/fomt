typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
} GenObj;
void *func_0809B038(GenObj *arg0, u32 arg1) {
    u8 *p = (u8 *)arg0;
    u32 n;
    void *r;
    p += 0xFC;
    n = *(u32 *)p;
    if (arg1 >= n) {
        r = (u8 *)arg0 + 0x100;
    } else {
        u32 t = arg1 + 1;
        r = 4 + ((n - t) * 8) + p;
    }
    return r;
}
