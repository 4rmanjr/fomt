void *__builtin_delete(void *);                        /* extern */
extern s32 vtable_unk_080E78F0;

typedef struct Obj_E10F8 {
    void *unk0;
} Obj_E10F8;

void func_080E10F8(Obj_E10F8 *arg0, s32 arg1) {
    arg0->unk0 = &vtable_unk_080E78F0;
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
