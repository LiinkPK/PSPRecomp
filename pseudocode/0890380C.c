/* Entry 0x0890380C | file offset 0x001007E4 | FUN_0890380c | bytes 232 */

bool FUN_0890380c(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  FUN_08904978();
  if (param_1[0x43] != 0) {
    iVar3 = 0;
    piVar1 = param_1 + 2;
    piVar2 = param_1;
    do {
      if (piVar2[4] != 0) {
        FUN_0885c538(param_1[0x43],piVar2[4],0);
      }
      piVar1[2] = 0;
      piVar1[3] = 0;
      FUN_08905848(piVar1);
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 4;
      piVar1 = piVar1 + 4;
    } while (iVar3 < 0x10);
    param_1[0x43] = 0;
  }
  if (*param_1 != -1) {
    iVar3 = sceNetAdhocMatchingDelete();
    if (iVar3 < 0) {
      return false;
    }
    *param_1 = -1;
  }
  iVar3 = sceNetAdhocMatchingTerm();
  return -1 < iVar3;
}

