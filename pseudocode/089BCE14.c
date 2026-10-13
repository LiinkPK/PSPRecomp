/* Entry 0x089BCE14 | file offset 0x001B9DEC | FUN_089bce14 | bytes 8 */

void FUN_089bce14(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0xc);
  if ((piVar2 != (int *)0x0) && (param_2 != 0)) {
    for (iVar1 = *piVar2; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      piVar2 = (int *)(iVar1 + 4);
    }
    *piVar2 = param_2;
    return;
  }
  return;
}

