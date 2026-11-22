s32 func_08008920(s32);                             /* extern */

typedef struct GenObj {
    u8 _pad0[0x4608];
    s32 unk4608;
    u16 unk460C;
    u8 _pad460E[6];
    s32 unk4614;
    u16 unk4618;
    u8 _pad461A[34];
    s32 unk463C;
} GenObj;

typedef struct Entry {
    s32 unk0;
    u16 unk4;
} Entry;

void func_08006858(GenObj *arg0) {
    register u8 *p __asm__("r3");
    register Entry *e __asm__("r0");
    register s32 *s __asm__("r1");
    u32 i;
    s32 r;

    if (arg0->unk463C == 0) {
        r = func_08008920((s32)arg0);
        p = (u8 *)r;
        s = (s32 *)((u8 *)arg0 + 0x4608);
        i = *p;
        if (i <= 0x7FU) {
            e = (Entry *)(p + (i * 8 + 4));
            e->unk0 = *s;
            e->unk4 = arg0->unk460C;
            *p = i + 1;
        }
    }
    r = func_08008920((s32)arg0);
    p = (u8 *)r;
    s = (s32 *)((u8 *)arg0 + 0x4614);
    i = *p;
    if (i <= 0x7FU) {
        e = (Entry *)(p + (i * 8 + 4));
        e->unk0 = *s;
        e->unk4 = arg0->unk4618;
        *p = i + 1;
    }
}
