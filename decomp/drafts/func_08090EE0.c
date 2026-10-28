s32 func_080CE19C(void *, s32);                       /* extern */
extern s32 vtable_unk_080E7DBC;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    s32 unk8;
    u8 _padC[140];
    u8 unk98;
    u8 _pad99[99];
    s32 unkFC;
    s32 unk100;
    s32 unk104;
    s32 unk108;
    s32 unk10C;
    s32 unk110;
    u8 unk114;
    u8 _pad115[3];
    u8 unk118;
} GenObj;
void *func_08090EE0(GenObj *arg0, s32 *arg1, s32 arg2, u8 arg3) {
    s32 temp_r0;
    s32 temp_r1;

    func_080CE19C(arg0, arg2);
    arg0->unk4 = &vtable_unk_080E7DBC;
    arg0->unk98 = 0;
    temp_r1 = arg0->unk8;
    arg0->unkFC = (s32) (temp_r1 + 0x1C34);
    arg0->unk100 = (s32) (temp_r1 + 0x1C2C);
    arg0->unk104 = (s32) (temp_r1 + 0x1C38);
    arg0->unk108 = 0;
    arg0->unk10C = 0;
    temp_r0 = *arg1;
    *arg1 = 0;
    arg0->unk110 = temp_r0;
    arg0->unk114 = arg3;
    arg0->unk118 = 0;
    return arg0;
}
