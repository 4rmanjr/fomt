typedef struct GenObj {
    u8 _pad0[8];
    struct GenObj *unk8;
    u8 _padC[1448];
    struct GenObj *unk5B4;
} GenObj;

void func_08076B94(GenObj *arg0, void **arg1) {
    void *temp;

    temp = *arg1;
    *arg1 = 0;
    if ((temp != arg0->unk8) && (arg0->unk8 != 0)) {
        ((void (*)(void *, s32)) arg0->unk8->unk5B4->unk8)(arg0->unk8, 3);
    }
    arg0->unk8 = temp;
    temp = *arg1;
    if (temp != 0) {
        ((void (*)(void *, s32)) temp->unk5B4->unk8)(temp, 3);
    }
}
