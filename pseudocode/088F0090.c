/* Entry 0x088F0090 | file offset 0x000ED068 | FUN_088f0090 | bytes 192 */

void FUN_088f0090(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_089d712c;
  iVar4 = DAT_089d712c + 0x1de84;
  iVar2 = 7 - param_1;
  if (0 < param_1) {
    FUN_08935524(DAT_089d712c + 0x1de90,param_1 + iVar4 + 0xc,iVar2);
  }
  iVar1 = FUN_088f0ce4();
  if (iVar1 != 0) {
    FUN_088f0150(iVar3 + 0x1de90,1);
  }
  if (iVar2 < 7) {
    iVar3 = iVar2 + iVar4 + 0xc;
    do {
      FUN_088f0150(iVar3,0);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar2 < 7);
  }
  FUN_088eff98(param_1);
  return;
}

