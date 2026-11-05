// DECOMP-MATCHED func_080ADAA8 (dari code_809E804.s; cek manusia sebelum ke src/)
typedef struct MapData { u8 _pad0[32]; u16 unk20; } MapData;
MapData *GetMapData(void);
s32 func_0803A8A4(s32, s32, s32, s32, s32);
s32 func_080ADAA8(s32 dummy, s32 arg1) {
    func_0803A8A4(arg1, 1, 0, 0, 0);
    return GetMapData()->unk20 * 8;
}
