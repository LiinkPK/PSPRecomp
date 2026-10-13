/* Entry 0x0884F67C | file offset 0x0004C654 | FUN_0884f67c | bytes 60 */

int FUN_0884f67c(int param_1,int param_2)

{
  int iVar1;
  
  param_1 = param_1 + param_2 * 0x20;
  if ((*(short *)(param_1 + 0x12) == 0) || (*(char *)(param_1 + 0x1b) == '\0')) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(short *)(param_1 + 0x10);
  }
  return iVar1;
}

