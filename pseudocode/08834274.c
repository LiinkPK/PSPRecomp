/* Entry 0x08834274 | file offset 0x0003124C | FUN_08834274 | bytes 596 */

void FUN_08834274(float param_1,int param_2,int param_3,char param_4,undefined4 *param_5)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  int iVar7;
  uint *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  float local_64;
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
  
  iVar7 = FUN_0883739c();
  if (iVar7 != 0) {
    iVar7 = FUN_088374b0(param_2);
    iVar9 = param_2 + 0x130;
    if ((iVar7 == 0) && (param_3 != 2)) {
      uVar10 = 900;
      if (param_4 != '\0') {
        uVar10 = 0x385;
      }
      FUN_0882fa10(0,0,iVar9,uVar10,0);
      FUN_0882fb90(0x41800000,0,iVar9,1);
      local_50 = *param_5;
      local_48 = param_5[2];
      local_4c = 0;
      local_44 = 0x3f800000;
      FUN_089a3868(&local_70,&local_50);
      auVar6._4_4_ = uStack_6c;
      auVar6._0_4_ = local_70;
      auVar6._8_4_ = uStack_68;
      auVar5._4_4_ = uStack_6c;
      auVar5._0_4_ = local_70;
      auVar5._8_4_ = uStack_68;
      auVar4._4_4_ = uStack_6c;
      auVar4._0_4_ = local_70;
      auVar4._8_4_ = uStack_68;
      uVar10 = vdot_t(auVar4,auVar5);
      uVar11 = vzero_s();
      uVar12 = vcmp_s(8,uVar10,local_70);
      local_3c = vsqrt_s(uVar10);
      vrcp_s(local_3c);
      uVar10 = vcmovt_s(uVar11,(byte)uVar12 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(auVar6,uVar10);
      local_70 = auVar1._0_4_;
      uStack_6c = auVar1._4_4_;
      uStack_68 = auVar1._8_4_;
      FUN_08832150(param_1,param_2,&local_70);
      *(undefined4 *)(param_2 + 0x3e0) = 0x41800000;
      if (**(int **)(param_2 + 0x3a4) != 0) {
        FUN_08834c10(param_2,0,0);
      }
    }
    else {
      local_60 = *param_5;
      local_58 = param_5[2];
      local_5c = 0x40400000;
      local_54 = 0x3f800000;
      FUN_089a3868(&local_70,&local_60);
      auVar3._4_4_ = uStack_6c;
      auVar3._0_4_ = local_70;
      auVar3._8_4_ = uStack_68;
      auVar2._4_4_ = uStack_6c;
      auVar2._0_4_ = local_70;
      auVar2._8_4_ = uStack_68;
      auVar1._4_4_ = uStack_6c;
      auVar1._0_4_ = local_70;
      auVar1._8_4_ = uStack_68;
      uVar10 = vdot_t(auVar1,auVar2);
      uVar11 = vzero_s();
      uVar12 = vcmp_s(8,uVar10,local_70);
      local_40 = vsqrt_s(uVar10);
      vrcp_s(local_40);
      uVar10 = vcmovt_s(uVar11,(byte)uVar12 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(auVar3,uVar10);
      local_70 = auVar1._0_4_;
      uStack_6c = auVar1._4_4_;
      uStack_68 = auVar1._8_4_;
      local_64 = param_1 * 0.4;
      func_0x08a58a5c(param_2,&local_70);
      *(undefined4 *)(*(int *)(param_2 + 0x314) + 0x24) = 0xbc23d70a;
      puVar8 = (uint *)(*(int *)(param_2 + 0x314) + 0x44);
      *puVar8 = *puVar8 | 1;
      uVar10 = 0x38e;
      if (param_4 != '\0') {
        uVar10 = 0x38f;
      }
      FUN_0882fa10(0,0,iVar9,uVar10,0);
      FUN_08834934(param_2,0xffffffff,0x66);
    }
  }
  return;
}

