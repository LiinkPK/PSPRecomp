/* Entry 0x08965F64 | file offset 0x00162F3C | FUN_08965f64 | bytes 172 */

undefined4 FUN_08965f64(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0896b650(0x38);
  iVar2 = 0;
  if (iVar1 != 0) {
    FUN_0896aab0(iVar1);
    iVar2 = iVar1;
  }
  *param_4 = iVar2;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_0896aba4(iVar2,param_2,param_3,*(short *)(param_3 + 0x20) + 1,
                         *(undefined2 *)(param_3 + 0x22));
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

