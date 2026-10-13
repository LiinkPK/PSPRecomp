/* Entry 0x089412D0 | file offset 0x0013E2A8 | FUN_089412d0 | bytes 120 */

void FUN_089412d0(int param_1)

{
  int iVar1;
  
  if ((*(int **)(param_1 + 0x3c) != (int *)0x0) && (iVar1 = **(int **)(param_1 + 0x3c), iVar1 != -1)
     ) {
    FUN_089418f8(param_1,iVar1);
    **(undefined4 **)(param_1 + 0x3c) = 0xffffffff;
  }
  if (DAT_089d9170 != 0) {
    FUN_08992ec0();
    DAT_089d9170 = 0;
  }
  return;
}

