/* Entry 0x088B95E8 | file offset 0x000B65C0 | FUN_088b95e8 | bytes 488 */

void FUN_088b95e8(int *param_1,int *param_2,short *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  
  *param_1 = 0;
  *param_2 = 0;
  iVar2 = *(int *)(param_3 + 0xafa);
  iVar3 = 0;
  psVar4 = param_3;
  if (0 < iVar2) {
    do {
      iVar1 = FUN_088c0f8c((int)*psVar4);
      if ((*(int *)(iVar1 + 0x44) != -1) && ((*(byte *)(iVar1 + 10) & 4) == 0)) {
        if ((*(byte *)((int)psVar4 + 3) & 2) != 0) {
          *param_1 = *param_1 + 1;
        }
        *param_2 = *param_2 + 1;
      }
      iVar3 = iVar3 + 1;
      psVar4 = psVar4 + 2;
    } while (iVar3 < iVar2);
  }
  iVar2 = *(int *)(param_3 + 0xafc);
  iVar3 = 0;
  psVar4 = param_3 + 0x556;
  if (0 < iVar2) {
    do {
      iVar1 = FUN_088b29d8((int)*psVar4);
      if ((*(int *)(iVar1 + 0x20) != -1) && ((*(byte *)(iVar1 + 0x10) & 4) == 0)) {
        if ((*(byte *)((int)psVar4 + 3) & 2) != 0) {
          *param_1 = *param_1 + 1;
        }
        *param_2 = *param_2 + 1;
      }
      iVar3 = iVar3 + 1;
      psVar4 = psVar4 + 2;
    } while (iVar3 < iVar2);
  }
  iVar2 = *(int *)(param_3 + 0xb00);
  iVar3 = 0;
  param_3 = param_3 + 0xac2;
  if (0 < iVar2) {
    do {
      iVar1 = FUN_088cb7e8((int)(char)*param_3);
      if (*(int *)(iVar1 + 0xc) != -1) {
        if ((*param_3 & 0x100) != 0) {
          *param_1 = *param_1 + 1;
        }
        *param_2 = *param_2 + 1;
      }
      iVar3 = iVar3 + 1;
      param_3 = param_3 + 1;
    } while (iVar3 < iVar2);
  }
  return;
}

