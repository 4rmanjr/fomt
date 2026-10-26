void *GetMapData();                                 /* extern */
s32 func_0803A8A4(s32, s32, s32, s32, s32);           /* extern */

s32 func_080ADA84(s32 arg1) {
    func_0803A8A4(arg1, 1, 0, 0, 0);
    return GetMapData()->unk22 * 8;
}
