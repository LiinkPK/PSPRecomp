/* Entry 0x08859DA4 | file offset 0x00056D7C | FUN_08859da4 | bytes 116 */

void FUN_08859da4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  param_1[1] = param_1[1] + 1;
  if (*param_1 == 0) {
    iVar1 = FUN_0899b9f0(0);
    *param_1 = iVar1;
    FUN_0899bb68(iVar1,param_2,param_3,0);
  }
  return;
}

