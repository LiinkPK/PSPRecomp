/* Entry 0x08856ACC | file offset 0x00053AA4 | FUN_08856acc | bytes 120 */

void FUN_08856acc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + param_2 * 8);
  piVar2[1] = piVar2[1] + 1;
  if (*piVar2 == 0) {
    iVar1 = FUN_0899b9f0(0);
    *piVar2 = iVar1;
    FUN_0899bb68(iVar1,param_3,param_4,0);
  }
  return;
}

