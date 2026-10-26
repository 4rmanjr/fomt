#include "common.h"
u32 func_0809D7D8(u32 arg1) {
    u32 var_r0;

    var_r0 = arg1;
    if (var_r0 != 0x78) {
        if (var_r0 <= 0x78U) {
            switch (var_r0) {                       /* switch 1; irregular */
            case 0x46:                              /* switch 1 */
            case 0x5A:                              /* switch 1 */
            case 0x1E:                              /* switch 1 */
                return 0x1EU;
            case 0x50:                              /* switch 1 */
            case 0x28:                              /* switch 1 */
            case 0x3C:                              /* switch 1 */
                return 0x1FU;
            }
        } else {
            switch (var_r0) {                       /* switch 2; irregular */
            case 0xFF:                              /* switch 2 */
                return 0x37U;
            case 0xC8:                              /* switch 2 */
            case 0x96:                              /* switch 2 */
            case 0x64:                              /* switch 1 */
            case 0x32:                              /* switch 1 */
                return 0x20U;
            case 0xAA:                              /* switch 2 */
            case 0xBE:                              /* switch 2 */
            case 0x82:                              /* switch 2 */
            case 0x6E:                              /* switch 1 */
                return 0x2AU;
            }
        }
    } else {
    case 0xB4:                                      /* switch 2 */
    case 0x8C:                                      /* switch 2 */
    case 0xA0:                                      /* switch 2 */
        return 0x2BU;
    }
    /* bug: did not emit code for node #39; contents below: */
    /* bug: did not emit code for node #40; contents below: */
    /* bug: did not emit code for node #41; contents below: */
    /* bug: did not emit code for node #42; contents below: */
    /* bug: did not emit code for node #43; contents below: */
    /* bug: did not emit code for node #44; contents below: */
    /* bug: did not emit code for node #45; contents below: */
    /* bug: did not emit code for node #46; contents below: */
    var_r0 = (var_r0 % 10U) + 0x2B;
    /* bug: did not emit code for node #47; contents below: */
    return var_r0;
}

