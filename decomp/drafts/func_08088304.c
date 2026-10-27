s32 func_080E3504(void *, s32);                       /* extern */
extern s32 vtable_unk_080E7D4C;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
} GenObj;
void func_08088304(GenObj *arg0, s32 arg1) {
    arg0->unk4 = &vtable_unk_080E7D4C;
    func_080E3504(arg0, arg1);
}

/* STRUCT-CHECK: byte-DIFF +0x3: str memakai r2 vs ref r1 — urutan alokasi reg vtable; coba void arg / u32 vtable, atau sisip temp */

/* ATTEMPT-NOTE pi: byte +0x3: 0x49 vs ref 0x4a (str memakai r1 vs r2); urutan alokasi reg vtable; coba variasi tipe arg / temp void*. */

/* ATTEMPT-NOTE cline: ref memakai ldr r2 (arg1 hidup) -> forward (arg0,arg1) ke func_080E3504; pola sama dgn func_08090F58. */