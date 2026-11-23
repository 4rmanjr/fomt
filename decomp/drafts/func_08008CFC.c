/* Wrapper 20B: satu-satunya pemanggil func_08008B54 dengan indeks 0.
   Ref: `mov r0, sp; movs r1, #0; bl func_08008B54; ldr r0, [sp]` - argumen
   konstanta 0 keluar sebagai `movs`, jadi tidak ada urusan literal pool di sini.
   Tanda tangan callee mengikuti konvensi src (tipe balik int, parameter tanpa
   nama) supaya gate migrasi tidak menolak; nilai baliknya dibuang ref. */
s32 func_08008B54(s32 *, u8);

s32 func_08008CFC(void) {
    s32 sp0;

    func_08008B54(&sp0, 0);
    return sp0;
}
