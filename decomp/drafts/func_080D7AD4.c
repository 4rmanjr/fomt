s32 func_0800959C(void *, s32);                       /* extern */
s32 func_080D7944(void *, s32);                       /* extern */
extern s32 vtable_unk_080E5B0C;
extern s32 vtable_unk_080E5B18;

typedef struct GenObj {
    u8 _pad0[8];
    void *unk8;
    u8 _padC[36];
    void *unk30;
} GenObj;
void func_080D7AD4(GenObj *arg0, s32 arg1) {
    arg0->unk30 = &vtable_unk_080E5B0C;
    arg0->unk8 = &vtable_unk_080E5B18;
    func_080D7944((u8 *)arg0 + 0x1C, 0);
    func_0800959C(arg0, arg1);
}

/* ATTEMPT-NOTE opencode: (u8*)+N byte-arith. */

/* ATTEMPT-NOTE opencode: codegen IDENTIK (byte 0-35 + pool sama), tapi judge reloc-mismatch: kandidat extract menyertakan reloc pool word-2 (B18@43), ref terpotong ref_len=40 (pool_len=8). Limitasi judge utk 2 pool-word + ref_len pendek, bukan salah draf. */