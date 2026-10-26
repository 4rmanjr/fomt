s32 func_0803D52C(s32 *, void *);                       /* extern */
s32 func_0803D644(u8, u8);                          /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk2;
    s32 unk3;
    u8 _pad7[8557];
    s32 unk2174;
    s32 unk2175;
    u8 _pad2179[8];
    s32 unk2181;
    u8 _pad2185[69];
    s32 unk21CA;
} GenObj;
s32 func_0803DDE8(GenObj *arg0) {
GenObj sp0;
    u8 temp_r0;
    u8 temp_r4;
    u8 temp_r6;
    u8 temp_r7;

    if (((s32) (arg0->unk21CA << 0x19) < 0) || (func_0803D52C(&sp0, arg0 + 0x10), temp_r6 = sp0, temp_r7 = sp0.unk1, temp_r0 = sp0.unk2, temp_r4 = sp0.unk3, (((u32) (arg0->unk2181 << 0x1A) >> 0x1E) == 2)) || (((s32) (arg0->unk2175 << 0x1B) >= 0) && (((u32) temp_r6 > 1U) || ((temp_r6 == 1) && (temp_r7 == 3) && ((u32) temp_r0 > 0x1CU))))) {
        return 0;
    }
    if (((u32) (arg0->unk2181 << 0x1E) >> 0x1E) == 1) {
        return 5;
    }
    if ((func_0803D644(temp_r7, temp_r0) << 0x18) != 0) {
        return 4;
    }
    if ((temp_r6 == 1) && (temp_r7 == 2) && (temp_r0 == 0xF) && ((s32) (arg0->unk2175 << 0x1B) < 0)) {
        goto block_16;
    }
    if ((arg0->unk2174 & 0x61000) == 0x41000) {
        if (temp_r4 == 6) {
            return 3;
        }
block_16:
        return 2;
    }
    return 1;
}
