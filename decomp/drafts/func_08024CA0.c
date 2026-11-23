typedef struct Ent Ent;
typedef struct EntVt {
    u8 pad[0x28];
    s32 (*unk28)(Ent *);
} EntVt;
struct Ent {
    u8 pad[0x14];
    EntVt *unk14;
};

s32 func_08024CA0(Ent *arg0) {
    s32 c;

    if ((u8) arg0->unk14->unk28(arg0) != 0) {
        goto fail;
    }
    c = *(u8 *) ((u8 *) arg0 + 0x3C);
    if (c > 0x2A) {
        goto fail;
    }
    if (c < 0x24) {
        goto fail;
    }
    return 1;
fail:
    return 0;
}
