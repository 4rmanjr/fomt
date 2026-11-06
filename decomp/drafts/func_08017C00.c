void *GetMapData(i32);                              /* extern */

typedef struct GenObj { u8 _pad4[4]; u8 *unk4; } GenObj;
s32 func_08017C00(GenObj *arg0) {
    if (*(u8 *) ((u8 *) arg0 + 0x103C) != 0) {
        return 1;
    }
    if (*(u8 *) ((u8 *) GetMapData(*(s32 *) (arg0->unk4 + 4)) + 0x24) != 0) {
        return 1;
    }
    return 0;
}
