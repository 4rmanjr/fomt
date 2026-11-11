/* note sesi: 4 judge, sisa 17 struktural/22 regalloc, cap tersisa 1.
   Ref menyimpan arg0 di r3 (caller-saved) + arg1 di r8 lewat `mov r7,r8; push {r7}`;
   draf selalu memakai r2/r7. Struktur C sudah betul (ref vs draf: alur sama),
   yang tersisa regalloc global 69 instruksi -> parkir, bukan iterasi.
   Bentuk ref: delta==0 -> unk28=0 lalu LANGSUNG ke ekor (skip store pos). */
s32 vfunc_2C__7AEntityUi(void *, s32);                /* extern */

typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
    s32 unkC;
    u8 _pad10[0x14];
    u16 unk24;
    u16 unk26;
    s32 unk28;
    s16 unk2C;
    u8 unk2E;
} GenObj;

void func_0803242C(GenObj *arg0, s32 arg1) {
    s32 pos;
    s32 delta;
    s32 step;
    s32 d2;
    u8 flag;

    if (arg0->unk24 != 0) {
        arg0->unk24 -= 1;
    } else {
        arg0->unk24 = arg0->unk26;
    }
    step = arg0->unk28;
    if (step != 0) {
        flag = 0;
        if (arg0->unk2E == 0) {
            flag = 1;
        }
        pos = flag ? arg0->unk8 : arg0->unkC;
        delta = arg0->unk2C - (pos >> 0x10);
        if (delta == 0) {
            arg0->unk28 = 0;
            goto end;
        }
        pos = (delta <= 0) ? pos - step : pos + step;
        if ((pos >> 0x10) != (arg0->unk2C - delta)) {
            d2 = arg0->unk2C - (pos >> 0x10);
            if ((delta > 0) ? (d2 <= 0) : (d2 >= 0)) {
                arg0->unk28 = 0;
            }
        }
        if (flag != 0) {
            arg0->unk8 = pos;
        } else {
            arg0->unkC = pos;
        }
    }
end:
    vfunc_2C__7AEntityUi(arg0, arg1);
}
