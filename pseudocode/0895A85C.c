/* Entry 0x0895A85C | file offset 0x00157834 | FUN_0895a85c | bytes 160 */

undefined4 FUN_0895a85c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_08960dfc(0x1c);
  iVar2 = 0;
  if (iVar1 != 0) {
    FUN_08960218(iVar1);
    iVar2 = iVar1;
  }
  *param_4 = iVar2;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_0896030c(iVar2,param_2,param_3);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

