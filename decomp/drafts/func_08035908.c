s32 SetAnim__12AActorEntityUi(void *, s32);           /* extern */

typedef struct GenObj {
    u8 _pad0[20];
    struct GenObj *unk14;
    u8 _pad18[10];
    u16 unk22;
    u8 _pad26[4];
    s32 unk28;
    u8 _pad2C[24];
    u16 unk44;
} GenObj;
void func_08035908(GenObj *arg0, s32 arg1) {
    u16 temp_r0;
    u16 temp_r6;

    temp_r6 = arg0->unk44;
    if (arg1 != temp_r6) {
        arg0->unk44 = arg1;
        if ((((s32 (*)(void *,...))(arg0->unk14->unk28))(arg0) << 0x18) == 0) {
            temp_r0 = arg0->unk22;
            if ((temp_r0 == temp_r6) && (temp_r0 != arg1)) {
                SetAnim__12AActorEntityUi(arg0, arg1);
            }
        }
    }
}
