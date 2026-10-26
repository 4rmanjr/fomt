/* Warning: missing "bx $lr" in last block of func_08000FF8 (initial). */

void *__builtin_new(s32);                           /* extern */
s32 func_080019D8(s32);                               /* extern */
s32 func_08008724();                                  /* extern */
void *func_08008918(s32);                           /* extern */
void *func_08008940(s32);                           /* extern */
s32 func_08008B6C(s32, s32);                          /* extern */
s32 func_08009300(void *, void *);                    /* extern */
s32 func_0800934C(void *, s32, s32, s32);             /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    struct GenObj *unk8;
    u8 _padC[4];
    s32 unk10;
    u8 _pad14[60];
    s32 unk50;
} GenObj;
void func_08000FF8(s32 arg0) {
    s16 sp0;
    void *sp4;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 temp_r3;
    GenObj *temp_r0;
    GenObj *temp_r0_2;
    void *temp_r1;
    GenObj *temp_r4;
    void *temp_r5;

    func_08008724();
    func_080019D8(arg0);
    temp_r0 = func_08008918(arg0);
    sp0 = 0x3F;
    temp_r0->unk50 = 0x3F;
    temp_r4 = __builtin_new(0x10);
    temp_r1 = func_08008918(arg0);
    temp_r4->unk0 = 0;
    temp_r4->unk4 = 0;
    temp_r4->unk8 = (s32) 0;
    temp_r5 = (GenObj *)((u8 *)temp_r4 + 0xC);
    func_08009300(temp_r5, temp_r1);
    sp4 = temp_r4;
    func_0800934C(temp_r5, 0x00000889, 1, 0);
    temp_r0_2 = func_08008940(arg0);
    ((void (*)(void *,...))(temp_r0_2->unk8->unk10))(temp_r0_2, sp4);
    func_08008B6C(arg0 + 8, 0x23);
    *((u8 *)arg0 + 0x00006C64) = 0x400;
    *((u8 *)arg0 + 0x00006C66) = 0;
    *((u8 *)arg0 + 0x00006C68) = 0;
    temp_r3 = 0x00006C66 + 4;
    *((u8 *)arg0 + temp_r3) = 0x400;
    *((u8 *)arg0 + (0x00006C68 + 0xCA)) = 3;
    *((u8 *)arg0 + 0x00006D30) = 0xE0;
    *((u8 *)arg0 + 0x00006C6D) = 0;
    *((u8 *)arg0 + (temp_r3 + 2)) = 0;
    sp10 = 0;
    sp14 = 0;
    sp18 = 0;
    sp1C = 0;
}
