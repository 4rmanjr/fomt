#include "common.h"
s32 m4aMPlayStart(s32, s32);                          /* extern */
extern ? gSongTable;

void func_08008B6C(s32 *arg0, s32 arg1) {
    m4aMPlayStart(*arg0, *(((u32) (arg1 << 0x10) >> 0xD) + &gSongTable));
}

