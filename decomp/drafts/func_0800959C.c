typedef struct GenObj {
    u8 _pad0[12];
    s32 unkC;
    s32 unk10;
} GenObj;
typedef struct S959C {
    u8 _pad0[8];
    void *unk8;
} S959C;
typedef struct GenObj__func_080098DC {
    u8 _pad0[8];
    void *unk8;
} GenObj__func_080098DC;
void func_0800956C(void *);                            /* extern */
void func_080098DC(GenObj__func_080098DC *, s32);      /* extern */
extern s32 vtable_unk_080E5B90;

void func_0800959C(void *arg0, s32 arg1) {
    ((S959C *) arg0)->unk8 = &vtable_unk_080E5B90;
    func_0800956C(arg0);
    func_080098DC((GenObj__func_080098DC *) arg0, arg1);
}
