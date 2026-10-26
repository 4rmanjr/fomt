#include "common.h"
s32 __5ActorRC5Actor(s32 *, void *);                    /* extern */
s32 func_08020038(void *, void **, ? *, s32);         /* extern */
s32 func_08020410(void *, s32);                       /* extern */
s32 func_080211E4(void *, s32, u8);                   /* extern */
s32 func_08021264(void *);                          /* extern */
s32 func_08038374(void *, s32, s32, u16, s32);        /* extern */
extern ? vtable_unk_080E64C8;

void *func_08020310(void *arg0, void **arg1, void *arg2, s32 arg3) {
s32 sp4;
    void *temp_r0;

    __5ActorRC5Actor(&sp4, arg2);
    func_08020038(arg0, arg1, &sp4, 0x340);
    arg0->unk14 = &vtable_unk_080E64C8;
    arg0->unk34 = arg2;
    arg0->unk38 = arg3;
    arg0->unk40 = 0;
    if (arg2->unk20 == 5) {
        temp_r0 = (*arg1)->unk40(arg1, 0x4B);
        if (temp_r0 != 0) {
            if (temp_r0->unk4 == arg0->unk4) {
                func_08038374(temp_r0, arg0->unk8, arg0->unkC, arg0->unk22, (s32) arg0->unk20);
            } else {
                func_08020410(arg0, 0);
            }
        }
    }
    func_080211E4(arg0, func_08021264(arg0), arg0->unk20);
    return arg0;
}

