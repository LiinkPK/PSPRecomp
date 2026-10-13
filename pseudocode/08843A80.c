/* Entry 0x08843A80 | file offset 0x00040A58 | FUN_08843a80 | bytes 172 */

bool FUN_08843a80(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_2;
  if (iVar3 != 0) {
    uVar1 = FUN_0885c648(param_4,iVar3);
    iVar2 = FUN_0885c6cc(param_3,uVar1,0,0,1,0);
    FUN_08935524(iVar2,iVar3,uVar1);
    FUN_0885c538(param_4,iVar3,0);
    *param_2 = iVar2;
  }
  return iVar3 != 0;
}

