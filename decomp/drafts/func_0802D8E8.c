s32 func_08025A40(void *, s32);                       /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk4;
    s32 unk8;
    u8 _padC[48];
    s32 unk3C;
    u8 _pad40[131];
    s32 unkC3;
} GenObj;
void func_0802D8E8(GenObj *arg0, GenObj *arg1) {
    s32 sp0;
    s32 sp4;
    GenObj *sp8;
    s32 temp_r4;
    s8 var_r2;
    u16 var_r3;
    u16 var_r4;
    void **temp_r0;

    var_r3 = 0;
    sp8 = 0;
    var_r4 = 0;
    if (arg1 != 0) {
        var_r3 = arg1->unk0;
        sp8 = (s32) arg1->unk4;
        var_r4 = arg1->unk8;
    }
    if (arg0->unkC3 != 0) {
        arg0->unk3C = 0;
        return;
    }
    var_r2 = ((u32) (var_r3 << 0x1E) >> 0x1F) | ((u32) (var_r3 << 0x16) >> 0x1F);
    if (var_r2 != 0) {
        if ((((u32) (var_r4 << 0x19) >> 0x1F) | ((u32) (var_r4 << 0x1A) >> 0x1F)) != 0) {
            func_08025A40(arg0, 1);
            return;
        }
        temp_r4 = ((u32) (sp8 << 0x16) >> 0x1F) | (((u32) (sp8 << 0x1E) >> 0x1F) | (((u32) (var_r4 << 0x18) >> 0x1F) | ((u32) (var_r4 << 0x1B) >> 0x1F)));
        if (temp_r4 != 0) {
            func_08025A40(arg0, 0);
            return;
        }
        var_r2 = 1 & sp8.unk0;
        if (var_r2 != 0) {
            temp_r0 = arg0->unk0;
            sp0 = 0x3CE;
            sp4 = temp_r4;
            (*temp_r0)->unk140(temp_r0, &sp0, 0);
            arg0->unk3C = (s8) temp_r4;
            return;
        }
        if (1 & sp8.unk1) {
            goto block_12;
        }
    } else {
block_12:
        arg0->unk3C = var_r2;
    }
}
