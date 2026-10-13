/* Entry 0x088BDFAC | file offset 0x000BAF84 | FUN_088bdfac | bytes 332 */

void FUN_088bdfac(int *param_1,int *param_2,int *param_3,undefined4 param_4,char param_5)

{
  int iVar1;
  int *piVar2;
  
  FUN_088be0f8(param_1,param_2,(int)param_5);
  if (param_2 < param_3) {
    piVar2 = param_2;
    do {
      if (*piVar2 < *param_1) {
        iVar1 = *piVar2;
        *piVar2 = *param_1;
        FUN_088be1bc(param_1,0,
                     (int)(((int)param_2 - (int)param_1) +
                          ((uint)((int)param_2 - (int)param_1 >> 2) >> 0x1e)) >> 2,iVar1,
                     (int)param_5);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 < param_3);
  }
  if (1 < (int)(((int)param_2 - (int)param_1) + ((uint)((int)param_2 - (int)param_1 >> 2) >> 0x1e))
          >> 2) {
    do {
      FUN_088be2e8(param_1,param_2,(int)param_5);
      iVar1 = (int)(param_2 + -1) - (int)param_1;
      param_2 = param_2 + -1;
    } while (1 < (int)(iVar1 + ((uint)(iVar1 >> 2) >> 0x1e)) >> 2);
  }
  return;
}

