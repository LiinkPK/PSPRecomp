/* Entry 0x088F4E1C | file offset 0x000F1DF4 | FUN_088f4e1c | bytes 32 */

void FUN_088f4e1c(int param_1)

{
  int iVar1;
  
  iVar1 = *(short *)(param_1 + 0x28) + 1;
  if (9999 < iVar1) {
    iVar1 = 9999;
  }
  *(short *)(param_1 + 0x28) = (short)iVar1;
  return;
}

