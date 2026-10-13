/* Entry 0x0897CD04 | file offset 0x00179CDC | FUN_0897cd04 | bytes 192 */

undefined4 FUN_0897cd04(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  *param_4 = 0;
  iVar1 = FUN_08986e4c(0x100);
  iVar2 = 0;
  if (iVar1 != 0) {
    FUN_08985b58(iVar1);
    iVar2 = iVar1;
  }
  *param_4 = iVar2;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_08985e9c(iVar2,param_3,0,1,2);
    iVar2 = FUN_089871e4(iVar2,param_2);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

