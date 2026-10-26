s32 func_080AC070(void *, s32 *);                     /* extern */
s32 func_080AC124(void *, void *, s32, s32, s32, void *); /* extern */

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk2;
    struct GenObj *unk4;
    struct GenObj *unk6;
    u8 _padA[2];
    s32 unkC;
    u8 _pad10[3];
    s32 unk13;
    u8 _pad17[9];
    s32 unk20;
    u8 _pad24[4];
    s32 unk28;
    s32 unk2C;
} GenObj;
void func_080AB9C4(GenObj *arg0) {
s32 sp8;
    s32 temp_r0_2;
    s32 temp_r1;
    s8 var_r1;
    void *temp_r0;
    GenObj *temp_r6;

    arg0->unkC = (s32) arg0->unk28;
    temp_r0 = (GenObj *)((u8 *)arg0 + 0x14);
    temp_r6 = (GenObj *)((u8 *)arg0 + 0x20);
    func_080AC124(temp_r0, temp_r6, 0, 0, 0, (GenObj *)((u8 *)arg0 + 0xC));
    temp_r0_2 = arg0->unk2C;
    if (temp_r0_2 != 0) {
        temp_r1 = arg0->unkC + temp_r0_2;
        sp8 = (s16) (temp_r1 + arg0->unk20);
        sp8.unk2 = (s16) temp_r6->unk2;
        sp8.unk4 = (s16) (temp_r1 + temp_r6->unk4);
        sp8.unk6 = (s16) temp_r6->unk6;
        var_r1 = func_080AC070(temp_r0, &sp8) ^ 1;
    } else {
        var_r1 = 0;
    }
    arg0->unk13 = var_r1;
}
