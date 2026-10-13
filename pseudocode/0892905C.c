/* Entry 0x0892905C | file offset 0x00126034 | FUN_0892905c | bytes 164 */

undefined4 FUN_0892905c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int local_120 [70];
  
  piVar3 = local_120;
  if (param_1 == 0x21) {
    iVar1 = FUN_0885c304(DAT_089d4e14);
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    iVar1 = FUN_088d5ac8(local_120,0x23,1,0);
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        if (param_1 == *piVar3) {
          return 0;
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 2;
      } while (iVar4 < iVar1);
    }
    uVar2 = 1;
  }
  return uVar2;
}

