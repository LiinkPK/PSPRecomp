/* Entry 0x0882773C | file offset 0x00024714 | FUN_0882773c | bytes 280 */

void FUN_0882773c(int param_1)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x550);
  if (*(float *)(iVar1 + 0x1a8) == 0.0) {
    iVar1 = FUN_0882f664(iVar1 + 0x130,(int)*(short *)(iVar1 + 0x180));
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x598)) {
      psVar3 = *(short **)(param_1 + 0x594);
      iVar4 = 0;
      do {
        if ((-1 < *psVar3) && (psVar3[1] == iVar1)) {
          iVar1 = FUN_0882f664(param_1 + 0x130,(int)*(short *)(param_1 + 0x180));
          iVar2 = (int)*(short *)(*(int *)(param_1 + 0x594) + iVar4);
          if (iVar1 == iVar2) {
            return;
          }
          FUN_0882f9a8(param_1 + 0x130,iVar2);
          return;
        }
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + 4;
        psVar3 = psVar3 + 2;
      } while (iVar2 < *(int *)(param_1 + 0x598));
    }
    if (*(short *)(param_1 + 0x180) != 1) {
      FUN_0882fa10(0,0,param_1 + 0x130,1,0);
    }
  }
  return;
}

