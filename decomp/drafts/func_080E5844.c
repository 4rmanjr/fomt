s32 __builtin_delete(void *);                         /* extern */
extern s32 gUnk_03000414;
extern s32 vtable_unk_080E8594;

typedef struct GenObj {
    s32 unk0;
    void *unk4;
} GenObj;
void func_080E5844(GenObj *arg0, s32 arg1) {
    arg0->unk4 = &vtable_unk_080E8594;
    gUnk_03000414 = arg0->unk0;
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
