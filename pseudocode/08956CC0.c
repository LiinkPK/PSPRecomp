/* Entry 0x08956CC0 | file offset 0x00153C98 | FUN_08956cc0 | bytes 392 */

void FUN_08956cc0(undefined4 *param_1,undefined1 (*param_2) [12],undefined1 (*param_3) [12])

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  if ((*(float *)*param_3 == 0.0) && (*(float *)(*param_3 + 8) == 0.0)) {
    vzero_s();
    auVar3._8_4_ = DAT_089da008;
    auVar3._4_4_ = DAT_089da004;
    auVar3._0_4_ = DAT_089da000;
    auVar3 = vcrsp_t(auVar3,*param_3);
    local_70 = auVar3._0_4_;
    uStack_6c = auVar3._4_4_;
    uStack_68 = auVar3._8_4_;
  }
  else {
    vzero_s();
    auVar1._8_4_ = DAT_089d9ff8;
    auVar1._4_4_ = DAT_089d9ff4;
    auVar1._0_4_ = DAT_089d9ff0;
    auVar3 = vcrsp_t(auVar1,*param_3);
    local_70 = auVar3._0_4_;
    uStack_6c = auVar3._4_4_;
    uStack_68 = auVar3._8_4_;
  }
  auVar5._4_4_ = uStack_6c;
  auVar5._0_4_ = local_70;
  auVar5._8_4_ = uStack_68;
  auVar4._4_4_ = uStack_6c;
  auVar4._0_4_ = local_70;
  auVar4._8_4_ = uStack_68;
  auVar2._4_4_ = uStack_6c;
  auVar2._0_4_ = local_70;
  auVar2._8_4_ = uStack_68;
  uVar6 = vdot_t(auVar2,auVar4);
  uVar7 = vzero_s();
  uVar8 = vcmp_s(8,uVar6,local_70);
  vrsq_s(uVar6);
  uVar6 = vcmovt_s(uVar7,(byte)uVar8 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(auVar5,uVar6);
  vone_s();
  uVar6 = vdot_t(*param_3,*param_3);
  uVar7 = vzero_s();
  uVar8 = vcmp_s(8,uVar6,*(undefined4 *)*param_3);
  vrsq_s(uVar6);
  uVar6 = vcmovt_s(uVar7,(byte)uVar8 & 1);
  vpfxd(4,4,4,5);
  auVar2 = vscl_t(*param_3,uVar6);
  vone_s();
  vzero_s();
  auVar4 = vcrsp_t(auVar2,auVar1);
  auVar3 = vadd_t(ZEXT812(0),*param_2);
  *param_1 = auVar1._0_4_;
  param_1[1] = auVar1._4_4_;
  param_1[2] = auVar1._8_4_;
  param_1[3] = 0;
  param_1[4] = auVar4._0_4_;
  param_1[5] = auVar4._4_4_;
  param_1[6] = auVar4._8_4_;
  param_1[7] = 0;
  param_1[8] = auVar2._0_4_;
  param_1[9] = auVar2._4_4_;
  param_1[10] = auVar2._8_4_;
  param_1[0xb] = 0;
  param_1[0xc] = auVar3._0_4_;
  param_1[0xd] = auVar3._4_4_;
  param_1[0xe] = auVar3._8_4_;
  param_1[0xf] = 0x3f800000;
  return;
}

