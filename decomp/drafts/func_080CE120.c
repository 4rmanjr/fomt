s32 func_080CC134(s32 *, s32, s32);                   /* extern */
s32 func_080CC144(s32 *);                             /* extern */
s32 func_080CD534(s32 *, s32, s32);                   /* extern */
s32 func_080CD558(s32 *);                             /* extern */

typedef struct GenObj {
    u8 _pad0[120];
    s32 unk78;
    s32 unk7C;
} GenObj;
s32 *func_080CE120(s32 *arg0, GenObj *arg1, s32 arg2, s32 arg3) {
    s32 sp[4];

    if (arg2 == 0) {
        goto c0;
    }
    if (arg2 == 9) {
        goto c9;
    }
    if (arg2 > 8) {
        goto gt;
    }
    goto le;
c0:
    if (arg1->unk78 == 0) {
        goto end;
    }
    func_080CC144(&sp[0]);
    arg3 = sp[0];
    goto end;
c9:
    if (arg1->unk7C == 0) {
        goto end;
    }
    func_080CD558(&sp[1]);
    arg3 = sp[1];
    goto end;
le:
    if (arg1->unk78 == 0) {
        goto end;
    }
    arg2 -= 1;
    func_080CC134(&sp[2], arg1->unk78, arg2);
    arg3 = sp[2];
    goto end;
gt:
    if (arg1->unk7C == 0) {
        goto end;
    }
    arg2 -= 0xA;
    func_080CD534(&sp[3], arg1->unk7C, arg2);
    arg3 = sp[3];
    goto end;
end:
    *arg0 = arg3;
    return arg0;
}

/* ATTEMPT-NOTE opencode: goto-chain penuh utk layout blok (le di tengah); arg2-= inline (bukan var). */

/* ATTEMPT-NOTE opencode: goto-chain + array-slot (mapping pas) + subs-dulu; sisa layout blok-le (compiler fold goto-le jadi inline; butuh 'b le' eksplisit + le di tengah; braced/elseif dicoba). */
