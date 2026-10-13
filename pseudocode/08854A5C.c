/* Entry 0x08854A5C | file offset 0x00051A34 | FUN_08854a5c | bytes 116 */

void FUN_08854a5c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  param_1[1] = param_1[1] + 1;
  if (*param_1 == 0) {
    iVar1 = FUN_0899b9f0(0);
    *param_1 = iVar1;
    FUN_0899bb68(iVar1,param_3,param_4,0);
  }
  return;
}

