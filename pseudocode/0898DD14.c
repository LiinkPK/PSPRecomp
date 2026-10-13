/* Entry 0x0898DD14 | file offset 0x0018ACEC | FUN_0898dd14 | bytes 1036 */

void FUN_0898dd14(float *param_1,undefined4 param_2,float *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [36];
  undefined1 auVar9 [64];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 in_V09;
  undefined4 in_V0D;
  undefined4 uVar14;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined1 auVar8 [36];
  undefined1 auVar10 [64];
  
  if ((*(char *)(param_1 + 0x16) != '\0') && (param_1[0x1a] != -NAN)) {
    local_50 = *param_3 + *param_1;
    local_4c = param_3[1] + param_1[1];
    local_48 = param_3[2] + param_1[2];
    local_44 = param_3[3] + param_1[3];
    auVar5._4_4_ = local_4c;
    auVar5._0_4_ = local_50;
    auVar5._8_4_ = local_48;
    auVar5._12_4_ = local_44;
    vpfxt(0,0,0,0);
    auVar1._8_4_ = in_V0D;
    auVar1._4_4_ = in_V09;
    auVar1._0_4_ = 0x437f0000;
    auVar1._12_4_ = 0;
    auVar1 = vmax_q(auVar5,auVar1 << 0x20);
    vpfxt(1,1,1,1);
    auVar2._8_4_ = in_V0D;
    auVar2._4_4_ = in_V09;
    auVar2._0_4_ = 0x437f0000;
    auVar2._12_4_ = 0;
    auVar1 = vmin_q(auVar1,auVar2 << 0x20);
    local_64 = auVar1._12_4_;
    if (128.0 < local_64) {
      local_64 = 128.0;
    }
    auVar6._12_4_ = local_64 * param_1[0x18];
    auVar6._0_12_ = auVar1._0_12_;
    auVar1 = vmul_q(auVar6,*(undefined1 (*) [16])(*(int *)(DAT_09b6f478 + 0x88) + 0x40));
    local_70 = auVar1._0_4_;
    local_6c = auVar1._4_4_;
    local_68 = auVar1._8_4_;
    local_64 = auVar1._12_4_;
    auVar3 = vmidt_q();
    if (*(char *)((int)param_1 + 0x5b) == '\0') {
      fVar11 = param_1[0xd] * 0.1;
    }
    else {
      fVar11 = param_1[0xd] * -0.1;
    }
    if (*(char *)(param_1 + 0x17) == '\0') {
      fVar12 = param_1[0xe] * 0.1;
    }
    else {
      fVar12 = param_1[0xe] * -0.1;
    }
    auVar4 = vmidt_q();
    local_30 = param_1[0x13] * 0.017453292;
    uVar14 = vcst_s(5);
    uVar14 = vmul_s(local_30,uVar14);
    auVar5 = vrot_q(uVar14,1,2,0,0);
    auVar6 = vrot_q(uVar14,3,1,0,0);
    auVar1 = vidt_q();
    auVar2 = vidt_q();
    auVar9._60_4_ = auVar2._12_4_;
    auVar9._56_4_ = auVar1._12_4_;
    auVar9._52_4_ = auVar6._12_4_;
    auVar9._48_4_ = auVar5._12_4_;
    auVar9._44_4_ = auVar2._8_4_;
    auVar9._40_4_ = auVar1._8_4_;
    auVar9._36_4_ = auVar6._8_4_;
    auVar9._32_4_ = auVar5._8_4_;
    auVar9._28_4_ = auVar2._4_4_;
    auVar9._24_4_ = auVar1._4_4_;
    auVar9._20_4_ = auVar6._4_4_;
    auVar9._16_4_ = auVar5._4_4_;
    auVar9._12_4_ = auVar2._0_4_;
    auVar9._8_4_ = auVar1._0_4_;
    auVar9._4_4_ = auVar6._0_4_;
    auVar9._0_4_ = auVar5._0_4_;
    auVar10._60_4_ = auVar4._60_4_;
    auVar10._56_4_ = auVar4._44_4_;
    auVar10._52_4_ = auVar4._28_4_;
    auVar10._48_4_ = auVar4._12_4_;
    auVar10._44_4_ = auVar4._56_4_;
    auVar10._40_4_ = auVar4._40_4_;
    auVar10._36_4_ = auVar4._24_4_;
    auVar10._32_4_ = auVar4._8_4_;
    auVar10._28_4_ = auVar4._52_4_;
    auVar10._24_4_ = auVar4._36_4_;
    auVar10._20_4_ = auVar4._20_4_;
    auVar10._16_4_ = auVar4._4_4_;
    auVar10._12_4_ = auVar4._48_4_;
    auVar10._8_4_ = auVar4._32_4_;
    auVar10._4_4_ = auVar4._16_4_;
    auVar10._0_4_ = auVar4._0_4_;
    auVar4 = vmmul_q(auVar9,auVar10);
    auVar7._32_4_ = auVar3._40_4_;
    auVar7._28_4_ = auVar3._24_4_;
    auVar7._24_4_ = auVar3._8_4_;
    auVar7._20_4_ = auVar3._36_4_;
    auVar7._16_4_ = fVar12;
    auVar7._12_4_ = auVar3._4_4_;
    auVar7._8_4_ = auVar3._32_4_;
    auVar7._4_4_ = auVar3._16_4_;
    auVar7._0_4_ = fVar11;
    auVar8._24_12_ = auVar4._32_12_;
    auVar8._20_4_ = auVar4._24_4_;
    auVar8._16_4_ = auVar4._20_4_;
    auVar8._12_4_ = auVar4._16_4_;
    auVar8._8_4_ = auVar4._8_4_;
    auVar8._4_4_ = auVar4._4_4_;
    auVar8._0_4_ = auVar4._0_4_;
    vmmul_t(auVar7,auVar8);
    vzero_s();
    vzero_s();
    vzero_s();
    fVar11 = param_1[8];
    fVar12 = param_1[9];
    fVar13 = param_1[10];
    local_40 = fVar11 * *DAT_089da278 + fVar12 * DAT_089da278[4] + fVar13 * DAT_089da278[8] +
               DAT_089da278[0xc];
    local_3c = fVar11 * DAT_089da278[1] + fVar12 * DAT_089da278[5] + fVar13 * DAT_089da278[9] +
               DAT_089da278[0xd];
    local_38 = fVar11 * DAT_089da278[2] + fVar12 * DAT_089da278[6] + fVar13 * DAT_089da278[10] +
               DAT_089da278[0xe];
    local_34 = fVar11 * DAT_089da278[3] + fVar12 * DAT_089da278[7] + fVar13 * DAT_089da278[0xb] +
               DAT_089da278[0xf];
    *(bool *)((int)param_1 + 0x5a) = local_38 <= 0.0;
    if (*(char *)((int)param_1 + 0x5a) != '\0') {
      FUN_089a04f4(2);
      FUN_08942fb8(*(undefined4 *)(DAT_09b6f478 + 0x9c),param_2,param_1[0x1a],&local_70);
    }
  }
  return;
}

