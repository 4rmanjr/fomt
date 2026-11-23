/* func_080087C8 (240B, hardware.s) - TITIK MULAI bingkai 76B (19 word).
 *
 * Bentuk ini menulis bingkai yang sama persis seperti asm ref:
 *
 *   sp+0x00  node 16B  {next=0, prev=0, vt=vtable_unk_080E5AF0, data=p+0x34}
 *   sp+0x10  node 16B  {next=0, prev=0, vt=vtable_unk_080E5AE0, data=p+0x8C}
 *   sp+0x20  node 16B  {next=0, prev=0, vt=vtable_unk_080E5AD0, data=p+0x24}
 *   sp+0x30  container  {f0=0, f4=0, vt=vtable_unk_080E5BB4, fC=&e}
 *   sp+0x40  sentinel   {next=&f.fC, prev=&e, vt=vtable_unk_080E5BD8}
 *
 * Bacaan lain yang setara byte-per-byte: container 0x30..0x3f (16B) +
 * sentinel 0x40..0x4b (12B) = 28 byte gabungan, bukan satu struct 28B.
 * Ref menulis ketiganya DUA KALI (0x40, 0x44, 0x48: nilai 0 lalu ditimpa),
 * dan agbcc menghapus store pertama pada alamat lokal yang diketahui -
 * lihat POLA-DIFF 70b/70c/70d. Itu sebabnya draf ini kehilangan 1 store
 * (objek lebih pendek dari ref 240B).
 *
 * Angka terukur (pembanding byte objek vs ROM, POLA-DIFF 70):
 *   varian 19-word ini      : 232B, 92 instruksi beda, dif4 62%
 *   varian terbaik (v6)     : 240B, 89 instruksi beda, judge 48 selisih
 *                             (8missing/9extra/21operand/6regalloc/4diff)
 *
 * Jalur migrate masih tertutup sampai MATCH; 10 fungsi promoted di atasnya
 * menunggu fungsi ini.
 */
typedef struct Frame Frame;
struct Frame {
    u32 w00;
    u32 w04;
    u32 w08;
    u32 w0C;
    u32 w10;
    u32 w14;
    u32 w18;
    u32 w1C;
    u32 w20;
    u32 w24;
    u32 w28;
    u32 w2C;
    u32 w30;
    u32 w34;
    u32 w38;
    u32 w3C;
    u32 w40;
    u32 w44;
    u32 w48;
};

void *func_08008AE0(s32);
s32 func_08008AF0(s32);
s32 func_080098AC(void *, s32);
s32 func_080098DC(void *, s32);
s32 func_08009940(void *, void *);
extern s32 vtable_unk_080E5AD0;
extern s32 vtable_unk_080E5AE0;
extern s32 vtable_unk_080E5AF0;
extern s32 vtable_unk_080E5BB4;
extern s32 vtable_unk_080E5BD8;
extern s32 vtable_unk_080E5BE8;

void func_080087C8(s32 *arg0) {
    Frame f;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r2;
    void *temp_r0;
    void *temp_r0_2;
    u32 *temp_r1;

    temp_r5 = *arg0;
    temp_r2 = temp_r5 + 0x34;
    f.w00 = 0;
    f.w04 = 0;
    f.w08 = (u32) &vtable_unk_080E5AF0;
    f.w0C = temp_r2;
    f.w10 = 0;
    f.w14 = 0;
    f.w18 = (u32) &vtable_unk_080E5AE0;
    f.w1C = temp_r2 + 0x58;
    f.w20 = 0;
    f.w24 = 0;
    f.w28 = (u32) &vtable_unk_080E5AD0;
    f.w2C = temp_r2 - 0x68;
    f.w30 = 0;
    f.w34 = 0;
    f.w38 = (u32) &vtable_unk_080E5BB4;
    f.w3C = (u32) &f.w40;
    f.w48 = (u32) &vtable_unk_080E5BE8;   /* store mati: ditimpa di bawah */
    f.w40 = 0;
    f.w44 = 0;
    f.w48 = (u32) &vtable_unk_080E5BD8;
    f.w40 = (u32) &f.w3C;
    f.w44 = (u32) &f.w40;

    func_08009940(&f.w30, (void *) (temp_r5 + 0x494));
    func_08009940(&f.w30, &f.w00);
    func_08009940(&f.w30, &f.w20);
    func_08009940(&f.w30, &f.w10);

    temp_r5_2 = temp_r5 + 0x490;
    temp_r0 = func_08008AE0(temp_r5_2);
    temp_r1 = (u32 *) *(u32 *) ((u8 *) temp_r0 + 8);
    ((void (*)(void *, void *)) temp_r1[4])(temp_r0, &f.w30);
    func_08008AF0(temp_r5_2);
    temp_r0_2 = func_08008AE0(temp_r5_2);
    temp_r1 = (u32 *) *(u32 *) ((u8 *) temp_r0_2 + 8);
    ((void (*)(void *, void *)) temp_r1[5])(temp_r0_2, &f.w30);
    func_080098DC(&f.w30, 2);
    func_080098AC(&f.w20, 2);
    func_080098AC(&f.w10, 2);
    func_080098AC(&f.w00, 2);
}
