/* Entry 0x0892AC5C | file offset 0x00127C34 | FUN_0892ac5c | bytes 80 */

void FUN_0892ac5c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  param_1[1] = param_2;
  iVar1 = FUN_088823c4(param_2,param_3,param_4,FUN_0892ae80,"Update");
  *param_1 = iVar1;
  *(int **)(iVar1 + 4) = param_1;
  return;
}

