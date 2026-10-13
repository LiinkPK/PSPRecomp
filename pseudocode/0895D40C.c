/* Entry 0x0895D40C | file offset 0x0015A3E4 | FUN_0895d40c | bytes 604 */

void FUN_0895d40c(int *param_1,int param_2)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [64];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 (*pauVar11) [12];
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  undefined1 (*pauVar15) [12];
  float *pfVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_e0 [48];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [2] [48];
  
  iVar14 = *(int *)(DAT_09b6f478 + 0x8c);
  iVar17 = *(int *)(DAT_09b6f478 + 0xac);
  puVar10 = *(undefined1 **)
             (*(int *)(iVar14 + 0x48) +
             (uint)*(ushort *)(*(int *)(*(int *)(DAT_09b6f478 + 0x90) + 8) + 2) * 4);
  FUN_08946ac4(0x3f800000,DAT_09b6f478,iVar14,*(undefined4 *)(iVar14 + 0x50),*puVar10,puVar10[1],
               puVar10[2],auStack_e0);
  local_a4 = 0x3f800000;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  FUN_08935524(local_a0,DAT_089da278,0x40);
  pauVar11 = (undefined1 (*) [12])param_1[0x10];
  fVar18 = *(float *)(param_2 + 0x44);
  pfVar12 = (float *)param_1[0xe];
  iVar14 = *param_1;
  pfVar13 = (float *)param_1[0xd];
  for (pauVar15 = pauVar11; pauVar15 != (undefined1 (*) [12])((int)pauVar11 + iVar14 * 0x10 + 0x10);
      pauVar15 = (undefined1 (*) [12])(pauVar15[1] + 4)) {
    auVar1 = vsub_t(*pauVar15,*pauVar11);
    uVar23 = auVar1._0_4_;
    vzero_s();
    fVar19 = -auVar1._4_4_;
    auVar5._4_4_ = fVar19;
    auVar5._0_4_ = uVar23;
    auVar5._8_4_ = 0xbf800000;
    auVar4._4_4_ = fVar19;
    auVar4._0_4_ = uVar23;
    auVar4._8_4_ = 0xbf800000;
    auVar1._4_4_ = fVar19;
    auVar1._0_4_ = uVar23;
    auVar1._8_4_ = 0xbf800000;
    uVar21 = vdot_t(auVar1,auVar4);
    uVar22 = vzero_s();
    uVar23 = vcmp_s(8,uVar21,uVar23);
    vrsq_s(uVar21);
    uVar23 = vcmovt_s(uVar22,(byte)uVar23 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(auVar5,uVar23);
    vone_s();
    auVar3._60_4_ = 0x3f800000;
    auVar3._0_60_ = ZEXT4860(local_a0[0]);
    uVar23 = vone_s();
    auVar2._12_4_ = uVar23;
    auVar2._8_4_ = auVar1._8_4_;
    auVar2._4_4_ = auVar1._4_4_;
    auVar2._0_4_ = auVar1._0_4_;
    auVar2 = vtfm4_q(auVar3,auVar2);
    uVar9 = auVar2._0_8_;
    auVar8._8_4_ = 0;
    auVar8._0_8_ = uVar9;
    auVar7._8_4_ = 0;
    auVar7._0_8_ = uVar9;
    auVar6._8_4_ = 0;
    auVar6._0_8_ = uVar9;
    uVar23 = vdot_t(auVar6,auVar7);
    uVar21 = vzero_s();
    uVar22 = vcmp_s(8,uVar23,auVar2._0_4_);
    vrsq_s(uVar23);
    uVar23 = vcmovt_s(uVar21,(byte)uVar22 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(auVar8,uVar23);
    vone_s();
    *pfVar12 = (auVar1._0_4_ + 1.0) * 0.5;
    pfVar12[1] = (auVar1._4_4_ + 1.0) * 0.5;
    fVar19 = (float)*(int *)(iVar17 + 0x24);
    *pfVar12 = *pfVar12 * (fVar19 / fVar19);
    fVar19 = (float)*(int *)(iVar17 + 0x28);
    fVar19 = pfVar12[1] * (fVar19 / fVar19);
    pfVar12[1] = fVar19;
    pfVar16 = (float *)param_1[0xe];
    fVar20 = pfVar16[1];
    *pfVar13 = *pfVar16 + fVar18 * (*pfVar12 - *pfVar16);
    pfVar13[1] = pfVar16[1] + fVar18 * (fVar19 - fVar20);
    pfVar12 = pfVar12 + 2;
    pfVar13 = pfVar13 + 2;
  }
  return;
}

