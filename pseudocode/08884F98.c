/* Entry 0x08884F98 | file offset 0x00081F70 | FUN_08884f98 | bytes 108 */

void FUN_08884f98(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_0887ba5c();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  iVar1 = FUN_0887e534(*(undefined4 *)(param_1 + 0xc));
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 != 0) {
    FUN_0887b9c4();
    FUN_0887b98c(*(undefined4 *)(param_1 + 0x10));
    *(uint *)(*(int *)(param_1 + 0x10) + 0x10) = *(uint *)(*(int *)(param_1 + 0x10) + 0x10) | 0x800;
  }
  return;
}

