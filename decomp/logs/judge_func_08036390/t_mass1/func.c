#include "common.h"
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, s32 *, s32, s32, s32); /* extern */
extern s32 gUnk_080F3FD8;
extern s32 vtable_unk_080E6D58;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08036390(GenObj *arg0) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, &gUnk_080F3FD8, 0x6C5, 0x6C9, 0x3F1);
    arg0->unk14 = &vtable_unk_080E6D58;
    return arg0;
}

