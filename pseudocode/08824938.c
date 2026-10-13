/* Entry 0x08824938 | file offset 0x00021910 | FUN_08824938 | bytes 180 */

void FUN_08824938(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x568) + 0x14) == 1) {
    if ((*(uint *)(*(int *)(param_1 + 0x24) + 0x184) & 2) != 0) {
      FUN_08823384();
    }
  }
  else {
    iVar2 = 0;
    iVar3 = ((*(uint *)(param_1 + 0x20) & 0x1fe0) >> 5 ^ 0x80) - 0x80;
    bVar4 = true;
    if (0 < iVar3) {
      iVar1 = *(int *)(param_1 + 0x28);
      do {
        if ((*(byte *)(iVar1 + 299) & 2) == 0) {
          bVar4 = false;
          break;
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x130;
      } while (iVar2 < iVar3);
    }
    if (bVar4) {
      FUN_08823384();
    }
  }
  return;
}

