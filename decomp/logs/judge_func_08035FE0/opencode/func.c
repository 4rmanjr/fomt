#include "common.h"
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F5540;
extern s32 vtable_unk_080E6F18;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08035FE0(GenObj *arg0) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, &gUnk_080F5540, 0x84B, 0x84F, 0x3F7);
    arg0->unk14 = &vtable_unk_080E6F18;
    return arg0;
}

