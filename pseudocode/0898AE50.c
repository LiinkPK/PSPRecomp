/* Entry 0x0898AE50 | file offset 0x00187E28 | FUN_0898ae50 | bytes 288 */

void FUN_0898ae50(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x40;
  if (*(char *)(param_3 + 200) == '\0') {
    FUN_0898b664(param_1,param_2,param_3);
  }
  uVar2 = param_2[4];
  uVar1 = param_2[5];
  if (*(char *)(param_3 + 200) == '\0') {
    if (*(char *)(param_3 + 0xb7) == '\0') {
      FUN_0898ab80(param_1,param_3,*param_2,param_2[1],uVar2,uVar1,iVar3,iVar3);
      FUN_0898ade8(param_1,param_2[5],1);
    }
    else {
      FUN_0898c2f0(0,0x3f800000,param_1,param_3,*param_2,param_2[1],uVar2,uVar1,iVar3,iVar3);
      FUN_0898ae1c(param_1,param_2[5],1);
    }
  }
  else {
    FUN_0898bf80(param_1,param_3,uVar2,uVar1,iVar3,iVar3);
  }
  return;
}

