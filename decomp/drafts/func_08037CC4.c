void __7AEntityP10GameObjectRC8Location(void *, void *, void *); /* extern */
extern void *vtable_unk_080E7444;

typedef struct GenObj {
    u8 _pad14[0x14];
    void *unk14;
} GenObj;
GenObj *func_08037CC4(GenObj *arg0, void *arg1, void *arg2) {
    __7AEntityP10GameObjectRC8Location(arg0, arg1, arg2);
    arg0->unk14 = &vtable_unk_080E7444;
    return arg0;
}
