/* Entry 0x088A05B0 | file offset 0x0009D588 | FUN_088a05b0 | bytes 172 */

void FUN_088a05b0(int param_1)

{
  int iVar1;
  
  if ((param_1 < 0) || (DAT_089d6c60 == 1)) {
    DAT_089d6c3c = 0xffffffff;
    DAT_089d6c50 = 0;
  }
  else {
    iVar1 = FUN_08862f2c(DAT_089d6c3c,DAT_089d6c38,0x18000,FUN_088a065c,0,DAT_09b4cf78);
    if (iVar1 == 0) {
      FUN_0886300c(DAT_089d6c3c);
      DAT_089d6c3c = 0xffffffff;
      DAT_089d6c50 = 0;
    }
    else {
      DAT_089d6c50 = 3;
    }
  }
  return;
}

