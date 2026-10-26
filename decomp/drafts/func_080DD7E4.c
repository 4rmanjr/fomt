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
    u8 _pad54[14];
    s32 unk62;
} GenObj;
void func_080DD7E4(GenObj *arg0) {
    s8 temp_r6;
    u16 var_r5;
    GenObj *temp_r0;
    GenObj *temp_r0_2;
    void *var_r0;

    if (func_0803A180(arg0, (GenObj *)((u8 *)arg0 + 0x50), 0x8000) != 0) {
        temp_r6 = arg0->unk62;
        if (temp_r6 == 0) {
            var_r5 = arg0->unk50 + 0x658;
            if (arg0->unk4 != var_r5) {
                func_0805E860((GenObj *)((u8 *)arg0 + 0x30), var_r5);
                temp_r0 = (GenObj *)((u8 *)arg0 + 0x44);
                arg0->unk44 = 1;
                var_r0 = (GenObj *)((u8 *)temp_r0 + 2);
                temp_r0->unk2 = temp_r6;
                goto block_6;
            }
        } else {
            var_r5 = arg0->unk50 + 0x65C;
            if (arg0->unk4 != var_r5) {
                func_0805E860((GenObj *)((u8 *)arg0 + 0x30), var_r5);
                temp_r0_2 = (GenObj *)((u8 *)arg0 + 0x44);
                arg0->unk44 = 1;
                var_r0 = (GenObj *)((u8 *)temp_r0_2 + 2);
                temp_r0_2->unk2 = 0;
block_6:
                var_r0->unk1 = 1;
                arg0->unk4 = var_r5;
            }
        }
    }
}
