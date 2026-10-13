/* Entry 0x089BCE1C | file offset 0x001B9DF4 | FUN_089bce1c | bytes 80 */

void FUN_089bce1c(int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    for (iVar1 = *param_1; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      if (iVar1 == param_2) {
        *param_1 = *(int *)(param_2 + 4);
        *(undefined4 *)(param_2 + 4) = 0;
        return;
      }
      param_1 = (int *)(iVar1 + 4);
    }
  }
  return;
}

