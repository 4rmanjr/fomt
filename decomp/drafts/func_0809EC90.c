s32 __3NpcRC13ActorLocation();                        /* extern */

void *func_0809EC90(void *arg0) {
    __3NpcRC13ActorLocation();
    arg0->unk14 = (u8) (-0x40 & arg0->unk14);
    arg0->unk14 = (s16) (0xFFFFFE3F & (u16) arg0->unk14);
    arg0->unk15 = (u8) (-3 & arg0->unk15 & ~4 & ~8 & ~0x10 & ~0x20 & ~0x40);
    return arg0;
}
