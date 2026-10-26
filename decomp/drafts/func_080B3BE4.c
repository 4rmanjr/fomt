s32 __builtin_new(s32);                             /* extern */
s32 func_080ADF6C(s32, s32);                        /* extern */
extern s32 vtable_unk_080E850C;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
} GenObj;
void *func_080B3BE4(GenObj *arg0, s32 arg1) {
    arg0->unk0 = &vtable_unk_080E850C;
    arg0->unk4 = func_080ADF6C(__builtin_new(0x93C), arg1);
    return arg0;
}
