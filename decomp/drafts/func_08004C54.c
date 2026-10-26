s32 func_080007EC(void *, s32);                       /* extern */
extern s32 vtable_unk_080E5A88;

typedef struct GenObj {
    void *unk0;
} GenObj;
void func_08004C54(GenObj *arg0, s32 arg1) {
    arg0->unk0 = &vtable_unk_080E5A88;
    func_080007EC(arg0, arg1);
}
