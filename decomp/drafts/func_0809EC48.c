s32 GetLocation__C3Npc(u16 *, void *);                /* extern */

void func_0809EC48(void *arg0) {
    u16 sp0;
    u32 temp_r0;
    u8 var_r0;

    GetLocation__C3Npc(&sp0, arg0);
    temp_r0 = (u32) (sp0 << 0x16) >> 0x16;
    if (temp_r0 != 0x11) {
        if ((s32) temp_r0 <= 0x11) {
            if (temp_r0 != 7) {
                goto block_6;
            }
            goto block_7;
        }
        if ((temp_r0 != 0x1D) && (temp_r0 != 0x25)) {
block_6:
            var_r0 = -2 & arg0->unk15;
        } else {
            goto block_7;
        }
    } else {
block_7:
        var_r0 = arg0->unk15 | 1;
    }
    arg0->unk15 = var_r0;
}
