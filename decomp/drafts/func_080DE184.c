typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
    s32 unkC;
    u8 _pad10[60];
    struct GenObj *unk4C;
} GenObj;
void func_080DE184(GenObj *arg0) {
    u8 *var_r4;
    GenObj *temp_r2;
    u8 *temp_r5;

    var_r4 = (u8 *)arg0 + 0xC;
    temp_r5 = (u8 *)((arg0->unk8 * 4) + (s32)arg0) + 0xC;
    if (var_r4 != temp_r5) {
        do {
            temp_r2 = *(GenObj **)var_r4;
            if (temp_r2 != 0) {
                ((void (*)(void *))(temp_r2->unk4C->unkC))(temp_r2);
            }
            var_r4 += 4;
        } while (var_r4 != temp_r5);
    }
}

/* ATTEMPT-NOTE opencode: (s32)arg0 agar adds r1,r1,r0 (bukan r0,r0,r1); var u8* utk +=4. */
