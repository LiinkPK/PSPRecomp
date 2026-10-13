/* Entry 0x0892ACAC | file offset 0x00127C84 | FUN_0892acac | bytes 84 */

void FUN_0892acac(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    iVar1 = FUN_0888274c(param_1[1],FUN_0892ae80);
    if (iVar1 != 0) {
      FUN_088825d4(param_1[1],*param_1);
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

