s32 func_0803260C();
s32 func_0805E8F0(void *);

typedef struct S38 {
    u8 _pad0[0x38];
    u8 unk38;
} S38;
typedef struct GenObj {
    S38 *unk0;
    u8 _pad4[0xC7];
    u8 unkCB;
} GenObj;

/* NOTE crouton-alpha-3: deref chain S38 + byte pointer (u8) agar lebar
   ldrb/strb pas; pointer artimetic via cast (u8*) bukan GenObj* agar
   tak diskala sizeof. */
void func_0802BFA0(GenObj *arg0) {
    s32 var_r1;
    s8 *var_r1_2;
    s8 var_r0;
    S38 *p;
    u8 *b;

    func_0803260C();
    p = arg0->unk0;
    b = (u8 *)p + 0x38;
    var_r1 = 0;
    if (*b == 1) {
        var_r1 = 1;
    }
    if (var_r1 != 0) {
        var_r1_2 = (s8 *)((u8 *)arg0 + 0xCB);
        if (arg0->unkCB == 0) {
            if ((s32) (func_0805E8F0((u8 *)arg0 + 0xB4) << 0x1E) < 0) {
                var_r1_2 = (s8 *)((u8 *)arg0 + 0xC8);
                var_r0 = 1;
                goto block_7;
            }
        } else {
            var_r0 = 0;
block_7:
            *var_r1_2 = var_r0;
        }
    }
}
