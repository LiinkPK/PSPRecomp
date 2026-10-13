/* Entry 0x088E3428 | file offset 0x000E0400 | FUN_088e3428 | bytes 84 */

undefined4 FUN_088e3428(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while ((*(int *)(param_1 + 0x5fc) == 0 || ((*(uint *)(*(int *)(param_1 + 0x5fc) + 0x10) & 2) != 0)
         )) {
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
    if (1 < iVar1) {
      return 1;
    }
  }
  return 0;
}

