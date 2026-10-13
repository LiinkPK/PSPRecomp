/* Entry 0x088C7FE4 | file offset 0x000C4FBC | FUN_088c7fe4 | bytes 372 */

int FUN_088c7fe4(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar1 = FUN_088c7f78();
  if (iVar1 == 1) {
    uVar2 = param_1 & 0x1f;
    iVar1 = FUN_088c7f9c(param_1);
    if (iVar1 < 2) {
      if (-1 < iVar1) {
        if (iVar1 < 1) {
          iVar3 = FUN_088fb324(0,uVar2);
        }
        else {
          iVar3 = FUN_088fb324(1,uVar2);
        }
      }
    }
    else if (iVar1 < 3) {
      iVar1 = FUN_088c75b4(DAT_089d712c + 0x39f38,uVar2);
      if (iVar1 != 0) {
        iVar3 = iVar1;
      }
    }
    else if (iVar1 < 4) {
      iVar4 = DAT_089d712c + 0x1fecc + ((int)(param_1 & 0x1f00) >> 8) * 0x10a8;
      iVar1 = FUN_088f51ac(iVar4);
      if (iVar1 == 0) {
        iVar1 = FUN_088f51dc(iVar4);
        if (iVar1 != 0) {
          iVar3 = FUN_088f4eb4(iVar1 + ((int)(param_1 & 0xe0) >> 5) * 0x2d8,uVar2);
        }
      }
      else {
        iVar3 = FUN_088f4eb4(iVar1,uVar2);
      }
    }
  }
  return iVar3;
}

