/* Entry 0x089ADE78 | file offset 0x001AAE50 | FUN_089ade78 | bytes 360 */

short * FUN_089ade78(short *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  
  if ((param_1 != (short *)0x0) && (param_4 != 0)) {
    iVar1 = FUN_089adc5c();
    if (iVar1 != 0) {
      psVar2 = (short *)FUN_089ad104(param_2,param_4);
      if (0 < param_2) {
        iVar1 = 0;
        psVar3 = psVar2;
        do {
          iVar1 = iVar1 + 1;
          FUN_089add84(psVar3,param_1,param_3,param_4);
          psVar3 = psVar3 + 8;
          param_1 = param_1 + 8;
        } while (param_2 != iVar1);
      }
      return psVar2;
    }
    iVar1 = 0;
    psVar2 = param_1;
    if (0 < param_2) {
      do {
        *psVar2 = *psVar2 + 1;
        if (param_2 == iVar1 + 1) {
          return param_1;
        }
        iVar1 = iVar1 + 2;
        psVar2[8] = psVar2[8] + 1;
        psVar2 = psVar2 + 0x10;
      } while (param_2 != iVar1);
    }
    return param_1;
  }
  return (short *)0x0;
}

