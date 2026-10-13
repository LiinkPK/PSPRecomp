/* Entry 0x089AE424 | file offset 0x001AB3FC | FUN_089ae424 | bytes 352 */

short * FUN_089ae424(short *param_1,int param_2,uint param_3,int param_4)

{
  short *psVar1;
  int iVar2;
  short *psVar3;
  
  if ((param_1 != (short *)0x0) && (param_4 != 0)) {
    if ((param_3 & 0x301) != 0) {
      psVar1 = (short *)FUN_089ad144(param_2,param_4);
      if (0 < param_2) {
        iVar2 = 0;
        psVar3 = psVar1;
        do {
          iVar2 = iVar2 + 1;
          FUN_089ae344(psVar3,param_1,param_3,param_4);
          psVar3 = psVar3 + 8;
          param_1 = param_1 + 8;
        } while (param_2 != iVar2);
      }
      return psVar1;
    }
    iVar2 = 0;
    psVar1 = param_1;
    if (0 < param_2) {
      do {
        *psVar1 = *psVar1 + 1;
        if (param_2 == iVar2 + 1) {
          return param_1;
        }
        iVar2 = iVar2 + 2;
        psVar1[8] = psVar1[8] + 1;
        psVar1 = psVar1 + 0x10;
      } while (param_2 != iVar2);
    }
    return param_1;
  }
  return (short *)0x0;
}

