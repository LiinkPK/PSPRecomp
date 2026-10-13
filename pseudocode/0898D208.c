/* Entry 0x0898D208 | file offset 0x0018A1E0 | FUN_0898d208 | bytes 260 */

void FUN_0898d208(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,
                 undefined1 (*param_4) [16],undefined1 (*param_5) [16],undefined1 (*param_6) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  
  auVar14._12_4_ = 0x3f800000;
  auVar14._0_12_ = ZEXT812(0);
  auVar13._12_4_ = 0x3f800000;
  auVar13._0_12_ = ZEXT812(0);
  auVar12._12_4_ = 0x3f800000;
  auVar12._0_12_ = ZEXT812(0);
  auVar11._12_4_ = 0x3f800000;
  auVar11._0_12_ = ZEXT812(0);
  auVar10._12_4_ = 0x3f800000;
  auVar10._0_12_ = ZEXT812(0);
  auVar9._12_4_ = 0x3f800000;
  auVar9._0_12_ = ZEXT812(0);
  auVar2._12_4_ = 0x3f800000;
  auVar2._0_12_ = ZEXT812(0);
  auVar1 = vsub_q(*param_5,*param_4);
  auVar2 = vsub_q(auVar2,*param_6);
  auVar2 = vabs_q(auVar2);
  auVar4 = auVar1._0_12_;
  auVar3 = vmul_t(auVar4,auVar4);
  uVar15 = vfad_t(auVar3);
  uVar17 = vzero_s();
  uVar18 = vcmp_s(0xc,uVar15,auVar1._0_4_);
  if ((uVar18 & 1) != 0) {
    uVar17 = vrsq_s(uVar15);
  }
  vsub_q(auVar9,auVar10);
  auVar6 = auVar2._0_12_;
  auVar3 = vmul_t(auVar6,auVar6);
  uVar15 = vfad_t(auVar3);
  auVar5 = vcrsp_t(auVar4,auVar6);
  auVar3 = vscl_t(auVar4,uVar17);
  uVar17 = vzero_s();
  uVar18 = vcmp_s(0xc,uVar15,auVar1._0_4_);
  if ((uVar18 & 1) != 0) {
    uVar17 = vrsq_s(uVar15);
  }
  auVar1 = vsub_q(auVar11,auVar12);
  uVar15 = vmov_s(0);
  auVar7._12_4_ = uVar15;
  auVar7._8_4_ = auVar5._8_4_;
  auVar7._4_4_ = auVar5._4_4_;
  auVar7._0_4_ = auVar5._0_4_;
  auVar2 = vabs_q(auVar7);
  auVar5 = auVar2._0_12_;
  auVar4 = vmul_t(auVar5,auVar5);
  uVar16 = vfad_t(auVar4);
  auVar4 = vscl_t(auVar6,uVar17);
  auVar3 = vmul_t(auVar4,auVar3);
  uVar15 = vfad_t(auVar3);
  auVar1._12_4_ = auVar1._12_4_;
  auVar1._8_4_ = auVar3._8_4_;
  auVar1._4_4_ = auVar3._4_4_;
  auVar1._0_4_ = uVar15;
  vabs_q(auVar1);
  uVar15 = vzero_s();
  uVar18 = vcmp_s(0xc,uVar16,param_1);
  if ((uVar18 & 1) != 0) {
    uVar15 = vrsq_s(uVar16);
  }
  auVar1 = vsub_q(auVar13,auVar14);
  auVar3 = vscl_t(auVar5,uVar15);
  auVar8._12_4_ = auVar1._12_4_;
  auVar8._8_4_ = auVar3._8_4_;
  auVar8._4_4_ = auVar3._4_4_;
  auVar8._0_4_ = auVar3._0_4_;
  auVar1 = vscl_q(auVar8,param_1);
  auVar2 = vsub_q(*param_6,auVar1);
  auVar1 = vadd_q(*param_6,auVar1);
  *param_2 = auVar2._0_4_;
  param_2[1] = auVar2._4_4_;
  param_2[2] = auVar2._8_4_;
  *param_3 = auVar1._0_4_;
  param_3[1] = auVar1._4_4_;
  param_3[2] = auVar1._8_4_;
  return;
}

