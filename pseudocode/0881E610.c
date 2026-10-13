/* Entry 0x0881E610 | file offset 0x0001B5E8 | FUN_0881e610 | bytes 108 */

int FUN_0881e610(char *param_1,int param_2)

{
  int iVar1;
  
  if (*param_1 == '\0') {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = (param_2 - *(int *)(param_1 + 0x8c)) / 0x24 + 1;
    }
    if (iVar1 == *(int *)(param_1 + 0x88)) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x8c) + iVar1 * 0x24;
    }
  }
  return iVar1;
}

