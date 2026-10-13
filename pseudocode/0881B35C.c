/* Entry 0x0881B35C | file offset 0x00018334 | FUN_0881b35c | bytes 64 */

int FUN_0881b35c(char *param_1,uint param_2)

{
  int iVar1;
  
  if (*param_1 == '\0') {
    iVar1 = 0;
  }
  else if (param_2 < *(uint *)(param_1 + 4)) {
    iVar1 = *(int *)(param_1 + 8) + param_2 * 0x40;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

