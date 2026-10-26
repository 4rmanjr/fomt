s32 __builtin_delete(void *);                         /* extern */
extern s32 vtable_unk_080E5BE8;

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    void *unk8;
} GenObj;
void func_080098AC(GenObj *arg0, s32 arg1) {
    s32 **temp_r2;

    arg0->unk8 = &vtable_unk_080E5BE8;
    temp_r2 = arg0->unk0;
    if (temp_r2 != 0) {
        *temp_r2 = arg0->unk4;
        *arg0->unk4 = temp_r2;
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
