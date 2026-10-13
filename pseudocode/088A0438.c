/* Entry 0x088A0438 | file offset 0x0009D410 | FUN_088a0438 | bytes 104 */

void FUN_088a0438(void)

{
  uint uVar1;
  
  uVar1 = sceUmdGetDriveStat();
  if ((uVar1 & 0x20) != 0) {
    if (DAT_089d6c60 == 2) {
      FUN_0889fd38(DAT_09b4cf74,DAT_09b4cf70,&DAT_09b4cef0,1,DAT_09b4cf78);
    }
    else {
      DAT_089d6c50 = 0;
    }
  }
  return;
}

