typedef struct M08016EC4 {
    u8 _pad0[0xA8];
    void *unkA8;
} M08016EC4;

typedef struct G08016EC4 {
    u8 _pad0[4];
    M08016EC4 *unk4;
} G08016EC4;

void func_08016EC4(G08016EC4 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u16 arg5) {
    void *h;
    u8 *vt;

    h = *(void **) ((u8 *) arg0->unk4 + 0xA8);
    vt = *(u8 **) h;
    ((void (*)(void *, s32, s32, s32, s32, u16)) *(void **) (vt + 0x160))(h, arg1, arg2, arg3, arg4, arg5);
}
