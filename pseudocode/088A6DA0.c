/* Entry 0x088A6DA0 | file offset 0x000A3D78 | FUN_088a6da0 | bytes 888 */

void FUN_088a6da0(int param_1,undefined4 param_2)

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
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  if ((*(int *)(param_1 + 0xd4) != 0) && (iVar10 = FUN_088a751c(param_1), iVar10 == 1)) {
    iVar10 = *(int *)(param_1 + 0xc0);
    if (*(int *)(iVar10 + 0xf8) != 0) {
      FUN_088a82d8(&local_80,param_1);
      local_a0 = local_50;
      local_9c = local_4c;
      local_98 = local_48;
      local_94 = local_44;
      local_90 = *(undefined4 *)(iVar10 + 0xe8);
      local_8c = *(undefined4 *)(iVar10 + 0xec);
      local_88 = *(undefined4 *)(iVar10 + 0xf0);
      fVar12 = *(float *)(param_1 + 0x1c);
      local_84 = 0x3f800000;
      if (*(float *)(param_1 + 0x18) <= fVar12) {
        fVar13 = *(float *)(param_1 + 0x20);
      }
      else {
        fVar13 = *(float *)(param_1 + 0x20);
        fVar12 = *(float *)(param_1 + 0x18);
      }
      if (fVar13 < fVar12) {
        fVar13 = fVar12;
      }
      auVar3._4_4_ = local_7c;
      auVar3._0_4_ = local_80;
      auVar3._8_4_ = local_78;
      auVar2._4_4_ = local_7c;
      auVar2._0_4_ = local_80;
      auVar2._8_4_ = local_78;
      auVar1._4_4_ = local_7c;
      auVar1._0_4_ = local_80;
      auVar1._8_4_ = local_78;
      uVar14 = vdot_t(auVar1,auVar2);
      uVar15 = vzero_s();
      uVar16 = vcmp_s(8,uVar14,local_80);
      local_40 = vsqrt_s(uVar14);
      vrcp_s(local_40);
      uVar14 = vcmovt_s(uVar15,(byte)uVar16 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(auVar3,uVar14);
      local_d0 = auVar1._0_4_;
      local_cc = auVar1._4_4_;
      local_c8 = auVar1._8_4_;
      local_c4 = local_74;
      auVar6._4_4_ = local_6c;
      auVar6._0_4_ = local_70;
      auVar6._8_4_ = local_68;
      auVar5._4_4_ = local_6c;
      auVar5._0_4_ = local_70;
      auVar5._8_4_ = local_68;
      auVar4._4_4_ = local_6c;
      auVar4._0_4_ = local_70;
      auVar4._8_4_ = local_68;
      uVar14 = vdot_t(auVar4,auVar5);
      uVar15 = vzero_s();
      uVar16 = vcmp_s(8,uVar14,local_70);
      local_3c = vsqrt_s(uVar14);
      vrcp_s(local_3c);
      uVar14 = vcmovt_s(uVar15,(byte)uVar16 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(auVar6,uVar14);
      local_c0 = auVar1._0_4_;
      local_bc = auVar1._4_4_;
      local_b8 = auVar1._8_4_;
      local_b4 = local_64;
      auVar9._4_4_ = local_5c;
      auVar9._0_4_ = local_60;
      auVar9._8_4_ = local_58;
      auVar8._4_4_ = local_5c;
      auVar8._0_4_ = local_60;
      auVar8._8_4_ = local_58;
      auVar7._4_4_ = local_5c;
      auVar7._0_4_ = local_60;
      auVar7._8_4_ = local_58;
      uVar14 = vdot_t(auVar7,auVar8);
      uVar15 = vzero_s();
      uVar16 = vcmp_s(8,uVar14,local_60);
      local_38 = vsqrt_s(uVar14);
      vrcp_s(local_38);
      uVar14 = vcmovt_s(uVar15,(byte)uVar16 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(auVar9,uVar14);
      local_b0 = auVar1._0_4_;
      local_ac = auVar1._4_4_;
      local_a8 = auVar1._8_4_;
      local_a4 = local_54;
      FUN_089a3f40(&local_90,&local_d0,&local_90);
      iVar11 = FUN_08882cbc(*(float *)(iVar10 + 0xf4) * fVar13,param_2,&local_90,0x3f);
      if (iVar11 == 1) {
        if (*(int *)(param_1 + 0xd4) != 3) {
          FUN_088a47e4(*(undefined4 *)(param_1 + 0xcc),1);
          FUN_088a483c(*(undefined4 *)(param_1 + 0xcc),0);
        }
        FUN_088a4894(*(undefined4 *)(param_1 + 0xcc),1);
      }
      else {
        if (*(int *)(iVar10 + 0xf8) == 2) {
          FUN_088a47e4(*(undefined4 *)(param_1 + 0xcc),0);
          FUN_088a483c(*(undefined4 *)(param_1 + 0xcc),1);
        }
        FUN_088a4894(*(undefined4 *)(param_1 + 0xcc),0);
      }
    }
  }
  return;
}

