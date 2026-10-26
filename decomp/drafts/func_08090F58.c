s32 __builtin_delete(void *);                         /* extern */
s32 func_08007184(void *, s32);                       /* extern */
s32 func_080073E0(void *, s32);                       /* extern */
s32 func_080079E8(void *, s32);                       /* extern */
s32 func_08007C28(void *, s32);                       /* extern */
s32 func_080E3504(void *, s32);                       /* extern */
extern s32 vtable_unk_080E5A28;
extern s32 vtable_unk_080E7DBC;

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    u8 _pad8[260];
    s32 unk10C;
    s32 unk110;
} GenObj;
void func_08090F58(GenObj *arg0, s32 arg1) {
    void **temp_r1;
    void *temp_r4;
    void *temp_r4_2;
    GenObj *temp_r5;

    arg0->unk4 = &vtable_unk_080E7DBC;
    temp_r1 = arg0->unk110;
    if (temp_r1 != 0) {
        (*temp_r1)->unk8(temp_r1, 3);
    }
    temp_r5 = arg0->unk10C;
    if (temp_r5 != 0) {
        temp_r4 = (GenObj *)((u8 *)temp_r5 + 0x74);
        func_080073E0(temp_r4, temp_r4->unk4);
        func_08007184(temp_r4, 2);
        temp_r4_2 = temp_r4 - 8;
        func_08007C28(temp_r4_2, temp_r4_2->unk4);
        func_080079E8(temp_r4_2, 2);
        temp_r5->unk4 = &vtable_unk_080E5A28;
        __builtin_delete(temp_r5);
    }
    func_080E3504(arg0, arg1);
}
