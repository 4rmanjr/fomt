#include "common.h"
s32 LoadById__12ScriptEngineii(s32);                  /* extern */
s32 func_080D7F3C(s32);                               /* extern */
extern s32 gUnk_0300040C;

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void func_08012B04(GenObj *arg0) {
    s32 temp_r4;

    temp_r4 = arg0->unk4;
    LoadById__12ScriptEngineii(gUnk_0300040C + 8);
    func_080D7F3C(temp_r4);
}

