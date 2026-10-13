/* Entry 0x088F10AC | file offset 0x000EE084 | FUN_088f10ac | bytes 428 */

void FUN_088f10ac(undefined4 param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short local_30;
  
  sVar3 = -1;
  iVar1 = FUN_088f0394(param_1,0);
  if (iVar1 != 0) {
    sVar3 = 0;
  }
  iVar1 = FUN_088b696c(0);
  param_2[iVar1] = sVar3;
  sVar3 = -1;
  iVar1 = FUN_088f0394(param_1,1);
  if (iVar1 != 0) {
    sVar3 = 1;
  }
  iVar1 = FUN_088b696c(1);
  param_2[iVar1] = sVar3;
  sVar3 = -1;
  iVar1 = FUN_088f0394(param_1,2);
  if (iVar1 != 0) {
    sVar3 = 2;
  }
  iVar1 = FUN_088b696c(2);
  param_2[iVar1] = sVar3;
  local_30 = -1;
  iVar1 = FUN_088f0394(param_1,3);
  if (iVar1 != 0) {
    local_30 = 3;
  }
  iVar1 = FUN_088b696c(3);
  param_2[iVar1] = local_30;
  iVar4 = 0;
  iVar1 = 0;
  psVar6 = param_2 + 1;
  psVar5 = param_2;
  psVar7 = param_2;
  while (iVar2 = FUN_088f0438(param_1), iVar4 < iVar2) {
    if (*psVar5 == -1) {
      FUN_08935524(psVar7,psVar6,(3 - (iVar4 + iVar1)) * 2);
      iVar1 = iVar1 + 1;
      param_2[4 - iVar1] = -1;
    }
    else {
      iVar4 = iVar4 + 1;
      psVar5 = psVar5 + 1;
      psVar7 = psVar7 + 1;
      psVar6 = psVar6 + 1;
    }
  }
  return;
}

