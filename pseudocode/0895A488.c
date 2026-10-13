/* Entry 0x0895A488 | file offset 0x00157460 | FUN_0895a488 | bytes 144 */

undefined4 FUN_0895a488(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_08960158(0x14);
  iVar2 = 0;
  if (iVar1 != 0) {
    FUN_0895fc7c(iVar1);
    iVar2 = iVar1;
  }
  *param_4 = iVar2;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_0895fd0c(iVar2,param_3);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

