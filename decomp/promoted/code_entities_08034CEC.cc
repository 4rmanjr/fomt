
// DECOMP-MATCHED func_08035CB8 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_08034F00();                                  /* extern */
s32 func_08035C04(s32);                               /* extern */

void func_08035CB8(s32 arg0, s32 arg1) {
    func_08034F00();
    if (arg1 > 1) {
        func_08035C04(arg0);
    }
}

// DECOMP-MATCHED func_080364E4 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_08034F00();                                  /* extern */
s32 func_08036430(s32);                               /* extern */

void func_080364E4(s32 arg0, s32 arg1) {
    func_08034F00();
    if (arg1 > 1) {
        func_08036430(arg0);
    }
}

// DECOMP-MATCHED func_080369C4 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_08034F00();                                  /* extern */
s32 func_08036900(s32);                               /* extern */

void func_080369C4(s32 arg0, s32 arg1) {
    func_08034F00();
    if (arg1 > 1) {
        func_08036900(arg0);
    }
}

// DECOMP-MATCHED func_08036138 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_08034F00();                                  /* extern */
s32 func_08036084(s32);                               /* extern */

void func_08036138(s32 arg0, s32 arg1) {
    func_08034F00();
    if (arg1 > 1) {
        func_08036084(arg0);
    }
}

// DECOMP-MATCHED func_08036680 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_08034F00();                                  /* extern */
s32 func_080365CC(s32);                               /* extern */

void func_08036680(s32 arg0, s32 arg1) {
    func_08034F00();
    if (arg1 > 1) {
        func_080365CC(arg0);
    }
}

// DECOMP-MATCHED func_08036B00 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_08034F00();                                  /* extern */
s32 func_08036AB4(s32);                               /* extern */

void func_08036B00(s32 arg0, s32 arg1) {
    func_08034F00();
    if (arg1 > 1) {
        func_08036AB4(arg0);
    }
}

// DECOMP-MATCHED func_080367AC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_08034F00();                                  /* extern */
s32 func_08036768(s32);                               /* extern */

void func_080367AC(s32 arg0, s32 arg1) {
    func_08034F00();
    if (arg1 > 1) {
        func_08036768(arg0);
    }
}

// DECOMP-MATCHED func_08038320 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_08038110(s32);                               /* extern */
s32 vfunc_2C__7AEntityUi();                           /* extern */

void func_08038320(s32 arg0) {
    vfunc_2C__7AEntityUi();
    func_08038110(arg0);
}

// DECOMP-MATCHED func_080391C0 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_080391C0(s32 arg0, s32 arg1) {
    if (((arg1 <= 0x38) && (arg0 > 0x143) && (arg0 <= 0x164)) || ((arg1 > 0x27F) && (arg0 > 0xF7) && (arg0 <= 0x118))) {
        return 1;
    }
    return 0;
}

// DECOMP-MATCHED func_080391FC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
void func_080391FC(void) {

}

// DECOMP-MATCHED func_08039200 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_08039200(void) {
    return 0;
}

// DECOMP-MATCHED func_0803930C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_0803930C(void) {
    return 1;
}

// DECOMP-MATCHED func_08039A5C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
void func_08039A5C(void) {

}

// DECOMP-MATCHED func_08037430 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
typedef struct GenObj {
    u8 _pad0[60];
    s32 unk3C;
} GenObj;
u16 func_08037430(GenObj *arg0) {
    return arg0->unk3C;
}

// DECOMP-MATCHED func_08037EB4 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_0800FFF4(s32, u8);                           /* extern */
s32 func_08037F74();                                  /* extern */

typedef struct GenObj {
    u8 _pad0[16];
    s32 unk10;
    u8 _pad14[4];
    s32 unk18;
} GenObj;
void func_08037EB4(GenObj *arg0, u8 *arg1) {
    func_0800FFF4(arg0->unk18, *arg1);
    if (arg0->unk10 != 0) {
        func_08037F74();
    }
}

// DECOMP-MATCHED func_08038300 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_08038110(void *);                            /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    u8 _pad8[4];
    struct GenObj *unkC;
    s32 unk10;
} GenObj;
void func_08038300(GenObj *arg0) {
    GenObj *temp_r2;

    temp_r2 = arg0->unk10;
    if (temp_r2 != 0) {
        ((void (*)(void *,...))(temp_r2->unk4->unkC))(temp_r2);
    }
    func_08038110(arg0);
}

// DECOMP-MATCHED func_080387B8 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_08038DF0();                                  /* extern */

typedef struct GenObj {
    u8 _pad0[16];
    s32 unk10;
} GenObj;
void func_080387B8(GenObj *arg0) {
    if (arg0->unk10 != 0) {
        func_08038DF0();
    }
}

// DECOMP-MATCHED func_080387C8 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
s32 func_08038E90();                                  /* extern */

typedef struct GenObj {
    u8 _pad0[16];
    s32 unk10;
} GenObj;
void func_080387C8(GenObj *arg0) {
    if (arg0->unk10 != 0) {
        func_08038E90();
    }
}
