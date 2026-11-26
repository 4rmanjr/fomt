typedef struct Src {
    u8 unk0;
    u8 unk1;
    u8 _pad2[0xE];
    s32 unk10;
    u8 *unk14;
} Src;

void func_08017180(u8 *arg0, u32 arg1, Src *arg2, s32 arg3, s32 arg4) {
    u8 *src;
    s32 base;
    u8 *d;
    u8 w;
    u8 h;
    u32 i;
    u32 j;

    if (arg0 != 0) {
        if (arg1 != 0) {
            src = arg2->unk14;
            if (src != 0) {
                base = arg2->unk10;
                if (base != 0) {
                    w = arg2->unk0;
                    if ((u32)(arg3 + w) <= arg1) {
                        d = arg0 + (arg3 * 4) + (arg1 * arg4 * 4);
                        h = arg2->unk1;
                        i = 0;
                        if (h > 0) {
                            do {
                                j = 0;
                                if (w > 0) {
                                    do {
                                        *(s32 *)d = *(s32 *)(base + (*src * 4));
                                        d += 4;
                                        src++;
                                        j++;
                                    } while (j < w);
                                }
                                d += arg1 * 4;
                                i++;
                            } while (i < h);
                        }
                    }
                }
            }
        }
    }
}
