/* Entry 0x08931EB8 | file offset 0x0012EE90 | FUN_08931eb8 | bytes 92 */

void FUN_08931eb8(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_08931da0();
  iVar2 = 0;
  iVar1 = param_1;
  do {
    *(undefined4 *)(iVar1 + 0x10) = 0;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 2);
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + 0x18) = 0;
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 3);
  return;
}

