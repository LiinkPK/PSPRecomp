/* Entry 0x088BC714 | file offset 0x000B96EC | FUN_088bc714 | bytes 20 */

void FUN_088bc714(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 4) = iVar1;
  return;
}

