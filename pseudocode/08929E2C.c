/* Entry 0x08929E2C | file offset 0x00126E04 | FUN_08929e2c | bytes 188 */

int FUN_08929e2c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(DAT_089d76e8 + 0xc);
  if (iVar5 <= param_1) {
    iVar2 = param_1 - iVar5;
    iVar4 = 0;
    iVar3 = DAT_089d712c + 0x3e0b0;
    do {
      iVar1 = FUN_0892a1e0(iVar3);
      if (iVar1 == 1) {
        if (iVar4 == iVar2) {
          return iVar5;
        }
        iVar5 = iVar5 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x154;
      param_1 = 0;
    } while (iVar4 < 5);
  }
  return param_1;
}

