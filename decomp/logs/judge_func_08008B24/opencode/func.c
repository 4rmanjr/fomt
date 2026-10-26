#include "common.h"
extern ? gMusicPlayerTable;

s32 func_08008B24(u32 arg0) {
    u32 temp_r1;
    u32 var_r2;

    var_r2 = arg0;
    temp_r1 = 0x50000U >> 0x10;
    if (var_r2 >= temp_r1) {
        var_r2 = var_r2 % temp_r1;
    }
    return *((var_r2 * 0xC) + &gMusicPlayerTable);
}

