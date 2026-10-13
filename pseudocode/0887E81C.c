/* Entry 0x0887E81C | file offset 0x0007B7F4 | FUN_0887e81c | bytes 172 */

void FUN_0887e81c(short *param_1,short *param_2,uint param_3)

{
  short sVar1;
  bool bVar2;
  short *psVar3;
  int iVar4;
  
  iVar4 = 0;
  bVar2 = 1 < param_3 >> 1;
  do {
    if (!bVar2) {
      *param_2 = 0;
      return;
    }
    *param_2 = *param_1;
    iVar4 = iVar4 + 2;
    if (*param_1 == 0) {
      return;
    }
    bVar2 = iVar4 / 2 + 1U < param_3 >> 1;
    psVar3 = &DAT_089d6988;
    sVar1 = DAT_089d6988;
    while (sVar1 != -1) {
      if (sVar1 == *param_2) {
        *param_2 = psVar3[1];
        break;
      }
      psVar3 = psVar3 + 2;
      sVar1 = *psVar3;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while( true );
}

