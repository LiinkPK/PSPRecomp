/* Entry 0x088BE474 | file offset 0x000BB44C | FUN_088be474 | bytes 280 */

void FUN_088be474(int *param_1,int *param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1 != param_2) {
    piVar1 = param_1 + 1;
    while (piVar1 != param_2) {
      iVar3 = *piVar1;
      piVar4 = piVar1 + 1;
      if (iVar3 < *param_1) {
        FUN_088bda80();
        iVar2 = (int)piVar1 - (int)param_1;
        if (0 < iVar2) {
          FUN_08935564((int)piVar4 - iVar2,param_1,iVar2);
        }
        *param_1 = iVar3;
        piVar1 = piVar4;
      }
      else {
        FUN_088be58c(piVar1,iVar3,(int)param_3);
        piVar1 = piVar4;
      }
    }
  }
  return;
}

