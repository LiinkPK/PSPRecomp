/* Entry 0x0885AC3C | file offset 0x00057C14 | FUN_0885ac3c | bytes 164 */

void FUN_0885ac3c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  param_1[4] = param_2;
  uVar1 = FUN_0885c6cc(param_2,0x780,0,0,1,0);
  param_1[1] = uVar1;
  iVar3 = 0;
  iVar2 = 0;
  do {
    iVar3 = iVar3 + 1;
    *(undefined4 *)(param_1[1] + iVar2 + 0x10) = 0;
    iVar2 = iVar2 + 0x30;
  } while (iVar3 < 0x28);
  uVar1 = FUN_0899b9f0(0);
  *param_1 = uVar1;
  FUN_0899bb68(uVar1,param_3,param_4,0);
  return;
}

