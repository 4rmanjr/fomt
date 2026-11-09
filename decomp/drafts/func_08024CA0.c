typedef struct GenObj {
    u8 _pad0[20];
    struct GenObj *unk14;
    u8 _pad18[16];
    s32 unk28;
    u8 _pad2C[16];
    u8 unk3C;
} GenObj;
s32 func_08024CA0(GenObj *arg0) {
    s32 temp_r0;

    if ((((s32 (*)(void *,...))(arg0->unk14->unk28))(arg0) << 0x18) == 0) {
        temp_r0 = arg0->unk3C;
        if (temp_r0 > 0x2A) {
            return 0;
        }
        if (temp_r0 < 0x24) {
            return 0;
        }
        return 1;
    }
    return 0;
}
/* NOTE crouton-alpha: vfunc cast void->s32, unk3C s32->u8,
   && -> nested, temp u8->s32, sisa DIFF 1 byte (byte +0x1e:
   0x23/ble vs ref 0x24/blt): kompilator normalisasi `< 0x24`
   menjadi `<= 0x23`. Bentuk terbaik saat ini (early-return
   >0x2A/<0x24). Kecurigaan: nilai dibandingkan sebagai signed
   dengan range tak-known 0..255. Lanjutan: coba cast s8 /
   bandingkan langsung dari field, atau parkir beru-langsung. */
