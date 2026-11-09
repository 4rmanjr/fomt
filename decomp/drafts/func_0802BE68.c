s32 SetAnim__12AActorEntityUi(void *, u16);
u16 func_0802BC48(void *);

typedef struct S38 {
    u8 _pad0[0xC];
    s32 unkC;
    s32 unk10;
    u8 _pad14[4];
    s32 unk18;
} S38;
typedef struct GenObj {
    u8 _pad0[0x20];
    u8 unk20;
} GenObj;
void func_0802BE68(GenObj *arg0) {
    register GenObj *a0 __asm__("r5");
    register s32 var_r2 __asm__("r2");
    u8 *w;
    s32 var_r1;
    S38 *var_r0;

    a0 = arg0;
    var_r2 = arg0->unk20;
    switch (var_r2) {
    case 2:
        var_r0 = (S38 *)((u8 *)a0 + 0x38);
        var_r1 = 0xFFFE5556;
        var_r2 = 0;
        var_r0->unkC = var_r1;
        var_r0->unk10 = var_r2;
        var_r0->unk18 = var_r2;
        break;
    case 3:
        var_r0 = (S38 *)((u8 *)a0 + 0x38);
        var_r1 = 0x1AAAA;
        var_r2 = 0;
        var_r0->unkC = var_r1;
        var_r0->unk10 = var_r2;
        var_r0->unk18 = var_r2;
        break;
    case 1:
        var_r0 = (S38 *)((u8 *)a0 + 0x38);
        var_r2 = 0;
        var_r1 = 0xFFFE5556;
        var_r0->unkC = var_r2;
        var_r0->unk10 = var_r1;
        var_r0->unk18 = var_r2;
        break;
    case 0:
        var_r0 = (S38 *)((u8 *)a0 + 0x38);
        var_r1 = 0x1AAAA;
        var_r0->unkC = var_r2;
        var_r0->unk10 = var_r1;
        var_r0->unk18 = var_r2;
        break;
    }
    w = (u8 *)a0;
    w += 0x34;
    *w = 1;
    w += 0x24;
    *w = 1;
    {
        u16 icon = func_0802BC48(a0);
        SetAnim__12AActorEntityUi(a0, icon);
    }
    w = (u8 *)a0;
    w += 0x54;
    *w = 1;
}
