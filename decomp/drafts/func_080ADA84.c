// DECOMP-MATCHED func_080ADA84 (dari code_809E804.s; cek manusia sebelum ke src/)
typedef struct MapData { u8 _pad0[34]; u16 unk22; } MapData;
MapData *GetMapData(void);
s32 func_0803A8A4(s32, s32, s32, s32, s32);

s32 func_080ADA84(s32 dummy, s32 arg1) {
    func_0803A8A4(arg1, 1, 0, 0, 0);
    return GetMapData()->unk22 * 8;
}
