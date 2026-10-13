/* Entry 0x0896E628 | file offset 0x0016B600 | FUN_0896e628 | bytes 740 */

void FUN_0896e628(undefined4 param_1,float *param_2,float *param_3)

{
  byte bVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float local_40 [16];
  
  pfVar3 = local_40;
  iVar2 = 0;
  pfVar4 = param_2;
  do {
    bVar1 = *(byte *)((int)param_2 + (uint)(byte)(&DAT_089da108)[iVar2]);
    fVar5 = *pfVar4;
    if (bVar1 < 2) {
      DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
      if (bVar1 == 0) {
        fVar5 = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar5 - fVar5;
      }
      else {
        fVar5 = fVar5 * 0.5;
        fVar5 = (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar5 - fVar5) + fVar5;
      }
    }
    else if (bVar1 < 3) {
      fVar5 = fVar5 * 0.5;
      DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
      fVar5 = (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar5 - fVar5) - fVar5;
    }
    else if (bVar1 < 4) {
      fVar5 = 0.0;
    }
    *pfVar3 = fVar5;
    iVar2 = iVar2 + 1;
    pfVar4 = pfVar4 + 1;
    pfVar3 = pfVar3 + 1;
  } while (iVar2 < 3);
  bVar1 = *(byte *)(param_2 + 3);
  if (bVar1 == 0) {
    param_3[4] = param_3[4] + local_40[0];
    param_3[5] = param_3[5] + local_40[1];
    param_3[6] = param_3[6] + local_40[2];
    param_3[7] = 1.0;
    param_3[3] = 1.0;
    *param_3 = param_3[4] * 0.01;
    param_3[1] = param_3[4] * 0.01;
    param_3[2] = param_3[4] * 0.01;
  }
  else if (bVar1 < 2) {
    param_3[8] = param_3[8] + local_40[0];
    param_3[9] = param_3[9] + local_40[1];
    param_3[10] = param_3[10] + local_40[2];
    param_3[0xb] = 1.0;
  }
  else if (bVar1 < 3) {
    param_3[0xc] = param_3[0xc] + local_40[0];
    param_3[0xd] = param_3[0xd] + local_40[1];
    param_3[0xe] = param_3[0xe] + local_40[2];
    param_3[0xf] = 1.0;
  }
  return;
}

