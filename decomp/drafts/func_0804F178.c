typedef struct GenObj {
    u8 _pad0[4];
    u8 unk4;
    u8 _pad5[3];
    u8 unk8;
} GenObj;
s32 func_0804F178(GenObj *arg0) {
    s32 var_r2;
    s32 temp_r0;
    register s32 var_r1 asm("r1");

    var_r2 = 0;
    if (arg0->unk8 != 0) {
        temp_r0 = arg0->unk4;
        var_r1 = temp_r0;
        if (temp_r0 != 0) {
            var_r1 = 1;
        }
        if (var_r1 != 0) {
            var_r2 = 1;
        }
    }
    return var_r2;
}

/* ATTEMPT-NOTE opencode: unk4/unk8 u8; sisa adds r1,r0 (copy temp->var dilipat compiler; +0/ifelse/u32temp dicoba, tetap fold). */
