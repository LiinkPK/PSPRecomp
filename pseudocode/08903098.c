/* Entry 0x08903098 | file offset 0x00100070 | FUN_08903098 | bytes 180 */

undefined4 FUN_08903098(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = param_1 + 8;
  if (0 < *(int *)(param_1 + 0x188)) {
    do {
      iVar1 = FUN_08935b50(iVar3,param_2,8);
      if (iVar1 == 0) {
        uVar2 = FUN_08902f5c(param_1,iVar4,param_3,param_4);
        return uVar2;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x18;
    } while (iVar4 < *(int *)(param_1 + 0x188));
  }
  return 0;
}

