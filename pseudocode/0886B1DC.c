/* Entry 0x0886B1DC | file offset 0x000681B4 | FUN_0886b1dc | bytes 84 */

int FUN_0886b1dc(int param_1)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  
  pcVar1 = (char *)(param_1 + 0x8c);
  iVar3 = 0;
  if (0 < *pcVar1) {
    piVar2 = (int *)(param_1 + 0x84);
    do {
      if (*(int *)(param_1 + 0xc) == *(int *)(*piVar2 + 8)) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 0x10;
    } while (iVar3 < *pcVar1);
  }
  return -1;
}

