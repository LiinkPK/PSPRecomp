/* Entry 0x0896891C | file offset 0x001658F4 | FUN_0896891c | bytes 744 */

void FUN_0896891c(int *param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  undefined4 *puVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  pfVar6 = *(float **)(*(int *)(param_2 + 0x8c) + 0x50);
  iVar3 = *(int *)(param_2 + 0x8c) +
          (uint)*(ushort *)
                 (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                 (*(int *)(*(int *)(param_2 + 0x90) + 4) + 1) * 2);
  pfVar4 = (float *)(iVar3 + 0x60);
  fVar11 = *pfVar4 * *pfVar6 + *(float *)(iVar3 + 100) * pfVar6[4] +
           *(float *)(iVar3 + 0x68) * pfVar6[8] + pfVar6[0xc];
  fVar9 = *pfVar4 * pfVar6[1] + *(float *)(iVar3 + 100) * pfVar6[5] +
          *(float *)(iVar3 + 0x68) * pfVar6[9] + pfVar6[0xd];
  fVar13 = *pfVar4 * pfVar6[2] + *(float *)(iVar3 + 100) * pfVar6[6] +
           *(float *)(iVar3 + 0x68) * pfVar6[10] + pfVar6[0xe];
  uVar10 = *(undefined4 *)(param_3 + 0xc);
  fVar12 = *pfVar4 * pfVar6[3] + *(float *)(iVar3 + 100) * pfVar6[7] +
           *(float *)(iVar3 + 0x68) * pfVar6[0xb] + pfVar6[0xf];
  if (*(char *)(param_3 + 0x26) == '\0') {
    iVar3 = 0;
    if (0 < *param_1) {
      iVar7 = 0;
      iVar5 = 0;
      do {
        pfVar4 = (float *)(param_1[1] + iVar7);
        *pfVar4 = fVar11;
        pfVar4[1] = fVar9;
        pfVar4[2] = fVar13;
        pfVar4[3] = fVar12;
        puVar8 = (undefined4 *)(param_1[9] + iVar7);
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        iVar3 = iVar3 + 1;
        *(undefined4 *)(param_1[2] + iVar5) = uVar10;
        iVar7 = iVar7 + 0x10;
        iVar5 = iVar5 + 4;
      } while (iVar3 < *param_1);
    }
  }
  else {
    uVar1 = *(ushort *)(param_3 + 0x20);
    uVar2 = *(ushort *)(param_3 + 0x22);
    iVar3 = 0;
    if (0 < *param_1) {
      iVar7 = 0;
      iVar5 = 0;
      do {
        pfVar4 = (float *)(param_1[1] + iVar7);
        *pfVar4 = fVar11;
        pfVar4[1] = fVar9;
        pfVar4[2] = fVar13;
        pfVar4[3] = fVar12;
        puVar8 = (undefined4 *)(param_1[9] + iVar7);
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
        iVar3 = iVar3 + 1;
        iVar7 = iVar7 + 0x10;
        *(float *)(param_1[2] + iVar5) =
             ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * ((float)uVar2 - (float)uVar1) +
             (float)uVar1;
        iVar5 = iVar5 + 4;
      } while (iVar3 < *param_1);
    }
  }
  param_1[5] = 1;
  return;
}

