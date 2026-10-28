s32 func_080D6EEC(void *);                            /* extern */
u32 func_080D74F0(u8 *, u32);                       /* extern */

typedef struct GenObj {
    u8 unk0;
    u8 unk1;
    u8 _pad2[2];
    u8 unk4;
    u8 _pad5[59];
    u8 unk40;
} GenObj;
s32 func_080D7568(GenObj *arg0, u32 arg1) {
    s32 sp0;
    s32 var_r0;
    s32 var_r3;
    u32 temp_r0;
    u32 var_r1;
    u8 *var_r4;
    u32 temp_r5;

    if (arg1 <= 8U) {
        var_r3 = 0;
        var_r4 = (u8 *)arg0 + 4;
        do {
            temp_r5 = *var_r4;
            if (temp_r5 == 0) {
                sp0 = var_r3;
                temp_r0 = func_080D74F0(var_r4, arg1);
                var_r0 = 0;
                if (temp_r0 <= 0xFFU) {
                    var_r0 = 1;
                }
                if (var_r0 != 0) {
                    arg0->unk1 = (u8) temp_r5;
                    var_r1 = 0;
                    if (arg0->unk4 != 0) {
                        var_r1 = (u32) (0 - arg0->unk40) >> 0x1F;
                    }
                    arg0->unk0 = (s8) var_r1;
                    return (var_r3 << 8) | temp_r0;
                }
            }
            var_r4 += 0x3C;
            var_r3 += 1;
        } while (var_r3 <= 1);
    } else if ((arg1 == 9) && (arg0->unk1 != 0)) {
        func_080D6EEC(arg0);
        return 0;
    }
    return 0x200;
}

/* ATTEMPT-NOTE worker-d756: MATCH. Kunci: do-while (var_r3 <= 1) agar ble-loop,
   else-if agar loop-exit b END (skip tes ==9), temp u32 agar ldrb r5,[r4]
   langsung (u8 memicu copy add r5,r0). Reg: a0->r6 a1->r7 cnt->r3(sp) p->r4 t->r5 v->r2. */
