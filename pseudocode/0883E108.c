/* Entry 0x0883E108 | file offset 0x0003B0E0 | FUN_0883e108 | bytes 232 */

int FUN_0883e108(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_0883dfe0();
  iVar3 = *piVar1;
  if (iVar3 != 0) {
    if ((*(short *)(iVar3 + 0x24) == param_2) && (*(int *)(iVar3 + 0x80) == param_3)) {
      param_1[9] = piVar1;
      return *piVar1;
    }
    FUN_08808214();
  }
  iVar2 = FUN_08807a00(0x220);
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_0880b8e4(iVar2,*param_1,param_4,param_2,piVar1,param_3);
    iVar3 = iVar2;
  }
  *piVar1 = iVar3;
  param_1[9] = piVar1;
  return *piVar1;
}

