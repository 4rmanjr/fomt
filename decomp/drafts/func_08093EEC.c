typedef struct Obj {
    u8 _pad[0x20];
    s16 unk20;
    s16 unk22;
} Obj;

typedef struct GenObj {
    u8 _pad0[4];
    Obj *unk4;
} GenObj;

void func_08093EEC(GenObj *arg0) {
    GenObj *a2;
    Obj *o;
    void *fn;
    s16 count;

    a2 = arg0;
    o = a2->unk4;
    count = o->unk22;
    if (count > 0) {
        s16 off;
        u8 *tbl;

        off = *(s16 *) ((u8 *) o + 0x24);
        tbl = *(u8 **) ((u8 *) a2 + off);
        fn = *(void **) (tbl + count * 4 - 4);
    } else {
        fn = *(void **) ((u8 *) o + 0x24);
    }
    ((void (*)(u8 *)) fn)((u8 *) a2 + a2->unk4->unk20);
}
