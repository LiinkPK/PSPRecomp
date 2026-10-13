/* Entry 0x0890543C | file offset 0x00102414 | FUN_0890543c | bytes 280 */

int FUN_0890543c(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = ((param_1[2] + param_1[1]) - param_1[3]) % param_1[1];
  if (param_3 < iVar5) {
    iVar5 = param_3;
  }
  iVar4 = 0;
  if (0 < iVar5) {
    iVar1 = param_1[1];
    do {
      iVar2 = param_1[3];
      iVar3 = iVar5 - iVar4;
      if (iVar1 - iVar2 <= iVar3) {
        iVar3 = iVar1 - iVar2;
      }
      if (param_2 != 0) {
        FUN_08935524(param_2,*param_1 + iVar2,iVar3);
        iVar1 = param_1[1];
        param_2 = param_2 + iVar3;
        iVar2 = param_1[3];
      }
      iVar4 = iVar3 + iVar4;
      param_1[3] = (iVar2 + iVar3) % iVar1;
    } while (iVar4 < iVar5);
  }
  return iVar5;
}

