/* Entry 0x0889FF8C | file offset 0x0009CF64 | FUN_0889ff8c | bytes 268 */

void FUN_0889ff8c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (DAT_089d6c50 == 6) {
    DAT_089d6c50 = 0;
  }
  if (DAT_089d6c40 != -1) {
    if (param_1 == 0) {
      iVar1 = FUN_089906f8();
      if (iVar1 == 1) {
        DAT_089d6c50 = 5;
      }
      else {
        FUN_088a1438(DAT_089d6c88,DAT_089d6c40);
        FUN_088a13e4(DAT_089d6c88,DAT_089d6c40);
        uVar2 = sceUmdGetDriveStat();
        if ((uVar2 & 0x20) != 0) {
          FUN_0886300c(DAT_089d6c3c);
        }
        DAT_089d6c3c = 0xffffffff;
        DAT_089d6c40 = -1;
        DAT_089d6c4c = 0;
        DAT_089d6c50 = 0;
      }
    }
    else {
      DAT_089d6c4c = 1;
      DAT_089d6c48 = -(DAT_089d6c44 / (float)param_1);
    }
  }
  DAT_089d6c60 = 1;
  return;
}

