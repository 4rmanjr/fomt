s32 func_080D6EAC(void *);                            /* extern */
s32 func_080D6F7C(void *, u32, u32);                  /* extern */

typedef struct GenObj {
    u8 unk0;
    u8 unk1;
    u8 _pad2[2];
    u8 unk4;
    u8 _pad5[11];
    u8 unk10;
} GenObj;
void func_080D7014(GenObj *arg0, u32 arg1, u32 arg2) {
    u32 sp0;
    u32 sp4;
    u32 t;

    sp0 = arg2;
    t = arg2;
    if (arg1 > 0x7FU) {
        goto end;
    }
    if (t == 0) {
        goto end;
    }
    if (arg1 != 0) {
        goto c1;
    }
    if (t <= 0x7FU) {
        goto c1;
    }
    func_080D6EAC(arg0);
    goto end;
c1:
    if (arg1 > 0x3FU) {
        goto c2;
    }
    {
        u32 t0 = 0x40 - arg1;
        u32 *vp = &sp0;
        sp4 = t0;
        if (sp0 > t0) {
            vp = &sp4;
        }
        func_080D6F7C((u8 *)arg0 + 4, arg1, *vp);
    }
c2:
    {
        u32 t1 = arg1 + sp0;
        if (t1 > 0x40U) {
            u32 v1 = 0;
            if (arg1 > 0x3FU) {
                v1 = arg1 - 0x40;
            }
            func_080D6F7C((u8 *)arg0 + 0x10, v1, (t1 - 0x40) - v1);
        }
    }
    {
        u32 v2 = 0;
        if (arg0->unk4 != 0) {
            v2 = (u32) (0 - arg0->unk10) >> 0x1F;
        }
        arg0->unk0 = v2;
        arg0->unk1 = 0;
    }
end:;
}

/* ATTEMPT-NOTE opencode: goto-chain + block-scope vars; unk u8; byte-arith. */

/* ATTEMPT-NOTE opencode: goto-chain + block-vars + u8-member + byte-arith; sisa adds r0,r2-copy (compiler pakai r2 langsung; t-var diabaikan) + layout. */
