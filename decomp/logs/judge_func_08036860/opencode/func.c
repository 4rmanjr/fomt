#include "common.h"
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F4974;
extern s32 vtable_unk_080E6B98;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08036860(GenObj *arg0) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, &gUnk_080F4974, 0x7F2, 0x7F6, 0x3F4);
    arg0->unk14 = &vtable_unk_080E6B98;
    return arg0;
}

