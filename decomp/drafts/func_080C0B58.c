extern s32 gUnk_08107FC6;

typedef struct GenObj {
    u8 _pad0[1560];
    s32 unk618;
} GenObj;
u16 func_080C0B58(GenObj *arg0) {
    return *((arg0->unk618 * 2) + &gUnk_08107FC6);
}
