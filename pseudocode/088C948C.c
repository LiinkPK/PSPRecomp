/* Entry 0x088C948C | file offset 0x000C6464 | FUN_088c948c | bytes 216 */

undefined4 FUN_088c948c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_088c913c(param_1);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_088c91ec(param_1,iVar3);
      if ((iVar2 != 0) && (param_2 < *(int *)(iVar2 + 0x18))) {
        return 0;
      }
      iVar2 = FUN_088c92cc(param_1,iVar3);
      if ((iVar2 != 0) && (param_2 < *(int *)(iVar2 + 0x18))) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}

