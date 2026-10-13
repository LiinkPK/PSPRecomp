/* Entry 0x088697BC | file offset 0x00066794 | FUN_088697bc | bytes 136 */

undefined4 FUN_088697bc(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if ((int)param_1 < 2) {
    uVar1 = 0;
  }
  else if (param_1 == 2) {
    uVar1 = 1;
  }
  else if ((param_1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = 3;
    if (8 < (int)param_1) {
      do {
        iVar3 = (int)param_1 % iVar2;
        iVar2 = iVar2 + 2;
        if (iVar3 == 0) {
          return 0;
        }
      } while (iVar2 * iVar2 <= (int)param_1);
    }
    uVar1 = 1;
  }
  return uVar1;
}

