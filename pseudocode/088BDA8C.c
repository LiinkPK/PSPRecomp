/* Entry 0x088BDA8C | file offset 0x000BAA64 | FUN_088bda8c | bytes 160 */

void FUN_088bda8c(int param_1,int param_2,int *param_3,short *param_4,int param_5)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  
  iVar6 = 0;
  psVar5 = param_4;
  if (0 < *(int *)(param_4 + 0x18)) {
    do {
      if (*psVar5 == param_5) {
        if (param_2 <= *param_3) {
          return;
        }
        sVar1 = psVar5[1];
        psVar4 = (short *)(param_1 + *param_3 * 0xc);
        sVar2 = psVar5[2];
        *psVar4 = *psVar5;
        sVar3 = psVar5[3];
        psVar4[1] = sVar1;
        sVar1 = psVar5[4];
        psVar4[2] = sVar2;
        sVar2 = psVar5[5];
        psVar4[3] = sVar3;
        psVar4[4] = sVar1;
        psVar4[5] = sVar2;
        *param_3 = *param_3 + 1;
      }
      iVar6 = iVar6 + 1;
      psVar5 = psVar5 + 6;
    } while (iVar6 < *(int *)(param_4 + 0x18));
  }
  return;
}

