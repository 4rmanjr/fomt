typedef struct Inner {
    u8 _pad0[0x78];
    s32 unk78;
    s32 unk7C;
} Inner;

typedef struct GenObj {
    Inner *unk0;
    s32 unk4;
    s32 unk8;
} GenObj;

s32 func_080CDD7C(GenObj *arg0) {
    s32 flag = 0xA;
    s32 base = arg0->unk4;
    s32 val;
    if (base <= 8) {
        val = arg0->unk0->unk7C;
    } else {
        val = arg0->unk0->unk78;
        flag = 1;
    }
    if (val == 0) {
        flag = base;
    }
    if (flag != arg0->unk4) {
        arg0->unk8 = arg0->unk4;
        arg0->unk4 = flag;
    }
    return flag;
}
