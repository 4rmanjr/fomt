s32 func_0803A180(void *, void *, s32);             /* extern */
s32 func_0805E860(void *, u16);                       /* extern */
s32 func_080ABE58(s16, s16, s16, s16, s32 *, s32);  /* extern */

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk2;
    s32 unk4;
    s32 unk6;
    s32 unk8;
    s32 unkA;
    s32 unkC;
    s32 unkE;
    u8 _pad12[22];
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    u8 _pad34[16];
    s32 unk44;
    s32 unk46;
    s32 unk47;
    u8 _pad4B[5];
    s32 unk50;
    s32 unk54;
    s32 unk56;
    u8 _pad5A[6];
    s32 unk60;
    s32 unk62;
} GenObj;
void func_080DD5E4(GenObj *arg0) {
GenObj sp8;
    GenObj *sp14;
s32 sp28;
    s32 sp34;
    s32 sp38;
    s32 sp48;
    s16 temp_r1;
    s16 temp_r1_2;
    s16 temp_r3;
    s16 temp_r3_2;
    s32 temp_r0_2;
    s32 temp_r4_2;
    s32 var_r0;
    s32 var_r0_2;
    s8 temp_r6;
    u16 temp_r4_3;
    u16 var_r4;
    void **temp_r4;
    void *temp_r0;
    GenObj *temp_r0_3;
    GenObj *temp_r0_4;
    void *var_r0_3;

    temp_r4 = arg0->unk0;
    temp_r0 = (*temp_r4)->unk40(temp_r4, 0);
    if (temp_r0 != 0) {
        temp_r1 = temp_r0->unkA;
        temp_r3 = temp_r0->unkE;
        var_r0 = temp_r1 - arg0->unk54;
        if (var_r0 < 0) {
            var_r0 = 0 - var_r0;
        }
        if (var_r0 <= 0xF) {
            var_r0_2 = temp_r3 - arg0->unk56;
            if (var_r0_2 < 0) {
                var_r0_2 = 0 - var_r0_2;
            }
            if (var_r0_2 <= 0xF) {
                (*temp_r4)->unk34(&sp8, temp_r4, 0);
                temp_r1_2 = arg0->unk54;
                temp_r3_2 = arg0->unk56;
                sp48 = (s16) (temp_r1_2 - 8);
                sp48.unk2 = (s16) (temp_r3_2 - 8);
                sp48.unk4 = (s16) (temp_r1_2 + 8);
                sp48.unk6 = (s16) (temp_r3_2 + 8);
                sp14 = 0x21;
                sp14.unk4 = -0x21;
                sp14.unk8 = -0x21;
                sp14.unkC = 0x21;
                sp28 = (s32) sp8;
                sp28.unk4 = (s32) sp8.unk4;
                sp28.unk8 = (s32) sp8.unk8;
                sp34 = sp48;
                sp38 = sp4C;
                sp14.unk28 = 0x20;
                sp14.unk2C = 0;
                sp14.unk30 = 0;
                temp_r4_2 = arg0->unk50;
                temp_r0_2 = func_080ABE58(arg0->unk54, arg0->unk56, temp_r1, temp_r3, &sp14, temp_r4_2);
                arg0->unk50 = temp_r0_2;
                if ((temp_r4_2 != temp_r0_2) || (arg0->unk62 == 0)) {
                    temp_r4_3 = temp_r0_2 + 0x8F9;
                    if (arg0->unk4 != temp_r4_3) {
                        func_0805E860((GenObj *)((u8 *)arg0 + 0x30), temp_r4_3);
                        arg0->unk44 = 1;
                        arg0->unk46 = 0;
                        arg0->unk47 = 1;
                        arg0->unk4 = temp_r4_3;
                    }
                }
                arg0->unk62 = 1;
                arg0->unk60 = 0x3C;
            }
        }
    }
    if (func_0803A180(arg0, (GenObj *)((u8 *)arg0 + 0x50), 0x8000) != 0) {
        temp_r6 = arg0->unk62;
        if (temp_r6 == 0) {
            var_r4 = arg0->unk50 + 0x8F5;
            if (arg0->unk4 != var_r4) {
                func_0805E860((GenObj *)((u8 *)arg0 + 0x30), var_r4);
                temp_r0_3 = (GenObj *)((u8 *)arg0 + 0x44);
                arg0->unk44 = 1;
                var_r0_3 = (GenObj *)((u8 *)temp_r0_3 + 2);
                temp_r0_3->unk2 = temp_r6;
                goto block_18;
            }
        } else {
            var_r4 = arg0->unk50 + 0x8F9;
            if (arg0->unk4 != var_r4) {
                func_0805E860((GenObj *)((u8 *)arg0 + 0x30), var_r4);
                temp_r0_4 = (GenObj *)((u8 *)arg0 + 0x44);
                arg0->unk44 = 1;
                var_r0_3 = (GenObj *)((u8 *)temp_r0_4 + 2);
                temp_r0_4->unk2 = 0;
block_18:
                var_r0_3->unk1 = 1;
                arg0->unk4 = var_r4;
            }
        }
    }
}
