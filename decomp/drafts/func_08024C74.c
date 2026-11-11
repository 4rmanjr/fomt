/* note sesi: ref punya `adds r2, r0, #0` yang MATI (r2 tak pernah dibaca).
   Probe: salinan mati hanya muncul kalau store lewat pointer lokal (bentuk
   p[0x3C]/p[0x3E]/p+0xA6 -> add r2,r0 lalu r1 = r2, tapi arg0 tidak maju),
   sedangkan kalau argumen dimajukan di tempat (arg0 += ...) agbcc membuang
   salinan -> 8 instruksi vs ref 9. Dua bentuk itu tidak bisa disatukan lewat C
   biasa; diparkir (bandingkan POLA-DIFF 15/22). */
void func_08024C74(u8 *arg0) {
    u8 *p = arg0;
    u8 zero = 0;

    p[0x3C] = zero;
    p[0x3E] = zero;
    *(u16 *) (p + 0xA6) = zero;
}
