/* Entry 0x0883E1F0 | file offset 0x0003B1C8 | FUN_0883e1f0 | bytes 100 */

void FUN_0883e1f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  do {
    if (*(int *)(iVar1 + 4) != 0) {
      FUN_08808214();
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 8);
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}

