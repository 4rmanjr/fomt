s32 func_08009940(void *, void *);                    /* extern */
s32 func_0804F0E0(void *);                            /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    s32 unk8;
    u8 unkC;
} GenObj;
void func_0805039C(GenObj *arg0) {
    u8 *temp_r5;
    s32 temp_r6;

    temp_r6 = arg0->unk8;
    temp_r5 = (u8 *)arg0 + 0x20;
    if (temp_r6 == 0) {
        func_0804F0E0((u8 *)arg0 + 0xD0);
        if (arg0->unk4 != 1) {
            func_08009940(temp_r5, (u8 *)arg0 + (0x98 << 1));
        }
        func_08009940(temp_r5, (u8 *)arg0 + (0xA4 << 1));
        arg0->unkC = temp_r6;
    }
    temp_r6 = arg0->unk8;
    if (temp_r6 >= 0) {
        if (temp_r6 <= 2) {
            arg0->unk8 = 1;
        }
    }
}

/* ATTEMPT-NOTE opencode: unkC u8; offset via shift; byte-arith; if bersarang utk blt/bgt. */

/* ATTEMPT-NOTE opencode: unkC u8 + shift-offset + byte-arith; sisa alokasi unk8/temp (r5/r6 vs r6/r5); urutan hitung/tipe dicoba. */
