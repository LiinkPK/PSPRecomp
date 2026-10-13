/* Entry 0x089C4298 | file offset 0x001C1270 | FUN_089c4298 | bytes 816 */

float * FUN_089c4298(float *param_1,int param_2)

{
  byte bVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  float *pfVar6;
  float fVar7;
  float local_14 [5];
  
  pfVar4 = local_14;
  pfVar2 = param_1 + 0x10;
  if (*(char *)(param_2 + 0x6e) == '\0') {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
  }
  else {
    DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
    *param_1 = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * *(float *)(param_2 + 0x48)
               - *(float *)(param_2 + 0x48);
    DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
    param_1[1] = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                 *(float *)(param_2 + 0x4c) - *(float *)(param_2 + 0x4c);
    DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
    param_1[2] = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                 *(float *)(param_2 + 0x50) - *(float *)(param_2 + 0x50);
    DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
    param_1[3] = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                 *(float *)(param_2 + 0x54) - *(float *)(param_2 + 0x54);
  }
  fVar7 = *(float *)(param_2 + 0x5c);
  param_1[5] = fVar7;
  param_1[4] = fVar7;
  param_1[6] = *(float *)(param_2 + 0x60);
  param_1[7] = *(float *)(param_2 + 100);
  uVar5 = 0;
  local_14[0] = *(float *)(param_2 + 0x30) + *param_1;
  local_14[1] = *(float *)(param_2 + 0x34) + param_1[1];
  pfVar3 = pfVar4;
  pfVar6 = param_1;
  do {
    fVar7 = *pfVar3;
    uVar5 = uVar5 + 1;
    pfVar6[10] = fVar7;
    pfVar6[8] = fVar7;
    pfVar3 = pfVar3 + 1;
    pfVar6 = pfVar6 + 1;
  } while (uVar5 < 2);
  uVar5 = 0;
  local_14[0] = *(float *)(param_2 + 0x38) + param_1[2];
  local_14[1] = *(float *)(param_2 + 0x3c) + param_1[3];
  pfVar3 = param_1;
  do {
    uVar5 = uVar5 + 1;
    pfVar3[0xc] = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar3 = pfVar3 + 1;
  } while (uVar5 < 2);
  pfVar3 = (float *)(param_2 + 0x40);
  uVar5 = 0;
  pfVar4 = param_1;
  do {
    uVar5 = uVar5 + 1;
    pfVar4[0xe] = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar4 = pfVar4 + 1;
  } while (uVar5 < 2);
  param_1[0x10] = (float)&DAT_089dd0d8;
  param_1[0x11] = (float)&DAT_089dd0f0;
  param_1[0x12] = (float)&DAT_089dd108;
  bVar1 = *(byte *)(param_2 + 0x6f);
  if (((bVar1 != 0) && (pfVar2 = param_1 + 0x11, 1 < bVar1)) && (pfVar2 = (float *)0x0, bVar1 < 3))
  {
    pfVar2 = param_1 + 0x12;
  }
  param_1[0x13] = (float)pfVar2;
  param_1[0x14] = 0.0;
  param_1[0x15] = 0.0;
  param_1[0x16] = 0.0;
  param_1[0x17] = 0.0;
  return param_1;
}

