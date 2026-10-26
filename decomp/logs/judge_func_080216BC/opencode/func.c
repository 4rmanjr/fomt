#include "common.h"
s32 __5ActorRC5Actor(s32 *, s32);                       /* extern */
s32 func_08020038(void *, void **, s32 *, s32);         /* extern */
s32 func_08022048(void *, s32, u8);                   /* extern */
s32 func_080220D4(void *);                          /* extern */
extern s32 vtable_unk_080E6428;

typedef struct GenObj {
    u8 _pad0[20];
    struct GenObj *unk14;
    u8 _pad18[8];
    s32 unk20;
    u8 _pad24[16];
    s32 unk34;
    u8 _pad38[5];
    s32 unk3D;
    s32 unk3E;
    s32 unk40;
} GenObj;
void *func_080216BC(GenObj *arg0, void **arg1, s32 arg2) {
s32 sp0;
    u32 var_r0;
    void *temp_r0;

    __5ActorRC5Actor(&sp0, arg2);
    func_08020038(arg0, arg1, &sp0, 0x782);
    arg0->unk14 = &vtable_unk_080E6428;
    arg0->unk34 = arg2;
    arg0->unk3D = 0;
    temp_r0 = (*arg1)->unk40(arg1, 0);
    var_r0 = 0;
    if (temp_r0 != 0) {
        var_r0 = (u32) (0 - ((void (*)(void *,...))(temp_r0->unk14->unk40))(temp_r0)) >> 0x1F;
    }
    arg0->unk3E = (s8) var_r0;
    func_08022048(arg0, func_080220D4(arg0), arg0->unk20);
    return arg0;
}

