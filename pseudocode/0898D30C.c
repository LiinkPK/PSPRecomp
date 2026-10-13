/* Entry 0x0898D30C | file offset 0x0018A2E4 | FUN_0898d30c | bytes 308 */

void FUN_0898d30c(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined1 (*param_7) [16],
                 undefined1 (*param_8) [16],undefined1 (*param_9) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  
  auVar12 = *param_9;
  auVar11 = *param_9;
  auVar17._12_4_ = 0x3f800000;
  auVar17._0_12_ = ZEXT812(0);
  auVar16._12_4_ = 0x3f800000;
  auVar16._0_12_ = ZEXT812(0);
  auVar15._12_4_ = 0x3f800000;
  auVar15._0_12_ = ZEXT812(0);
  auVar14._12_4_ = 0x3f800000;
  auVar14._0_12_ = ZEXT812(0);
  auVar13._12_4_ = 0x3f800000;
  auVar13._0_12_ = ZEXT812(0);
  auVar3._12_4_ = 0x3f800000;
  auVar3._0_12_ = ZEXT812(0);
  auVar2._12_4_ = 0x3f800000;
  auVar2._0_12_ = ZEXT812(0);
  auVar1 = vsub_q(*param_8,*param_7);
  auVar2 = vsub_q(auVar2,*param_9);
  auVar2 = vabs_q(auVar2);
  auVar5 = auVar1._0_12_;
  auVar4 = vmul_t(auVar5,auVar5);
  uVar18 = vfad_t(auVar4);
  uVar20 = vzero_s();
  uVar21 = vcmp_s(0xc,uVar18,auVar1._0_4_);
  if ((uVar21 & 1) != 0) {
    uVar20 = vrsq_s(uVar18);
  }
  vsub_q(auVar3,auVar13);
  auVar7 = auVar2._0_12_;
  auVar4 = vmul_t(auVar7,auVar7);
  uVar18 = vfad_t(auVar4);
  auVar6 = vcrsp_t(auVar5,auVar7);
  auVar4 = vscl_t(auVar5,uVar20);
  uVar20 = vzero_s();
  uVar21 = vcmp_s(0xc,uVar18,auVar1._0_4_);
  if ((uVar21 & 1) != 0) {
    uVar20 = vrsq_s(uVar18);
  }
  auVar1 = vsub_q(auVar14,auVar15);
  uVar18 = vmov_s(0);
  auVar8._12_4_ = uVar18;
  auVar8._8_4_ = auVar6._8_4_;
  auVar8._4_4_ = auVar6._4_4_;
  auVar8._0_4_ = auVar6._0_4_;
  auVar2 = vabs_q(auVar8);
  auVar6 = auVar2._0_12_;
  auVar5 = vmul_t(auVar6,auVar6);
  uVar19 = vfad_t(auVar5);
  auVar5 = vscl_t(auVar7,uVar20);
  auVar4 = vmul_t(auVar5,auVar4);
  uVar18 = vfad_t(auVar4);
  auVar1._12_4_ = auVar1._12_4_;
  auVar1._8_4_ = auVar4._8_4_;
  auVar1._4_4_ = auVar4._4_4_;
  auVar1._0_4_ = uVar18;
  vabs_q(auVar1);
  uVar18 = vzero_s();
  uVar21 = vcmp_s(0xc,uVar19,param_1);
  if ((uVar21 & 1) != 0) {
    uVar18 = vrsq_s(uVar19);
  }
  auVar2 = vsub_q(auVar16,auVar17);
  auVar4 = vscl_t(auVar6,uVar18);
  auVar9._12_4_ = auVar2._12_4_;
  auVar9._8_4_ = auVar4._8_4_;
  auVar9._4_4_ = auVar4._4_4_;
  auVar9._0_4_ = auVar4._0_4_;
  auVar1 = vscl_q(auVar9,param_1);
  auVar3 = vsub_q(*param_9,auVar1);
  auVar1 = vadd_q(*param_9,auVar1);
  *param_3 = auVar3._0_4_;
  param_3[1] = auVar3._4_4_;
  param_3[2] = auVar3._8_4_;
  *param_4 = auVar1._0_4_;
  param_4[1] = auVar1._4_4_;
  param_4[2] = auVar1._8_4_;
  auVar10._12_4_ = auVar2._12_4_;
  auVar10._8_4_ = auVar4._8_4_;
  auVar10._4_4_ = auVar4._4_4_;
  auVar10._0_4_ = auVar4._0_4_;
  auVar1 = vscl_q(auVar10,param_2);
  auVar2 = vsub_q(auVar11,auVar1);
  auVar1 = vadd_q(auVar12,auVar1);
  *param_5 = auVar2._0_4_;
  param_5[1] = auVar2._4_4_;
  param_5[2] = auVar2._8_4_;
  *param_6 = auVar1._0_4_;
  param_6[1] = auVar1._4_4_;
  param_6[2] = auVar1._8_4_;
  return;
}

