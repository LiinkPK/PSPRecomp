/* Entry 0x088B33EC | file offset 0x000B03C4 | FUN_088b33ec | bytes 44 */

int FUN_088b33ec(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if ((-1 < param_2) && (param_2 < *(char *)(param_1 + 1))) {
    iVar1 = param_1 + 8 + param_2 * 8;
  }
  return iVar1;
}

