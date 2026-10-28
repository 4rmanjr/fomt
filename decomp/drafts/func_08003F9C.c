s32 func_080003DC(void *, u8);                      /* extern */
s32 func_080003E8(void *, u8);                        /* extern */
s32 func_08000470(void *, u8);                        /* extern */
s32 func_080004F4();                                  /* extern */
s32 func_08000528(s32);                             /* extern */
s32 func_08003788(void *, void *, s32);               /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_080115B0(s32, void *, s32);                /* extern */
s32 func_08050DC8(void *, s32 *, s32, s32);             /* extern */
extern s32 gUnk_080E88C8;

typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
    u8 _padC[121];
    u8 unk85;
    u8 _pad86[3];
    s32 unk8C;
} GenObj;
s32 func_08003F9C(GenObj *arg0) {
    u16 spbuf[2];
    s32 sp4;
    u16 *sp8;
    s32 *spC;
    void *sp10;
    void *sp14;
    s32 temp_r6;
    s32 var_sb;
    u8 temp_r0;
    void *temp_r1;
    void *temp_r4;
    s32 c1000;

    if (arg0->unk8 != 0) {
        temp_r0 = arg0->unk85;
        sp4 = func_080003DC((u8 *)arg0 + 0x90, temp_r0);
        var_sb = 3;
        temp_r1 = (void *)((u8 *)arg0 + 0x10);
        sp10 = temp_r1;
        spC = (s32 *)((u8 *)arg0 + 0x8C);
        sp14 = (void *)((u8 *)temp_r1 + 8);
        sp8 = spbuf;
        temp_r6 = temp_r0 << 7;
        temp_r4 = (void *)((u8 *)arg0 + 0x90);
        c1000 = 0x80 << 5;
        {
            void *r4b = (u8 *)arg0 + temp_r6 + 0x98;
            temp_r4 = r4b;
loop_2:
        *sp8 = c1000 & func_08000528(0x1000);
        if (func_080115B0(arg0->unk8, temp_r4, sp4) == 0) {
            func_08003788(arg0, (GenObj *)r4b, arg0->unk8);
            func_08050DC8(sp10, r4b, 0, 0);
            *spC = 3;
            func_08008B6C(sp14, 0xC5);
            func_080003E8((u8 *)arg0 + 0x90, temp_r0);
            func_08000470((u8 *)arg0 + 0x90, temp_r0);
            if (spbuf[0] != 0) {
                func_080004F4();
            }
            return 1;
        }
        if (spbuf[0] != 0) {
            func_080004F4();
        }
        var_sb -= 1;
        if (var_sb == 0) {
            goto block_9;
        }
        goto loop_2;
        }
    }
block_9:
    func_08050DC8((u8 *)arg0 + 0x10, &gUnk_080E88C8, 0, 0);
    arg0->unk8C = 3;
    func_08008B6C((u8 *)arg0 + 0x18, 0xC7);
    return 0;
}
