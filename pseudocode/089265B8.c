/* Entry 0x089265B8 | file offset 0x00123590 | FUN_089265b8 | bytes 136 */

void FUN_089265b8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xa1c) = 0;
  iVar1 = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xa20) = 0;
  do {
    FUN_08935828(*(int *)(param_1 + 0x20) + iVar1 + 0xa24,0,0x40);
    FUN_08935828(*(int *)(param_1 + 0x20) + iVar1 + 0x1a24,0,0x40);
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x40;
  } while (iVar2 < 0x40);
  return;
}

