/* Entry 0x08944894 | file offset 0x0014186C | FUN_08944894 | bytes 156 */

int FUN_08944894(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x68);
  while (iVar1 = iVar2, iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x154);
    if ((*(int *)(iVar1 + 0x17c) == param_2) || (*(int *)(iVar1 + 0x180) == param_2)) {
      FUN_089446f0(param_1,iVar1,param_3);
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}

