s32 func_08009168();                                  /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    u16 unk4;
    u8 _pad6[2];
    u16 unk8;
    u16 unkA;
    u16 unkC;
} GenObj;
void *func_080091A4(GenObj *arg0, u16 arg1, u16 arg2) {
    s16 *var_r0;
    s16 *temp_r1;
    volatile s32 pad;

    func_08009168();
    arg0->unk8 = arg0->unk4;
    arg0->unkA = arg1;
    arg0->unkC = arg2;
    pad = 0;
    var_r0 = (s16 *)((u8 *)arg0 + 0xE);
    temp_r1 = (s16 *)((u8 *)arg0 + 0x22);
    if (var_r0 != temp_r1) {
        do {
            *var_r0 = 0;
            var_r0 += 1;
        } while (var_r0 != temp_r1);
    }
    return arg0;
}
