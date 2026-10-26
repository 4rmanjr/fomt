s32 SetAnim__12AActorEntityUi(void *, s32);           /* extern */

typedef struct GenObj {
    u8 _pad0[164];
    s32 unkA4;
} GenObj;
void func_080299D0(GenObj *arg0) {
    arg0->unkA4 = 0;
    *((arg0 + 0xA4) - 0x1C) = 0;
    SetAnim__12AActorEntityUi(arg0, 0x192);
}
