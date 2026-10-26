#include "common.h"
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F7B40;
extern s32 vtable_unk_080E6AD8;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08036A78(GenObj *arg0) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, &gUnk_080F7B40, 0x9D3, 0x9D7, 0x404);
    arg0->unk14 = &vtable_unk_080E6AD8;
    return arg0;
}

