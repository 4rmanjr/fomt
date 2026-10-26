s32 func_080B9428(void *);                            /* extern */
s32 func_080B96AC(void *, u16, u16, s32, s32, s32, s32, s32); /* extern */
s32 func_080B9F64(void *, s32, s32);                /* extern */
s32 rand();                                         /* extern */

typedef struct GenObj {
    u8 _pad0[2];
    struct GenObj *unk2;
    u8 _pad6[134];
    s32 unk8C;
    u8 _pad90[28];
    s32 unkAC;
    u8 _padB0[26];
    s32 unkCA;
    s32 unkCE;
    u8 _padD2[2699];
    s32 unkB5D;
    u8 _padB61[10];
    s32 unkB6B;
    s32 unkB6D;
    s32 unkB6E;
    s32 unkB71;
    s32 unkB72;
} GenObj;
void func_080B92B4(GenObj *arg0) {
    s32 *temp_r0_2;
    s32 var_r2;
    u32 var_r1;
    u8 *var_r0;
    GenObj *temp_r0;

    if ((u32) arg0->unkAC > 1U) {
        if ((u32) arg0->unkCE > 0x50U) {
            var_r1 = (u32) (0xFFFF & rand()) >> 9;
            var_r2 = 0xB70;
            goto block_18;
        }
        if ((u32) ((u32) (0xFFFF & rand()) >> 9) > (u32) arg0->unkB71) {
            func_080B9428(arg0);
        }
    } else {
        temp_r0 = (GenObj *)((u8 *)arg0 + 0xCA);
        temp_r0_2 = ((GenObj *)((u8 *)temp_r0 + 2)) - 0x18;
        if ((func_080B96AC(arg0, arg0->unkCA, temp_r0->unk2, *temp_r0_2, (s32) *(temp_r0_2 - 0x2A), (s32) arg0->unk8C, (s32) arg0->unkB5D, (s32) arg0->unkB72) << 0x18) != 0) {
            if ((u32) arg0->unkCE > 0x50U) {
                var_r1 = (u32) (0xFFFF & rand()) >> 9;
                var_r2 = 0xB6A;
                goto block_18;
            }
            if ((u32) ((u32) (0xFFFF & rand()) >> 9) > (u32) arg0->unkB6B) {
                goto block_20;
            }
        } else if ((func_080B9F64(arg0, 1, 0) << 0x18) == 0) {
            if ((u32) arg0->unkCE > 0x50U) {
                var_r1 = (u32) (0xFFFF & rand()) >> 9;
                var_r2 = 0xB6C;
block_18:
                var_r0 = arg0 + var_r2;
                goto block_19;
            }
            if ((u32) ((u32) (0xFFFF & rand()) >> 9) > (u32) arg0->unkB6D) {
                goto block_20;
            }
        } else if ((u32) arg0->unkCE > 0x50U) {
            if ((u32) ((u32) (0xFFFF & rand()) >> 9) > (u32) arg0->unkB6E) {
                goto block_20;
            }
        } else {
            var_r1 = (u32) (0xFFFF & rand()) >> 9;
            var_r0 = (GenObj *)((u8 *)arg0 + 0xB6F);
block_19:
            if (var_r1 < (u32) *var_r0) {
block_20:
                func_080B9428(arg0);
            }
        }
    }
}
