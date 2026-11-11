s32 GetCurrentTask__C13HarvestSprite(s32);            /* extern */
s32 GetFriendship__C3Npc(s32);                        /* extern */
s32 GetTaskExp__C13HarvestSpriteQ213HarvestSprite4Task(s32, s32); /* extern */
s32 func_080338F0();                                  /* extern */
s32 func_08034180(void *, s32, s32, s32);              /* extern */
s32 func_08034260(void *);                            /* extern */
u32 func_080AB788(s32);                               /* extern */
s32 method_0809E7D8__13HarvestSpritePC15UnkBarnAnimal2C(s32, s32 *); /* extern */

typedef struct {
    u16 lo : 16;
    u8 mid : 8;
    u8 hi : 8;
} SP0;

typedef struct GenObj {
    u8 _pad0[0x20];
    u8 unk20;
    u8 _pad21[19];
    s32 unk34;
} GenObj;

void func_080342D8(GenObj *arg0) {
    SP0 sp0;
    s32 task;
    s32 exp;

    GetFriendship__C3Npc(arg0->unk34);
    if (((func_080338F0() << 0x18) == 0) || ((func_08034260(arg0) << 0x18) == 0)) {
        sp0.lo = func_080AB788(0xB4);
        sp0.mid = 0;
        task = arg0->unk34;
        exp = GetTaskExp__C13HarvestSpriteQ213HarvestSprite4Task(
                  task, GetCurrentTask__C13HarvestSprite(task));
        sp0.hi = (func_080AB788(0x100 - exp) >> 6) + 2;
        method_0809E7D8__13HarvestSpritePC15UnkBarnAnimal2C(arg0->unk34, (s32 *) &sp0);
        func_08034180(arg0, 0, arg0->unk20, 0);
    }
}
