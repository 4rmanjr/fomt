s32 DayUpdate__3NpcUi(void *, s32);                   /* extern */
s32 rand();                                         /* extern */

typedef struct GenObj {
    u8 _pad0[37];
    u8 unk25;
} GenObj;
void func_0809EAF8(GenObj *arg0) {
    u8 *p;
    u8 v;

    p = (u8 *)arg0;
    DayUpdate__3NpcUi(arg0, rand() % 100);
    p += 0x25;
    v = *p;
    if ((u32) v <= 0xFEU) {
        *p = (u8) (v + 1);
    }
}
