/* Entry 0x0891C45C | file offset 0x00119434 | FUN_0891c45c | bytes 104 */

void FUN_0891c45c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  do {
    if (*(int *)(iVar1 + 0x2a78) != 0) {
      FUN_08889ed4(iVar2,*(int *)(iVar1 + 0x2a78),*(undefined1 *)(param_1 + iVar2 + 0x2a84));
      *(undefined4 *)(iVar1 + 0x2a78) = 0;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 3);
  return;
}

