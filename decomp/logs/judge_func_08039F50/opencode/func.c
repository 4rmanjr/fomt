#include "common.h"
s32 __builtin_delete(void *);                         /* extern */
s32 func_080A47B4(void *, s32);                       /* extern */
extern s32 vtable_unk_080E76BC;

typedef struct GenObj {
    u8 _pad0[8];
    struct GenObj *unk8;
    u8 _padC[24];
    struct GenObj *unk24;
    u8 _pad28[32];
    s32 unk48;
    void *unk4C;
} GenObj;
void func_08039F50(GenObj *arg0, s32 arg1) {
    GenObj *temp_r1;

    arg0->unk4C = &vtable_unk_080E76BC;
    temp_r1 = arg0->unk48;
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk24->unk8))(temp_r1, 3);
    }
    func_080A47B4((GenObj *)((u8 *)arg0 + 8), 2);
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

