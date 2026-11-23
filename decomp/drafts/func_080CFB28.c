s32 __9FieldPlot(void *);                             /* extern */
s32 func_080A4A94(void);                              /* extern */
extern u8 vtable_unk_080E85E8;

typedef struct GenObj {
    u8 _pad0[0x90];
    void *unk90;
} GenObj;

void *func_080CFB28(GenObj *arg0) {
    u8 *p;
    s32 i;

    func_080A4A94();
    arg0->unk90 = (void *) &vtable_unk_080E85E8;
    p = (u8 *) arg0 + 0x94;
    i = 0x53;
    do {
        __9FieldPlot(p);
        p += 4;
        i -= 1;
    } while (i != -1);
    return arg0;
}
