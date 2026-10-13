/* Entry 0x0888F984 | file offset 0x0008C95C | FUN_0888f984 | bytes 104 */

void FUN_0888f984(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  if (0 < *(int *)(param_1 + 0x24)) {
    do {
      FUN_0888ea84(*(undefined4 *)(iVar1 + 0x10));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < *(int *)(param_1 + 0x24));
  }
  FUN_0888fc34(param_1);
  return;
}

