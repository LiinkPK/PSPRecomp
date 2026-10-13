/* Entry 0x08915F20 | file offset 0x00112EF8 | FUN_08915f20 | bytes 104 */

void FUN_08915f20(int param_1,short *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_3) {
    do {
      FUN_088e04f0(*(undefined4 *)(param_1 + 0x744),(int)*param_2);
      iVar1 = iVar1 + 1;
      param_2 = param_2 + 1;
    } while (iVar1 < param_3);
  }
  return;
}

