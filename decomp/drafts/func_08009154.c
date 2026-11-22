// Pemanggil di src/ memanggil K&R `func_08009154()` (r0/r1 = sisa register
// pemanggil), jadi definisi memakai daftar parameter kosong + register var.
void func_08009154() {
    register s16 *p asm("r0");
    register s16 v asm("r1");

    *p = v;
}
