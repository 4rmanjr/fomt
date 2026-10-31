/* SKIP-MANUAL (callee A63B8 tidak-umittable): `ldr r0,[r4,#4]` pakai r0-asli
   + call 2-arg r0=obj,r1; AD944 tak-dipanggil (0 bl-ref). SELF-REF tak-bisa:
   tipe GenObj__ di-rename per-fungsi. Penyatuan butuh tulis-ulang callee
   atau call-site dgn cast eksplisit per-A63B8. Draf dibiarkan 1-arg K&R. */
void func_080A63B8(void);
void func_080AD944(s32 *arg0) { (void)arg0; func_080A63B8(); }
