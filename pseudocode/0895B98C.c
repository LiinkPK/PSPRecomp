/* Entry 0x0895B98C | file offset 0x00158964 | FUN_0895b98c | bytes 1096 */

void FUN_0895b98c(int param_1,int param_2,short *param_3,undefined4 param_4)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [64];
  undefined1 auVar3 [16];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  int iVar6;
  undefined1 *puVar7;
  float *pfVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float local_70;
  float local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  
  iVar9 = *(int *)(param_2 + 0xac);
  if ((char)param_3[9] == '\x01') {
    *(undefined4 *)(iVar9 + 0x40) = 1;
  }
  else {
    *(undefined4 *)(iVar9 + 0x40) = 0;
  }
  fVar15 = (float)*(int *)(iVar9 + 0x24);
  local_44 = fVar15 / (float)*(int *)(iVar9 + 0x14);
  fVar14 = (float)*(int *)(iVar9 + 0x28);
  local_48 = fVar14 / (float)*(int *)(iVar9 + 0x14);
  local_50 = (float)(*(int *)(iVar9 + 0x24) + -1);
  fVar12 = local_50 * 0.5;
  local_4c = (float)(*(int *)(iVar9 + 0x28) + -1);
  fVar11 = local_4c * 0.5;
  if ((char)param_3[6] == '\0') {
    iVar6 = *(int *)(param_2 + 0x8c);
    puVar7 = *(undefined1 **)
              (*(int *)(iVar6 + 0x48) +
              (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x90) + 8) + 2) * 4);
    FUN_08946ac4(0x3f800000,param_2,iVar6,*(undefined4 *)(iVar6 + 0x50),*puVar7,puVar7[1],puVar7[2],
                 &local_b0);
    auVar2._60_4_ = DAT_089da284[0xf];
    auVar2._56_4_ = DAT_089da284[0xb];
    auVar2._52_4_ = DAT_089da284[7];
    auVar2._48_4_ = DAT_089da284[3];
    auVar2._44_4_ = DAT_089da284[0xe];
    auVar2._40_4_ = DAT_089da284[10];
    auVar2._36_4_ = DAT_089da284[6];
    auVar2._32_4_ = DAT_089da284[2];
    auVar2._28_4_ = DAT_089da284[0xd];
    auVar2._24_4_ = DAT_089da284[9];
    auVar2._20_4_ = DAT_089da284[5];
    auVar2._16_4_ = DAT_089da284[1];
    auVar2._12_4_ = DAT_089da284[0xc];
    auVar2._8_4_ = DAT_089da284[8];
    auVar2._4_4_ = DAT_089da284[4];
    auVar2._0_4_ = *DAT_089da284;
    auVar4._60_4_ = uStack_74;
    auVar4._56_4_ = uStack_84;
    auVar4._52_4_ = uStack_94;
    auVar4._48_4_ = uStack_a4;
    auVar4._44_4_ = uStack_78;
    auVar4._40_4_ = uStack_88;
    auVar4._36_4_ = uStack_98;
    auVar4._32_4_ = uStack_a8;
    auVar4._28_4_ = uStack_7c;
    auVar4._24_4_ = uStack_8c;
    auVar4._20_4_ = uStack_9c;
    auVar4._16_4_ = uStack_ac;
    auVar4._12_4_ = local_80;
    auVar4._8_4_ = local_90;
    auVar4._4_4_ = local_a0;
    auVar4._0_4_ = local_b0;
    auVar2 = vmmul_q(auVar2,auVar4);
    local_b0 = auVar2._0_4_;
    local_a0 = auVar2._4_4_;
    local_90 = auVar2._8_4_;
    local_80 = auVar2._12_4_;
    uStack_ac = auVar2._16_4_;
    uStack_9c = auVar2._20_4_;
    uStack_8c = auVar2._24_4_;
    uStack_7c = auVar2._28_4_;
    uStack_a8 = auVar2._32_4_;
    uStack_98 = auVar2._36_4_;
    uStack_88 = auVar2._40_4_;
    uStack_78 = auVar2._44_4_;
    uStack_a4 = auVar2._48_4_;
    uStack_94 = auVar2._52_4_;
    uStack_84 = auVar2._56_4_;
    uStack_74 = auVar2._60_4_;
    auVar5._4_4_ = uStack_ac;
    auVar5._0_4_ = local_b0;
    auVar5._8_4_ = uStack_a8;
    auVar5._12_4_ = uStack_a4;
    auVar5._16_4_ = local_a0;
    auVar5._20_4_ = uStack_9c;
    auVar5._24_4_ = uStack_98;
    auVar5._28_4_ = uStack_94;
    auVar5._32_4_ = local_90;
    auVar5._36_4_ = uStack_8c;
    auVar5._40_4_ = uStack_88;
    auVar5._44_4_ = uStack_84;
    auVar5._48_4_ = local_80;
    auVar5._52_4_ = uStack_7c;
    auVar5._56_4_ = uStack_78;
    auVar5._60_4_ = uStack_74;
    uVar16 = vone_s();
    auVar3._12_4_ = uVar16;
    auVar3._8_4_ = DAT_089da018;
    auVar3._4_4_ = DAT_089da014;
    auVar3._0_4_ = DAT_089da010;
    auVar3 = vtfm4_q(auVar5,auVar3);
    local_6c = auVar3._4_4_;
    uStack_68 = auVar3._8_4_;
    uStack_64 = auVar3._12_4_;
    uVar17 = vcmp_s(8,uStack_64,local_b0);
    if ((uVar17 & 1) == 0) {
      uStack_64 = vrcp_s(uStack_64);
      auVar1 = vscl_t(auVar3._0_12_,uStack_64);
      local_70 = auVar1._0_4_;
      local_6c = auVar1._4_4_;
      uStack_68 = auVar1._8_4_;
    }
    else {
      local_70 = (float)vzero_s();
    }
    fVar10 = local_70 * fVar15 * 0.5;
    fVar11 = fVar11 - local_6c * fVar14 * 0.5;
  }
  else {
    fVar10 = (float)(int)*param_3;
    fVar11 = fVar11 + (float)(int)param_3[1];
  }
  fVar12 = fVar12 + fVar10;
  if (fVar12 < 0.0) {
    fVar10 = 0.0;
  }
  else {
    fVar10 = local_50;
    if (fVar12 <= local_50) {
      fVar10 = fVar12;
    }
  }
  if (fVar11 < 0.0) {
    fVar12 = 0.0;
  }
  else {
    fVar12 = local_4c;
    if (fVar11 <= local_4c) goto LAB_0895bbdc;
  }
  fVar11 = fVar12;
LAB_0895bbdc:
  local_3c = 0.0;
  local_40 = local_4c;
  local_38 = -fVar11;
  fVar12 = (float)FUN_0895b774(param_4);
  fVar13 = -(((fVar12 * -fVar10) / (fVar15 * 0.5)) * local_44);
  fVar15 = fVar15 - ((fVar12 * ((fVar15 - 1.0) - fVar10)) / (fVar15 * 0.5)) * local_44;
  fVar10 = -(((fVar12 * local_38) / (fVar14 * 0.5)) * local_48);
  fVar14 = fVar14 - ((fVar12 * ((fVar14 - 1.0) - fVar11)) / (fVar14 * 0.5)) * local_48;
  fVar11 = local_3c;
  if ((local_3c <= fVar13) && (fVar11 = local_50, fVar13 <= local_50)) {
    fVar11 = fVar13;
  }
  fVar12 = local_3c;
  if ((local_3c <= fVar15) && (fVar12 = local_50, fVar15 <= local_50)) {
    fVar12 = fVar15;
  }
  fVar15 = local_3c;
  if ((local_3c <= fVar10) && (fVar15 = local_40, fVar10 <= local_40)) {
    fVar15 = fVar10;
  }
  if ((local_3c <= fVar14) && (local_3c = local_40, fVar14 <= local_40)) {
    local_3c = fVar14;
  }
  fVar11 = fVar11 / (float)*(int *)(iVar9 + 0x24);
  iVar6 = *(int *)(iVar9 + 0x28);
  fVar14 = fVar12 / (float)*(int *)(iVar9 + 0x24) - fVar11;
  pfVar8 = *(float **)(param_1 + *(int *)(param_1 + 8) * 4);
  iVar9 = 0;
  do {
    *pfVar8 = fVar11;
    pfVar8[1] = fVar15 / (float)iVar6;
    pfVar8[5] = fVar11;
    pfVar8[6] = local_3c / (float)iVar6;
    fVar11 = fVar11 + fVar14 * 0.25;
    pfVar8 = pfVar8 + 10;
    iVar9 = iVar9 + 1;
  } while (iVar9 < 5);
  return;
}

