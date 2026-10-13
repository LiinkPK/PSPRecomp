/* Entry 0x088C1CFC | file offset 0x000BECD4 | FUN_088c1cfc | bytes 624 */

undefined4 FUN_088c1cfc(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  short *psVar4;
  code *pcVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  int aiStack_70 [21];
  
  FUN_08935524(aiStack_70,&DAT_089d7440,0x50);
  iVar1 = FUN_088cb09c(param_3);
  *param_2 = -1;
  param_2[1] = 0;
  param_2[2] = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar6 = 0;
    iVar3 = 10000;
    do {
      psVar7 = (short *)(iVar1 + 4 + iVar6 * 8);
      if (*psVar7 != -1) {
        iVar8 = iVar3;
        if (psVar7[1] != 0) {
          iVar8 = (int)psVar7[1];
        }
        iVar9 = *param_1 * 0x343fd + 0x269ec3;
        *param_1 = iVar9;
        if ((float)(iVar9 >> 0x10 & 0x7fff) * 3.051851e-05 * (float)iVar3 <= (float)iVar8) {
          iVar1 = (int)*psVar7;
          *param_2 = iVar1;
          iVar3 = (int)param_1 + (int)(short)aiStack_70[iVar1 * 2];
          if (*(short *)((int)aiStack_70 + (iVar1 * 4 + 1) * 2) == 0) {
            pcVar5 = (code *)aiStack_70[*psVar7 * 2 + 1];
          }
          else {
            psVar4 = (short *)(*(int *)(iVar3 + aiStack_70[*psVar7 * 2 + 1]) +
                              *(short *)((int)aiStack_70 + (*psVar7 * 4 + 1) * 2) * 8);
            pcVar5 = *(code **)(psVar4 + 2);
            iVar3 = iVar3 + *psVar4;
          }
          uVar2 = (*pcVar5)(iVar3,param_2,param_4,psVar7 + 2);
          return uVar2;
        }
        iVar8 = iVar3 - psVar7[1];
        iVar3 = 1;
        if (1 < iVar8) {
          iVar3 = iVar8;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 4);
    psVar7 = (short *)(iVar1 + 4);
    if (*psVar7 == -1) {
      uVar2 = 0;
    }
    else {
      iVar3 = (int)*psVar7;
      *param_2 = iVar3;
      iVar6 = (int)param_1 + (int)(short)aiStack_70[iVar3 * 2];
      if (*(short *)((int)aiStack_70 + (iVar3 * 4 + 1) * 2) == 0) {
        pcVar5 = (code *)aiStack_70[*psVar7 * 2 + 1];
      }
      else {
        psVar7 = (short *)(*(int *)(iVar6 + aiStack_70[*psVar7 * 2 + 1]) +
                          *(short *)((int)aiStack_70 + (*psVar7 * 4 + 1) * 2) * 8);
        pcVar5 = *(code **)(psVar7 + 2);
        iVar6 = iVar6 + *psVar7;
      }
      uVar2 = (*pcVar5)(iVar6,param_2,param_4,iVar1 + 8);
    }
  }
  return uVar2;
}

