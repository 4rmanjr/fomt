typedef struct GenObj {
    u8 _pad0[8];
    struct GenObj *unk8;
    u8 _padC[1448];
    struct GenObj *unk5B4;
} GenObj;
void func_08076B64(GenObj *arg0) {
    u8 *p = (u8 *)arg0 + 8;
    GenObj *nil = 0;
    GenObj *tmp = arg0->unk8;

    if ((nil != tmp) && (tmp != 0)) {
        ((void (*)(void *,...))(tmp->unk5B4->unk8))(tmp, 3);
    }
    *(GenObj **)p = nil;
}
