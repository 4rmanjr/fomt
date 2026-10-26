s32 func_080087C8(void *);                            /* extern */
void *func_08008940(void *);                        /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_0800934C(s32, s32, s32, s32);                /* extern */
s32 func_080C2D54(void *);                            /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk1;
    u8 _pad5[3];
    struct GenObj *unk8;
    u8 _padC[4];
    s32 unk10;
    u8 _pad14[1328];
    s32 unk544;
    u8 _pad548[852];
    s32 unk89C;
    u8 _pad8A0[20];
    s32 unk8B4;
    s32 unk8B5;
    s32 unk8B6;
    s32 unk8B7;
    s32 unk8B8;
    s32 unk8B9;
} GenObj;
void func_080C5648(GenObj *arg0) {
    s32 var_r1;
    s32 var_r7;
    GenObj *temp_r0;
    GenObj *var_r0;

    var_r7 = 0;
    var_r0 = (GenObj *)((u8 *)arg0 + 0x904);
    var_r1 = 0x18;
    do {
        var_r0->unk0 = 0;
        var_r0->unk1 = 0;
        var_r0 += 4;
        var_r1 -= 1;
    } while (var_r1 >= 0);
    arg0->unk8B4 = 0x78;
    arg0->unk8B5 = 0x51;
    arg0->unk8B7 = 2;
    arg0->unk8B6 = 2;
    arg0->unk8B9 = 0;
    arg0->unk8B8 = 0;
    func_0800934C(arg0->unk544 + 0xC, 0x889, 1, 1);
    temp_r0 = func_08008940(arg0);
    ((void (*)(void *,...))(temp_r0->unk8->unk10))(temp_r0, arg0->unk544);
    func_080C2D54(arg0);
    func_08008B6C((GenObj *)((u8 *)arg0 + 0x818), 0xBB);
    if (arg0->unk89C == 3) {
        do {
            func_080087C8(arg0);
            if (var_r7 == 0x78) {
                arg0->unk89C = 4;
            }
            var_r7 += 1;
            func_080C2D54(arg0);
        } while (arg0->unk89C == 3);
    }
}
