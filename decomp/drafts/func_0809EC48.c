s32 GetLocation__C3Npc(u16 *, void *);                /* extern */

typedef struct GenObj {
    u8 _pad0[21];
    u8 unk15;
} GenObj;
void func_0809EC48(GenObj *arg0) {
    u16 sp0;
    s32 temp_r0;
    s32 neg;

    GetLocation__C3Npc(&sp0, arg0);
        temp_r0 = (s32) (sp0 << 0x16) >> 0x16;
    if (temp_r0 == 0x11) {
        goto set;
    }
    if (temp_r0 > 0x11) {
        if ((temp_r0 != 0x1D) && (temp_r0 != 0x25)) {
            goto clear;
        }
        goto set;
    }
    if (temp_r0 != 7) {
        goto clear;
    }
    goto set;
clear:
    neg = 2;
    neg = 0 - neg;
    neg &= arg0->unk15;
    arg0->unk15 = neg;
    return;
set:
    arg0->unk15 = arg0->unk15 | 1;
}

/* ATTEMPT-NOTE opencode: goto-chain sesuai compare ref; neg-var utk movs+rsbs. */

/* ATTEMPT-NOTE opencode: goto-chain + neg-var + unk15 u8; sisa sub sp (#4 vs #8 — compiler kukuh #4 utk 1 var; array/struct/dummy dicoba). */
