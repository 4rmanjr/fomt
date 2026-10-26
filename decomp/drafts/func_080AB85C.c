s32 func_080AC070(void *, s32 *);                     /* extern */
s32 func_080AC124(void *, void *, void *, s32, s32, s32); /* extern */

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk2;
    struct GenObj *unk4;
    struct GenObj *unk6;
    u8 _padA[6];
    s32 unk10;
    u8 _pad14[12];
    s32 unk20;
    u8 _pad24[4];
    s32 unk28;
    u8 _pad2C[4];
    s32 unk30;
} GenObj;
void func_080AB85C(GenObj *arg0) {
s32 sp8;
    s32 temp_r0_2;
    s32 temp_r3;
    s8 var_r1;
    void *temp_r0;
    GenObj *temp_r6;

    arg0->unk0 = (s32) arg0->unk28;
    temp_r0 = (GenObj *)((u8 *)arg0 + 0x14);
    temp_r6 = (GenObj *)((u8 *)arg0 + 0x20);
    func_080AC124(temp_r0, temp_r6, arg0, 0, 0, 0);
    temp_r0_2 = arg0->unk30;
    if (temp_r0_2 != 0) {
        temp_r3 = arg0->unk0 + temp_r0_2;
        sp8 = (s16) arg0->unk20;
        sp8.unk2 = (s16) (temp_r3 + temp_r6->unk2);
        sp8.unk4 = (s16) temp_r6->unk4;
        sp8.unk6 = (s16) (temp_r3 + temp_r6->unk6);
        var_r1 = func_080AC070(temp_r0, &sp8) ^ 1;
    } else {
        var_r1 = 0;
    }
    arg0->unk10 = var_r1;
}
