s32 __builtin_delete(s32 *);                            /* extern */
s32 func_08008D90();                                  /* extern */
s32 func_0800959C(void *, s32);                       /* extern */
s32 func_080098AC(s32 *, s32);                          /* extern */
s32 func_080D7944(void *, s32);                       /* extern */
extern s32 vtable_unk_080E5B0C;
extern s32 vtable_unk_080E5B18;

typedef struct GenObj {
    u8 _pad0[8];
    struct GenObj *unk8;
    u8 _padC[36];
    struct GenObj *unk30;
    u8 _pad34[52];
    s32 unk68;
} GenObj;
void func_08008A68(s32 *arg0, s32 arg1) {
    GenObj *temp_r5;
    GenObj *temp_r4;

    temp_r5 = *arg0;
    if (temp_r5 != 0) {
        if (temp_r5->unk68 != 0) {
            func_08008D90();
        }
        temp_r4 = (GenObj *)((u8 *)temp_r5 + 0x34);
        temp_r4->unk30 = &vtable_unk_080E5B0C;
        temp_r4->unk8 = &vtable_unk_080E5B18;
        func_080D7944((GenObj *)((u8 *)temp_r5 + 0x50), 0);
        func_0800959C(temp_r4, 2);
        func_080098AC((GenObj *)((u8 *)temp_r5 + 0x28), 2);
        func_0800959C((GenObj *)((u8 *)temp_r5 + 0xC), 2);
        func_080098AC(temp_r5, 2);
        __builtin_delete(temp_r5);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
