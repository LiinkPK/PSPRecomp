/* Entry 0x089B12A4 | file offset 0x001AE27C | FUN_089b12a4 | bytes 80 */

void FUN_089b12a4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar2 = *(int *)(param_1 + 4);
    while (iVar1 = iVar2, iVar1 != 0) {
      if (iVar1 == param_2) {
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)(param_2 + 4) = 0;
        return;
      }
      param_1 = iVar1;
      iVar2 = *(int *)(iVar1 + 4);
    }
  }
  return;
}

