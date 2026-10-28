s32 GetFridge__9FarmHouse(s32);                     /* extern */
s32 func_080CE19C();                                  /* extern */
extern s32 vtable_unk_080E7D4C;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    s32 unk8;
    u8 _padC[140];
    u8 unk98;
    u8 _pad99[99];
    s32 unkFC;
    s32 unk100;
    s32 unk104;
    u8 unk108;
} GenObj;
void *func_080882AC(GenObj *arg0) {
    s32 temp_r0;

    func_080CE19C();
    arg0->unk4 = &vtable_unk_080E7D4C;
    arg0->unk98 = 0;
    temp_r0 = arg0->unk8;
    arg0->unkFC = (s32) (temp_r0 + 0x1C2C);
    arg0->unk100 = (s32) (temp_r0 + 0x1C38);
    arg0->unk104 = GetFridge__9FarmHouse(temp_r0 + 0x1F4);
    arg0->unk108 = 0;
    return arg0;
}

/* STRUCT-CHECK: ref push {r4,r5,r6,lr} (0x70) vs kandidat {r4,r5,lr} (0x30):
   kandidat kurang 1 saved-reg -> butuh 1 var lagi di stack/spill agar
   allocator menyimpan r6. Tambah local dummy / pakai var agar push=r6. */

/* ATTEMPT-NOTE pi: byte +0x0: 0x30 vs ref 0x70 (push {r4,r5,lr} vs {r4,r5,r6,lr}); butuh 1 saved-reg lagi; coba tambah local/param agar r6 terpakai. */
