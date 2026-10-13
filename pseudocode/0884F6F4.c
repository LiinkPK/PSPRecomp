/* Entry 0x0884F6F4 | file offset 0x0004C6CC | FUN_0884f6f4 | bytes 104 */

undefined4 FUN_0884f6f4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  while (((*(short *)(iVar1 + 0x12) == 0 || (*(char *)(iVar1 + 0x1b) == '\0')) ||
         (*(short *)(param_1 + 0x10) != param_2))) {
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x20;
    param_1 = param_1 + 0x20;
    if (0xf < iVar2) {
      return 0;
    }
  }
  return *(undefined4 *)(iVar1 + 8);
}

