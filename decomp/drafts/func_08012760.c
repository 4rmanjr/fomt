s32 func_08050E50(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[164];
    struct GenObj *unkAC;
} GenObj;
void func_08012760(GenObj *arg0) {
    s32 temp_r3;
    GenObj *temp_r2;

    temp_r2 = arg0->unk4;
    temp_r3 = temp_r2->unkAC;
    if ((temp_r3 != 0) && ((s32) ((*(((GenObj *)((u8 *)temp_r2 + 0xAC)) - 0x20))->unk2210 << 0x1D) < 0)) {
        func_08050E50(temp_r3);
    }
}
