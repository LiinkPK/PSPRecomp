/* Entry 0x088195C8 | file offset 0x000165A0 | FUN_088195c8 | bytes 92 */

void FUN_088195c8(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x14) != 0) &&
     (iVar1 = FUN_08822da8(*(int *)(param_1 + 0x14) + 0x570), iVar1 != 0)) {
    FUN_0881559c(*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x10) = 3;
  }
  return;
}

