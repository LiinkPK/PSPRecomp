/* Entry 0x0886B6BC | file offset 0x00068694 | FUN_0886b6bc | bytes 708 */

undefined4
FUN_0886b6bc(int param_1,int param_2,undefined1 (*param_3) [12],undefined1 (*param_4) [12],
            undefined4 *param_5,int param_6)

{
  undefined1 auVar1 [12];
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 auStack_e0 [48];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [8];
  undefined4 local_98;
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
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*(int *)(param_1 + (param_6 + 0x11) * 4 + 0xa4) < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_089b0e78(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8),
                         *(undefined4 *)(param_1 + (param_6 + 0x11) * 4 + 0xa4));
    iVar3 = FUN_089b11a8(uVar2);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_089a3868(param_2,iVar3);
      *(undefined4 *)(param_2 + 0xc) = 0x3f800000;
      uVar4 = FUN_089b1224(uVar2);
      FUN_089a3efc(auStack_e0,uVar4);
      FUN_089a383c(0,0,0,0x3f800000,auStack_b0);
      FUN_089a383c(0,0x3f800000,0,0x3f800000,param_4);
      FUN_089a3f40(&local_70,auStack_e0,param_4);
      local_90 = local_70;
      local_8c = local_6c;
      local_88 = local_68;
      local_84 = local_64;
      local_f0 = local_70;
      local_ec = local_6c;
      local_e8 = local_68;
      local_e4 = local_64;
      FUN_089a3868(param_4,&local_f0);
      uVar4 = *(undefined4 *)param_4[1];
      uVar5 = vdot_t(*param_4,*param_4);
      uVar6 = vzero_s();
      uVar7 = vcmp_s(8,uVar5,*(undefined4 *)*param_4);
      local_30 = vsqrt_s(uVar5);
      vrcp_s(local_30);
      uVar5 = vcmovt_s(uVar6,(byte)uVar7 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(*param_4,uVar5);
      *(int *)*param_4 = auVar1._0_4_;
      *(int *)(*param_4 + 4) = auVar1._4_4_;
      *(int *)(*param_4 + 8) = auVar1._8_4_;
      *(undefined4 *)param_4[1] = uVar4;
      FUN_089a383c(0,0,0xbf800000,0x3f800000,param_3);
      FUN_089a3f40(&local_50,auStack_e0,param_3);
      local_80 = local_50;
      local_7c = local_4c;
      local_78 = local_48;
      local_74 = local_44;
      local_f0 = local_50;
      local_ec = local_4c;
      local_e8 = local_48;
      local_e4 = local_44;
      FUN_089a3868(param_3,&local_f0);
      uVar4 = *(undefined4 *)param_3[1];
      uVar5 = vdot_t(*param_3,*param_3);
      uVar6 = vzero_s();
      uVar7 = vcmp_s(8,uVar5,*(undefined4 *)*param_3);
      local_2c = vsqrt_s(uVar5);
      vrcp_s(local_2c);
      uVar5 = vcmovt_s(uVar6,(byte)uVar7 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(*param_3,uVar5);
      *(int *)*param_3 = auVar1._0_4_;
      *(int *)(*param_3 + 4) = auVar1._4_4_;
      *(int *)(*param_3 + 8) = auVar1._8_4_;
      *(undefined4 *)param_3[1] = uVar4;
      iVar3 = FUN_089b11c0(uVar2);
      if (iVar3 == 0) {
        uVar2 = 0;
      }
      else {
        FUN_089a3868(auStack_a0,iVar3);
        uVar2 = 1;
        *param_5 = local_98;
      }
    }
  }
  return uVar2;
}

