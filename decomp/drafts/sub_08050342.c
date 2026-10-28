extern s32 vtable_unk_080E78F0;

typedef struct GenObj {
    u8 _pad0[8];
    struct GenObj *unk8;
    u8 _padC[8];
    s32 unk14;
} GenObj;
s32 sub_08050342(u16 *arg23, GenObj *arg3B) {
    s32 temp_r1;

    *arg23 &= ~((0x100 << ((u32) (saved_reg_r7->unk0 << 0x1E) >> 0x1E)) | 0x6000);
    if (saved_reg_r7->unk4 == 1) {
        temp_r1 = saved_reg_r7->unk130;
        if ((s32) ((0 - temp_r1) | temp_r1) < 0) {
            ((void (*)(void *,...))(arg3B->unk8->unk14))(arg3B, saved_reg_r7 + 0x130);
        }
    }
    arg4 = &vtable_unk_080E78F0;
    return saved_reg_r7->unk8;
}
