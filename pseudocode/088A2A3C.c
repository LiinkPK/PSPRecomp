/* Entry 0x088A2A3C | file offset 0x0009FA14 | FUN_088a2a3c | bytes 304 */

void FUN_088a2a3c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = FUN_088a0bc0();
  if ((iVar1 != 0) && (*(short *)(iVar1 + 0x1a) != 0)) {
    iVar6 = 0;
    iVar5 = 0;
    iVar3 = 0;
    do {
      do {
        iVar4 = DAT_09b4cf98;
        if (iVar3 != 0) {
          iVar4 = *(int *)(iVar3 + 0x58);
        }
        if (iVar4 == 0) {
          return;
        }
        iVar3 = **(int **)(iVar4 + 0x50);
        iVar2 = (**(code **)(iVar3 + 0x4c))
                          ((int)*(int **)(iVar4 + 0x50) + (int)*(short *)(iVar3 + 0x48));
        iVar3 = iVar4;
      } while (((iVar2 != param_1) || (*(int *)(iVar4 + 0x54) != param_2)) ||
              (*(int *)(iVar4 + 0x30) != 1));
      if (iVar6 == 0) {
        iVar6 = iVar4;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != *(short *)(iVar1 + 0x1a));
    FUN_088a1e44(0,iVar6);
  }
  return;
}

