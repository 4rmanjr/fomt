s32 DayUpdate__3NpcUi(void *, s32);                   /* extern */
s32 rand();                                         /* extern */

typedef struct GenObj {
    u8 _pad0[37];
    s32 unk25;
} GenObj;
void func_0809EAF8(GenObj *arg0) {
    u8 temp_r0;

    DayUpdate__3NpcUi(arg0, rand() % 100);
    temp_r0 = arg0->unk25;
    if ((u32) temp_r0 <= 0xFEU) {
        arg0->unk25 = (u8) (temp_r0 + 1);
    }
}
