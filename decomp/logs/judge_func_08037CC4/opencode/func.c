#include "common.h"
s32 __7AEntityP10GameObjectRC8Location();             /* extern */
extern s32 vtable_unk_080E7444;

typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
} GenObj;
void *func_08037CC4(GenObj *arg0) {
    __7AEntityP10GameObjectRC8Location();
    arg0->unk14 = &vtable_unk_080E7444;
    return arg0;
}

