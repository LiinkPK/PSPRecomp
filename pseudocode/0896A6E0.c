/* Entry 0x0896A6E0 | file offset 0x001676B8 | FUN_0896a6e0 | bytes 976 */

void FUN_0896a6e0(int *param_1,int param_2,undefined4 *param_3)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  int iVar7;
  int iVar8;
  undefined1 (*pauVar9) [64];
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  undefined1 (*pauVar13) [12];
  undefined1 (*pauVar14) [12];
  int iVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  iVar8 = *(int *)(DAT_09b6f478 + 0x8c) +
          (uint)*(ushort *)
                 (*(int *)(*(int *)(DAT_09b6f478 + 0x90) + 8) +
                 (*(int *)(*(int *)(DAT_09b6f478 + 0x90) + 4) + 1) * 2);
  *(bool *)(param_1 + 6) = *(char *)((int)param_3 + 0x23) != '\0';
  pauVar9 = *(undefined1 (**) [64])(*(int *)(param_2 + 0x8c) + 0x50);
  puVar10 = (undefined4 *)param_1[1];
  uVar18 = vone_s();
  auVar2._12_4_ = uVar18;
  auVar2._8_4_ = *(undefined4 *)(iVar8 + 0x68);
  auVar2._4_4_ = *(undefined4 *)(iVar8 + 100);
  auVar2._0_4_ = *(undefined4 *)(iVar8 + 0x60);
  auVar2 = vtfm4_q(*pauVar9,auVar2);
  *puVar10 = auVar2._0_4_;
  puVar10[1] = auVar2._4_4_;
  puVar10[2] = auVar2._8_4_;
  puVar10[3] = auVar2._12_4_;
  iVar11 = 0;
  iVar8 = 0;
  if (0 < *param_1 + -1) {
    iVar15 = 0;
    iVar7 = 0;
    do {
      pauVar14 = (undefined1 (*) [12])(param_1[1] + iVar15);
      iVar12 = param_1[1] + iVar15;
      iVar11 = iVar11 + 1;
      pauVar13 = (undefined1 (*) [12])(iVar12 + 0x10);
      if (param_1[5] <= iVar11) {
        auVar1 = vsub_t(*pauVar14,*pauVar13);
        uVar18 = vdot_t(auVar1,auVar1);
        fVar16 = (float)vsqrt_s(uVar18);
        if (fVar16 < *(float *)(param_1[2] + iVar7)) {
          param_1[7] = (int)(fVar16 / *(float *)(param_1[2] + iVar7));
          break;
        }
        param_1[7] = 0x3f800000;
        param_1[5] = param_1[5] + 1;
      }
      auVar1 = vsub_t(*pauVar13,*pauVar14);
      vzero_s();
      uVar18 = vdot_t(auVar1,auVar1);
      uVar17 = vzero_s();
      uVar19 = vcmp_s(8,uVar18,auVar1._0_4_);
      vrsq_s(uVar18);
      uVar18 = vcmovt_s(uVar17,(byte)uVar19 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(auVar1,uVar18);
      vone_s();
      auVar1 = vscl_t(auVar1,*(undefined4 *)(param_1[2] + iVar7));
      vzero_s();
      auVar1 = vadd_t(*pauVar14,auVar1);
      uVar18 = vone_s();
      *(int *)*pauVar13 = auVar1._0_4_;
      *(int *)(iVar12 + 0x14) = auVar1._4_4_;
      *(int *)(iVar12 + 0x18) = auVar1._8_4_;
      *(undefined4 *)(iVar12 + 0x1c) = uVar18;
      iVar8 = iVar8 + 1;
      iVar15 = iVar15 + 0x10;
      iVar7 = iVar7 + 4;
    } while (iVar8 < *param_1 + -1);
  }
  if (*(char *)((int)param_3 + 0x23) != '\0') {
    auVar5._60_4_ = 0x3f800000;
    auVar5._0_60_ = ZEXT4860(*(undefined1 (*) [48])*pauVar9);
    uVar18 = vone_s();
    auVar3._12_4_ = uVar18;
    auVar3._8_4_ = -(float)param_3[2];
    auVar3._4_4_ = -(float)param_3[1];
    auVar3._0_4_ = *param_3;
    auVar2 = vtfm4_q(auVar5,auVar3);
    auVar6._60_4_ = 0x3f800000;
    auVar6._0_60_ = ZEXT4860(*(undefined1 (*) [48])*pauVar9);
    uVar18 = vone_s();
    auVar4._12_4_ = uVar18;
    auVar4._8_4_ = -(float)param_3[6];
    auVar4._4_4_ = -(float)param_3[5];
    auVar4._0_4_ = param_3[4];
    auVar3 = vtfm4_q(auVar6,auVar4);
    iVar11 = 0;
    iVar8 = 0;
    if (0 < *param_1) {
      do {
        puVar10 = (undefined4 *)(param_1[3] + iVar8);
        auVar1 = vadd_t(*(undefined1 (*) [12])(param_1[1] + iVar8),auVar2._0_12_);
        uVar18 = vone_s();
        *puVar10 = auVar1._0_4_;
        puVar10[1] = auVar1._4_4_;
        puVar10[2] = auVar1._8_4_;
        puVar10[3] = uVar18;
        puVar10 = (undefined4 *)(param_1[4] + iVar8);
        auVar1 = vadd_t(*(undefined1 (*) [12])(param_1[1] + iVar8),auVar3._0_12_);
        uVar18 = vone_s();
        *puVar10 = auVar1._0_4_;
        puVar10[1] = auVar1._4_4_;
        puVar10[2] = auVar1._8_4_;
        puVar10[3] = uVar18;
        iVar11 = iVar11 + 1;
        iVar8 = iVar8 + 0x10;
      } while (iVar11 < *param_1);
    }
  }
  return;
}

