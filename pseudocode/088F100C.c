/* Entry 0x088F100C | file offset 0x000EDFE4 | FUN_088f100c | bytes 136 */

undefined4 FUN_088f100c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_088f0d98();
  if (iVar1 == 0) {
    uVar3 = 0;
    iVar1 = FUN_088f0e04();
    iVar2 = sceRtcGetDayOfWeek(DAT_09b698c8,DAT_09b698ca,DAT_09b698cc);
    if (iVar1 == iVar2) {
      uVar3 = 1;
    }
    else {
      iVar1 = FUN_088f0e34();
      if (iVar1 != 0) {
        uVar3 = 1;
      }
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

