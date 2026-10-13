/* Entry 0x0896F5D0 | file offset 0x0016C5A8 | FUN_0896f5d0 | bytes 684 */

float FUN_0896f5d0(float param_1,float param_2,int param_3,undefined4 *param_4,float *param_5)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [64];
  undefined1 auVar3 [16];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  int iVar6;
  undefined1 (*pauVar7) [12];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  
  auVar2._60_4_ = *(undefined4 *)(param_3 + 0x1ac);
  auVar2._56_4_ = *(undefined4 *)(param_3 + 0x19c);
  auVar2._52_4_ = *(undefined4 *)(param_3 + 0x18c);
  auVar2._48_4_ = *(undefined4 *)(param_3 + 0x17c);
  auVar2._44_4_ = *(undefined4 *)(param_3 + 0x1a8);
  auVar2._40_4_ = *(undefined4 *)(param_3 + 0x198);
  auVar2._36_4_ = *(undefined4 *)(param_3 + 0x188);
  auVar2._32_4_ = *(undefined4 *)(param_3 + 0x178);
  auVar2._28_4_ = *(undefined4 *)(param_3 + 0x1a4);
  auVar2._24_4_ = *(undefined4 *)(param_3 + 0x194);
  auVar2._20_4_ = *(undefined4 *)(param_3 + 0x184);
  auVar2._16_4_ = *(undefined4 *)(param_3 + 0x174);
  auVar2._12_4_ = *(undefined4 *)(param_3 + 0x1a0);
  auVar2._8_4_ = *(undefined4 *)(param_3 + 400);
  auVar2._4_4_ = *(undefined4 *)(param_3 + 0x180);
  auVar2._0_4_ = *(undefined4 *)(param_3 + 0x170);
  auVar4._60_4_ = param_4[0xf];
  auVar4._56_4_ = param_4[0xb];
  auVar4._52_4_ = param_4[7];
  auVar4._48_4_ = param_4[3];
  auVar4._44_4_ = param_4[0xe];
  auVar4._40_4_ = param_4[10];
  auVar4._36_4_ = param_4[6];
  auVar4._32_4_ = param_4[2];
  auVar4._28_4_ = param_4[0xd];
  auVar4._24_4_ = param_4[9];
  auVar4._20_4_ = param_4[5];
  auVar4._16_4_ = param_4[1];
  auVar4._12_4_ = param_4[0xc];
  auVar4._8_4_ = param_4[8];
  auVar4._4_4_ = param_4[4];
  auVar4._0_4_ = *param_4;
  auVar2 = vmmul_q(auVar2,auVar4);
  iVar6 = 0;
  pauVar7 = (undefined1 (*) [12])&DAT_089da170;
  fVar9 = -100.0;
  fVar8 = 100.0;
  fVar14 = -100.0;
  fVar16 = 100.0;
  do {
    auVar1._4_4_ = param_5[1] * 0.5;
    auVar1._0_4_ = *param_5 * 0.5;
    auVar1._8_4_ = param_5[2] * 0.5;
    auVar1 = vmul_t(auVar1,*pauVar7);
    vone_s();
    auVar5._4_4_ = auVar2._16_4_;
    auVar5._0_4_ = auVar2._0_4_;
    auVar5._8_4_ = auVar2._32_4_;
    auVar5._12_4_ = auVar2._48_4_;
    auVar5._16_4_ = auVar2._4_4_;
    auVar5._20_4_ = auVar2._20_4_;
    auVar5._24_4_ = auVar2._36_4_;
    auVar5._28_4_ = auVar2._52_4_;
    auVar5._32_4_ = auVar2._8_4_;
    auVar5._36_4_ = auVar2._24_4_;
    auVar5._40_4_ = auVar2._40_4_;
    auVar5._44_4_ = auVar2._56_4_;
    auVar5._48_4_ = auVar2._12_4_;
    auVar5._52_4_ = auVar2._28_4_;
    auVar5._56_4_ = auVar2._44_4_;
    auVar5._60_4_ = auVar2._60_4_;
    uVar17 = vone_s();
    auVar3._12_4_ = uVar17;
    auVar3._8_4_ = auVar1._8_4_;
    auVar3._4_4_ = auVar1._4_4_;
    auVar3._0_4_ = auVar1._0_4_;
    auVar3 = vtfm4_q(auVar5,auVar3);
    fVar10 = fVar9;
    fVar11 = fVar8;
    fVar15 = fVar14;
    fVar12 = fVar16;
    if (auVar3._12_4_ != 0.0) {
      fVar13 = 1.0 / auVar3._12_4_;
      fVar12 = auVar3._0_4_ * fVar13;
      fVar13 = auVar3._4_4_ * fVar13;
      fVar11 = fVar12;
      if ((fVar8 <= fVar12) && (fVar10 = fVar12, fVar11 = fVar8, fVar12 <= fVar9)) {
        fVar10 = fVar9;
      }
      fVar12 = fVar13;
      if ((fVar16 <= fVar13) && (fVar15 = fVar13, fVar12 = fVar16, fVar13 <= fVar14)) {
        fVar15 = fVar14;
      }
    }
    iVar6 = iVar6 + 1;
    pauVar7 = (undefined1 (*) [12])((int)pauVar7[1] + 4);
    fVar9 = fVar10;
    fVar8 = fVar11;
    fVar14 = fVar15;
    fVar16 = fVar12;
  } while (iVar6 < 8);
  fVar8 = (float)FUN_089a2c24(fVar11 - fVar10);
  fVar9 = (float)FUN_089a2c24(fVar12 - fVar15);
  fVar9 = fVar9 * 488.0;
  if (fVar9 <= fVar8 * 512.0) {
    fVar9 = fVar8 * 512.0;
  }
  if (0.0 < fVar9) {
    if (fVar9 < param_1) {
      if (fVar9 <= param_2) {
        fVar9 = 0.0;
      }
      else {
        fVar9 = (fVar9 - param_2) / (param_1 - param_2);
      }
    }
    else {
      fVar9 = 1.0;
    }
  }
  else {
    fVar9 = 0.0;
  }
  return fVar9;
}

