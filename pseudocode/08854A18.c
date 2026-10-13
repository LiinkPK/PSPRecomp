/* Entry 0x08854A18 | file offset 0x000519F0 | FUN_08854a18 | bytes 68 */

void FUN_08854a18(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    iVar2 = 0;
    iVar1 = 0;
    do {
      iVar2 = iVar2 + 1;
      *(undefined4 *)(*(int *)(param_1 + 8) + iVar1 + 0x44) = 0;
      iVar1 = iVar1 + 0x60;
    } while (iVar2 < 0x28);
  }
  return;
}

