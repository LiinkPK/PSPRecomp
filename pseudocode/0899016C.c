/* Entry 0x0899016C | file offset 0x0018D144 | FUN_0899016c | bytes 304 */

undefined4 FUN_0899016c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = 0;
  while ((iVar1 = *(int *)(DAT_089da420 + iVar3 + 8), iVar1 == 0 ||
         (iVar1 = FUN_08992704(iVar1,param_3), iVar1 == 0))) {
    uVar2 = uVar2 + 1;
    iVar3 = iVar3 + 4;
    if (3 < uVar2) {
      uVar2 = 0;
      iVar3 = 0;
      while ((iVar1 = *(int *)(DAT_089da420 + iVar3 + 8), iVar1 == 0 ||
             (iVar1 = (**(code **)(*(int *)(iVar1 + 0x50) + 0x14))
                                (iVar1 + *(short *)(*(int *)(iVar1 + 0x50) + 0x10),param_1,param_2,
                                 param_3,param_4), iVar1 == 0))) {
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 4;
        if (3 < uVar2) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}

