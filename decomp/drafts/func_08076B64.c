typedef struct GenObj {
    u8 _pad0[8];
    struct GenObj *unk8;
    u8 _padC[1448];
    struct GenObj *unk5B4;
} GenObj;
void func_08076B64(GenObj *arg0) {
    GenObj *temp_r1;

    temp_r1 = arg0->unk8;
    if ((temp_r1 != 0) && (temp_r1 != 0)) {
        ((void (*)(void *,...))(temp_r1->unk5B4->unk8))(temp_r1, 3);
    }
    arg0->unk8 = 0;
}
