/* Entry 0x089BCE74 | file offset 0x001B9E4C | FUN_089bce74 | bytes 8 */

void FUN_089bce74(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x10);
  if ((piVar2 != (int *)0x0) && (param_2 != 0)) {
    for (iVar1 = *piVar2; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      piVar2 = (int *)(iVar1 + 4);
    }
    *piVar2 = param_2;
    return;
  }
  return;
}

