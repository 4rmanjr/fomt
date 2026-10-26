typedef struct GenObj {
    s32 unk0;
    s32 unk4;
} GenObj;
void func_0804EA94(GenObj *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 sp0;
    s32 sp4;
    s32 temp_r1;
    s32 temp_r2;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r6_2;
    u32 temp_r3_2;

    sp0 = 0;
    sp4 = 0;
    temp_r6 = sp0 | 0x1000;
    sp0 = temp_r6;
    temp_r5 = (0xFFFFFF00 & temp_r6) | (u8) (sp0 + arg2);
    temp_r6_2 = (0xFE00FFFF & temp_r5) | (((((u32) (temp_r5 << 7) >> 0x17) + arg1) & 0x1FF) << 0x10);
    temp_r3 = (0xFFFFFC00 & sp4) | ((u32) ((((u32) (sp4 << 0x16) >> 0x16) + arg3) << 0x16) >> 0x16);
    temp_r4 = (0xFFFF0FFF & temp_r3) | (((u16) (((u32) (temp_r3 << 0x10) >> 0x1C) + arg4) & 0xF) << 0xC);
    temp_r2 = (0xFFFFF3FF & temp_r4) | (((u16) (((u32) (temp_r4 << 0x14) >> 0x1E) + arg5) & 3) << 0xA);
    sp4 = temp_r2;
    temp_r3_2 = (0xFFFF3FFF & temp_r6_2) | (((((u32) (temp_r6_2 << 0x10) >> 0x1E) + arg7) & 3) << 0xE);
    temp_r1 = (0x3FFFFFFF & temp_r3_2) | (((temp_r3_2 >> 0x1E) + arg6) << 0x1E);
    sp0 = temp_r1;
    arg0->unk0 = temp_r1;
    arg0->unk4 = temp_r2;
}
