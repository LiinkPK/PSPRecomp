/* Entry 0x08940930 | file offset 0x0013D908 | FUN_08940930 | bytes 96 */

void FUN_08940930(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0xc50) == 0) {
      iVar1 = *(int *)(iVar2 + 0xc54);
    }
    else {
      FUN_0897404c(iVar2 + 0x30);
      iVar1 = *(int *)(iVar2 + 0xc54);
    }
    if (iVar1 != 0) {
      FUN_0897404c(iVar2 + 0x640);
    }
  }
  FUN_0894d730(*(undefined4 *)(param_1 + 0x1c));
  return;
}

