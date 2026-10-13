/* Entry 0x089802C4 | file offset 0x0017D29C | FUN_089802c4 | bytes 144 */

undefined4 FUN_089802c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0898d440(0x60);
  iVar2 = 0;
  if (iVar1 != 0) {
    FUN_089c4298(iVar1,param_3);
    iVar2 = iVar1;
  }
  *param_4 = iVar2;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_089c3ec0(iVar2,param_3);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

