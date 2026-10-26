s32 *GetMapData(s32);                               /* extern */
s32 Unpack(s32, s32);                                 /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void func_080A5EA0(GenObj *arg0) {
    Unpack(*GetMapData(arg0->unk4), 0x06000000);
}
