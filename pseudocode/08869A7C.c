/* Entry 0x08869A7C | file offset 0x00066A54 | FUN_08869a7c | bytes 56 */

int FUN_08869a7c(int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < 0) || (*(int *)(*param_1 + 8) <= param_2)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *param_1 + 0x10 + param_2 * 0x10;
  }
  return iVar1;
}

