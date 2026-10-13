/* Entry 0x0887A898 | file offset 0x00077870 | FUN_0887a898 | bytes 88 */

int FUN_0887a898(short *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)*param_1;
  iVar1 = FUN_0887a8f0();
  if (iVar1 == 0) {
    iVar1 = FUN_0887a918(param_1);
    if (iVar1 != 0) {
      iVar2 = *(int *)(param_1 + 2);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 2);
  }
  return iVar2;
}

