s32 GetShelf__9FarmHouse(s32);                      /* extern */
s32 func_080CE19C();                                  /* extern */
extern s32 vtable_unk_080E7D84;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    s32 unk8;
    u8 _padC[136];
    u8 unk94;
    u8 unk95;
    u8 unk96;
    u8 unk97;
    u8 unk98;
    u8 _pad99[3];
    s32 unk9C;
    u8 _padA0[92];
    s32 unkFC;
    s32 unk100;
    s32 unk104;
    s32 unk108;
} GenObj;
void *func_0808C5F8(GenObj *arg0) {
    s32 temp_r0;
    s32 temp_r2;
    GenObj *temp_r6;

    temp_r6 = arg0;
    func_080CE19C();
    temp_r6->unk4 = &vtable_unk_080E7D84;
    temp_r6->unk98 = 0;
    temp_r0 = temp_r6->unk8;
    temp_r2 = temp_r0 + 0x1F4;
    temp_r6->unkFC = (s32) (temp_r0 + 0x1C2C);
    temp_r6->unk100 = (s32) (temp_r0 + 0x1C38);
    temp_r6->unk104 = GetShelf__9FarmHouse(temp_r2);
    temp_r6->unk108 = 0;
    return temp_r6;
}
/* ATTEMPT opencode: unk98 lebar byte (strb, bukan str) -> push match b570.
   Sisa: base dialokasikan r5 bukan r6 (+0x2: 0x5 vs 0x6). Variasi zero-var /
   assign-lebih-awal tidak menggeser. Percobaan penuh: /tmp/opencode/func_0808C5F8.try1.c */
