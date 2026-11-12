typedef struct Sub {
    u8 _pad0[0x10];
    u16 unk10;
} Sub;

typedef struct GenObj {
    u8 _pad0[0x500];
    Sub *unk500;
    u8 _pad504[0x114];
    Sub *unk618;
    u8 _pad61C[0xD8];
    Sub *unk6F4;
} GenObj;

void func_080B0970(void *arg0v) {
    GenObj *arg0 = (GenObj *) arg0v;
    s32 i;
    s32 off;
    register u16 first __asm__("r1");
    register u16 val __asm__("r4");
    Sub *s;
    register u8 *p __asm__("r0");
    register u8 *q __asm__("r1");

    s = arg0->unk500;
    first = 0x80;
    first = first << 1;
    s->unk10 = first;
    val = first;
    i = 0;
    do {
        off = i * 4;
        p = (u8 *) (off + (u32) arg0);
        (*(Sub **) (p + 0x618))->unk10 = val;
        __asm__ volatile("" : "+r"(off));
        q = (u8 *) (off + (u32) arg0);
        (*(Sub **) (q + 0x6F4))->unk10 = val;
        i += 1;
        __asm__ volatile("" : "+r"(i));
    } while (i <= 4);
}
