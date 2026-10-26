#include "common.h"
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F1FC0;
extern s32 vtable_unk_080E7118;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08035BC8(GenObj *arg0) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, &gUnk_080F1FC0, 0x22F, 0x233, 0x3E1);
    arg0->unk14 = &vtable_unk_080E7118;
    return arg0;
}

