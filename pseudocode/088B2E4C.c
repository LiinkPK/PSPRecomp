/* Entry 0x088B2E4C | file offset 0x000AFE24 | FUN_088b2e4c | bytes 132 */

void FUN_088b2e4c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  do {
    iVar3 = *param_2;
    iVar2 = *param_1;
    if (iVar1 < 0x16) {
      iVar4 = iVar2 + iVar3;
      if (999999999 < iVar2 + iVar3) {
        iVar4 = 999999999;
      }
    }
    else {
      iVar4 = iVar3;
      if (iVar1 < 0x17) {
        if (iVar2 < iVar3) {
          iVar4 = iVar2;
        }
      }
      else if (iVar3 < iVar2) {
        iVar4 = iVar2;
      }
    }
    *param_1 = iVar4;
    iVar1 = iVar1 + 1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  } while (iVar1 < 0x1a);
  return;
}

