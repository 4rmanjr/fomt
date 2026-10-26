s32 __builtin_delete(void *);                         /* extern */
s32 func_080A47B4(s32, s32);                          /* extern */
extern s32 vtable_unk_080E65E0;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
} GenObj;
void func_080DCF20(GenObj *arg0, s32 arg1) {
    func_080A47B4(arg0 + 8, 2);
    arg0->unk4 = &vtable_unk_080E65E0;
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
