s32 __builtin_new(s32);                             /* extern */
s32 func_0808ABC4(s32, s32);                        /* extern */
extern s32 vtable_unk_080E7D74;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
    s32 unk8;
} GenObj;
void *func_0808C56C(GenObj *arg0, s32 *arg1, s32 arg2) {
    s32 temp_r1;

    arg0->unk0 = &vtable_unk_080E7D74;
    arg0->unk4 = func_0808ABC4(__builtin_new(0x10C), arg2);
    temp_r1 = *arg1;
    *arg1 = 0;
    arg0->unk8 = temp_r1;
    return arg0;
}
