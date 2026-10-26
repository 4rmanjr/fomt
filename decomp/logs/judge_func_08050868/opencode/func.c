#include "common.h"
s32 func_08050868(u32 arg0, s32 arg1, s32 arg2) {
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r0_4;
    u32 temp_r0_5;
    u32 temp_r0_6;

    switch (arg0) {                                 /* switch 1; irregular */
    case 0:                                         /* switch 1 */
    case 5:                                         /* switch 1 */
        if (arg2 & 0xC0) {
block_4:
            if (arg1 == 1) {
            case 4:                                 /* switch 6 */
            case 2:                                 /* switch 5 */
            case 0:                                 /* switch 4 */
            case 4:                                 /* switch 9 */
            case 2:                                 /* switch 8 */
            case 0:                                 /* switch 7 */
block_80:
                return 2;
            }
            goto block_82;
        }
block_22:
        if (!(arg2 & 0x30)) {
        default:                                    /* switch 6 */
        case 1:                                     /* switch 5 */
        case 2:                                     /* switch 4 */
        default:                                    /* switch 9 */
        default:                                    /* switch 8 */
        default:                                    /* switch 7 */
block_82:
        default:                                    /* switch 1 */
            return 1;
        }
        return arg1;
    case 1:                                         /* switch 1 */
        if (arg2 & 0x80) {
            if (arg1 == 2) {
                goto block_81;
            }
            if (arg1 > 2) {
                goto block_82;
            }
            goto block_4;
        }
        if (arg2 & 0x40) {
            if (arg1 == 2) {
                goto block_82;
            }
            if (arg1 <= 2) {
block_16:
                if (arg1 == 1) {
                case 0:                             /* switch 5 */
                case 1:                             /* switch 4 */
                case 5:                             /* switch 9 */
                case 0:                             /* switch 8 */
                case 1:                             /* switch 7 */
block_81:
                    return 3;
                }
                goto block_82;
            }
block_19:
            if (arg1 != 3) {
                goto block_82;
            }
            goto block_80;
        }
        goto block_22;
    case 6:                                         /* switch 1 */
        if (arg2 & 0x80) {
            goto block_26;
        }
        if (!(arg2 & 0x40)) {
            if (!(arg2 & 0x30)) {
                goto block_82;
            }
            if (arg1 == 2) {
                goto block_81;
            }
            if (arg1 > 2) {
                goto block_82;
            }
            goto block_16;
        }
block_26:
        if (arg1 == 2) {
            goto block_82;
        }
        if (arg1 > 2) {
            goto block_19;
        }
        goto block_4;
    case 2:                                         /* switch 1 */
    case 7:                                         /* switch 1 */
        if (arg2 & 0x80) {
            goto block_38;
        }
        if (!(arg2 & 0x40)) {
            if (!(arg2 & 0x30)) {
                goto block_82;
            }
            switch (arg1) {                         /* switch 3; irregular */
            case 2:                                 /* switch 3 */
                goto block_77;
            case 3:                                 /* switch 3 */
                goto block_82;
            case 4:                                 /* switch 3 */
                goto block_80;
            }
        } else {
block_38:
            switch (arg1) {                         /* switch 2; irregular */
            case 2:                                 /* switch 2 */
                goto block_82;
            case 3:                                 /* switch 2 */
            case 0:                                 /* switch 6 */
            case 4:                                 /* switch 5 */
            case 4:                                 /* switch 4 */
            case 0:                                 /* switch 9 */
            case 4:                                 /* switch 8 */
            case 5:                                 /* switch 7 */
block_77:
                return 4;
            case 4:                                 /* switch 2 */
                goto block_81;
            }
        }
        break;
    case 3:                                         /* switch 1 */
        if (arg2 & 0x80) {
            temp_r0 = arg1 - 1;
            switch (temp_r0);                       /* switch 4; irregular */
        } else if (arg2 & 0x40) {
            temp_r0_2 = arg1 - 1;
            switch (temp_r0_2);                     /* switch 5; irregular */
        } else if (arg2 & 0x30) {
            temp_r0_3 = arg1 - 1;
            switch (temp_r0_3) {                    /* switch 6 */
            case 1:                                 /* switch 6 */
            case 2:                                 /* switch 6 */
            case 3:                                 /* switch 5 */
            case 3:                                 /* switch 4 */
            case 1:                                 /* switch 9 */
            case 5:                                 /* switch 8 */
            case 3:                                 /* switch 7 */
                return 5;
            }
        } else {
            goto block_82;
        }
        break;
    case 4:                                         /* switch 1 */
        if (arg2 & 0x80) {
            temp_r0_4 = arg1 - 1;
            switch (temp_r0_4);                     /* switch 7; jump table: 0 */
        } else if (arg2 & 0x40) {
            temp_r0_5 = arg1 - 1;
            switch (temp_r0_5);                     /* switch 8; jump table: 0 */
        } else if (arg2 & 0x30) {
            temp_r0_6 = arg1 - 1;
            switch (temp_r0_6) {                    /* switch 9 */
            case 2:                                 /* switch 9 */
            case 3:                                 /* switch 8 */
            case 4:                                 /* switch 7 */
                return 6;
            }
        } else {
            goto block_82;
        }
        break;
    }
}

