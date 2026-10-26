#include "common.h"
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F3408;
extern s32 vtable_unk_080E6D98;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08036328(GenObj *arg0) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, &gUnk_080F3408, 0x689, 0x68D, 0x3EF);
    arg0->unk14 = &vtable_unk_080E6D98;
    return arg0;
}

