/* Entry 0x08956E48 | file offset 0x00153E20 | FUN_08956e48 | bytes 936 */

void FUN_08956e48(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6,int param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (param_7 < 1) {
    if (-1 < param_7) {
      iVar4 = DAT_089da120 * 0x343fd + 0x269ec3;
      iVar5 = iVar4 * 0x343fd + 0x269ec3;
      fVar7 = *param_2;
      DAT_089da120 = iVar5 * 0x343fd + 0x269ec3;
      uVar1 = DAT_089da120 >> 0x10;
      fVar6 = *param_4;
      fVar8 = *param_6;
      iVar2 = 0;
      pfVar3 = param_5;
      if (0 < param_8) {
        do {
          *param_1 = *param_1 + (((float)(iVar4 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar7 - fVar7);
          *param_3 = *param_3 + (((float)(iVar5 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar6 - fVar6);
          if (param_5 != (float *)0x0) {
            *pfVar3 = *pfVar3 + (((float)(uVar1 & 0x7fff) / 32767.0) * 2.0 * fVar8 - fVar8);
          }
          iVar2 = iVar2 + 1;
          param_1 = param_1 + 1;
          param_3 = param_3 + 1;
          pfVar3 = pfVar3 + 1;
        } while (iVar2 < param_8);
      }
    }
  }
  else if ((param_7 < 2) && (iVar2 = 0, pfVar3 = param_5, 0 < param_8)) {
    do {
      DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
      *param_1 = *param_1 +
                 *param_1 *
                 (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * *param_2 - *param_2) *
                 0.01;
      DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
      *param_3 = *param_3 +
                 *param_3 *
                 (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * *param_4 - *param_4) *
                 0.01;
      DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
      if (param_5 != (float *)0x0) {
        *pfVar3 = *pfVar3 + *pfVar3 * (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                                       *param_6 - *param_6) * 0.01;
        DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
      }
      *param_1 = *param_1 +
                 (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * *param_2 - *param_2);
      DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
      *param_3 = *param_3 +
                 (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * *param_4 - *param_4);
      if (param_5 != (float *)0x0) {
        DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
        *pfVar3 = *pfVar3 + (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * *param_6 -
                            *param_6);
      }
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
      param_6 = param_6 + 1;
      pfVar3 = pfVar3 + 1;
    } while (iVar2 < param_8);
  }
  return;
}

