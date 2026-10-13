/* Entry 0x08852378 | file offset 0x0004F350 | FUN_08852378 | bytes 292 */

void FUN_08852378(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0;
  do {
    piVar2 = (int *)(param_1 + iVar1 * 0xd);
    if (*piVar2 == param_4) {
      piVar2[2] = piVar2[2] + 1;
      return;
    }
    iVar3 = iVar3 + 1;
    iVar1 = iVar3 * 0x40;
  } while (iVar3 < 2);
  iVar1 = 0;
  iVar3 = 0;
  do {
    piVar2 = (int *)(param_1 + iVar3 * 0xd);
    if (piVar2[1] == 0) {
      iVar1 = FUN_0899b9f0(0);
      piVar2[1] = iVar1;
      FUN_0899bb68(iVar1,param_2,param_3,0);
      *piVar2 = param_4;
      piVar2[2] = piVar2[2] + 1;
      return;
    }
    iVar1 = iVar1 + 1;
    iVar3 = iVar1 * 0x40;
  } while (iVar1 < 2);
  return;
}

