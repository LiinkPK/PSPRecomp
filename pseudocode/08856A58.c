/* Entry 0x08856A58 | file offset 0x00053A30 | FUN_08856a58 | bytes 116 */

void FUN_08856a58(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  if (0 < *(int *)(param_1 + 0x134)) {
    do {
      if (*(int *)(iVar1 + 0x78) != 0) {
        FUN_0887ba5c();
        *(undefined4 *)(iVar1 + 0x78) = 0;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x20;
    } while (iVar2 < *(int *)(param_1 + 0x134));
  }
  *(undefined4 *)(param_1 + 0x134) = 0;
  return;
}

