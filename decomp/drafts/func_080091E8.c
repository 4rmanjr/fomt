s32 func_0800917C(void *);                          /* extern */

typedef struct H {
    u8 _pad0[4];
    u16 unk4;
    u16 unk6;
    u16 unk8;
    u16 unkA;
    u16 unkC;
    u16 arr[10];
} H;

H *func_080091E8(H *arg0) {
    volatile u32 z;
    u16 *p;
    u16 *end;

    func_0800917C(arg0);
    arg0->unk8 = arg0->unk4;
    arg0->unkA = 0x1E;
    arg0->unkC = 4;
    z = 0;
    p = &arg0->arr[0];
    end = &arg0->arr[10];
    if (p != end) {
        do {
            *p = 0;
            p++;
        } while (p != end);
    }
    return arg0;
}
