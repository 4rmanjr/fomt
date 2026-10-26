#include "common.h"
s32 func_0807549C(void *, s32);                       /* extern */
s32 func_08076B64(void *);                            /* extern */
s32 func_08076BE0(void *, s16);                       /* extern */
s16 func_08076BEC(void *);                          /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[284];
    s32 unk124;
    u8 _pad128[80];
    s32 unk178;
} GenObj;
void func_0807555C(GenObj *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r4;
    void *temp_r4_2;

    temp_r4 = (arg0->unk178 * 8) + 4 + (arg0 + 0x124);
    temp_r4->unk4 = func_08076BEC(arg0);
    func_08076B64(arg0);
    switch (arg1) {                                 /* irregular */
    case 0:
        temp_r0 = arg0->unk178 + 1;
        arg0->unk178 = temp_r0;
        if (temp_r0 == arg0->unk124) {
            arg0->unk178 = arg1;
        }
        break;
    case 1:
        var_r0 = arg0->unk178;
        if (var_r0 == 0) {
            var_r0 = arg0->unk124;
        }
        arg0->unk178 = (s32) (var_r0 - 1);
        break;
    }
    temp_r4_2 = arg0 + 0x124;
    func_0807549C(arg0, *(temp_r4_2 + ((arg0->unk178 * 8) + 4)));
    func_08076BE0(arg0, (temp_r4_2 + ((arg0->unk178 * 8) + 4))->unk4);
}

