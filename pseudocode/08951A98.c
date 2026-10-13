/* Entry 0x08951A98 | file offset 0x0014EA70 | FUN_08951a98 | bytes 580 */

undefined4 FUN_08951a98(undefined4 param_1,int param_2,float *param_3,float *param_4)

{
  uint *puVar1;
  float *pfVar2;
  uint uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = param_3[1];
  pfVar2 = param_4 + 4;
  fVar6 = param_3[2];
  *pfVar2 = *param_3;
  param_4[5] = fVar5;
  param_4[6] = fVar6;
  param_4[7] = 0.0;
  fVar6 = param_3[5];
  fVar5 = param_3[6];
  param_4[8] = param_3[4];
  param_4[9] = fVar6;
  param_4[10] = fVar5;
  param_4[0xb] = 0.0;
  fVar5 = param_3[9];
  fVar6 = param_3[10];
  param_4[0xc] = param_3[8];
  param_4[0xd] = fVar5;
  param_4[0xe] = fVar6;
  param_4[0xf] = 0.0;
  puVar1 = *(uint **)(param_2 + 0x98);
  if (puVar1 == (uint *)0x0) {
    fVar5 = *pfVar2;
  }
  else {
    uVar3 = *puVar1;
    if ((uVar3 & 1) != 0) {
      pfVar4 = (float *)puVar1[1];
      fVar6 = pfVar4[1];
      fVar5 = pfVar4[2];
      *pfVar2 = param_4[4] + *pfVar4;
      param_4[5] = param_4[5] + fVar6;
      param_4[6] = param_4[6] + fVar5;
      param_4[7] = 1.0;
      uVar3 = *puVar1;
    }
    if ((uVar3 & 2) != 0) {
      pfVar4 = (float *)puVar1[2];
      fVar6 = pfVar4[1];
      fVar5 = pfVar4[2];
      param_4[8] = param_4[8] + *pfVar4;
      param_4[9] = param_4[9] + fVar6;
      param_4[10] = param_4[10] + fVar5;
      param_4[0xb] = 1.0;
      uVar3 = *puVar1;
    }
    if ((uVar3 & 4) == 0) {
      fVar5 = *pfVar2;
    }
    else {
      pfVar4 = (float *)puVar1[3];
      fVar6 = pfVar4[1];
      fVar5 = pfVar4[2];
      param_4[0xc] = param_4[0xc] + *pfVar4;
      param_4[0xd] = param_4[0xd] + fVar6;
      param_4[0xe] = param_4[0xe] + fVar5;
      param_4[0xf] = 1.0;
      fVar5 = *pfVar2;
    }
  }
  *param_4 = fVar5;
  param_4[1] = param_4[5];
  param_4[2] = param_4[6];
  param_4[3] = param_4[7];
  return 1;
}

