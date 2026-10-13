/* Entry 0x08974A00 | file offset 0x001719D8 | FUN_08974a00 | bytes 60 */

void FUN_08974a00(int param_1)

{
  int iVar1;
  
  iVar1 = 1 - *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 8) - *(int *)(param_1 + *(int *)(param_1 + 0xc) * 4)
  ;
  *(int *)(param_1 + 0xc) = iVar1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + iVar1 * 4);
  return;
}

