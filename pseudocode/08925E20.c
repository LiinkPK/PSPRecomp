/* Entry 0x08925E20 | file offset 0x00122DF8 | FUN_08925e20 | bytes 76 */

void FUN_08925e20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x20);
  iVar1 = 0;
  do {
    *(undefined2 *)(iVar2 + iVar1 + 0x47c) = 0xffff;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(*(int *)(param_1 + 0x20) + iVar1 + 0x480) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x20) + iVar1 + 0x484) = 0;
    iVar1 = iVar1 + 0xc;
    iVar2 = *(int *)(param_1 + 0x20);
  } while (iVar3 < 0x78);
  *(undefined1 *)(iVar2 + 0xb8) = 0;
  return;
}

