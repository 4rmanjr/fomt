void *__builtin_delete(void *);                        /* extern */
extern s32 vtable_unk_080E5B54;
extern void *gUnk_03000410;

typedef struct Obj_D7B04 {
    void *unk0;
    void *unk4;
} Obj_D7B04;

void func_080D7B04(Obj_D7B04 *arg0, s32 arg1) {
    arg0->unk4 = &vtable_unk_080E5B54;
    gUnk_03000410 = arg0->unk0;
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
