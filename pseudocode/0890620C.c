/* Entry 0x0890620C | file offset 0x001031E4 | FUN_0890620c | bytes 208 */

bool FUN_0890620c(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x2c4)) {
      iVar3 = 0;
      do {
        if (*(int *)(param_1 + iVar3 * 3 + iVar2 * -4 + 0x20) != 0) {
          return false;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar2 * 0x10;
      } while (iVar2 < *(int *)(param_1 + 0x2c4));
    }
    bVar1 = true;
  }
  else {
    iVar2 = FUN_08905cac(param_1,param_2);
    if (iVar2 < 0) {
      bVar1 = false;
    }
    else {
      bVar1 = *(int *)(param_1 + iVar2 * 0x2c + 0x20) == 0;
    }
  }
  return bVar1;
}

