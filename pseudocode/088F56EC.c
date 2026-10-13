/* Entry 0x088F56EC | file offset 0x000F26C4 | FUN_088f56ec | bytes 164 */

int FUN_088f56ec(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = param_1;
  if (0 < *(int *)(param_1 + 0x1a068)) {
    do {
      iVar1 = FUN_088f5ea0(param_2,iVar2 + 0xc);
      if (iVar1 == 1) {
        return iVar2;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x10a8;
    } while (iVar3 < *(int *)(param_1 + 0x1a068));
  }
  return 0;
}

