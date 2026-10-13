/* Entry 0x088127B8 | file offset 0x0000F790 | FUN_088127b8 | bytes 712 */

void FUN_088127b8(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = *(float *)(param_1 + 0x18) - *(float *)(param_2 + 0x18);
  fVar3 = *(float *)(param_1 + 0x10) - *(float *)(param_2 + 0x10);
  fVar1 = *(float *)(param_2 + 0x14) - *(float *)(param_2 + 8);
  fVar2 = *(float *)(param_1 + 0x14);
  fVar5 = fVar3 * fVar3 + fVar4 * fVar4;
  if (fVar2 < fVar1) {
    fVar1 = fVar1 - fVar2;
    if (fVar5 <= *(float *)(param_2 + 4) * *(float *)(param_2 + 4)) {
      *param_3 = 0.0;
      fVar2 = *(float *)(param_1 + 8);
      param_3[2] = 0.0;
      param_3[1] = (fVar2 - fVar1) + 0.05;
    }
    else {
      fVar2 = (float)FUN_089a2c68(fVar5);
      fVar2 = fVar2 - *(float *)(param_2 + 4);
      fVar2 = (float)FUN_089a2c68(*(float *)(param_1 + 4) * *(float *)(param_1 + 4) - fVar2 * fVar2)
      ;
      fVar3 = *(float *)(param_1 + 8);
      fVar4 = *(float *)(param_1 + 4);
      *param_3 = 0.0;
      param_3[2] = 0.0;
      param_3[1] = ((fVar2 * fVar3) / fVar4 - fVar1) + 0.05;
    }
  }
  else {
    fVar1 = *(float *)(param_2 + 0x14) + *(float *)(param_2 + 8);
    if (fVar2 <= fVar1) {
      if (0.0 < fVar5) {
        fVar1 = (float)FUN_089a2c68(fVar5);
        fVar5 = (*(float *)(param_1 + 4) + *(float *)(param_2 + 4)) - fVar1;
        fVar2 = (float)FUN_089a4500(*(float *)(param_2 + 0x14) - *(float *)(param_1 + 0x14));
        fVar2 = (*(float *)(param_1 + 8) + *(float *)(param_2 + 8)) - fVar2;
        if (fVar5 < fVar2) {
          fVar1 = -(fVar5 + 0.05) / fVar1;
          param_3[1] = 0.0;
          *param_3 = fVar1 * fVar3;
          param_3[2] = fVar1 * fVar4;
        }
        else if (*(float *)(param_1 + 0x14) < *(float *)(param_2 + 0x14)) {
          *param_3 = 0.0;
          param_3[2] = 0.0;
          param_3[1] = fVar2 + 0.05;
        }
        else {
          *param_3 = 0.0;
          param_3[2] = 0.0;
          param_3[1] = -(fVar2 + 0.05);
        }
      }
      else {
        fVar2 = *(float *)(param_1 + 4);
        fVar1 = *(float *)(param_2 + 4);
        param_3[1] = 0.0;
        param_3[2] = 0.0;
        *param_3 = fVar2 + fVar1 + 0.05;
      }
    }
    else {
      fVar2 = fVar2 - fVar1;
      if (fVar5 <= *(float *)(param_2 + 4) * *(float *)(param_2 + 4)) {
        *param_3 = 0.0;
        fVar1 = *(float *)(param_1 + 8);
        param_3[2] = 0.0;
        param_3[1] = -((fVar1 - fVar2) + 0.05);
      }
      else {
        fVar1 = (float)FUN_089a2c68(fVar5);
        fVar1 = fVar1 - *(float *)(param_2 + 4);
        fVar1 = (float)FUN_089a2c68(*(float *)(param_1 + 4) * *(float *)(param_1 + 4) -
                                    fVar1 * fVar1);
        fVar3 = *(float *)(param_1 + 8);
        fVar4 = *(float *)(param_1 + 4);
        *param_3 = 0.0;
        param_3[2] = 0.0;
        param_3[1] = -(((fVar1 * fVar3) / fVar4 - fVar2) + 0.05);
      }
    }
  }
  return;
}

