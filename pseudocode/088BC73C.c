/* Entry 0x088BC73C | file offset 0x000B9714 | FUN_088bc73c | bytes 20 */

void FUN_088bc73c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0xc) = iVar1;
  return;
}

