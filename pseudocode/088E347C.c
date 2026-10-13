/* Entry 0x088E347C | file offset 0x000E0454 | FUN_088e347c | bytes 104 */

void FUN_088e347c(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((*(int *)(param_1 + 0x5fc) != 0) && ((*(uint *)(*(int *)(param_1 + 0x5fc) + 0x10) & 2) == 0)
       ) {
      FUN_0887b908();
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 2);
  return;
}

