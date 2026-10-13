/* Entry 0x088092E4 | file offset 0x000062BC | FUN_088092e4 | bytes 904 */

undefined4 FUN_088092e4(int param_1,int param_2)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  int iVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  uint local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  float local_40;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  
  FUN_089a3a44(0xbf800000,&local_60,param_1);
  auVar3._4_4_ = 0;
  auVar3._0_4_ = local_60;
  auVar3._8_4_ = uStack_58;
  auVar2._4_4_ = 0;
  auVar2._0_4_ = local_60;
  auVar2._8_4_ = uStack_58;
  auVar1._4_4_ = 0;
  auVar1._0_4_ = local_60;
  auVar1._8_4_ = uStack_58;
  uVar15 = vdot_t(auVar1,auVar2);
  uVar16 = vzero_s();
  uVar17 = vcmp_s(8,uVar15,local_60);
  local_40 = (float)vsqrt_s(uVar15);
  vrcp_s(local_40);
  uVar15 = vcmovt_s(uVar16,(byte)uVar17 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(auVar3,uVar15);
  local_60 = auVar1._0_4_;
  local_5c = auVar1._4_4_;
  uStack_58 = auVar1._8_4_;
  local_54 = 0;
  if (local_40 < 0.01) {
    FUN_089a3890(&local_60);
  }
  iVar13 = FUN_089a3b70(&local_60);
  if (iVar13 == 1) {
    if (*(short *)(param_1 + 0x2c) == 2) {
      return 1;
    }
    if (*(short *)(param_1 + 0x2c) == 1) {
      if (*(char *)(*(int *)(param_1 + 0x18) + 0x542) == '\x03') {
        FUN_089a3868(&local_60,*(int *)(*(int *)(param_1 + 0x18) + 0x5d4) + 0x90);
      }
      else {
        FUN_089a3868(&local_60,*(int *)(param_1 + 0x18) + 0x90);
      }
      auVar6._4_4_ = 0;
      auVar6._0_4_ = local_60;
      auVar6._8_4_ = uStack_58;
      auVar5._4_4_ = 0;
      auVar5._0_4_ = local_60;
      auVar5._8_4_ = uStack_58;
      auVar4._4_4_ = 0;
      auVar4._0_4_ = local_60;
      auVar4._8_4_ = uStack_58;
      uVar15 = vdot_t(auVar4,auVar5);
      uVar16 = vzero_s();
      uVar17 = vcmp_s(8,uVar15,local_60);
      local_3c = vsqrt_s(uVar15);
      vrcp_s(local_3c);
      uVar15 = vcmovt_s(uVar16,(byte)uVar17 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(auVar6,uVar15);
      local_60 = auVar1._0_4_;
      local_5c = auVar1._4_4_;
      uStack_58 = auVar1._8_4_;
      local_54 = 0;
      FUN_089a3a44(0xbf800000,&local_60,&local_60);
    }
  }
  FUN_089a3868(&local_50,param_2);
  auVar9._4_4_ = 0;
  auVar9._0_4_ = local_50;
  auVar9._8_4_ = uStack_48;
  auVar8._4_4_ = 0;
  auVar8._0_4_ = local_50;
  auVar8._8_4_ = uStack_48;
  auVar7._4_4_ = 0;
  auVar7._0_4_ = local_50;
  auVar7._8_4_ = uStack_48;
  uVar15 = vdot_t(auVar7,auVar8);
  uVar16 = vzero_s();
  uVar17 = vcmp_s(8,uVar15,local_50);
  local_38 = (float)vsqrt_s(uVar15);
  vrcp_s(local_38);
  uVar15 = vcmovt_s(uVar16,(byte)uVar17 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(auVar9,uVar15);
  local_50 = auVar1._0_4_;
  local_4c = auVar1._4_4_;
  uStack_48 = auVar1._8_4_;
  local_44 = 0;
  if (local_38 < 0.01) {
    FUN_089a3890(&local_50);
  }
  iVar13 = FUN_089a3b70(&local_50);
  if (iVar13 == 1) {
    if (*(short *)(param_2 + 0x2c) == 2) {
      return 1;
    }
    if (*(short *)(param_2 + 0x2c) == 1) {
      if (*(char *)(*(int *)(param_2 + 0x18) + 0x542) == '\x03') {
        FUN_089a3868(&local_50,*(int *)(*(int *)(param_2 + 0x18) + 0x5d4) + 0x90);
      }
      else {
        FUN_089a3868(&local_50,*(int *)(param_2 + 0x18) + 0x90);
      }
      auVar12._4_4_ = 0;
      auVar12._0_4_ = local_50;
      auVar12._8_4_ = uStack_48;
      auVar11._4_4_ = 0;
      auVar11._0_4_ = local_50;
      auVar11._8_4_ = uStack_48;
      auVar10._4_4_ = 0;
      auVar10._0_4_ = local_50;
      auVar10._8_4_ = uStack_48;
      uVar15 = vdot_t(auVar10,auVar11);
      uVar16 = vzero_s();
      uVar17 = vcmp_s(8,uVar15,local_50);
      local_34 = vsqrt_s(uVar15);
      vrcp_s(local_34);
      uVar15 = vcmovt_s(uVar16,(byte)uVar17 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(auVar12,uVar15);
      local_50 = auVar1._0_4_;
      local_4c = auVar1._4_4_;
      uStack_48 = auVar1._8_4_;
      local_44 = 0;
    }
  }
  uVar15 = FUN_08868128(&local_50,&local_60,0);
  fVar14 = (float)FUN_089a4500(uVar15);
  uVar15 = 0;
  if (((float)*(byte *)(*(int *)(param_2 + 0x34) + 0xe) * 0.017453292 <= fVar14) &&
     (fVar14 <= (float)*(byte *)(*(int *)(param_2 + 0x34) + 0xe) * 0.017453292 +
                (float)*(byte *)(*(int *)(param_2 + 0x34) + 0xf) * 0.017453292)) {
    uVar15 = 1;
  }
  return uVar15;
}

