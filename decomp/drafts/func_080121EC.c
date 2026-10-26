s32 SetAnim__12AActorEntityUi(void *, s32);           /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[26];
    s32 unk22;
    u8 _pad26[130];
    s32 unkA8;
} GenObj;
void func_080121EC(GenObj *arg0, s32 arg2) {
    void *temp_r0;

    temp_r0 = (*arg0->unk4->unkA8)->unk40();
    if ((temp_r0 != 0) && (temp_r0->unk22 != arg2)) {
        SetAnim__12AActorEntityUi(temp_r0, arg2);
    }
}
