s32 SetAnim__12AActorEntityUi(void *, u16);           /* extern */
u16 func_0802BC48(void *);                          /* extern */

typedef struct GenObj {
    u8 _pad0[12];
    struct GenObj *unkC;
    struct GenObj *unk10;
    u8 _pad14[4];
    struct GenObj *unk18;
    u8 _pad1C[4];
    s32 unk20;
    u8 _pad24[16];
    s32 unk34;
    u8 _pad38[28];
    s32 unk54;
} GenObj;
void func_0802BE68(GenObj *arg0) {
    s32 var_r1;
    u8 var_r2;
    GenObj *var_r0;

    var_r2 = arg0->unk20;
    switch (var_r2) {                               /* irregular */
    case 2:
        var_r0 = (GenObj *)((u8 *)arg0 + 0x38);
        var_r2 = 0;
        var_r0->unkC = 0xFFFE5556;
        var_r0->unk10 = 0;
block_12:
        var_r0->unk18 = (s32) var_r2;
        break;
    case 3:
        var_r0 = (GenObj *)((u8 *)arg0 + 0x38);
        var_r2 = 0;
        var_r0->unkC = 0x1AAAA;
        var_r0->unk10 = 0;
        goto block_12;
    case 1:
        var_r0 = (GenObj *)((u8 *)arg0 + 0x38);
        var_r2 = 0;
        var_r1 = 0xFFFE5556;
block_11:
        var_r0->unkC = (s32) var_r2;
        var_r0->unk10 = var_r1;
        goto block_12;
    case 0:
        var_r0 = (GenObj *)((u8 *)arg0 + 0x38);
        var_r1 = 0x1AAAA;
        goto block_11;
    }
    arg0->unk34 = 1;
    ((GenObj *)((u8 *)arg0 + 0x34))->unk24 = 1;
    SetAnim__12AActorEntityUi(arg0, func_0802BC48(arg0));
    arg0->unk54 = 1;
}
