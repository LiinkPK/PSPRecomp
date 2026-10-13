/* Entry 0x089BCDD8 | file offset 0x001B9DB0 | FUN_089bcdd8 | bytes 60 */

void FUN_089bcdd8(int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    for (iVar1 = *param_1; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      param_1 = (int *)(iVar1 + 4);
    }
    *param_1 = param_2;
    return;
  }
  return;
}

