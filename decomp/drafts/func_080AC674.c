s32 func_08007128(void *);                            /* extern */
s32 func_0800736C(void *);                          /* extern */
s8 func_080074C0(void *);                           /* extern */
s32 func_0805E6CC(void *, s32 *);                       /* extern */
extern s32 gUnk_0858BA28;
extern s32 gUnk_08667060;
extern s32 gUnk_086678A0;
extern s32 gUnk_086F2FAC;
extern s32 gUnk_086FAA80;
extern s32 gUnk_0871D51C;
extern s32 gUnk_0871ECAC;
extern s32 gUnk_0871EDD4;
extern s32 gUnk_0871EF00;
extern s32 gUnk_08725DA0;
extern s32 gUnk_08726CCC;
extern s32 gUnk_08727368;
extern s32 gUnk_08727A74;

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk1;
    struct GenObj *unk2;
    struct GenObj *unk3;
    u8 _pad7[1];
    s32 unk8;
    u8 _padC[132];
    struct GenObj *unk90;
    u8 _pad94[256];
    s32 unk194;
    u8 _pad198[2684];
    struct GenObj *unkC14;
    struct GenObj *unkC15;
    u8 _padC19[1031];
    s32 unk1020;
    s32 unk1024;
    s32 unk1028;
} GenObj;
void *func_080AC674(GenObj *arg0, void **arg1) {
    s32 *sp4;
    GenObj *sp8;
    void *spC;
    s32 *var_r0;
    s32 var_r2;
    s32 var_r6;
    GenObj *temp_r1;
    GenObj *temp_r3;
    GenObj *var_r1;
    void *var_r4;

    *arg1 = 0;
    arg0->unk0 = (void *) *arg1;
    arg0->unk194 = 0;
    temp_r3 = (GenObj *)((u8 *)arg0 + 0x198);
    var_r2 = 0x15;
    var_r1 = (GenObj *)((u8 *)arg0 + 0x238);
    do {
        var_r1->unk0 = (u8) (var_r1->unk0 | 0xFF);
        var_r1->unk1 = 0;
        var_r1->unk2 = 0;
        var_r1->unk3 = 1;
        var_r1 += 0x84;
        var_r2 -= 1;
    } while (var_r2 != -1);
    var_r4 = (GenObj *)((u8 *)temp_r3 + 0xB78);
    var_r6 = 0xC;
    sp8 = (GenObj *)((u8 *)arg0 + 0x102C);
    sp4 = (GenObj *)((u8 *)arg0 + 4);
    spC = (GenObj *)((u8 *)arg0 + 0x194);
    do {
        func_08007128(var_r4);
        var_r4->unk4 = func_0800736C(var_r4);
        var_r4->unk8 = func_080074C0(var_r4);
        var_r4->unk9 = 0xFF;
        var_r4->unkA = 0;
        var_r4 += 0xC;
        var_r6 -= 1;
    } while (var_r6 != -1);
    temp_r3->unkC14 = 0;
    temp_r3->unkC15 = 0;
    func_0805E6CC((GenObj *)((u8 *)arg0 + 0xDB0), &gUnk_0858BA28);
    func_0805E6CC((GenObj *)((u8 *)arg0 + 0xDE0), &gUnk_086678A0);
    func_0805E6CC((GenObj *)((u8 *)arg0 + 0xE10), &gUnk_0871EF00);
    func_0805E6CC((GenObj *)((u8 *)arg0 + 0xE40), &gUnk_086FAA80);
    func_0805E6CC((GenObj *)((u8 *)arg0 + 0xE70), &gUnk_0871D51C);
    func_0805E6CC((GenObj *)((u8 *)arg0 + 0xEA0), &gUnk_0871EDD4);
    func_0805E6CC((GenObj *)((u8 *)arg0 + 0xED0), &gUnk_0871ECAC);
    func_0805E6CC((GenObj *)((u8 *)arg0 + 0xF00), &gUnk_08667060);
    func_0805E6CC((GenObj *)((u8 *)arg0 + 0xF30), &gUnk_08727A74);
    func_0805E6CC((GenObj *)((u8 *)arg0 + 0xF60), &gUnk_08726CCC);
    func_0805E6CC((GenObj *)((u8 *)arg0 + 0xF90), &gUnk_08727368);
    func_0805E6CC((GenObj *)((u8 *)arg0 + 0xFC0), &gUnk_08725DA0);
    func_0805E6CC((GenObj *)((u8 *)arg0 + 0xFF0), &gUnk_086F2FAC);
    arg0->unk1020 = 0;
    arg0->unk1024 = 0;
    arg0->unk1028 = 0;
    sp8->unk0 = 0;
    sp8->unk2 = 0;
    ((GenObj *)((u8 *)arg0 + 0x1028))->unk9 = 0;
    var_r0 = sp4;
    if (var_r0 != spC) {
        do {
            *var_r0 = 0;
            var_r0 += 4;
        } while (var_r0 != spC);
    }
    temp_r1 = *arg1;
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk90->unk8))(temp_r1, 3);
    }
    return arg0;
}
