/* Entry 0x089C4B3C | file offset 0x001C1B14 | FUN_089c4b3c | bytes 604 */

void FUN_089c4b3c(float param_1,float param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int local_48;
  int local_44;
  int local_38;
  int local_34;
  float local_1c [2];
  
  fVar7 = param_1 * 0.5 * param_1;
  pfVar2 = (float *)(param_3 + 0x18);
  pfVar3 = (float *)(param_3 + 0x1c);
  fVar6 = *pfVar3;
  fVar4 = *pfVar2;
  *pfVar2 = *(float *)(param_4 + 0x60) +
            ((fVar6 * param_2 + fVar4) -
            (*(float *)(param_5 + 100) * param_2 + *(float *)(param_5 + 0x60)));
  fVar5 = *(float *)(param_4 + 100) + (*pfVar3 - *(float *)(param_5 + 100));
  *pfVar3 = fVar5;
  *(float *)(param_3 + 0x14) =
       (fVar6 * param_2 * 0.5 * param_2 + fVar4 * param_2 + *(float *)(param_3 + 0x14)) -
       (fVar5 * fVar7 + *pfVar2 * param_1);
  *(float *)(param_3 + 0x10) =
       *(float *)(param_4 + 100) * fVar7 + *(float *)(param_4 + 0x60) * param_1 +
       *(float *)(param_3 + 0x14);
  local_48 = param_4;
  local_44 = param_3;
  local_38 = param_5;
  local_34 = param_3;
  FUN_089c48d0(param_1,param_2,param_3 + 0x20,&local_48,&local_38);
  *(float *)(param_3 + 0x10) =
       *(float *)(param_4 + 100) * fVar7 + *(float *)(param_4 + 0x60) * param_1 +
       *(float *)(param_3 + 0x14);
  pfVar3 = (float *)(param_4 + 0x40);
  pfVar2 = local_1c;
  uVar1 = 0;
  local_1c[0] = *(float *)(param_4 + 0x38) + *(float *)(param_3 + 8);
  local_1c[1] = *(float *)(param_4 + 0x3c) + *(float *)(param_3 + 0xc);
  do {
    fVar5 = *pfVar3;
    fVar4 = *pfVar2;
    uVar1 = uVar1 + 1;
    pfVar3 = pfVar3 + 1;
    pfVar2 = pfVar2 + 1;
    *(float *)(param_3 + 0x20) = fVar5 * fVar7 + fVar4 * param_1 + *(float *)(param_3 + 0x28);
    param_3 = param_3 + 4;
  } while (uVar1 < 2);
  return;
}

