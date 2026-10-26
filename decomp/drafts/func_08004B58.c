s32 **__builtin_new(s32);                             /* extern */
s32 func_080041DC(s32 **, s32, s32 ***);                /* extern */
extern s32 vtable_unk_080E5A3C;
extern s32 vtable_unk_080E5A68;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
} GenObj;
void *func_08004B58(GenObj *arg0) {
    s32 **sp0;
    s32 **temp_r0;

    arg0->unk0 = &vtable_unk_080E5A68;
    temp_r0 = __builtin_new(4);
    *temp_r0 = &vtable_unk_080E5A3C;
    sp0 = temp_r0;
    arg0->unk4 = func_080041DC(__builtin_new(0x1A0), 0, &sp0);
    return arg0;
}
