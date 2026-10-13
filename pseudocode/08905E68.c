/* Entry 0x08905E68 | file offset 0x00102E40 | FUN_08905e68 | bytes 252 */

undefined4 FUN_08905e68(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_4 == 0) {
    iVar2 = 0;
    uVar3 = 1;
    if (0 < *(int *)(param_1 + 0x2c4)) {
      do {
        iVar1 = FUN_08905910(param_1 + iVar2 * 0x2c + 4,param_2,param_3);
        if (iVar1 == 0) {
          uVar3 = 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x2c4));
    }
  }
  else {
    iVar2 = FUN_08905cac(param_1,param_4);
    if (iVar2 < 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_08905910(param_1 + iVar2 * 0x2c + 4,param_2,param_3);
    }
  }
  return uVar3;
}

