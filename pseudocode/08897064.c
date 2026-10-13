/* Entry 0x08897064 | file offset 0x0009403C | FUN_08897064 | bytes 168 */

int FUN_08897064(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 5) != '\0') {
    iVar3 = 0;
    iVar2 = 0;
    if (0 < *(int *)*param_1) {
      do {
        iVar1 = FUN_0893585c(param_2,param_1[1] + iVar2);
        if (iVar1 == 0) {
          return iVar3;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x24;
      } while (iVar3 < *(int *)*param_1);
    }
  }
  return -1;
}

