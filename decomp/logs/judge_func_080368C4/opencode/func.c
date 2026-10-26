#include "common.h"
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F43DC;
extern s32 vtable_unk_080E6B58;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_080368C4(GenObj *arg0) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, &gUnk_080F43DC, 0x7BE, 0x7C2, 0x3F3);
    arg0->unk14 = &vtable_unk_080E6B58;
    return arg0;
}

