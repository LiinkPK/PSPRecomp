/* Entry 0x08851CEC | file offset 0x0004ECC4 | FUN_08851cec | bytes 68 */

void FUN_08851cec(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  param_1[1] = iVar1 + -1;
  if (iVar1 + -1 < 1) {
    FUN_08851c6c(param_1);
    FUN_0899bb1c(*param_1);
    *param_1 = 0;
  }
  return;
}

