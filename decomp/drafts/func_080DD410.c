typedef struct Src_DD410 {
    u8 _pad0[0x50];
    s32 unk50;
    u16 unk54;
    u16 unk56;
} Src_DD410;

typedef struct Dst_DD410 {
    u8 a : 4;
    u8 b : 4;
    s32 unk4;
    u16 unk8;
    u16 unkA;
} Dst_DD410;

void func_080DD410(Src_DD410 *arg0, Dst_DD410 *arg1) {
    arg1->a = 0xB;
    arg1->unk4 = arg0->unk50;
    arg1->unk8 = arg0->unk54;
    arg1->unkA = arg0->unk56;
}
