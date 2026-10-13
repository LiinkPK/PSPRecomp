/* Entry 0x088F7988 | file offset 0x000F4960 | FUN_088f7988 | bytes 232 */

void FUN_088f7988(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_08909984();
  iVar4 = DAT_089d712c + 0x1fecc;
  FUN_088f520c(iVar4);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x31968)) {
    iVar2 = param_1 + 0x14c78;
    do {
      FUN_088f526c(iVar4,iVar2 + 8);
      if ((*(char *)(iVar2 + 0x126c) == '\x01') &&
         (iVar1 = FUN_088f56ec(iVar4,iVar2 + 0x14), iVar1 != 0)) {
        FUN_088f4e1c(iVar1);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x1270;
    } while (iVar3 < *(int *)(param_1 + 0x31968));
  }
  return;
}

