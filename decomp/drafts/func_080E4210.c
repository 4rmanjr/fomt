s32 func_080007EC(void *, s32);                       /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void func_080E4210(GenObj *arg0, s32 arg1) {
    void **temp_r1;

    temp_r1 = arg0->unk4;
    if (temp_r1 != 0) {
        (*temp_r1)->unk8(temp_r1, 3);
    }
    func_080007EC(arg0, arg1);
}
