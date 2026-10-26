s32 GetCurrentTask__C13HarvestSprite(s32);          /* extern */
s32 GetFriendship__C3Npc(s32);                        /* extern */
s32 GetTaskExp__C13HarvestSpriteQ213HarvestSprite4Task(s32, s32); /* extern */
s32 func_080338F0();                                /* extern */
s32 func_08034180(void *, s32, u8, s32);              /* extern */
s32 func_08034260(void *);                          /* extern */
u16 func_080AB788(s32);                             /* extern */
s32 method_0809E7D8__13HarvestSpritePC15UnkBarnAnimal2C(s32, s32 *); /* extern */

typedef struct GenObj {
    u8 _pad0[32];
    s32 unk20;
    u8 _pad24[16];
    s32 unk34;
} GenObj;
void func_080342D8(GenObj *arg0) {
    s32 sp0;
    s32 temp_r1;
    s32 temp_r4;

    GetFriendship__C3Npc(arg0->unk34);
    if (((func_080338F0() << 0x18) == 0) || ((func_08034260(arg0) << 0x18) == 0)) {
        temp_r1 = ((sp0 & 0xFFFF0000) | func_080AB788(0xB4)) & 0xFF00FFFF;
        sp0 = temp_r1;
        temp_r4 = arg0->unk34;
        sp0 = (temp_r1 & 0xFFFFFF) | (((func_080AB788(0x100 - GetTaskExp__C13HarvestSpriteQ213HarvestSprite4Task(temp_r4, GetCurrentTask__C13HarvestSprite(temp_r4))) >> 6) + 2) << 0x18);
        method_0809E7D8__13HarvestSpritePC15UnkBarnAnimal2C(arg0->unk34, &sp0);
        func_08034180(arg0, 0, arg0->unk20, 0);
    }
}
