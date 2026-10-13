/* Entry 0x08925D80 | file offset 0x00122D58 | FUN_08925d80 | bytes 64 */

void FUN_08925d80(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x20);
  iVar1 = 0;
  do {
    *(undefined2 *)(iVar2 + iVar1 + 0xbc) = 0xffff;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(*(int *)(param_1 + 0x20) + iVar1 + 0xc0) = 0;
    iVar1 = iVar1 + 8;
    iVar2 = *(int *)(param_1 + 0x20);
  } while (iVar3 < 0x78);
  *(undefined1 *)(iVar2 + 0xb7) = 0;
  return;
}

