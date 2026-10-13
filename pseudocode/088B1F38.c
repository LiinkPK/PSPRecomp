/* Entry 0x088B1F38 | file offset 0x000AEF10 | FUN_088b1f38 | bytes 68 */

void FUN_088b1f38(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  param_1 = param_1 + 4;
  do {
    FUN_088bd564(param_1);
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x44;
  } while (iVar1 < 10);
  return;
}

