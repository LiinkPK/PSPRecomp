/* Entry 0x08960844 | file offset 0x0015D81C | FUN_08960844 | bytes 908 */

void FUN_08960844(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar3 = *param_3;
  iVar4 = *param_1;
  iVar1 = param_1[2];
  iVar2 = param_1[1];
  if (*(char *)((int)param_3 + 0xe) == '\0') {
    fVar8 = (float)iVar3;
    if (iVar3 < 0) {
      fVar8 = fVar8 + 4.2949673e+09;
    }
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        iVar5 = 0;
        if (0 < iVar2) {
          do {
            fVar6 = (float)FUN_089a2db4(*(float *)(iVar4 + 0x18) * 0.017453292);
            *(float *)(iVar4 + 8) = fVar6 * (float)param_3[1];
            fVar6 = (float)FUN_089a2db4(*(float *)(iVar4 + 0x1c) * 0.017453292);
            fVar7 = *(float *)(iVar4 + 0x18) + 360.0 / fVar8;
            *(float *)(iVar4 + 0xc) = fVar6 * (float)param_3[2];
            *(float *)(iVar4 + 0x18) = fVar7;
            if (fVar7 < -180.0) {
              do {
                fVar7 = fVar7 + 360.0;
              } while (fVar7 < -180.0);
              *(float *)(iVar4 + 0x18) = fVar7;
            }
            if (180.0 < fVar7) {
              do {
                fVar7 = fVar7 - 360.0;
              } while (180.0 < fVar7);
              *(float *)(iVar4 + 0x18) = fVar7;
            }
            fVar6 = *(float *)(iVar4 + 0x1c) + 360.0 / fVar8;
            *(float *)(iVar4 + 0x1c) = fVar6;
            if (fVar6 < -180.0) {
              do {
                fVar6 = fVar6 + 360.0;
              } while (fVar6 < -180.0);
              *(float *)(iVar4 + 0x1c) = fVar6;
            }
            if (180.0 < fVar6) {
              do {
                fVar6 = fVar6 - 360.0;
              } while (180.0 < fVar6);
              *(float *)(iVar4 + 0x1c) = fVar6;
            }
            iVar2 = param_1[1];
            iVar5 = iVar5 + 1;
            iVar4 = iVar4 + 0x20;
          } while (iVar5 < iVar2);
          iVar1 = param_1[2];
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
  }
  else {
    fVar8 = (float)iVar3;
    if (iVar3 < 0) {
      fVar8 = fVar8 + 4.2949673e+09;
    }
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        iVar5 = 0;
        if (0 < iVar2) {
          do {
            *(float *)(iVar4 + 8) =
                 *(float *)(iVar4 + 8) +
                 (*(float *)(iVar4 + 0x10) - *(float *)(iVar4 + 8)) * (1.0 / fVar8);
            *(float *)(iVar4 + 0xc) =
                 *(float *)(iVar4 + 0xc) +
                 (*(float *)(iVar4 + 0x14) - *(float *)(iVar4 + 0xc)) * (1.0 / fVar8);
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            iVar5 = iVar5 + 1;
            *(float *)(iVar4 + 0x10) =
                 ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * (float)param_3[1] -
                 (float)param_3[1];
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            *(float *)(iVar4 + 0x14) =
                 ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * (float)param_3[2] -
                 (float)param_3[2];
            iVar2 = param_1[1];
            iVar4 = iVar4 + 0x20;
          } while (iVar5 < iVar2);
          iVar1 = param_1[2];
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
  }
  if (iVar2 == 2) {
    FUN_089611dc(param_1,param_2,param_3);
  }
  else if (iVar2 == 3) {
    FUN_08961460(param_1,param_2,param_3);
  }
  else {
    FUN_08960bd0(param_1,param_2,param_3);
  }
  return;
}

