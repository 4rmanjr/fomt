s32 func_080007EC(void *, s32);                       /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    struct GenObj *unk8;
} GenObj;
void func_080E41B0(GenObj *arg0, s32 arg1) {
    void **temp_r1;
    GenObj *temp_r1_2;

    temp_r1 = arg0->unk8;
    if (temp_r1 != 0) {
        (*temp_r1)->unk8(temp_r1, 3);
    }
    temp_r1_2 = arg0->unk4;
    if (temp_r1_2 != 0) {
        ((void (*)(void *,...))(temp_r1_2->unk4->unk8))(temp_r1_2, 3);
    }
    func_080007EC(arg0, arg1);
}
