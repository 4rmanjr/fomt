#include "prelude.h"

// DECOMP-MATCHED strlen (dari code_libc_string.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_libc_string.080D3B78")))
long unsigned int strlen(const char *s) {
    const char *start = s;
    u32 v;
    const u32 *w;

    if (!((u32)s & 3)) {
        w = (const u32 *)s;
        v = *w;
        v = (v + 0xFEFEFEFF) & ~v;
        while (!(v & 0x80808080)) {
            w++;
            v = *w;
            v = (v + 0xFEFEFEFF) & ~v;
        }
        s = (const char *)w;
    }
    while (*s != 0) {
        s++;
    }
    return s - start;
}
}

// DECOMP-MATCHED memset (dari code_libc_string.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_libc_string.080D3A84")))
void *memset(void *dst, u32 c, u32 n) {
    u8 *d = (u8 *) dst;
    u32 *dw;
    u32 fill;

    if (n < 4) {
        goto bytes;
    }
    if (((u32) d & 3) != 0) {
        goto bytes;
    }
    dw = (u32 *) d;
    c &= 0xFF;
    fill = c | (c << 8);
    fill |= fill << 16;
    while (n >= 16) {
        *dw++ = fill;
        *dw++ = fill;
        *dw++ = fill;
        *dw++ = fill;
        n -= 16;
    }
    while (n >= 4) {
        *dw++ = fill;
        n -= 4;
    }
    d = (u8 *) dw;
bytes:
    while (n-- > 0) {
        *d++ = (u8) c;
    }
    return dst;
}
}

