/* Entry 0x088F08A8 | file offset 0x000ED880 | FUN_088f08a8 | bytes 464 */

void FUN_088f08a8(char param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  short *psVar4;
  
  if (param_1 != '\0') {
    FUN_088efdac(&DAT_09b698c8);
  }
  if (DAT_089d7f1a != '\0') {
    iVar1 = FUN_088f0ce4();
    if (iVar1 != 0) {
      FUN_088f0150(DAT_089d712c + 0x1de90,1);
    }
    DAT_089d7f1a = '\0';
  }
  iVar1 = DAT_089d712c;
  psVar4 = (short *)(DAT_089d712c + 0x1de84);
  if (((*psVar4 != DAT_09b698c8) || (*(byte *)(DAT_089d712c + 0x1de86) != DAT_09b698ca)) ||
     (*(byte *)(DAT_089d712c + 0x1de87) != DAT_09b698cc)) {
    DAT_089d7f1b = 1;
    if ((*psVar4 == 0) || (*(char *)(DAT_089d712c + 0x1de86) == '\0')) {
      FUN_088eff24();
      DAT_089d7f1b = 0;
    }
    else {
      FUN_088f2324();
      iVar3 = FUN_088efe24();
      if ((iVar3 < 0) || (6 < iVar3)) {
        if (6 < iVar3) {
          uVar2 = FUN_088f0c80();
          FUN_088f0c98(uVar2);
        }
        FUN_088eff24();
      }
      else {
        FUN_088f0090();
      }
    }
    iVar3 = FUN_088f0ce4();
    if ((iVar3 == 0) || (iVar3 = FUN_088f1094(), iVar3 != 0)) {
      FUN_088f145c(0);
    }
    else {
      FUN_088f049c();
    }
    *psVar4 = DAT_09b698c8;
    *(char *)(iVar1 + 0x1de86) = (char)DAT_09b698ca;
    *(char *)(iVar1 + 0x1de87) = (char)DAT_09b698cc;
    DAT_089d7f14 = DAT_089d7f14 + 1;
    if (0x3e6 < DAT_089d7f14) {
      DAT_089d7f14 = 999;
    }
  }
  return;
}

