/* Entry 0x089BB2BC | file offset 0x001B8294 | thunk_FUN_089bb22c | bytes 8 */

short * thunk_FUN_089bb22c(short *param_1,int param_2)

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
        FUN_089bb18c(psVar2);
        thunk_FUN_089bb004(0,psVar2);
      }
      psVar2 = psVar2 + 0x18;
    } while (param_2 != iVar3);
  }
  return param_1;
}

