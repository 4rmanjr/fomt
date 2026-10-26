s32 func_08038110(void *);                            /* extern */

void func_08038300(void *arg0) {
    void *temp_r2;

    temp_r2 = arg0->unk10;
    if (temp_r2 != 0) {
        temp_r2->unk4->unkC(temp_r2);
    }
    func_08038110(arg0);
}
