/* Entry 0x08822DA8 | file offset 0x0001FD80 | FUN_08822da8 | bytes 136 */

undefined4 FUN_08822da8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if ((*(uint *)(param_1 + 0x20) & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar3 = (*(uint *)(param_1 + 0x20) & 0x1fe0) >> 5 ^ 0x80;
    iVar4 = uVar3 - 0x80;
    if (uVar3 == 0x80) {
      uVar1 = 0;
    }
    else {
      iVar5 = 0;
      if (0 < iVar4) {
        iVar2 = *(int *)(param_1 + 0x28);
        do {
          if ((*(byte *)(iVar2 + 299) & 1) == 0) {
            return 0;
          }
          iVar5 = iVar5 + 1;
          iVar2 = iVar2 + 0x130;
        } while (iVar5 < iVar4);
      }
      uVar1 = 1;
    }
  }
  return uVar1;
}

