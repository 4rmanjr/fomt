#include "common.h"
s32 func_08050D8C(s32, s32 *);                          /* extern */
extern s32 gUnk_08107B28;
extern s32 gUnk_08107B5C;
extern s32 gUnk_08107C18;
extern s32 gUnk_08107CB0;
extern s32 gUnk_08107CE0;

typedef struct GenObj {
    u8 _pad0[1816];
    s32 unk718;
} GenObj;
void func_080BA574(GenObj *arg0, s32 arg1) {
    u32 temp_r0;

    temp_r0 = arg1 - 1;
    switch (temp_r0) {
    case 0:
        func_08050D8C(arg0->unk718, &gUnk_08107B28);
        return;
    case 1:
        func_08050D8C(arg0->unk718, &gUnk_08107B5C);
        return;
    case 2:
        func_08050D8C(arg0->unk718, &gUnk_08107C18);
        return;
    case 3:
        func_08050D8C(arg0->unk718, &gUnk_08107CB0);
        return;
    case 4:
        func_08050D8C(arg0->unk718, &gUnk_08107CE0);
        /* fallthrough */
    default:
        return;
    }
}

