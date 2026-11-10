s32 __5ActorRC5Actor(s32 *, s32);                       /* extern */
s32 func_08020038(void *, void **, s32 *, s32);         /* extern */
s32 func_08022048(void *, s32, u8);                   /* extern */
s32 func_080220D4(void *);                          /* extern */
extern s32 vtable_unk_080E6428;

typedef struct Vt40 {
    u8 _pad0[0x40];
    void *fn40;
} Vt40;

typedef struct GenObj {
    u8 _pad0[0x14];
    void *unk14;
    u8 _pad18[8];
    u8 unk20;
    u8 _pad21[0x13];
    s32 unk34;
    u8 _pad38[5];
    u8 unk3D;
    u8 unk3E;
} GenObj;

void *func_080216BC(GenObj *arg0, void **arg1, s32 arg2) {
    s32 sp0[2];
    u32 var_r0;
    GenObj *temp_r0;

    __5ActorRC5Actor(sp0, arg2);
    func_08020038(arg0, arg1, sp0, 0x782);
    arg0->unk14 = &vtable_unk_080E6428;
    arg0->unk34 = arg2;
    arg0->unk3D = 0;
    temp_r0 = (GenObj *) ((void *(*)(void **, s32)) ((Vt40 *) *arg1)->fn40)(arg1, 0);
    var_r0 = 0;
    if (temp_r0 != 0) {
        var_r0 = (u32) (0 - (s32) (u8) ((s32 (*)(void *)) ((Vt40 *) temp_r0->unk14)->fn40)(temp_r0)) >> 0x1F;
    }
    arg0->unk3E = (u8) var_r0;
    func_08022048(arg0, func_080220D4(arg0), arg0->unk20);
    return arg0;
}
