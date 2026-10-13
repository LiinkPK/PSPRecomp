/* Entry 0x0891183C | file offset 0x0010E814 | FUN_0891183c | bytes 224 */

void FUN_0891183c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = param_1 + 0x148;
  while ((iVar1 = FUN_0892e8ac(iVar2), iVar1 == 0 ||
         (iVar1 = FUN_0892e8d0(iVar2,param_2), iVar1 == 0))) {
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x14;
    if (0 < iVar3) {
      iVar3 = 0;
      iVar2 = param_1 + 0x148;
      do {
        iVar1 = FUN_0892e8ac(iVar2);
        if (iVar1 == 0) {
          FUN_0892e77c(iVar2,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x15c),6,param_2
                      );
          return;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x14;
      } while (iVar3 < 1);
      return;
    }
  }
  FUN_0892e8f0(iVar2);
  return;
}

