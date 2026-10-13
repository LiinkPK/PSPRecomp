/* Entry 0x088DA520 | file offset 0x000D74F8 | FUN_088da520 | bytes 776 */

void FUN_088da520(float *param_1,int param_2)

{
  short sVar1;
  bool bVar2;
  ushort uVar3;
  short *psVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = *param_1;
  uVar3 = *(ushort *)(param_1 + 8);
  fVar6 = param_1[2] * DAT_089d7834;
  if ((uVar3 & 2) != 0) {
    fVar5 = param_1[1];
    if (fVar5 == -1.0) {
      if ((uVar3 & 4) == 0) {
        fVar7 = fVar8 + fVar6;
      }
      else {
        fVar7 = fVar8 - fVar6;
      }
      *param_1 = fVar7;
    }
    else {
      fVar7 = fVar8;
      if (fVar8 != fVar5) {
        if ((uVar3 & 4) == 0) {
          if ((fVar8 < fVar5) && (fVar8 + fVar6 <= fVar5)) {
            fVar5 = fVar8 + fVar6;
          }
          *param_1 = fVar5;
          fVar7 = fVar5;
        }
        else {
          if ((fVar5 < fVar8) && (fVar5 <= fVar8 - fVar6)) {
            fVar5 = fVar8 - fVar6;
          }
          *param_1 = fVar5;
          fVar7 = fVar5;
        }
      }
    }
    if (fVar7 <= 0.0) {
      *param_1 = 0.0;
    }
    else {
      if (*(short *)(param_2 + 6) == 0) {
        sVar1 = *(short *)(param_2 + 2);
      }
      else {
        if ((uVar3 & 0x1000) == 0) {
          if ((float)(int)*(short *)(param_2 + 6) < fVar7) {
            *(undefined2 *)((int)param_1 + 0x22) = 0xffff;
            *param_1 = (float)(int)*(short *)(param_2 + 4);
          }
          goto LAB_088da734;
        }
        sVar1 = *(short *)(param_2 + 2);
      }
      if ((float)(int)sVar1 <= fVar7) {
        if (*(short *)((int)param_1 + 0xe) == -1) {
          *param_1 = (float)(int)sVar1;
          if (((uint)param_1[8] & 0x100) != 0) {
            FUN_088da060(param_1);
            return;
          }
          *(ushort *)(param_1 + 8) = uVar3 | 0x20;
          FUN_088d9d24(param_1);
          uVar3 = *(ushort *)(param_1 + 8);
        }
        else {
          FUN_088d9f5c(param_1,(int)*(short *)((int)param_1 + 0xe),1);
          *(undefined2 *)((int)param_1 + 0xe) = 0xffff;
          uVar3 = *(ushort *)(param_1 + 8);
        }
      }
    }
  }
LAB_088da734:
  bVar2 = false;
  if ((param_1[9] != 0.0) && ((*(byte *)((int)param_1[9] + 0x14) & 0x20) != 0)) {
    bVar2 = true;
  }
  if ((uVar3 & 0x2000) == 0 && !bVar2) {
    psVar4 = *(short **)(param_2 + 0x10);
    bVar2 = false;
    if (psVar4 != (short *)0x0) {
      sVar1 = *psVar4;
      while( true ) {
        if (((fVar8 <= (float)(int)sVar1) && ((float)(int)sVar1 < *param_1)) &&
           ((float)(int)*(short *)((int)param_1 + 0x22) != *param_1)) {
          bVar2 = true;
          FUN_088a24d4(0,*(undefined4 *)(psVar4 + 2),1,0);
        }
        psVar4 = *(short **)(psVar4 + 4);
        if (psVar4 == (short *)0x0) break;
        sVar1 = *psVar4;
      }
    }
    if (bVar2) {
      *(short *)((int)param_1 + 0x22) = (short)(int)*param_1;
    }
  }
  return;
}

