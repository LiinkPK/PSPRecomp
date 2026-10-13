/* Entry 0x089BC8A8 | file offset 0x001B9880 | FUN_089bc8a8 | bytes 220 */

void FUN_089bc8a8(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 != 0) && ((param_2 & 2) != 0)) {
    iVar1 = FUN_089bcda8(param_1,1,0);
    iVar2 = FUN_089bcdc0(param_1,1,0);
    if (iVar1 != 0) {
      FUN_089bce6c(param_1,iVar1);
      FUN_089bb22c(iVar1,1);
    }
    if (iVar2 == 0) {
      if (iVar1 == 0) {
        return;
      }
      uVar3 = *(undefined4 *)(param_1 + 8);
    }
    else {
      FUN_089bce7c(param_1,iVar2);
      thunk_FUN_089bb22c(iVar2,1);
      uVar3 = *(undefined4 *)(param_1 + 8);
    }
    FUN_089bcedc(param_1,uVar3);
    return;
  }
  return;
}

