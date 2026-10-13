/* Entry 0x088BC728 | file offset 0x000B9700 | FUN_088bc728 | bytes 20 */

void FUN_088bc728(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 8) = iVar1;
  return;
}

