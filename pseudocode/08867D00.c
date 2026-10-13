/* Entry 0x08867D00 | file offset 0x00064CD8 | FUN_08867d00 | bytes 168 */

void FUN_08867d00(short *param_1)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  short *psVar4;
  short local_10 [4];
  
  psVar3 = (short *)FUN_08885cfc(3);
  if (psVar3 != (short *)0x0) {
    local_10[1] = 0x2f;
    local_10[2] = 0;
    sVar1 = *param_1;
    while (sVar1 != 0) {
      sVar2 = -0xf1;
      psVar4 = local_10;
      while (sVar2 != 0) {
        if (sVar1 == sVar2) {
          *param_1 = *psVar3;
          break;
        }
        psVar4 = psVar4 + 1;
        sVar2 = *psVar4;
      }
      param_1 = param_1 + 1;
      sVar1 = *param_1;
    }
  }
  return;
}

