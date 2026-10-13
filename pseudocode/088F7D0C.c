/* Entry 0x088F7D0C | file offset 0x000F4CE4 | FUN_088f7d0c | bytes 128 */

undefined4 FUN_088f7d0c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x31968)) {
    iVar1 = param_1 + 0x14c80;
    do {
      if (((*(byte *)(iVar1 + 0x27) & 1) == 1) && (iVar3 = iVar3 + 1, 8 < iVar3)) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x1270;
    } while (iVar2 < *(int *)(param_1 + 0x31968));
  }
  return 1;
}

