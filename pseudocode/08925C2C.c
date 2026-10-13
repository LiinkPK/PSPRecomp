/* Entry 0x08925C2C | file offset 0x00122C04 | FUN_08925c2c | bytes 52 */

void FUN_08925c2c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x20);
  iVar1 = 0;
  do {
    *(undefined2 *)(iVar2 + iVar1 + 0x8c) = 0xffff;
    iVar3 = iVar3 + 1;
    iVar1 = iVar1 + 2;
    iVar2 = *(int *)(param_1 + 0x20);
  } while (iVar3 < 0x15);
  *(undefined1 *)(iVar2 + 0xb6) = 0;
  return;
}

