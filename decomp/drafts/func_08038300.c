s32 func_08038110(void *);                            /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    u8 _pad8[4];
    struct GenObj *unkC;
    s32 unk10;
} GenObj;
void func_08038300(GenObj *arg0) {
    GenObj *temp_r2;

    temp_r2 = arg0->unk10;
    if (temp_r2 != 0) {
        ((void (*)(void *,...))(temp_r2->unk4->unkC))(temp_r2);
    }
    func_08038110(arg0);
}
