/* Entry 0x08968CC4 | file offset 0x00165C9C | FUN_08968cc4 | bytes 1252 */

void FUN_08968cc4(int *param_1,int param_2,undefined4 *param_3)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 (*pauVar8) [64];
  undefined1 (*pauVar9) [12];
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  undefined1 (*pauVar14) [12];
  int iVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  *(bool *)(param_1 + 6) = *(char *)((int)param_3 + 0x27) != '\0';
  pauVar8 = *(undefined1 (**) [64])(*(int *)(param_2 + 0x8c) + 0x50);
  iVar10 = *(int *)(param_2 + 0x8c) +
           (uint)*(ushort *)
                  (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                  (*(int *)(*(int *)(param_2 + 0x90) + 4) + 1) * 2);
  uVar19 = vone_s();
  auVar3._12_4_ = uVar19;
  auVar3._8_4_ = *(undefined4 *)(iVar10 + 0x68);
  auVar3._4_4_ = *(undefined4 *)(iVar10 + 100);
  auVar3._0_4_ = *(undefined4 *)(iVar10 + 0x60);
  auVar3 = vtfm4_q(*pauVar8,auVar3);
  puVar11 = (undefined4 *)param_1[9];
  auVar1 = vsub_t(auVar3._0_12_,*(undefined1 (*) [12])param_1[1]);
  uVar19 = vzero_s();
  *puVar11 = auVar1._0_4_;
  puVar11[1] = auVar1._4_4_;
  puVar11[2] = auVar1._8_4_;
  puVar11[3] = uVar19;
  puVar11 = (undefined4 *)param_1[1];
  *puVar11 = auVar3._0_4_;
  puVar11[1] = auVar3._4_4_;
  puVar11[2] = auVar3._8_4_;
  puVar11[3] = auVar3._12_4_;
  fVar16 = (float)param_3[7];
  iVar12 = 0;
  iVar10 = 1;
  if (1 < *param_1) {
    iVar15 = 0x10;
    iVar13 = 4;
    do {
      iVar12 = iVar12 + 1;
      pauVar14 = (undefined1 (*) [12])(param_1[1] + iVar15);
      if (param_1[5] <= iVar12) {
        auVar1 = vsub_t(*(undefined1 (*) [12])(param_1[1] + iVar15 + -0x10),*pauVar14);
        uVar19 = vdot_t(auVar1,auVar1);
        fVar17 = (float)vsqrt_s(uVar19);
        if (fVar17 < *(float *)(param_1[2] + iVar13)) {
          param_1[7] = (int)(fVar17 / *(float *)(param_1[2] + iVar13));
          break;
        }
        param_1[7] = 0x3f800000;
        param_1[5] = param_1[5] + 1;
      }
      auVar1 = vadd_t(*pauVar14,*(undefined1 (*) [12])(param_1[9] + iVar15));
      vone_s();
      auVar2 = vsub_t(auVar1,*(undefined1 (*) [12])(param_1[1] + iVar15 + -0x10));
      vzero_s();
      uVar19 = vdot_t(auVar2,auVar2);
      uVar18 = vzero_s();
      uVar20 = vcmp_s(8,uVar19,auVar2._0_4_);
      vrsq_s(uVar19);
      uVar19 = vcmovt_s(uVar18,(byte)uVar20 & 1);
      vpfxd(4,4,4,5);
      auVar2 = vscl_t(auVar2,uVar19);
      vone_s();
      auVar2 = vscl_t(auVar2,*(undefined4 *)(param_1[2] + iVar13 + -4));
      vzero_s();
      auVar2 = vadd_t(*(undefined1 (*) [12])(param_1[1] + iVar15 + -0x10),auVar2);
      uVar19 = vone_s();
      auVar1 = vsub_t(auVar2,auVar1);
      vzero_s();
      auVar1 = vscl_t(auVar1,fVar16 * 0.2);
      vzero_s();
      pauVar9 = (undefined1 (*) [12])(param_1[9] + iVar15);
      auVar1 = vadd_t(*pauVar9,auVar1);
      uVar18 = vone_s();
      *(int *)*pauVar9 = auVar1._0_4_;
      *(int *)(*pauVar9 + 4) = auVar1._4_4_;
      *(int *)(*pauVar9 + 8) = auVar1._8_4_;
      *(undefined4 *)pauVar9[1] = uVar18;
      *(int *)*pauVar14 = auVar2._0_4_;
      *(int *)(*pauVar14 + 4) = auVar2._4_4_;
      *(int *)(*pauVar14 + 8) = auVar2._8_4_;
      *(undefined4 *)pauVar14[1] = uVar19;
      iVar10 = iVar10 + 1;
      iVar15 = iVar15 + 0x10;
      iVar13 = iVar13 + 4;
    } while (iVar10 < *param_1);
  }
  if (*(char *)((int)param_3 + 0x27) != '\0') {
    auVar6._60_4_ = 0x3f800000;
    auVar6._0_60_ = ZEXT4860(*(undefined1 (*) [48])*pauVar8);
    uVar19 = vone_s();
    auVar4._12_4_ = uVar19;
    auVar4._8_4_ = -(float)param_3[2];
    auVar4._4_4_ = -(float)param_3[1];
    auVar4._0_4_ = *param_3;
    auVar3 = vtfm4_q(auVar6,auVar4);
    auVar7._60_4_ = 0x3f800000;
    auVar7._0_60_ = ZEXT4860(*(undefined1 (*) [48])*pauVar8);
    uVar19 = vone_s();
    auVar5._12_4_ = uVar19;
    auVar5._8_4_ = -(float)param_3[6];
    auVar5._4_4_ = -(float)param_3[5];
    auVar5._0_4_ = param_3[4];
    auVar4 = vtfm4_q(auVar7,auVar5);
    iVar12 = 0;
    iVar10 = 0;
    if (0 < *param_1) {
      do {
        puVar11 = (undefined4 *)(param_1[3] + iVar10);
        auVar1 = vadd_t(*(undefined1 (*) [12])(param_1[1] + iVar10),auVar3._0_12_);
        uVar19 = vone_s();
        *puVar11 = auVar1._0_4_;
        puVar11[1] = auVar1._4_4_;
        puVar11[2] = auVar1._8_4_;
        puVar11[3] = uVar19;
        puVar11 = (undefined4 *)(param_1[4] + iVar10);
        auVar1 = vadd_t(*(undefined1 (*) [12])(param_1[1] + iVar10),auVar4._0_12_);
        uVar19 = vone_s();
        *puVar11 = auVar1._0_4_;
        puVar11[1] = auVar1._4_4_;
        puVar11[2] = auVar1._8_4_;
        puVar11[3] = uVar19;
        iVar12 = iVar12 + 1;
        iVar10 = iVar10 + 0x10;
      } while (iVar12 < *param_1);
    }
  }
  return;
}

