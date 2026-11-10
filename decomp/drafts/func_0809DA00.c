s32 GetFirstFreeToolSlot__C8Rucksack(void *);       /* extern */
s32 GetShelf__9FarmHouse(void *);                   /* extern */
s32 func_0800E924(u16 *, void *);                     /* extern */
s32 func_0809C38C(void *);                          /* extern */
s32 func_0809C3BC(void *);                            /* extern */
s32 func_0809DF2C(void *, s32, void *);             /* extern */
u8 func_0809DFAC(void *);                           /* extern */
u8 func_0809E02C(void *);                           /* extern */
s32 func_0809ED04(s32);                             /* extern */

typedef struct GenObj {
    u8 _pad0[0x10];
    u8 unk10;
    u8 _pad11[0x613];
    u8 unk624;
    u8 unk625;
    u8 unk626;
} GenObj;

s32 func_0809DA00(GenObj *arg0, s32 arg1, GenObj *arg2) {
    s32 sp[4];
    s32 var_r4;
    s32 var_r7;
    s32 i;
    s32 temp_r1;
    s32 item;
    u8 var_r1;
    u8 *p;
    u8 v;
    u32 *p32;

    switch (arg1 - 3) {
    case 0:
        func_0800E924((u16 *) sp, (u8 *) arg2 + 0x1BD8);
        if ((s32) (*(u16 *) sp << 0x16) <= 0x4CC00000) {
            p = (u8 *) arg0 + 0x625;
            v = *p;
            if (!(v & 4)) {
                *p = v | 4;
            } else {
                arg1 = 0;
            }
        } else {
            p = (u8 *) arg0 + 0x624;
            v = *p;
            if (v & 1) {
                arg1 = 0;
            } else {
                *p = v | 1;
            }
        }
        break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        var_r4 = 0;
        if (GetFirstFreeToolSlot__C8Rucksack((u8 *) arg2 + 0x1C38) == -1) {
            var_r4 = 1;
        }
        if ((func_0809ED04((s32) ((u8 *) arg2 + 0x1DAC)) << 0x18) == 0) {
            var_r4 = 1;
        }
        if ((func_0809DF2C(arg0, arg1, arg2) << 0x18) != 0) {
            var_r4 = 1;
        }
        if (var_r4 == 1) {
            arg1 = 0;
            break;
        }
        var_r1 = 0x51;
        switch (arg1 - 4) {
        case 0:
            var_r1 = 5;
            break;
        case 1:
            var_r1 = 0xD;
            break;
        case 2:
            var_r1 = 0x15;
            break;
        case 3:
            var_r1 = 0x1D;
            break;
        case 4:
            var_r1 = 0x25;
            break;
        case 5:
            var_r1 = 0x2D;
            break;
        }
        if (var_r1 != 0x51) {
            func_0809C3BC((u8 *) arg2 + 0x3480);
        }
        break;
    case 7:
        var_r7 = 0;
        sp[2] = 0xC8;
        temp_r1 = (arg2->unk10 >> 3);
        sp[3] = (temp_r1 << 3) - temp_r1 + ((u32) (arg2->unk10 << 0x1D) >> 0x1D);
        p32 = (u32 *) &sp[2];
        if ((u32) sp[2] > (u32) sp[3]) {
            p32 = (u32 *) &sp[3];
        }
        if (*p32 <= 2U) {
            var_r7 = 1;
        }
        if (arg0->unk625 & 0x10) {
            var_r7 = 1;
        }
        if (GetFirstFreeToolSlot__C8Rucksack((u8 *) arg2 + 0x1C38) == -1) {
            var_r7 = 1;
        }
        if (var_r7 == 0) {
            arg0->unk625 |= 0x10;
        } else {
            arg1 = 0;
        }
        break;
    case 20:
        var_r7 = 0;
        if ((func_0809C38C((u8 *) arg2 + 0x3480) << 0x18) == 0) {
            var_r7 = 1;
        }
        for (i = 4; i <= 9; i++) {
            if ((func_0809DF2C(arg0, i, arg2) << 0x18) != 0) {
                var_r7 = 1;
            }
        }
        if (var_r7 == 1) {
            arg1 = 0;
        }
        break;
    case 29:
        var_r4 = 0;
        if (GetShelf__9FarmHouse((u8 *) arg2 + (0xFA << 1)) == 0) {
            var_r4 = 1;
        }
        if ((func_0809DFAC(arg0) == 8) && (GetFirstFreeToolSlot__C8Rucksack((u8 *) arg2 + 0x1C38) == -1)) {
            var_r4 = 1;
        }
        if (var_r4 != 0) {
            break;
        }
        func_0800E924((u16 *) sp, (u8 *) arg2 + 0x1BD8);
        item = (s32) ((u32) (*(u16 *) sp << 0x16) >> 0x16);
        switch (item - 0x34) {
        case 0x3C:
            if (!(arg0->unk625 & 0x20)) {
                arg0->unk625 |= 0x20;
            } else {
                var_r4 = 1;
            }
            break;
        case 0x66:
            if (arg0->unk625 & 0x40) {
                var_r4 = 1;
            } else {
                arg0->unk625 |= 0x40;
            }
            break;
        case 0x7B:
            if (arg0->unk625 & 0x80) {
                var_r4 = 1;
            } else {
                arg0->unk625 |= 0x80;
            }
            break;
        case 0x98:
            if (arg0->unk626 & 1) {
                var_r4 = 1;
            } else {
                arg0->unk626 |= 1;
            }
            break;
        case 0x9B:
            if (arg0->unk626 & 2) {
                var_r4 = 1;
            } else {
                arg0->unk626 |= 2;
            }
            break;
        case 0xAB:
            if (arg0->unk626 & 4) {
                var_r4 = 1;
            } else {
                arg0->unk626 |= 4;
            }
            break;
        case 0xBE:
            if (arg0->unk626 & 8) {
                var_r4 = 1;
            } else {
                arg0->unk626 |= 8;
            }
            break;
        case 0xCA:
            if (arg0->unk626 & 0x10) {
                var_r4 = 1;
            } else {
                arg0->unk626 |= 0x10;
            }
            break;
        case 0xDE:
            if (arg0->unk626 & 0x20) {
                var_r4 = 1;
            } else {
                arg0->unk626 |= 0x20;
            }
            break;
        default:
            var_r4 = 1;
            break;
        }
        if (var_r4 == 1) {
            arg1 = 0;
        }
        break;
    case 30:
        var_r4 = 0;
        if (GetShelf__9FarmHouse((u8 *) arg2 + (0xFA << 1)) == 0) {
            var_r4 = 1;
        }
        if ((func_0809E02C(arg0) == 8) && (GetFirstFreeToolSlot__C8Rucksack((u8 *) arg2 + 0x1C38) == -1)) {
            var_r4 = 1;
        }
        if (var_r4 != 0) {
            break;
        }
        func_0800E924((u16 *) sp, (u8 *) arg2 + 0x1BD8);
        item = (s32) ((u32) (*(u16 *) sp << 0x16) >> 0x16);
        switch (item - 0x134) {
        case 0:
            if (!(arg0->unk624 & 2)) {
                arg0->unk624 |= 2;
            } else {
                var_r4 = 1;
            }
            break;
        case 0x28:
            if (arg0->unk624 & 4) {
                var_r4 = 1;
            } else {
                arg0->unk624 |= 4;
            }
            break;
        case 0x3C:
            if (arg0->unk624 & 8) {
                var_r4 = 1;
            } else {
                arg0->unk624 |= 8;
            }
            break;
        case 0x50:
            if (arg0->unk624 & 0x10) {
                var_r4 = 1;
            } else {
                arg0->unk624 |= 0x10;
            }
            break;
        case 0x78:
            if (arg0->unk624 & 0x20) {
                var_r4 = 1;
            } else {
                arg0->unk624 |= 0x20;
            }
            break;
        case 0x8C:
            if (arg0->unk624 & 0x40) {
                var_r4 = 1;
            } else {
                arg0->unk624 |= 0x40;
            }
            break;
        case 0xA0:
            if (arg0->unk624 & 0x80) {
                var_r4 = 1;
            } else {
                arg0->unk624 |= 0x80;
            }
            break;
        case 0xB4:
            if (arg0->unk625 & 1) {
                var_r4 = 1;
            } else {
                arg0->unk625 |= 1;
            }
            break;
        case 0xFF:
            if (!(arg0->unk625 & 2)) {
                arg0->unk625 |= 2;
            } else {
                var_r4 = 1;
            }
            break;
        default:
            var_r4 = 1;
            break;
        }
        if (var_r4 == 1) {
            arg1 = 0;
        }
        break;
    case 31:
        if (!(arg0->unk625 & 8)) {
            arg0->unk625 |= 8;
        } else {
            arg1 = 0;
        }
        break;
    }
    return arg1;
}
