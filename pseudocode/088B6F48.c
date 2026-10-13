/* Entry 0x088B6F48 | file offset 0x000B3F20 | FUN_088b6f48 | bytes 268 */

void FUN_088b6f48(short *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  
  iVar2 = FUN_088b6f00(param_2);
  *param_1 = 0;
  param_1[0x51] = 0;
  if (iVar2 != 0) {
    iVar3 = FUN_088b6e14(iVar2,param_3);
    psVar4 = (short *)FUN_088b6e14(iVar2,param_4);
    if (iVar3 == 0) {
      psVar6 = *(short **)(iVar2 + 8);
    }
    else {
      psVar6 = (short *)(iVar3 + 8);
    }
    for (; psVar6 <= psVar4; psVar6 = psVar6 + 4) {
      iVar2 = 0;
      psVar5 = psVar6;
      do {
        psVar5 = psVar5 + 1;
        if (*psVar5 != -1) {
          sVar1 = *param_1;
          if (0x4f < sVar1) {
            return;
          }
          param_1[sVar1 + 1] = *psVar5;
          *param_1 = sVar1 + 1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 3);
      param_1[0x51] = param_1[0x51] + (short)*(char *)((int)psVar6 + 1);
    }
  }
  return;
}

