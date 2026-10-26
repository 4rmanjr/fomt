s32 SoftReset(s32);                                   /* extern */
s32 func_08000528(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[10];
    struct GenObj *unkA;
} GenObj;
void func_08000240(void) {
    void *temp_r1;
    GenObj *temp_r1_2;

    func_08000528(0xFFFF);
    (void *)0x04000000->unk0 = 0x80;
    (void *)0x04000000->unk84 = 0;
    if (0xF & ~*(u16 *)0x04000130) {
        do {

        } while (0xF & ~*(u16 *)0x04000130);
    }
    (void *)0x040000B0->unkA = (u16) (0xC5FF & (void *)0x040000B0->unkA);
    (void *)0x040000B0->unkA = (u16) (0x7FFF & (void *)0x040000B0->unkA);
    temp_r1 = (void *)0x040000B0 + 0xC;
    temp_r1->unkA = (u16) (0xC5FF & temp_r1->unkA);
    temp_r1->unkA = (u16) (0x7FFF & temp_r1->unkA);
    temp_r1_2 = (GenObj *)((u8 *)temp_r1 + 0xC);
    temp_r1_2->unkA = (u16) (0xC5FF & temp_r1_2->unkA);
    temp_r1_2->unkA = (u16) (0x7FFF & temp_r1_2->unkA);
    (void *)0x040000D4->unkA = (u16) (0xC5FF & (void *)0x040000D4->unkA);
    (void *)0x040000D4->unkA = (u16) (0x7FFF & (void *)0x040000D4->unkA);
    SoftReset(0xFF);
loop_4:
    goto loop_4;
}
