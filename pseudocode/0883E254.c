/* Entry 0x0883E254 | file offset 0x0003B22C | FUN_0883e254 | bytes 160 */

int FUN_0883e254(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < 0) {
    if ((int *)param_1[9] != (int *)0x0) {
      return *(int *)param_1[9];
    }
  }
  else {
    iVar2 = *param_1;
    iVar1 = param_2;
    if (((*(char *)(iVar2 + 0x542) == '\x03') && (*(char *)(iVar2 + 0x60f) != '\0')) &&
       ((int *)(iVar2 + 0x590) != (int *)0x0)) {
      iVar1 = *(int *)(iVar2 + 0x590);
    }
    iVar2 = 0;
    do {
      if ((param_1[1] != 0) && (iVar1 == param_2)) {
        return param_1[1];
      }
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 1;
    } while (iVar2 < 8);
  }
  return 0;
}

