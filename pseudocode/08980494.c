/* Entry 0x08980494 | file offset 0x0017D46C | FUN_08980494 | bytes 288 */

void FUN_08980494(float param_1,undefined4 param_2,uint *param_3,int param_4,int *param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_14 [5];
  
  if ((*param_3 & 1) == 0) {
    bVar1 = false;
    if (*(short *)(param_3[0x22] + 0xc) != 0) {
      bVar1 = true;
    }
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    iVar2 = *param_5;
    fVar6 = param_1 * 0.5 * param_1;
    *(float *)(iVar2 + 0x10) =
         *(float *)(param_4 + 100) * fVar6 + *(float *)(param_4 + 0x60) * param_1 +
         *(float *)(iVar2 + 0x14);
    pfVar5 = (float *)(param_4 + 0x40);
    pfVar4 = local_14;
    uVar3 = 0;
    local_14[0] = *(float *)(param_4 + 0x38) + *(float *)(iVar2 + 8);
    local_14[1] = *(float *)(param_4 + 0x3c) + *(float *)(iVar2 + 0xc);
    do {
      fVar8 = *pfVar5;
      fVar7 = *pfVar4;
      uVar3 = uVar3 + 1;
      pfVar5 = pfVar5 + 1;
      pfVar4 = pfVar4 + 1;
      *(float *)(iVar2 + 0x20) = fVar8 * fVar6 + fVar7 * param_1 + *(float *)(iVar2 + 0x28);
      iVar2 = iVar2 + 4;
    } while (uVar3 < 2);
  }
  return;
}

