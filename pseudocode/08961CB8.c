/* Entry 0x08961CB8 | file offset 0x0015EC90 | FUN_08961cb8 | bytes 804 */

undefined4 FUN_08961cb8(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  float *pfVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int local_40 [4];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  piVar5 = local_40;
  local_10 = param_4;
  local_c = param_3;
  local_8 = param_2;
  pfVar1 = (float *)FUN_08971134(*(undefined4 *)(param_2 + 0x18),8,&local_18,1);
  if (pfVar1 != (float *)0x0) {
    iVar6 = local_8 + (uint)*(ushort *)(*(int *)(*(int *)(local_8 + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(iVar6 + 0xb4) = *(int *)(iVar6 + 0xb4) + local_18;
  }
  *local_10 = (int)pfVar1;
  if (pfVar1 == (float *)0x0) {
    uVar2 = 0;
  }
  else {
    pfVar1[1] = 0.0;
    *pfVar1 = -*(float *)(*(int *)(local_8 + 0x88) + 0x160);
    iVar6 = FUN_08971134(*(undefined4 *)(local_8 + 0x18),*(int *)(local_c + 0xac) * 0x18,&local_14,1
                        );
    uVar2 = 1;
    if (iVar6 != 0) {
      local_8 = local_8 + (uint)*(ushort *)(*(int *)(*(int *)(local_8 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(local_8 + 0xb4) = *(int *)(local_8 + 0xb4) + local_14;
    }
    local_10[1] = iVar6;
    if (iVar6 == 0) {
      uVar2 = 0;
    }
    else {
      local_40[0] = local_c;
      local_40[1] = local_c;
      if (*(char *)(local_c + 0xbc) != '\0') {
        local_40[1] = local_c + 0x10;
      }
      local_40[2] = local_c;
      if (*(char *)(local_c + 0xbc) != '\0') {
        local_40[2] = local_c + 0x20;
      }
      local_40[3] = local_c;
      if (*(char *)(local_c + 0xbc) != '\0') {
        local_40[3] = local_c + 0x30;
      }
      local_30 = local_c;
      if (*(char *)(local_c + 0xbc) != '\0') {
        local_30 = local_c + 0x40;
      }
      local_2c = local_c;
      if (*(char *)(local_c + 0xbc) != '\0') {
        local_2c = local_c + 0x50;
      }
      local_28 = local_c;
      if (*(char *)(local_c + 0xbc) != '\0') {
        local_28 = local_c + 0x60;
      }
      local_24 = local_c;
      if (*(char *)(local_c + 0xbc) != '\0') {
        local_24 = local_c + 0x70;
      }
      local_20 = local_c;
      if (*(char *)(local_c + 0xbc) != '\0') {
        local_20 = local_c + 0x80;
      }
      local_1c = local_c;
      if (*(char *)(local_c + 0xbc) != '\0') {
        local_1c = local_c + 0x90;
      }
      puVar4 = (undefined4 *)local_10[1];
      uVar3 = 0;
      if (*(int *)(local_c + 0xac) != 0) {
        do {
          fVar8 = *(float *)(local_c + 0xb8);
          if (fVar8 == 0.0) {
            fVar8 = 0.0;
          }
          else {
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            fVar8 = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar8 - fVar8;
          }
          puVar4[4] = fVar8;
          fVar8 = *(float *)(local_c + 0xa8);
          if (fVar8 == 0.0) {
            fVar8 = 0.0;
          }
          else {
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            fVar8 = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar8 - fVar8;
          }
          puVar4[5] = fVar8;
          puVar7 = (undefined4 *)*piVar5;
          uVar10 = puVar7[1];
          uVar9 = puVar7[2];
          uVar11 = puVar7[3];
          *puVar4 = *puVar7;
          puVar4[1] = uVar10;
          puVar4[2] = uVar9;
          puVar4[3] = uVar11;
          uVar3 = uVar3 + 1;
          puVar4 = puVar4 + 6;
          piVar5 = piVar5 + 1;
        } while (uVar3 < *(uint *)(local_c + 0xac));
      }
    }
  }
  return uVar2;
}

