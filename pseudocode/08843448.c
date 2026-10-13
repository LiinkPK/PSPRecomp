/* Entry 0x08843448 | file offset 0x00040420 | FUN_08843448 | bytes 24 */

void FUN_08843448(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = *(int *)(param_1 + 8);
  }
  *(int *)(param_1 + 0xc) = iVar1;
  return;
}

