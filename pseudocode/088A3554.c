/* Entry 0x088A3554 | file offset 0x000A052C | FUN_088a3554 | bytes 920 */

void FUN_088a3554(float *param_1)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  int iVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  
  fVar12 = 0.0;
  if ((param_1[0x15] != 0.0) && (((uint)param_1[0xd] & 0x200) != 0)) {
    iVar4 = *(int *)((int)param_1[0x15] + 0xc);
    (**(code **)(iVar4 + 0xc))((int)param_1[0x15] + (int)*(short *)(iVar4 + 8),param_1);
    iVar4 = *(int *)((int)param_1[0x15] + 0xc);
    (**(code **)(iVar4 + 0x14))((int)param_1[0x15] + (int)*(short *)(iVar4 + 0x10),param_1 + 3);
  }
  iVar4 = DAT_089d6c88;
  pfVar6 = (float *)(DAT_089d6c88 + 0x14);
  local_40 = *param_1 - *pfVar6;
  local_3c = param_1[1] - *(float *)(DAT_089d6c88 + 0x18);
  local_38 = param_1[2] - *(float *)(DAT_089d6c88 + 0x1c);
  fVar7 = (float)FUN_089a37dc(&local_40);
  if (param_1[0x13] == 0.0) {
    fVar10 = *(float *)(iVar4 + 0x50);
  }
  else if ((*(uint *)((int)param_1[0x13] + 8) & 1) == 0) {
    fVar10 = *(float *)(iVar4 + 0x50);
  }
  else {
    fVar10 = *(float *)((int)param_1[0x13] + 0xc);
  }
  fVar7 = 1.0 - fVar10 * ((fVar7 - param_1[6]) / (param_1[7] - param_1[6]));
  if (1.0 < fVar7) {
    fVar7 = 1.0;
  }
  if (fVar7 < 0.0) {
    fVar7 = 0.0;
  }
  fVar7 = fVar7 * param_1[8];
  if (param_1[0x15] != 0.0) {
    fVar7 = fVar7 * *(float *)param_1[0x15];
  }
  uVar11 = 0;
  if (((uint)param_1[0xd] & 0x20) != 0) {
    auVar3._4_4_ = local_3c;
    auVar3._0_4_ = local_40;
    auVar3._8_4_ = local_38;
    auVar2._4_4_ = local_3c;
    auVar2._0_4_ = local_40;
    auVar2._8_4_ = local_38;
    auVar1._4_4_ = local_3c;
    auVar1._0_4_ = local_40;
    auVar1._8_4_ = local_38;
    uVar11 = vdot_t(auVar1,auVar2);
    uVar15 = vzero_s();
    uVar16 = vcmp_s(8,uVar11,local_40);
    local_28 = vsqrt_s(uVar11);
    vrcp_s(local_28);
    uVar11 = vcmovt_s(uVar15,(byte)uVar16 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(auVar3,uVar11);
    local_40 = auVar1._0_4_;
    local_3c = auVar1._4_4_;
    local_38 = auVar1._8_4_;
    uVar11 = FUN_089a3718(0,iVar4 + 0x2c,&local_40);
  }
  iVar5 = *(int *)param_1[0x14];
  (**(code **)(iVar5 + 0x2c))(uVar11,fVar7,(int)param_1[0x14] + (int)*(short *)(iVar5 + 0x28));
  if (((uint)param_1[0xd] & 0x10) != 0) {
    if (param_1[0x13] == 0.0) {
      fVar7 = *(float *)(iVar4 + 0x5c);
    }
    else if ((*(uint *)((int)param_1[0x13] + 8) & 2) == 0) {
      fVar7 = *(float *)(iVar4 + 0x5c);
    }
    else {
      fVar7 = *(float *)((int)param_1[0x13] + 0x10);
    }
    if (fVar7 != 0.0) {
      local_34 = *pfVar6 - *param_1;
      local_30 = *(float *)(iVar4 + 0x18) - param_1[1];
      local_2c = *(float *)(iVar4 + 0x1c) - param_1[2];
      fVar13 = DAT_09b26b10 * 340.0;
      fVar10 = (float)FUN_089a37dc(&local_34);
      if (fVar10 != 0.0) {
        fVar8 = (float)FUN_089a3718(&local_34,iVar4 + 0x20);
        fVar14 = fVar13 / fVar7;
        if (fVar8 / fVar10 < fVar13 / fVar7) {
          fVar14 = fVar8 / fVar10;
        }
        fVar9 = (float)FUN_089a3718(&local_34,param_1 + 3);
        fVar8 = fVar13 / fVar7;
        if (fVar9 / fVar10 < fVar13 / fVar7) {
          fVar8 = fVar9 / fVar10;
        }
        fVar10 = fVar13 - fVar7 * fVar8;
        if (fVar10 != 0.0) {
          fVar12 = (fVar13 - fVar7 * fVar14) / fVar10;
        }
        fVar12 = (float)FUN_089a4704(fVar12);
        fVar12 = (float)FUN_089a4774(0x40000000,fVar12 + 12.0);
        iVar4 = (int)fVar12;
        if (iVar4 < 1) {
          iVar4 = 1;
        }
        if (0x4000 < iVar4) {
          iVar4 = 0x4000;
        }
        iVar5 = *(int *)param_1[0x14];
        (**(code **)(iVar5 + 0x34))((int)param_1[0x14] + (int)*(short *)(iVar5 + 0x30),iVar4);
      }
    }
  }
  return;
}

