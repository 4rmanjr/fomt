s32 func_08050B3C(void *);                            /* extern */
s32 func_080ADCA4(void *, u32);                       /* extern */
u32 func_080ADD20();                                  /* extern */

typedef struct GenObj {
    u8 _pad0[476];
    u8 unk1DC;
    u8 _pad1DD[3];
    s32 unk1E0;
} GenObj;

void func_08050AD8(GenObj *arg0, s32 arg1) {
    u8 temp_r1;

    if (arg1 < 0U) {
        func_08050B3C(arg0);
        return;
    }
    if (arg1 >= func_080ADD20()) {
        func_08050B3C(arg0);
        return;
    }
    temp_r1 = arg0->unk1DC;
    if ((temp_r1 << 0x1F) != 0) {
        if (arg0->unk1E0 != arg1) {
            goto block_7;
        }
    } else {
        arg0->unk1DC = (u8) (1 | temp_r1);
block_7:
        func_080ADCA4((u8 *) arg0 + 0x1E4, arg1);
        arg0->unk1E0 = arg1;
        arg0->unk1DC = (u8) (arg0->unk1DC | 2);
    }
}
