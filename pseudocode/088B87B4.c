/* Entry 0x088B87B4 | file offset 0x000B578C | FUN_088b87b4 | bytes 548 */

void FUN_088b87b4(short *param_1)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  
  iVar2 = 0;
  psVar3 = param_1;
  psVar4 = param_1;
  if (0 < *(int *)(param_1 + 0xafa)) {
    do {
      iVar1 = FUN_088c0f8c((int)*psVar3);
      if (((iVar1 != 0) && (*(int *)(iVar1 + 0x44) == 0)) && (*(short *)(iVar1 + 0x48) == 1)) {
        if ((*(byte *)((int)psVar4 + 3) & 2) == 0) {
          *(byte *)((int)psVar4 + 3) = *(byte *)((int)psVar4 + 3) | 2;
        }
        *(byte *)((int)psVar4 + 3) = *(byte *)((int)psVar4 + 3) & 0xfb;
      }
      iVar2 = iVar2 + 1;
      psVar3 = psVar3 + 2;
      psVar4 = psVar4 + 2;
    } while (iVar2 < *(int *)(param_1 + 0xafa));
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xafc)) {
    psVar4 = param_1 + 0x556;
    psVar3 = param_1;
    do {
      iVar1 = FUN_088b29d8((int)psVar3[0x556]);
      if (((iVar1 != 0) && (*(int *)(iVar1 + 0x20) == 0)) && (*(short *)(iVar1 + 0x24) == 1)) {
        if ((*(byte *)((int)psVar4 + 3) & 2) == 0) {
          *(byte *)((int)psVar4 + 3) = *(byte *)((int)psVar4 + 3) | 2;
        }
        *(byte *)((int)psVar4 + 3) = *(byte *)((int)psVar4 + 3) & 0xfb;
      }
      iVar2 = iVar2 + 1;
      psVar3 = psVar3 + 2;
      psVar4 = psVar4 + 2;
    } while (iVar2 < *(int *)(param_1 + 0xafc));
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xb00)) {
    psVar4 = param_1 + 0xac2;
    psVar3 = param_1;
    do {
      iVar1 = FUN_088cb7e8((int)(char)psVar3[0xac2]);
      if (((iVar1 != 0) && (*(int *)(iVar1 + 0xc) == 0)) && (*(short *)(iVar1 + 0x10) == 1)) {
        if ((*psVar4 & 0x100) == 0) {
          *(byte *)((int)psVar4 + 1) = *(byte *)((int)psVar4 + 1) | 1;
          *(byte *)((int)psVar4 + 1) = *(byte *)((int)psVar4 + 1) | 2;
        }
        *(byte *)((int)psVar4 + 1) = *(byte *)((int)psVar4 + 1) & 0xfd;
      }
      iVar2 = iVar2 + 1;
      psVar3 = psVar3 + 1;
      psVar4 = psVar4 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xb00));
  }
  return;
}

