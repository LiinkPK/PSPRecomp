/* Entry 0x0895956C | file offset 0x00156544 | FUN_0895956c | bytes 144 */

undefined4 FUN_0895956c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0895b77c(0x10);
  iVar2 = 0;
  if (iVar1 != 0) {
    FUN_0895b49c(iVar1);
    iVar2 = iVar1;
  }
  *param_4 = iVar2;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_0895b4e4(iVar2,param_3);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

