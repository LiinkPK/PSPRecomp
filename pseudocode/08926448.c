/* Entry 0x08926448 | file offset 0x00123420 | FUN_08926448 | bytes 192 */

void FUN_08926448(undefined4 param_1,undefined4 param_2,short param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_08926048(param_1,(int)param_3);
  iVar2 = FUN_0885c9a4(uVar1,0xe);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = FUN_0885ca3c(uVar1,0xe,iVar4);
      if (iVar3 == 0) {
        return;
      }
      FUN_089261e0(param_1,param_2,0xe,*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc));
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}

