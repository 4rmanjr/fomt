s32 func_0800080C(void *, s32);                       /* extern */

void func_080DB2EC(void *arg0, s32 arg1) {
    void **temp_r1;

    temp_r1 = arg0->unk8;
    if (temp_r1 != 0) {
        (*temp_r1)->unk8(temp_r1, 3);
    }
    func_0800080C(arg0, arg1);
}
