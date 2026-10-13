/* Entry 0x088F0394 | file offset 0x000ED36C | FUN_088f0394 | bytes 164 */

bool FUN_088f0394(int param_1,int param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(DAT_089d712c + param_1 + 0x1de90);
  if (param_2 < 2) {
    if (-1 < param_2) {
      if (param_2 < 1) {
        return (*pbVar1 & 1) != 0;
      }
      return (*pbVar1 & 2) != 0;
    }
  }
  else {
    if (param_2 < 3) {
      return (*pbVar1 & 4) != 0;
    }
    if (param_2 < 4) {
      return (*pbVar1 & 8) != 0;
    }
  }
  return false;
}

