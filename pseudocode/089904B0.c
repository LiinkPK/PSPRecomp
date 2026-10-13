/* Entry 0x089904B0 | file offset 0x0018D488 | FUN_089904b0 | bytes 200 */

undefined4 FUN_089904b0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = 0;
  while ((iVar1 = *(int *)(DAT_089da420 + iVar2 + 8), iVar1 == 0 ||
         (iVar1 = FUN_08992704(iVar1,param_1), iVar1 == 0))) {
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + 4;
    if (3 < uVar3) {
      return 1;
    }
  }
  uVar3 = *(uint *)(*(int *)(DAT_089da420 + iVar2 + 8) + 0x2c);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  if ((uVar3 & 0xc) != 0) {
    return 0;
  }
  return 1;
}

