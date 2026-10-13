/* Entry 0x088DAC1C | file offset 0x000D7BF4 | FUN_088dac1c | bytes 496 */

int FUN_088dac1c(int param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  byte *pbVar8;
  int iVar9;
  
  if (param_2 == -1) {
    iVar6 = 0;
  }
  else {
    piVar7 = *(int **)(param_1 + 0xc);
    iVar6 = 0;
    if (param_2 < piVar7[0xb]) {
      pbVar8 = (byte *)(piVar7[3] + param_2 * 0x1c);
    }
    else {
      pbVar8 = (byte *)0x0;
    }
    iVar9 = 0;
    if (*pbVar8 != 0) {
      do {
        pbVar2 = (byte *)(*(int *)(pbVar8 + 0xc) + iVar9 * 8);
        if (*pbVar2 != 0xff) {
          if ((short)(ushort)*pbVar2 < *(short *)(param_1 + 0x18)) {
            if ((int)(uint)*pbVar2 < piVar7[9]) {
              piVar3 = (int *)(piVar7[1] + (uint)*pbVar2 * 8);
            }
            else {
              piVar3 = (int *)0x0;
            }
            iVar1 = 0;
            if (0 < *piVar3) {
              iVar4 = 0;
              do {
                uVar5 = (uint)*(byte *)(piVar3[1] + iVar1 * 2 + iVar4 + 1);
                if ((int)uVar5 < piVar7[8]) {
                  if (*(short *)(*piVar7 + uVar5 * 4) == 1) {
                    iVar4 = *piVar7 + (int)*(short *)(*piVar7 + uVar5 * 4 + 2);
                  }
                  else {
                    iVar4 = 0;
                  }
                }
                else {
                  iVar4 = 0;
                }
                if (iVar4 != 0) {
                  if (*(float *)(iVar4 + 0x18) == 0.0) {
                    if (*(float *)(iVar4 + 0x1c) != 0.0) {
                      iVar6 = iVar6 + 1;
                    }
                  }
                  else {
                    iVar6 = iVar6 + 1;
                  }
                }
                iVar1 = iVar1 + 1;
                iVar4 = iVar1 * 8;
              } while (iVar1 < *piVar3);
            }
          }
          else {
            iVar1 = FUN_088dac1c(param_1,(uint)*pbVar2 - (int)*(short *)(param_1 + 0x18));
            iVar6 = iVar6 + iVar1;
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)(uint)*pbVar8);
    }
  }
  return iVar6;
}

