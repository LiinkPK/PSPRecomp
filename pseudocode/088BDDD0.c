/* Entry 0x088BDDD0 | file offset 0x000BADA8 | FUN_088bddd0 | bytes 440 */

void FUN_088bddd0(int *param_1,int param_2,undefined4 param_3,int param_4,char param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = (param_2 - (int)param_1) + ((uint)(param_2 - (int)param_1 >> 2) >> 0x1e);
  iVar3 = iVar1 >> 2;
  if (0x10 < iVar3) {
    iVar6 = (int)param_5;
    do {
      if (param_4 == 0) {
        FUN_088bdf88(param_1,param_2,param_2,iVar6);
        return;
      }
      piVar2 = param_1 + (iVar3 - (iVar1 >> 0x1f) >> 1);
      iVar3 = *piVar2;
      iVar1 = *param_1;
      piVar4 = (int *)(param_2 + -4);
      param_4 = param_4 + -1;
      iVar5 = *piVar4;
      if (iVar1 < iVar3) {
        if (iVar3 < iVar5) {
          iVar1 = *piVar2;
        }
        else if (iVar1 < iVar5) {
          iVar1 = *piVar4;
        }
        else {
          iVar1 = *param_1;
        }
      }
      else if (iVar1 < iVar5) {
        iVar1 = *param_1;
      }
      else if (iVar3 < iVar5) {
        iVar1 = *piVar4;
      }
      else {
        iVar1 = *piVar2;
      }
      iVar5 = FUN_088be33c(param_1,param_2,iVar1,iVar6);
      FUN_088bddd0(iVar5,param_2,0,param_4,iVar6);
      iVar1 = (iVar5 - (int)param_1) + ((uint)(iVar5 - (int)param_1 >> 2) >> 0x1e);
      iVar3 = iVar1 >> 2;
      param_2 = iVar5;
    } while (0x10 < iVar3);
  }
  return;
}

