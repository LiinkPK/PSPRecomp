/* Entry 0x089AC75C | file offset 0x001A9734 | FUN_089ac75c | bytes 144 */

short * FUN_089ac75c(short *param_1,int param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  
  if ((param_1 != (short *)0x0) && (iVar3 = 0, psVar2 = param_1, 0 < param_2)) {
    do {
      sVar1 = *psVar2;
      iVar3 = iVar3 + 1;
      *psVar2 = sVar1 + -1;
      if ((short)(sVar1 + -1) == 0) {
        FUN_089ac71c(psVar2);
        thunk_FUN_089abeac(0,psVar2);
      }
      psVar2 = psVar2 + 8;
    } while (param_2 != iVar3);
  }
  return param_1;
}

