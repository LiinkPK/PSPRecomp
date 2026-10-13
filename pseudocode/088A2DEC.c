/* Entry 0x088A2DEC | file offset 0x0009FDC4 | FUN_088a2dec | bytes 568 */

void FUN_088a2dec(float param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  short *psVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  short local_30 [2];
  code *local_2c;
  undefined2 local_28;
  undefined2 local_26;
  code *local_24;
  
  local_30[0] = 0;
  local_30[1] = 0;
  local_2c = FUN_088a3058;
  local_28 = 0;
  local_26 = 0;
  local_24 = FUN_088a3554;
  if (((*(uint *)(param_2 + 0x34) & 4) != 0) ||
     (bVar1 = false, (*(uint *)(param_2 + 0x34) & 8) != 0)) {
    bVar1 = true;
  }
  if (!bVar1) {
    iVar2 = *(int *)(param_2 + 0x2c);
    iVar3 = param_2 + local_30[iVar2 * 4];
    pcVar6 = (&local_2c)[iVar2 * 2];
    if (local_30[iVar2 * 4 + 1] != 0) {
      psVar5 = (short *)(*(int *)(pcVar6 + iVar3) + local_30[iVar2 * 4 + 1] * 8);
      iVar3 = iVar3 + *psVar5;
      pcVar6 = *(code **)(psVar5 + 2);
    }
    (*pcVar6)(param_1,iVar3);
    pfVar4 = *(float **)(param_2 + 0x54);
    if (pfVar4 != (float *)0x0) {
      fVar7 = pfVar4[2];
      if (0.0 < fVar7) {
        fVar8 = *pfVar4 + fVar7 * param_1;
        fVar7 = pfVar4[1];
        if (fVar8 < pfVar4[1]) {
          fVar7 = fVar8;
        }
        *pfVar4 = fVar7;
      }
      else if (fVar7 < 0.0) {
        fVar8 = *pfVar4 + fVar7 * param_1;
        fVar7 = pfVar4[1];
        if (pfVar4[1] < fVar8) {
          fVar7 = fVar8;
        }
        *pfVar4 = fVar7;
      }
    }
    fVar7 = *(float *)(param_2 + 0x28);
    if (0.0 < fVar7) {
      fVar7 = *(float *)(param_2 + 0x20) + fVar7;
      fVar8 = *(float *)(param_2 + 0x24);
      if (fVar7 < *(float *)(param_2 + 0x24)) {
        fVar8 = fVar7;
      }
      *(float *)(param_2 + 0x20) = fVar8;
    }
    else if (fVar7 < 0.0) {
      fVar7 = *(float *)(param_2 + 0x20) + fVar7;
      fVar8 = *(float *)(param_2 + 0x24);
      if (*(float *)(param_2 + 0x24) < fVar7) {
        fVar8 = fVar7;
      }
      *(float *)(param_2 + 0x20) = fVar8;
    }
    if ((0.0 < *(float *)(param_2 + 0x40)) &&
       (param_1 = *(float *)(param_2 + 0x40) - param_1, *(float *)(param_2 + 0x40) = param_1,
       param_1 <= 0.0)) {
      FUN_088a1e44(0,param_2);
    }
    if (((*(uint *)(param_2 + 0x34) & 0x100) != 0) && (*(float *)(param_2 + 0x20) == 0.0)) {
      FUN_088a1e44(0,param_2);
    }
  }
  return;
}

