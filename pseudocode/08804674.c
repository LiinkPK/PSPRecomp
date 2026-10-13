/* Entry 0x08804674 | file offset 0x0000164C | FUN_08804674 | bytes 628 */

void FUN_08804674(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
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
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  iVar4 = FUN_08837c44(param_3);
  uVar8 = DAT_09af84cc;
  uVar7 = DAT_09af84c8;
  uVar6 = DAT_09af84c4;
  if (iVar4 == 0) {
    if (*(short *)(param_3 + 0x180) == 0x66) {
      *param_1 = DAT_09af84c0;
      param_1[1] = uVar6;
      param_1[2] = uVar7;
      param_1[3] = uVar8;
    }
    else {
      FUN_089a3868(&local_70,param_3 + 0xb0);
      iVar4 = FUN_08837a10(param_3);
      if (iVar4 != 0) {
        FUN_089a3868(&local_70,param_3 + 0x90);
      }
      if (0.0 < local_64) {
        auVar3._4_4_ = local_6c;
        auVar3._0_4_ = local_70;
        auVar3._8_4_ = local_68;
        auVar2._4_4_ = local_6c;
        auVar2._0_4_ = local_70;
        auVar2._8_4_ = local_68;
        auVar1._4_4_ = local_6c;
        auVar1._0_4_ = local_70;
        auVar1._8_4_ = local_68;
        uVar6 = vdot_t(auVar1,auVar2);
        uVar7 = vzero_s();
        uVar8 = vcmp_s(8,uVar6,local_70);
        local_20 = vsqrt_s(uVar6);
        vrcp_s(local_20);
        uVar6 = vcmovt_s(uVar7,(byte)uVar8 & 1);
        vpfxd(4,4,4,5);
        auVar1 = vscl_t(auVar3,uVar6);
        local_70 = auVar1._0_4_;
        local_6c = auVar1._4_4_;
        local_68 = auVar1._8_4_;
        fVar5 = (float)FUN_08838300(param_3);
        FUN_089a3a44(local_64 * fVar5,&local_70,&local_70);
        FUN_089a3a44(local_64,&local_60,&local_70);
        local_40 = local_60;
        local_3c = local_5c;
        local_38 = local_58;
        local_34 = local_54;
        FUN_08835c24(param_3,&local_40);
        *param_1 = local_70;
        param_1[1] = local_6c;
        param_1[2] = local_68;
        param_1[3] = 0;
      }
      else {
        local_30 = DAT_09af84c0;
        local_2c = DAT_09af84c4;
        local_28 = DAT_09af84c8;
        local_24 = DAT_09af84cc;
        FUN_08835c24(param_3,&local_30);
        uVar8 = DAT_09af84cc;
        uVar7 = DAT_09af84c8;
        uVar6 = DAT_09af84c4;
        *param_1 = DAT_09af84c0;
        param_1[1] = uVar6;
        param_1[2] = uVar7;
        param_1[3] = uVar8;
      }
    }
  }
  else {
    FUN_088344e8(*(undefined4 *)(*(int *)(param_3 + 0x39c) + 0x90),
                 *(undefined4 *)(*(int *)(param_3 + 0x39c) + 0x94),&local_50,param_3);
    *param_1 = local_50;
    param_1[1] = local_4c;
    param_1[2] = local_48;
    param_1[3] = local_44;
  }
  return;
}

