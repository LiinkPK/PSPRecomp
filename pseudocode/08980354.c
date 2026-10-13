/* Entry 0x08980354 | file offset 0x0017D32C | FUN_08980354 | bytes 320 */

void FUN_08980354(float param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5,
                 int param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  int local_28;
  int local_24;
  int local_18;
  int local_14;
  
  local_24 = *param_5;
  fVar4 = param_1 * 0.5 * param_1;
  pfVar1 = (float *)(local_24 + 0x18);
  pfVar3 = (float *)(local_24 + 0x1c);
  pfVar2 = (float *)(param_6 + 100);
  *(float *)(local_24 + 0x14) =
       *(float *)(param_4 + 0x5c) +
       ((*pfVar3 * fVar4 + *pfVar1 * param_1 + *(float *)(local_24 + 0x14)) -
       (*pfVar2 * fVar4 + *(float *)(param_6 + 0x60) * param_1 + *(float *)(param_6 + 0x5c)));
  *pfVar1 = *(float *)(param_4 + 0x60) +
            ((*pfVar3 * param_1 + *pfVar1) - (*pfVar2 * param_1 + *(float *)(param_6 + 0x60)));
  *pfVar3 = *(float *)(param_4 + 100) + (*pfVar3 - *pfVar2);
  local_28 = param_4;
  local_18 = param_6;
  local_14 = local_24;
  FUN_089c45c8(local_24 + 0x20,&local_28,&local_18);
  return;
}

