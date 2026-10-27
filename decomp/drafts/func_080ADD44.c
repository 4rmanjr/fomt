typedef struct GenObj {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    u8 unk14;
} GenObj;
void func_080ADD44(GenObj *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0x80 << 1;
    arg0->unk6 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk10 = 0;
    arg0->unk14 = 0;
}

/* ATTEMPT-NOTE opencode: campuran s32/u16/u16/s32/s32/s32/u8; 0x100 via shift. */
