s32 func_08032308(s32, s32, s32);                     /* extern */

typedef struct GenObj {
    u8 _pad4[4];
    struct GenObj *unk4;
    u8 _pad8[0x38];
    void *unk40;
    u8 _pad44[0x64];
    struct GenObj *unkA8;
} GenObj;
void func_08012174(GenObj *arg0, s32 arg1, s32 arg2, s32 arg3) {
    GenObj *t;
    s32 temp_r0;

    t = arg0->unk4->unkA8;
    temp_r0 = ((s32 (*)(GenObj *, s32)) (((GenObj *) *(void **) t)->unk40))(t, arg1);
    if (temp_r0 != 0) {
        func_08032308(temp_r0, arg2, arg3);
    }
}
