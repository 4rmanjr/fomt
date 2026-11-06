typedef struct GenObj { u8 _pad4[4]; u8 *unk4; } GenObj;
s32 func_08014234(GenObj *arg0) {
    u8 *o = *(u8 **) (arg0->unk4 + 0xA8);
    u8 *vt = *(u8 **) o;
    return ((s32 (*)(u8 *)) *(void **) (vt + 0xa4))(o);
}
