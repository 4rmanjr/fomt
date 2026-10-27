typedef struct GenObj {
    u16 unk0;
    u8 _pad2[8];
    u16 unkA;
} GenObj;
void func_080092C8(GenObj *arg0, u16 arg1) {
    u16 *var_r2;
    u16 temp_r6;
    u32 var_r3;
    u16 t5;
    s32 delta;

    temp_r6 = arg1;
    t5 = arg0->unk0;
    var_r3 = 0x80 << 2;
    var_r2 = (u16 *)((u8 *)arg0 + 0x20);
    delta = temp_r6 - arg0->unkA;
    do {
        if (t5 & var_r3) {
            *var_r2 += delta;
        }
        var_r2 = (u16 *)((u8 *)var_r2 - 2);
        var_r3 = var_r3 >> 1;
    } while (var_r3 != 0);
    arg0->unkA = temp_r6;
}

/* ATTEMPT-NOTE opencode: hoist load ke atas loop (r5/r6/r3/r2/r1); member u16; 0x200 via shift. */

/* ATTEMPT-NOTE opencode: decrement via (u8*)-2 agar subs #2 (u16* -=2 memberi #4). */
