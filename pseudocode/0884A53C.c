/* Entry 0x0884A53C | file offset 0x00047514 | FUN_0884a53c | bytes 940 */

undefined4 FUN_0884a53c(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  short sVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  int iVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char local_d0 [16];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  char local_90 [16];
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
  undefined4 local_30;
  
  iVar8 = *(int *)(param_1 + 0x18);
  if (*(char *)(iVar8 + 0x542) == '\x03') {
    iVar8 = *(int *)(iVar8 + 0x5d4);
  }
  if ((*(uint *)(iVar8 + 900) & 0x20) == 0) {
    *(uint *)(iVar8 + 900) = *(uint *)(iVar8 + 900) | 0x20;
    if (5 < param_3 - 1U) {
      return 0;
    }
    if ((param_3 == 1) || (param_3 == 2)) {
      local_90[0] = '\0';
      FUN_08808190(param_1,iVar8,local_90);
      if (local_90[0] != '\0') {
        FUN_089a3a44(0xbf800000,&local_50,iVar8 + 0x90);
        local_60 = local_50;
        local_5c = local_4c;
        local_58 = local_48;
        local_54 = local_44;
        local_70 = local_50;
        local_6c = local_4c;
        local_68 = local_48;
        local_64 = local_44;
        uVar10 = FUN_0884a4c4(iVar8);
        if (param_3 == 2) {
          uVar10 = 0;
        }
        (**(code **)(*(int *)(iVar8 + 0x544) + 0xe4))
                  (uVar10,iVar8 + *(short *)(*(int *)(iVar8 + 0x544) + 0xe0),
                   *(undefined1 *)(*(int *)(param_2 + 0x34) + 5),1,&local_70);
        FUN_089a3a44(0xbf800000,&local_70,&local_70);
        local_80 = local_70;
        local_7c = local_6c;
        local_78 = local_68;
        local_74 = local_64;
        FUN_08835ba4(iVar8,&local_80);
        iVar8 = *(int *)(param_2 + 0x18);
        if (*(short *)(param_2 + 0x2e) == *(short *)(iVar8 + 0x180)) {
          *(uint *)(iVar8 + 900) = *(uint *)(iVar8 + 900) | 0x8000000;
        }
      }
      return 1;
    }
    if (param_3 == 3) {
      uVar7 = *(uint *)(iVar8 + 900);
      *(uint *)(iVar8 + 900) = uVar7 | 0x40000;
      *(uint *)(iVar8 + 900) = uVar7 | 0x10040000;
      return 1;
    }
    if (param_3 == 4) {
      return 1;
    }
    if (param_3 == 5) {
      local_d0[0] = '\0';
      FUN_08808190(param_1,iVar8,local_d0);
      if (local_d0[0] != '\0') {
        FUN_089a38e0(&local_b0,iVar8 + 0x80,*(int *)(param_2 + 0x18) + 0x80);
        auVar5._4_4_ = uStack_ac;
        auVar5._0_4_ = local_b0;
        auVar5._8_4_ = uStack_a8;
        auVar4._4_4_ = uStack_ac;
        auVar4._0_4_ = local_b0;
        auVar4._8_4_ = uStack_a8;
        auVar3._4_4_ = uStack_ac;
        auVar3._0_4_ = local_b0;
        auVar3._8_4_ = uStack_a8;
        uVar10 = vdot_t(auVar3,auVar4);
        uVar11 = vzero_s();
        uVar12 = vcmp_s(8,uVar10,local_b0);
        local_30 = vsqrt_s(uVar10);
        vrcp_s(local_30);
        uVar10 = vcmovt_s(uVar11,(byte)uVar12 & 1);
        vpfxd(4,4,4,5);
        auVar3 = vscl_t(auVar5,uVar10);
        local_b0 = auVar3._0_4_;
        uStack_ac = auVar3._4_4_;
        uStack_a8 = auVar3._8_4_;
        FUN_08868334(0x3fc90fdb,&local_a0,&local_b0);
        local_c0 = local_a0;
        local_bc = local_9c;
        local_b8 = local_98;
        local_b4 = local_94;
        FUN_089a3868(&local_b0,&local_c0);
        iVar6 = *(int *)(iVar8 + 0x544);
        sVar2 = *(short *)(iVar6 + 0xe0);
        uVar1 = *(undefined1 *)(*(int *)(param_2 + 0x34) + 5);
        fVar9 = (float)FUN_0884a4c4(iVar8);
        (**(code **)(iVar6 + 0xe4))(fVar9 * 2.0,iVar8 + sVar2,uVar1,1,&local_b0);
        FUN_089a3a44(0xbf800000,&local_b0,&local_b0);
        FUN_08836120(0x40490fdb,iVar8,&local_b0,0);
      }
      return 1;
    }
    if (param_3 == 6) {
      return 1;
    }
  }
  return 0;
}

