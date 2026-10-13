/* Entry 0x088C93AC | file offset 0x000C6384 | FUN_088c93ac | bytes 224 */

int FUN_088c93ac(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar1 = FUN_088c913c(param_1);
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_088c91ec(param_1,iVar5);
      iVar3 = FUN_088c92cc(param_1,iVar5);
      if ((iVar2 == 0) || (iVar3 == 0)) {
        iVar4 = *(int *)(param_1 + 0xbdac) - iVar4;
        goto LAB_088c9458;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + (*(int *)(iVar3 + 0x18) - *(int *)(iVar2 + 0x18));
    } while (iVar5 < iVar1);
  }
  iVar4 = *(int *)(param_1 + 0xbdac) - iVar4;
LAB_088c9458:
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  return iVar4;
}

