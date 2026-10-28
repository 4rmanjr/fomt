void *GetMapData(s32);                              /* extern */
s32 Unpack(s32, s32);                                 /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    s32 unk8;
} GenObj;
void func_080A5DB8(GenObj *arg0, s32 arg1, s32 arg2) {
    GenObj *temp_r0;
    s32 *temp_r4;

    temp_r0 = GetMapData(arg0->unk4);
    temp_r4 = (s32 *)((u8 *)arg0 + 0x1C + (arg2 * 4));
    Unpack(temp_r0->unk4, *temp_r4);
    if (arg1 >= 0) {
        if (arg1 <= 2) {
            Unpack(temp_r0->unk4, *temp_r4);
        } else if (arg1 == 3) {
            Unpack(temp_r0->unk8, *temp_r4);
        }
    }
}

/* ATTEMPT-NOTE opencode: byte-arith (s32*) utk +0x1C+arg2*4; compare-chain <=/==. */

/* ATTEMPT-NOTE opencode: byte-arith ok; sisa alokasi r4/r5 (arg0/arg2) — compiler kukuh r5=arg0/r4=arg2 (ref r4=arg0/r5=arg2); copy-awal/ordering/offset-first dicoba. */
