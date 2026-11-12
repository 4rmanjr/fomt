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

void func_080B0934(void *arg0v) {
    GenObj *arg0 = (GenObj *) arg0v;
    s32 i;
    s32 off;
    register u8 *p __asm__("r0");
    register u8 *q __asm__("r1");

    arg0->unk500->unk10 = 0;
    i = 0;
    do {
        off = i * 4;
        p = (u8 *) (off + (u32) arg0);
        (*(Sub **) (p + 0x618))->unk10 = 0;
        __asm__ volatile("" : "+r"(off));
        q = (u8 *) (off + (u32) arg0);
        (*(Sub **) (q + 0x6F4))->unk10 = 0;
        i += 1;
        __asm__ volatile("" : "+r"(i));
    } while (i <= 4);
}
