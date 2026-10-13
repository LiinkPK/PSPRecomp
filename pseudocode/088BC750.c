/* Entry 0x088BC750 | file offset 0x000B9728 | FUN_088bc750 | bytes 20 */

void FUN_088bc750(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0x10) = iVar1;
  return;
}

