void *GetMapData(s32);                              /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[4148];
    s32 unk103C;
} GenObj;
s32 func_08017C00(GenObj *arg0) {
    if ((arg0->unk103C == 0) && (GetMapData(arg0->unk4->unk4)->unk24 == 0)) {
        return 0;
    }
    return 1;
}
