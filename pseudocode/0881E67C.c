/* Entry 0x0881E67C | file offset 0x0001B654 | FUN_0881e67c | bytes 124 */

int * FUN_0881e67c(char *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if ((*param_1 != '\0') && (param_2 != 0)) {
    iVar2 = 0;
    if (0 < *(int *)(param_2 + 0x60)) {
      do {
        piVar1 = (int *)(*(int *)(param_1 + 0x44) + (*(int *)(param_2 + 100) + iVar2) * 0x20);
        if (*piVar1 == param_3) {
          return piVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_2 + 0x60));
    }
  }
  return (int *)0x0;
}

