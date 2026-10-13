/* Entry 0x088A065C | file offset 0x0009D634 | FUN_088a065c | bytes 240 */

void FUN_088a065c(void)

{
  int iVar1;
  
  if (DAT_089d6c60 != 1) {
    DAT_089d6c40 = DAT_09b4cf70;
    DAT_089d6c44 = DAT_09b4cf74;
    iVar1 = FUN_088a1380(DAT_089d6c88,DAT_09b4cf70,DAT_089d6c38,0x18000,1);
    if ((iVar1 == 1) && (iVar1 = FUN_088a1400(DAT_089d6c88,DAT_089d6c40), iVar1 == 1)) {
      FUN_088a14d0(DAT_089d6c88,DAT_089d6c40,0,0);
      DAT_089d6c50 = 4;
      return;
    }
  }
  FUN_0886300c(DAT_089d6c3c);
  DAT_089d6c50 = 0;
  DAT_089d6c40 = 0xffffffff;
  DAT_089d6c3c = 0xffffffff;
  return;
}

