/* Entry 0x08821DCC | file offset 0x0001EDA4 | FUN_08821dcc | bytes 1224 */

void FUN_08821dcc(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  float *pfVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  float fVar11;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  undefined4 local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 auStack_80 [16];
  int local_70;
  int local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  int local_30;
  int local_2c;
  
  iVar2 = FUN_0881baa8();
  local_d0 = *(undefined4 *)(iVar2 + 0x80);
  local_cc = *(undefined4 *)(iVar2 + 0x84);
  local_c8 = *(undefined4 *)(iVar2 + 0x88);
  local_c4 = *(undefined4 *)(iVar2 + 0x8c);
  puVar3 = (undefined4 *)FUN_0885ea90(DAT_089d5ec0 + 0x720);
  local_c0 = *puVar3;
  local_bc = puVar3[1];
  local_b8 = puVar3[2];
  local_b4 = puVar3[3];
  pfVar4 = *(float **)(param_1 + 8);
  if (((((pfVar4[3] < *pfVar4) || (pfVar4[4] < pfVar4[1])) || (pfVar4[4] < pfVar4[1])) ||
      ((pfVar4[5] < pfVar4[2] || (pfVar4[5] < pfVar4[2])))) ||
     ((iVar7 = *(int *)(*(int *)(param_1 + 8) + 0x20), iVar7 == 0 ||
      ((iVar8 = *(int *)(*(int *)(param_1 + 8) + 0x24), iVar8 == 0 ||
       (iVar9 = 0, *(char *)(param_1 + 1) < '\x01')))))) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0xc);
  while (((((int)((((int)*(char *)(iVar5 + iVar9 * 3) & 3U ^ 2) - 2) * 0x1000000) >> 0x18 != 0 ||
           (local_2c = iVar7 + iVar9 * 0x20, *(float *)(iVar2 + 0xe0) < *(float *)(local_2c + 8)))
          || (*(float *)(local_2c + 0x14) < *(float *)(iVar2 + 0xd0))) ||
         (((*(float *)(iVar2 + 0xe4) < *(float *)(local_2c + 0xc) ||
           (*(float *)(local_2c + 0x18) < *(float *)(iVar2 + 0xd4))) ||
          ((*(float *)(iVar2 + 0xe8) < *(float *)(local_2c + 0x10) ||
           ((*(float *)(local_2c + 0x1c) < *(float *)(iVar2 + 0xd8) ||
            (local_30 = 0, *(short *)(local_2c + 2) < 1))))))))) {
LAB_08822250:
    iVar9 = iVar9 + 1;
    if (*(char *)(param_1 + 1) <= iVar9) {
      return;
    }
    iVar5 = *(int *)(param_1 + 0xc);
  }
  sVar1 = *(short *)(local_2c + 4);
  do {
    piVar10 = (int *)(iVar8 + (sVar1 + local_30) * 0x24);
    local_b0 = piVar10[5];
    local_ac = piVar10[6];
    local_a8 = piVar10[7];
    local_44 = 0x3f800000;
    local_64 = 0x3f800000;
    local_a4 = 0x3f800000;
    local_94 = *(undefined4 *)(*piVar10 + 0x18);
    if ((char)piVar10[8] != '\0') {
      local_a0 = local_b0;
      local_9c = local_ac;
      local_98 = local_a8;
      local_70 = local_b0;
      local_6c = local_ac;
      local_68 = local_a8;
      local_50 = local_b0;
      local_4c = local_ac;
      local_48 = local_a8;
      FUN_0886871c(&local_60,&local_d0,&local_c0,&local_b0);
      local_90 = local_60;
      local_8c = local_5c;
      local_88 = local_58;
      local_84 = local_54;
      FUN_089a38fc(auStack_80,&local_90,&local_b0);
      fVar11 = (float)FUN_089a3bf8(auStack_80);
      if (fVar11 < *(float *)(*piVar10 + 0x18)) {
        pbVar6 = (byte *)(*(int *)(param_1 + 0xc) + iVar9 * 3);
        *pbVar6 = *pbVar6 & 0xfc | 1;
        if ((int)((((int)*(char *)(param_1 + 0x10) & 3U ^ 2) - 2) * 0x1000000) >> 0x18 == 0) {
          *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfc | 1;
        }
        goto LAB_08822250;
      }
    }
    local_30 = local_30 + 1;
    if (*(short *)(local_2c + 2) <= local_30) goto LAB_08822250;
    sVar1 = *(short *)(local_2c + 4);
  } while( true );
}

