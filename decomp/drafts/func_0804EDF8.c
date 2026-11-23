typedef struct Obj_0804EDF8 {
    u32 unk0;
    u32 unk4;
    void *unk8;
    s32 unkC;
    s32 unk10;
    u16 unk14;
    u16 unk16;
    s32 unk18;
} Obj_0804EDF8;

extern s32 vtable_unk_080E7848;                        /* extern */

s32 func_0804EDF8(Obj_0804EDF8 *arg0, s32 arg1, s32 arg2, u16 arg3, u16 arg4, s32 arg5) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = &vtable_unk_080E7848;
    arg0->unkC = arg1;
    arg0->unk10 = arg2;
    arg0->unk14 = arg3;
    arg0->unk16 = arg4;
    arg0->unk18 = arg5;
    return (s32) arg0;
}
