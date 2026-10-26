s32 func_080AB7A4(s32 arg0, s32 arg1) {
    if (arg0 != 1) {
        if (arg0 <= 1) {
            if (arg0 != 0) {
                return arg0;
            }
            switch (arg1);                          /* switch 2; irregular */
        } else {
            switch (arg0) {                         /* switch 1; irregular */
            case 2:                                 /* switch 1 */
                switch (arg1);                      /* switch 4; irregular */
                break;
            case 3:                                 /* switch 1 */
                if (arg1 != 1) {
                    if (arg1 <= 1) {
                        if (arg1 != 0) {
                            return arg0;
                        }
                        goto block_32;
                    }
                    switch (arg1) {                 /* switch 5; irregular */
                    default:                        /* switch 5 */
                        return arg0;
                    }
                } else {
                    goto block_33;
                }
                break;
            default:                                /* switch 1 */
                return arg0;
            }
        }
    } else {
        switch (arg1) {                             /* switch 3; irregular */
        case 2:                                     /* switch 3 */
        case 3:                                     /* switch 4 */
        case 1:                                     /* switch 2 */
block_32:
            return 3;
        case 0:                                     /* switch 3 */
        case 2:                                     /* switch 4 */
        case 3:                                     /* switch 2 */
block_33:
            return 1;
        case 3:                                     /* switch 3 */
        case 1:                                     /* switch 4 */
        case 2:                                     /* switch 5 */
        case 0:                                     /* switch 2 */
            return 0;
        case 1:                                     /* switch 3 */
        case 0:                                     /* switch 4 */
        case 3:                                     /* switch 5 */
        case 2:                                     /* switch 2 */
            return 2;
        }
    }
}
