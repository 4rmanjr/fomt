#include "common.h"
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F77FC;
extern s32 vtable_unk_080E7058;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08035DD8(GenObj *arg0) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, &gUnk_080F77FC, 0x9A1, 0x9A5, 0x403);
    arg0->unk14 = &vtable_unk_080E7058;
    return arg0;
}

