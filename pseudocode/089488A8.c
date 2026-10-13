/* Entry 0x089488A8 | file offset 0x00145880 | FUN_089488a8 | bytes 1060 */

void FUN_089488a8(undefined4 param_1,undefined4 param_2,undefined4 *param_3,
                 undefined1 (*param_4) [64],undefined1 (*param_5) [64],undefined1 (*param_6) [12],
                 undefined1 (*param_7) [12],int param_8)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [64];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [64];
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_90 [80];
  float local_40;
  float local_3c;
  float local_38;
  
  switch(param_2) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    uVar8 = param_3[1];
    uVar10 = param_3[2];
    uVar9 = param_3[3];
    *(undefined4 *)*param_6 = *param_3;
    *(undefined4 *)(*param_6 + 4) = uVar8;
    *(undefined4 *)(*param_6 + 8) = uVar10;
    *(undefined4 *)param_6[1] = uVar9;
    if (param_7 != (undefined1 (*) [12])0x0) {
      uVar8 = *(undefined4 *)(*param_6 + 4);
      uVar10 = *(undefined4 *)(*param_6 + 8);
      uVar9 = *(undefined4 *)param_6[1];
      *(undefined4 *)*param_7 = *(undefined4 *)*param_6;
      *(undefined4 *)(*param_7 + 4) = uVar8;
      *(undefined4 *)(*param_7 + 8) = uVar10;
      *(undefined4 *)param_7[1] = uVar9;
    }
    break;
  case 1:
    if (param_4 == (undefined1 (*) [64])0x0) {
      uVar8 = param_3[1];
      uVar10 = param_3[2];
      uVar9 = param_3[3];
      *(undefined4 *)*param_6 = *param_3;
      *(undefined4 *)(*param_6 + 4) = uVar8;
      *(undefined4 *)(*param_6 + 8) = uVar10;
      *(undefined4 *)param_6[1] = uVar9;
      if (param_7 != (undefined1 (*) [12])0x0) {
        uVar8 = param_3[1];
        uVar10 = param_3[2];
        uVar9 = param_3[3];
        *(undefined4 *)*param_7 = *param_3;
        *(undefined4 *)(*param_7 + 4) = uVar8;
        *(undefined4 *)(*param_7 + 8) = uVar10;
        *(undefined4 *)param_7[1] = uVar9;
      }
    }
    else {
      uVar8 = vone_s();
      auVar4._12_4_ = uVar8;
      auVar4._8_4_ = param_3[2];
      auVar4._4_4_ = param_3[1];
      auVar4._0_4_ = *param_3;
      auVar3 = vtfm4_q(*param_4,auVar4);
      *(int *)*param_6 = auVar3._0_4_;
      *(int *)(*param_6 + 4) = auVar3._4_4_;
      *(int *)(*param_6 + 8) = auVar3._8_4_;
      *(int *)param_6[1] = auVar3._12_4_;
      if (param_7 != (undefined1 (*) [12])0x0) {
        auVar1 = vsub_t(*param_6,*(undefined1 (*) [12])((int)*param_4 + 0x30));
        uVar8 = vone_s();
        *(int *)*param_7 = auVar1._0_4_;
        *(int *)(*param_7 + 4) = auVar1._4_4_;
        *(int *)(*param_7 + 8) = auVar1._8_4_;
        *(undefined4 *)param_7[1] = uVar8;
      }
    }
    break;
  case 9:
    if (param_4 == (undefined1 (*) [64])0x0) {
      if (param_5 == (undefined1 (*) [64])0x0) {
        param_5 = (undefined1 (*) [64])&DAT_089d9190;
      }
      uVar8 = vone_s();
      auVar3._12_4_ = uVar8;
      auVar3._8_4_ = param_3[2];
      auVar3._4_4_ = param_3[1];
      auVar3._0_4_ = *param_3;
      auVar3 = vtfm4_q(*param_5,auVar3);
      *(int *)*param_6 = auVar3._0_4_;
      *(int *)(*param_6 + 4) = auVar3._4_4_;
      *(int *)(*param_6 + 8) = auVar3._8_4_;
      *(int *)param_6[1] = auVar3._12_4_;
      param_4 = param_5;
      if (param_7 != (undefined1 (*) [12])0x0) {
        uVar8 = param_3[1];
        uVar10 = param_3[2];
        uVar9 = param_3[3];
        *(undefined4 *)*param_7 = *param_3;
        *(undefined4 *)(*param_7 + 4) = uVar8;
        *(undefined4 *)(*param_7 + 8) = uVar10;
        *(undefined4 *)param_7[1] = uVar9;
      }
    }
    else {
      if (param_5 != (undefined1 (*) [64])0x0) {
        auVar2._60_4_ = *(undefined4 *)((int)*param_5 + 0x3c);
        auVar2._56_4_ = *(undefined4 *)((int)*param_5 + 0x2c);
        auVar2._52_4_ = *(undefined4 *)((int)*param_5 + 0x1c);
        auVar2._48_4_ = *(undefined4 *)((int)*param_5 + 0xc);
        auVar2._44_4_ = *(undefined4 *)((int)*param_5 + 0x38);
        auVar2._40_4_ = *(undefined4 *)((int)*param_5 + 0x28);
        auVar2._36_4_ = *(undefined4 *)((int)*param_5 + 0x18);
        auVar2._32_4_ = *(undefined4 *)((int)*param_5 + 8);
        auVar2._28_4_ = *(undefined4 *)((int)*param_5 + 0x34);
        auVar2._24_4_ = *(undefined4 *)((int)*param_5 + 0x24);
        auVar2._20_4_ = *(undefined4 *)((int)*param_5 + 0x14);
        auVar2._16_4_ = *(undefined4 *)((int)*param_5 + 4);
        auVar2._12_4_ = *(undefined4 *)((int)*param_5 + 0x30);
        auVar2._8_4_ = *(undefined4 *)((int)*param_5 + 0x20);
        auVar2._4_4_ = *(undefined4 *)((int)*param_5 + 0x10);
        auVar2._0_4_ = *(undefined4 *)*param_5;
        auVar6._60_4_ = *(undefined4 *)((int)*param_4 + 0x3c);
        auVar6._56_4_ = *(undefined4 *)((int)*param_4 + 0x2c);
        auVar6._52_4_ = *(undefined4 *)((int)*param_4 + 0x1c);
        auVar6._48_4_ = *(undefined4 *)((int)*param_4 + 0xc);
        auVar6._44_4_ = *(undefined4 *)((int)*param_4 + 0x38);
        auVar6._40_4_ = *(undefined4 *)((int)*param_4 + 0x28);
        auVar6._36_4_ = *(undefined4 *)((int)*param_4 + 0x18);
        auVar6._32_4_ = *(undefined4 *)((int)*param_4 + 8);
        auVar6._28_4_ = *(undefined4 *)((int)*param_4 + 0x34);
        auVar6._24_4_ = *(undefined4 *)((int)*param_4 + 0x24);
        auVar6._20_4_ = *(undefined4 *)((int)*param_4 + 0x14);
        auVar6._16_4_ = *(undefined4 *)((int)*param_4 + 4);
        auVar6._12_4_ = *(undefined4 *)((int)*param_4 + 0x30);
        auVar6._8_4_ = *(undefined4 *)((int)*param_4 + 0x20);
        auVar6._4_4_ = *(undefined4 *)((int)*param_4 + 0x10);
        auVar6._0_4_ = *(undefined4 *)*param_4;
        auVar2 = vmmul_q(auVar2,auVar6);
        local_90._0_4_ = auVar2._0_4_;
        local_90._4_4_ = auVar2._16_4_;
        local_90._8_4_ = auVar2._32_4_;
        local_90._12_4_ = auVar2._48_4_;
        local_90._16_4_ = auVar2._4_4_;
        local_90._20_4_ = auVar2._20_4_;
        local_90._24_4_ = auVar2._36_4_;
        local_90._28_4_ = auVar2._52_4_;
        local_90._32_4_ = auVar2._8_4_;
        local_90._36_4_ = auVar2._24_4_;
        local_90._40_4_ = auVar2._40_4_;
        local_90._44_4_ = auVar2._56_4_;
        local_90._48_4_ = auVar2._12_4_;
        local_90._52_4_ = auVar2._28_4_;
        local_90._56_4_ = auVar2._44_4_;
        local_90._60_4_ = auVar2._60_4_;
        param_4 = (undefined1 (*) [64])local_90;
      }
      uVar8 = vone_s();
      auVar5._12_4_ = uVar8;
      auVar5._8_4_ = param_3[2];
      auVar5._4_4_ = param_3[1];
      auVar5._0_4_ = *param_3;
      auVar3 = vtfm4_q(*param_4,auVar5);
      *(int *)*param_6 = auVar3._0_4_;
      *(int *)(*param_6 + 4) = auVar3._4_4_;
      *(int *)(*param_6 + 8) = auVar3._8_4_;
      *(int *)param_6[1] = auVar3._12_4_;
      if (param_7 != (undefined1 (*) [12])0x0) {
        auVar1 = vsub_t(*param_6,*(undefined1 (*) [12])((int)*param_4 + 0x30));
        uVar8 = vone_s();
        *(int *)*param_7 = auVar1._0_4_;
        *(int *)(*param_7 + 4) = auVar1._4_4_;
        *(int *)(*param_7 + 8) = auVar1._8_4_;
        *(undefined4 *)param_7[1] = uVar8;
      }
    }
    break;
  default:
    param_4 = (undefined1 (*) [64])0x0;
  }
  if (param_7 != (undefined1 (*) [12])0x0) {
    if (param_8 < 2) {
      if (0 < param_8) {
        uVar8 = vdot_t(*param_7,*param_7);
        uVar9 = vzero_s();
        uVar10 = vcmp_s(8,uVar8,*(undefined4 *)*param_7);
        vrsq_s(uVar8);
        uVar8 = vcmovt_s(uVar9,(byte)uVar10 & 1);
        vpfxd(4,4,4,5);
        auVar1 = vscl_t(*param_7,uVar8);
        uVar8 = vone_s();
        *(int *)*param_7 = auVar1._0_4_;
        *(int *)(*param_7 + 4) = auVar1._4_4_;
        *(int *)(*param_7 + 8) = auVar1._8_4_;
        *(undefined4 *)param_7[1] = uVar8;
      }
    }
    else if (param_8 < 3) {
      uVar8 = vdot_t(*param_7,*param_7);
      uVar9 = vzero_s();
      uVar10 = vcmp_s(8,uVar8,*(undefined4 *)*param_7);
      vrsq_s(uVar8);
      uVar8 = vcmovt_s(uVar9,(byte)uVar10 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(*param_7,uVar8);
      uVar8 = vone_s();
      *(int *)*param_7 = auVar1._0_4_;
      *(int *)(*param_7 + 4) = auVar1._4_4_;
      *(int *)(*param_7 + 8) = auVar1._8_4_;
      *(undefined4 *)param_7[1] = uVar8;
      if (param_4 != (undefined1 (*) [64])0x0) {
        fVar7 = *(float *)*param_4 * *(float *)*param_4 +
                *(float *)((int)*param_4 + 4) * *(float *)((int)*param_4 + 4) +
                *(float *)((int)*param_4 + 8) * *(float *)((int)*param_4 + 8);
        if (fVar7 == 0.0) {
          local_40 = 0.0;
        }
        else {
          local_40 = SQRT(fVar7);
        }
        fVar7 = *(float *)((int)*param_4 + 0x10) * *(float *)((int)*param_4 + 0x10) +
                *(float *)((int)*param_4 + 0x14) * *(float *)((int)*param_4 + 0x14) +
                *(float *)((int)*param_4 + 0x18) * *(float *)((int)*param_4 + 0x18);
        if (fVar7 == 0.0) {
          local_3c = 0.0;
        }
        else {
          local_3c = SQRT(fVar7);
        }
        local_38 = *(float *)((int)*param_4 + 0x20) * *(float *)((int)*param_4 + 0x20) +
                   *(float *)((int)*param_4 + 0x24) * *(float *)((int)*param_4 + 0x24) +
                   *(float *)((int)*param_4 + 0x28) * *(float *)((int)*param_4 + 0x28);
        if (local_38 == 0.0) {
          local_38 = 0.0;
        }
        else {
          local_38 = SQRT(local_38);
        }
        auVar1._4_4_ = local_3c;
        auVar1._0_4_ = local_40;
        auVar1._8_4_ = local_38;
        auVar1 = vmul_t(*param_7,auVar1);
        uVar8 = vone_s();
        *(int *)*param_7 = auVar1._0_4_;
        *(int *)(*param_7 + 4) = auVar1._4_4_;
        *(int *)(*param_7 + 8) = auVar1._8_4_;
        *(undefined4 *)param_7[1] = uVar8;
      }
    }
  }
  return;
}

