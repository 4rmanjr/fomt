typedef struct GenObj { u8 _pad4[4]; u8 *unk4; } GenObj;
s32 func_0801424C(GenObj *arg0) {
    u8 *o = *(u8 **) (arg0->unk4 + 0xA8);
    return ((s32 (*)(u8 *)) *(void **) ((u8 *) *(void **) o + 0xA8))(o);
}
