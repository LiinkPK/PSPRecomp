/* Entry 0x088DC944 | file offset 0x000D991C | FUN_088dc944 | bytes 152 */

int FUN_088dc944(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (param_1[7] == 1) {
    iVar2 = FUN_088dc9dc(param_1,param_2,iVar3);
    iVar1 = param_1[8] * 0x20;
  }
  else {
    iVar2 = param_1[0xf];
    iVar1 = iVar2;
    if (iVar3 != 0) {
      FUN_08935524(iVar3,param_2,iVar2);
      iVar2 = param_1[0xf];
      iVar1 = iVar2;
    }
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar2;
  }
  return param_2 + iVar1;
}

