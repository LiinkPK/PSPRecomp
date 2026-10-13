/* Entry 0x0895F768 | file offset 0x0015C740 | FUN_0895f768 | bytes 360 */

void FUN_0895f768(float param_1,float param_2,int *param_3,int param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = param_1 * 0.5 * param_1;
  pfVar2 = (float *)(param_3 + 3);
  pfVar1 = (float *)(param_3 + 4);
  fVar6 = *pfVar1;
  fVar4 = *pfVar2;
  *pfVar2 = *(float *)(param_4 + 0x2c) +
            ((fVar6 * param_2 + fVar4) -
            (*(float *)(param_5 + 0x30) * param_2 + *(float *)(param_5 + 0x2c)));
  fVar5 = *(float *)(param_4 + 0x30) + (*pfVar1 - *(float *)(param_5 + 0x30));
  *pfVar1 = fVar5;
  param_3[2] = (int)((fVar6 * param_2 * 0.5 * param_2 + fVar4 * param_2 + (float)param_3[2]) -
                    (fVar5 * fVar3 + *pfVar2 * param_1));
  param_3[1] = (int)(*(float *)(param_4 + 0x30) * fVar3 + *(float *)(param_4 + 0x2c) * param_1 +
                    (float)param_3[2]);
  (**(code **)(*param_3 + 0x14))((int)param_3 + (int)*(short *)(*param_3 + 0x10),param_4);
  return;
}

