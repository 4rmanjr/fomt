s32 __builtin_new(s32);                             /* extern */
s32 func_080B3CC8(s32, s32);                        /* extern */
extern s32 vtable_unk_080E8528;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
} GenObj;
void *func_080BC898(GenObj *arg0, s32 arg1) {
    arg0->unk0 = &vtable_unk_080E8528;
    arg0->unk4 = func_080B3CC8(__builtin_new(0xB78), arg1);
    return arg0;
}
