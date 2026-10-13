/* Entry 0x0896B1BC | file offset 0x00168194 | FUN_0896b1bc | bytes 1140 */

void FUN_0896b1bc(int *param_1,int param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  iVar4 = *(int *)(param_2 + 0x8c);
  iVar9 = iVar4 + (uint)*(ushort *)
                         (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                         (*(int *)(*(int *)(param_2 + 0x90) + 4) + 1) * 2);
  pfVar10 = (float *)(iVar9 + 0x60);
  pfVar7 = *(float **)(iVar4 + 0x50);
  if ((char)param_1[0xd] == '\0') {
    local_80 = *pfVar10 * *pfVar7 + *(float *)(iVar9 + 100) * pfVar7[4] +
               *(float *)(iVar9 + 0x68) * pfVar7[8] + pfVar7[0xc];
    local_7c = *pfVar10 * pfVar7[1] + *(float *)(iVar9 + 100) * pfVar7[5] +
               *(float *)(iVar9 + 0x68) * pfVar7[9] + pfVar7[0xd];
    local_78 = *pfVar10 * pfVar7[2] + *(float *)(iVar9 + 100) * pfVar7[6] +
               *(float *)(iVar9 + 0x68) * pfVar7[10] + pfVar7[0xe];
    uVar11 = *(undefined4 *)(param_3 + 0xc);
    cVar1 = *(char *)(param_3 + 0x24);
    iVar4 = *param_1;
    local_74 = *pfVar10 * pfVar7[3] + *(float *)(iVar9 + 100) * pfVar7[7] +
               *(float *)(iVar9 + 0x68) * pfVar7[0xb] + pfVar7[0xf];
    puVar6 = (undefined4 *)param_1[1];
  }
  else {
    if (*(int *)(iVar4 + 0x1c) == 0) {
      iVar4 = *(int *)(param_2 + 0x88) + 0x50;
    }
    else {
      iVar4 = *(int *)(*(int *)(iVar4 + 0x1c) + 0x54);
    }
    FUN_0896aec0(&local_70,iVar4);
    local_80 = *pfVar10 * local_70 + *(float *)(iVar9 + 100) * local_60 +
               *(float *)(iVar9 + 0x68) * local_50 + local_40;
    local_7c = *pfVar10 * local_6c + *(float *)(iVar9 + 100) * local_5c +
               *(float *)(iVar9 + 0x68) * local_4c + local_3c;
    local_78 = *pfVar10 * local_68 + *(float *)(iVar9 + 100) * local_58 +
               *(float *)(iVar9 + 0x68) * local_48 + local_38;
    uVar11 = *(undefined4 *)(param_3 + 0xc);
    cVar1 = *(char *)(param_3 + 0x24);
    iVar4 = *param_1;
    puVar6 = (undefined4 *)param_1[1];
    local_74 = *pfVar10 * local_64 + *(float *)(iVar9 + 100) * local_54 +
               *(float *)(iVar9 + 0x68) * local_44 + local_34;
  }
  if (cVar1 == '\0') {
    iVar9 = 0;
    iVar8 = 0;
    if (0 < iVar4) {
      iVar4 = 0;
      do {
        pfVar7 = (float *)((int)puVar6 + iVar8);
        *pfVar7 = local_80;
        pfVar7[1] = local_7c;
        pfVar7[2] = local_78;
        pfVar7[3] = local_74;
        iVar9 = iVar9 + 1;
        *(undefined4 *)(param_1[2] + iVar4) = uVar11;
        iVar8 = iVar8 + 0x10;
        iVar4 = iVar4 + 4;
        puVar6 = (undefined4 *)param_1[1];
      } while (iVar9 < *param_1);
    }
    iVar4 = param_1[10];
    iVar9 = param_1[9];
  }
  else {
    uVar2 = *(ushort *)(param_3 + 0x1c);
    uVar3 = *(ushort *)(param_3 + 0x1e);
    iVar9 = 0;
    if (0 < iVar4) {
      iVar4 = 0;
      iVar8 = 0;
      do {
        pfVar7 = (float *)((int)puVar6 + iVar4);
        *pfVar7 = local_80;
        pfVar7[1] = local_7c;
        pfVar7[2] = local_78;
        pfVar7[3] = local_74;
        DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
        iVar9 = iVar9 + 1;
        pfVar7 = (float *)(param_1[2] + iVar8);
        iVar4 = iVar4 + 0x10;
        iVar8 = iVar8 + 4;
        *pfVar7 = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * ((float)uVar3 - (float)uVar2)
                  + (float)uVar2;
        puVar6 = (undefined4 *)param_1[1];
      } while (iVar9 < *param_1);
    }
    iVar4 = param_1[10];
    iVar9 = param_1[9];
  }
  iVar4 = (iVar4 + -1) % iVar4;
  param_1[5] = 1;
  param_1[0xc] = 1;
  param_1[0xb] = iVar4;
  uVar11 = puVar6[1];
  uVar13 = puVar6[2];
  puVar5 = (undefined4 *)(iVar9 + iVar4 * 0x10);
  uVar12 = puVar6[3];
  *puVar5 = *puVar6;
  puVar5[1] = uVar11;
  puVar5[2] = uVar13;
  puVar5[3] = uVar12;
  return;
}

