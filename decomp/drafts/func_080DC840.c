s32 func_08007874(void *);                            /* extern */
s32 func_08007CD8(void *, s32);                     /* extern */
s32 memmove(void *, void *, s32);                     /* extern */
extern s32 vtable_unk_080E82D8;

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
    u8 _pad8[4];
    s32 unkC;
    s32 unk10;
    u8 _pad14[16];
    void *unk24;
} GenObj;
void *func_080DC840(GenObj *arg0, GenObj *arg1) {
    s32 temp_r4_2;
    void *temp_r1;
    void *temp_r2;
    GenObj *temp_r4;

    arg0->unk24 = &vtable_unk_080E82D8;
    arg0->unk0 = (s32) arg1->unk0;
    temp_r4 = (GenObj *)((u8 *)arg0 + 4);
    func_08007874(temp_r4);
    temp_r4->unk4 = func_08007CD8(temp_r4, ((GenObj *)((u8 *)arg1 + 4))->unk4);
    arg0->unkC = (u16) arg1->unkC;
    arg0->unk10 = 0;
    temp_r4_2 = arg1->unk10;
    temp_r1 = (GenObj *)((u8 *)arg1 + 0x14);
    temp_r2 = temp_r1 + temp_r4_2;
    if (temp_r2 != temp_r1) {
        memmove((GenObj *)((u8 *)arg0 + 0x14), temp_r1, temp_r2 - temp_r1);
    }
    arg0->unk10 = temp_r4_2;
    return arg0;
}
