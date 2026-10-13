/* Entry 0x08931328 | file offset 0x0012E300 | FUN_08931328 | bytes 152 */

void FUN_08931328(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x2c) == '\0') {
      FUN_088d9f5c(iVar1,0x14,1);
    }
    else {
      FUN_088d9f5c(iVar1,0x11,1);
    }
  }
  iVar2 = 0;
  iVar1 = param_1 + 0x38;
  if (0 < *(int *)(param_1 + 0x260)) {
    do {
      FUN_0893071c(iVar1);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x5c;
    } while (iVar2 < *(int *)(param_1 + 0x260));
  }
  return;
}

