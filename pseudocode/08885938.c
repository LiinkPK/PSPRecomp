/* Entry 0x08885938 | file offset 0x00082910 | FUN_08885938 | bytes 80 */

void FUN_08885938(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = FUN_088865f0();
  }
  if ((iVar1 == 0) && (*(int *)(param_1 + 0x10) != 0)) {
    FUN_08884920(*(int *)(param_1 + 0x10));
  }
  return;
}

