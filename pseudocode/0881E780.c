/* Entry 0x0881E780 | file offset 0x0001B758 | FUN_0881e780 | bytes 96 */

int FUN_0881e780(char *param_1,int param_2)

{
  int iVar1;
  
  if (*param_1 == '\0') {
    iVar1 = 0;
  }
  else if (param_2 == 0) {
    iVar1 = 0;
  }
  else if ((uint)(int)*(short *)(param_2 + 2) < *(uint *)(param_1 + 0x4c)) {
    iVar1 = *(int *)(param_1 + 0x50) + *(short *)(param_2 + 2) * 0x68;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

