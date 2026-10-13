/* Entry 0x08926C34 | file offset 0x00123C0C | FUN_08926c34 | bytes 208 */

void FUN_08926c34(int param_1,short param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_08926048(param_1,(int)param_2);
  iVar2 = FUN_0885ca3c(uVar1,1,0);
  iVar3 = FUN_0885c6cc(*(undefined4 *)(param_1 + 4),*(undefined4 *)(iVar2 + 0xc),0,0,1,0);
  FUN_08935524(iVar3,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc));
  iVar4 = 0;
  iVar2 = iVar3;
  do {
    if (*(int *)(iVar2 + 0x408) != 0) {
      *(int *)(iVar2 + 0x408) = *(int *)(iVar2 + 0x408) + iVar3;
    }
    iVar4 = iVar4 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar4 < 0x1e);
  if (*(int *)(iVar3 + 0x480) != 0) {
    *(int *)(iVar3 + 0x480) = *(int *)(iVar3 + 0x480) + iVar3;
  }
  if (*(int *)(iVar3 + 0x484) != 0) {
    *(int *)(iVar3 + 0x484) = *(int *)(iVar3 + 0x484) + iVar3;
  }
  return;
}

