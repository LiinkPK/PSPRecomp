/* Entry 0x0894CBA8 | file offset 0x00149B80 | FUN_0894cba8 | bytes 1008 */

void FUN_0894cba8(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 auVar1 [36];
  undefined1 auVar2 [64];
  undefined1 auVar3 [64];
  undefined1 auVar5 [64];
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  float *pfVar21;
  float fVar22;
  float in_V0C;
  float in_V0D;
  float in_V0E;
  undefined1 auVar4 [64];
  
  if (param_3 == 0) {
    iVar20 = 0;
  }
  else {
    iVar20 = *(int *)(param_3 + 0x1c);
  }
  pfVar21 = *(float **)(param_2 + 0x54);
  switch(param_4) {
  case 2:
  case 6:
  case 7:
  case 8:
    if (param_3 == 0) {
      FUN_08935524(pfVar21,*(int *)(param_1 + 0x88) + 0x50,0x40);
    }
    else if ('\x05' < *(char *)(param_1 + 0x94)) {
      if (iVar20 == 0) {
        if (*(int *)(param_3 + 0x50) == 0) {
          FUN_08935524(pfVar21,*(int *)(param_1 + 0x88) + 0x50,0x40);
        }
        else {
          iVar20 = *(int *)(param_1 + 0x88);
          puVar6 = *(undefined4 **)(param_3 + 0x50);
          in_V0C = *(float *)(iVar20 + 0x5c);
          in_V0D = *(float *)(iVar20 + 0x6c);
          in_V0E = *(float *)(iVar20 + 0x7c);
          auVar2._60_4_ = *(undefined4 *)(iVar20 + 0x8c);
          auVar2._56_4_ = in_V0E;
          auVar2._52_4_ = in_V0D;
          auVar2._48_4_ = in_V0C;
          auVar2._44_4_ = *(undefined4 *)(iVar20 + 0x88);
          auVar2._40_4_ = *(undefined4 *)(iVar20 + 0x78);
          auVar2._36_4_ = *(undefined4 *)(iVar20 + 0x68);
          auVar2._32_4_ = *(undefined4 *)(iVar20 + 0x58);
          auVar2._28_4_ = *(undefined4 *)(iVar20 + 0x84);
          auVar2._24_4_ = *(undefined4 *)(iVar20 + 0x74);
          auVar2._20_4_ = *(undefined4 *)(iVar20 + 100);
          auVar2._16_4_ = *(undefined4 *)(iVar20 + 0x54);
          auVar2._12_4_ = *(undefined4 *)(iVar20 + 0x80);
          auVar2._8_4_ = *(undefined4 *)(iVar20 + 0x70);
          auVar2._4_4_ = *(undefined4 *)(iVar20 + 0x60);
          auVar2._0_4_ = *(undefined4 *)(iVar20 + 0x50);
          auVar5._60_4_ = puVar6[0xf];
          auVar5._56_4_ = puVar6[0xb];
          auVar5._52_4_ = puVar6[7];
          auVar5._48_4_ = puVar6[3];
          auVar5._44_4_ = puVar6[0xe];
          auVar5._40_4_ = puVar6[10];
          auVar5._36_4_ = puVar6[6];
          auVar5._32_4_ = puVar6[2];
          auVar5._28_4_ = puVar6[0xd];
          auVar5._24_4_ = puVar6[9];
          auVar5._20_4_ = puVar6[5];
          auVar5._16_4_ = puVar6[1];
          auVar5._12_4_ = puVar6[0xc];
          auVar5._8_4_ = puVar6[8];
          auVar5._4_4_ = puVar6[4];
          auVar5._0_4_ = *puVar6;
          auVar2 = vmmul_q(auVar2,auVar5);
          *pfVar21 = auVar2._0_4_;
          pfVar21[1] = auVar2._16_4_;
          pfVar21[2] = auVar2._32_4_;
          pfVar21[3] = auVar2._48_4_;
          pfVar21[4] = auVar2._4_4_;
          pfVar21[5] = auVar2._20_4_;
          pfVar21[6] = auVar2._36_4_;
          pfVar21[7] = auVar2._52_4_;
          pfVar21[8] = auVar2._8_4_;
          pfVar21[9] = auVar2._24_4_;
          pfVar21[10] = auVar2._40_4_;
          pfVar21[0xb] = auVar2._56_4_;
          pfVar21[0xc] = auVar2._12_4_;
          pfVar21[0xd] = auVar2._28_4_;
          pfVar21[0xe] = auVar2._44_4_;
          pfVar21[0xf] = auVar2._60_4_;
        }
      }
      else if (*(int *)(param_3 + 0x50) == 0) {
        FUN_08935524(pfVar21,*(undefined4 *)(iVar20 + 0x54),0x40);
      }
      else {
        puVar6 = *(undefined4 **)(iVar20 + 0x54);
        puVar12 = *(undefined4 **)(param_3 + 0x50);
        in_V0C = (float)puVar6[3];
        in_V0D = (float)puVar6[7];
        in_V0E = (float)puVar6[0xb];
        auVar3._60_4_ = puVar6[0xf];
        auVar3._56_4_ = in_V0E;
        auVar3._52_4_ = in_V0D;
        auVar3._48_4_ = in_V0C;
        auVar3._44_4_ = puVar6[0xe];
        auVar3._40_4_ = puVar6[10];
        auVar3._36_4_ = puVar6[6];
        auVar3._32_4_ = puVar6[2];
        auVar3._28_4_ = puVar6[0xd];
        auVar3._24_4_ = puVar6[9];
        auVar3._20_4_ = puVar6[5];
        auVar3._16_4_ = puVar6[1];
        auVar3._12_4_ = puVar6[0xc];
        auVar3._8_4_ = puVar6[8];
        auVar3._4_4_ = puVar6[4];
        auVar3._0_4_ = *puVar6;
        auVar4._60_4_ = puVar12[0xf];
        auVar4._56_4_ = puVar12[0xb];
        auVar4._52_4_ = puVar12[7];
        auVar4._48_4_ = puVar12[3];
        auVar4._44_4_ = puVar12[0xe];
        auVar4._40_4_ = puVar12[10];
        auVar4._36_4_ = puVar12[6];
        auVar4._32_4_ = puVar12[2];
        auVar4._28_4_ = puVar12[0xd];
        auVar4._24_4_ = puVar12[9];
        auVar4._20_4_ = puVar12[5];
        auVar4._16_4_ = puVar12[1];
        auVar4._12_4_ = puVar12[0xc];
        auVar4._8_4_ = puVar12[8];
        auVar4._4_4_ = puVar12[4];
        auVar4._0_4_ = *puVar12;
        auVar2 = vmmul_q(auVar3,auVar4);
        *pfVar21 = auVar2._0_4_;
        pfVar21[1] = auVar2._16_4_;
        pfVar21[2] = auVar2._32_4_;
        pfVar21[3] = auVar2._48_4_;
        pfVar21[4] = auVar2._4_4_;
        pfVar21[5] = auVar2._20_4_;
        pfVar21[6] = auVar2._36_4_;
        pfVar21[7] = auVar2._52_4_;
        pfVar21[8] = auVar2._8_4_;
        pfVar21[9] = auVar2._24_4_;
        pfVar21[10] = auVar2._40_4_;
        pfVar21[0xb] = auVar2._56_4_;
        pfVar21[0xc] = auVar2._12_4_;
        pfVar21[0xd] = auVar2._28_4_;
        pfVar21[0xe] = auVar2._44_4_;
        pfVar21[0xf] = auVar2._60_4_;
      }
    }
    *(int *)(param_2 + 0x1c) = param_2;
    if (param_4 < 7) {
      if (param_4 == 2) {
        auVar1 = vmidt_t();
        *pfVar21 = auVar1._0_4_;
        pfVar21[1] = auVar1._4_4_;
        pfVar21[2] = auVar1._8_4_;
        pfVar21[3] = in_V0C;
        pfVar21[4] = auVar1._12_4_;
        pfVar21[5] = auVar1._16_4_;
        pfVar21[6] = auVar1._20_4_;
        pfVar21[7] = in_V0D;
        pfVar21[8] = auVar1._24_4_;
        pfVar21[9] = auVar1._28_4_;
        pfVar21[10] = auVar1._32_4_;
        pfVar21[0xb] = in_V0E;
      }
    }
    else if (param_4 < 8) {
      fVar7 = *pfVar21;
      fVar13 = pfVar21[1];
      fVar8 = pfVar21[2];
      fVar14 = pfVar21[3];
      fVar9 = pfVar21[4];
      fVar15 = pfVar21[5];
      fVar18 = pfVar21[6];
      fVar10 = pfVar21[7];
      fVar16 = pfVar21[8];
      fVar19 = pfVar21[9];
      fVar11 = pfVar21[10];
      fVar17 = pfVar21[0xb];
      fVar22 = fVar7 * fVar7 + fVar13 * fVar13 + fVar8 * fVar8 + fVar14 * fVar14;
      if (fVar22 == 0.0) {
        *pfVar21 = 0.0;
        pfVar21[1] = 0.0;
        pfVar21[2] = 0.0;
        pfVar21[3] = 0.0;
      }
      else {
        fVar22 = SQRT(fVar22);
        *pfVar21 = fVar7 / fVar22;
        pfVar21[1] = fVar13 / fVar22;
        pfVar21[2] = fVar8 / fVar22;
        pfVar21[3] = fVar14 / fVar22;
      }
      fVar7 = fVar9 * fVar9 + fVar15 * fVar15 + fVar18 * fVar18 + fVar10 * fVar10;
      if (fVar7 == 0.0) {
        pfVar21[4] = 0.0;
        pfVar21[5] = 0.0;
        pfVar21[6] = 0.0;
        pfVar21[7] = 0.0;
      }
      else {
        fVar7 = SQRT(fVar7);
        pfVar21[4] = fVar9 / fVar7;
        pfVar21[5] = fVar15 / fVar7;
        pfVar21[6] = fVar18 / fVar7;
        pfVar21[7] = fVar10 / fVar7;
      }
      fVar7 = fVar16 * fVar16 + fVar19 * fVar19 + fVar11 * fVar11 + fVar17 * fVar17;
      if (fVar7 == 0.0) {
        pfVar21[8] = 0.0;
        pfVar21[9] = 0.0;
        pfVar21[10] = 0.0;
        pfVar21[0xb] = 0.0;
      }
      else {
        fVar7 = SQRT(fVar7);
        pfVar21[8] = fVar16 / fVar7;
        pfVar21[9] = fVar19 / fVar7;
        pfVar21[10] = fVar11 / fVar7;
        pfVar21[0xb] = fVar17 / fVar7;
      }
      pfVar21[0xc] = 0.0;
      pfVar21[0xd] = 0.0;
      pfVar21[0xe] = 0.0;
      pfVar21[0xf] = 1.0;
    }
    break;
  default:
    if (param_3 == 0) {
      *(undefined4 *)(param_2 + 0x1c) = 0;
    }
    else {
      *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
    }
    break;
  case 9:
    auVar2 = vmidt_q();
    *pfVar21 = auVar2._0_4_;
    pfVar21[1] = auVar2._4_4_;
    pfVar21[2] = auVar2._8_4_;
    pfVar21[3] = auVar2._12_4_;
    pfVar21[4] = auVar2._16_4_;
    pfVar21[5] = auVar2._20_4_;
    pfVar21[6] = auVar2._24_4_;
    pfVar21[7] = auVar2._28_4_;
    pfVar21[8] = auVar2._32_4_;
    pfVar21[9] = auVar2._36_4_;
    pfVar21[10] = auVar2._40_4_;
    pfVar21[0xb] = auVar2._44_4_;
    pfVar21[0xc] = auVar2._48_4_;
    pfVar21[0xd] = auVar2._52_4_;
    pfVar21[0xe] = auVar2._56_4_;
    pfVar21[0xf] = auVar2._60_4_;
    *(int *)(param_2 + 0x1c) = param_2;
  }
  return;
}

