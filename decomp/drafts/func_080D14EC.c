__asm__ (
    ".syntax unified\n.syntax unified\nfunc_080D11A4:\npush {r5, r6, lr}\nmovs r5, #0x20\nsubs r5, r5, r4\nadds r6, r2, #0\nlsrs r6, r5\nsubs r3, r3, r4\nbmi sub_080D11B8\nlsls r2, r4\nadds r4, r6, #0\npop {r5, r6, pc}\nsub_080D11B8:\nldm r0!, {r2}\nrsbs r5, r3, #0\nadds r4, r2, #0\nlsls r2, r5\nadds r3, #0x20\nlsrs r4, r3\norrs r4, r6\npop {r5, r6, pc}\n.space 804\n.syntax divided\n.syntax divided");
__attribute__((naked)) void func_080D14EC(void) {
  __asm__ volatile (
    ".syntax unified\npush {r1, r7, lr}\nmovs r6, #1\nloop14ec:\nmovs r4, #4\nbl func_080D11A4\nadds r4, #1\nstrb r4, [r7, #6]\nstrh r6, [r7, #4]\nadds r7, #4\nmovs r1, #1\nlsls r1, r4\nadds r6, r6, r1\nsubs r5, #1\nbne loop14ec\npop {r1, r7, pc}\n.syntax divided"
    : : : "r0","r1","r2","r3","r4","r5","r6","r7","lr","memory");
}
