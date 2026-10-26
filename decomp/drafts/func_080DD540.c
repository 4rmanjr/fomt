s32 func_0803A180(void *, s32, s32);                /* extern */
s32 func_0805E860(void *, u16);                       /* extern */

typedef struct GenObj {
    u8 _pad0[2];
    struct GenObj *unk2;
    s32 unk4;
    u8 _pad8[60];
    s32 unk44;
    u8 _pad48[8];
    s32 unk50;
} GenObj;
void func_080DD540(GenObj *arg0) {
    u16 temp_r5;
    GenObj *temp_r0;

    if (func_0803A180(arg0, (GenObj *)((u8 *)arg0 + 0x50), 0x10000) != 0) {
        temp_r5 = arg0->unk50 + 0x9A9;
        if (arg0->unk4 != temp_r5) {
            func_0805E860((GenObj *)((u8 *)arg0 + 0x30), temp_r5);
            temp_r0 = (GenObj *)((u8 *)arg0 + 0x44);
            arg0->unk44 = 1;
            temp_r0->unk2 = 0;
            ((GenObj *)((u8 *)temp_r0 + 2))->unk1 = 1;
            arg0->unk4 = temp_r5;
        }
    }
}
