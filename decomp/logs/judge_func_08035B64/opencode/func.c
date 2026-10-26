#include "common.h"
s32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, s32 *, s32, s32, s32); /* extern */
extern s32 ScheduleInfo_Unk_080F1A80;
extern s32 vtable_unk_080E7158;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08035B64(GenObj *arg0) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, &ScheduleInfo_Unk_080F1A80, 0x213, 0x217, 0x3E0);
    arg0->unk14 = &vtable_unk_080E7158;
    return arg0;
}

