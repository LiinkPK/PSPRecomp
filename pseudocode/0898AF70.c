/* Entry 0x0898AF70 | file offset 0x00187F48 | FUN_0898af70 | bytes 396 */

void FUN_0898af70(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1 + 0x60;
  iVar3 = param_1 + 0x40;
  if (*(char *)(param_3 + 200) == '\0') {
    FUN_0898b2c4(param_1,param_2,param_3);
  }
  uVar2 = param_2[4];
  uVar1 = param_2[5];
  if (*(char *)(param_3 + 200) == '\0') {
    if (*(char *)(param_3 + 0xb7) == '\0') {
      FUN_0898ab80(param_1,param_3,*param_2,param_2[2],uVar2,uVar1,iVar3,iVar4);
      FUN_0898ab80(param_1,param_3,param_2[3],param_2[1],param_2[4],param_2[5],iVar4,iVar3);
      FUN_0898ade8(param_1,param_2[5],2);
    }
    else {
      FUN_0898c2f0(0,0x3f000000,param_1,param_3,*param_2,param_2[2],uVar2,uVar1,iVar3,iVar4);
      FUN_0898c2f0(0x3f000000,0x3f800000,param_1,param_3,param_2[2],param_2[1],param_2[4],param_2[5]
                   ,iVar4,iVar3);
      FUN_0898ae1c(param_1,param_2[5],2);
    }
  }
  else {
    FUN_0898bf80(param_1,param_3,uVar2,uVar1,iVar4,iVar3);
  }
  return;
}

