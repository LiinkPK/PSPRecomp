/* Entry 0x08836120 | file offset 0x000330F8 | FUN_08836120 | bytes 840 */

void FUN_08836120(float param_1,int param_2,undefined4 param_3,char param_4)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  undefined4 local_30;
  
  FUN_089a3868(&local_50);
  auVar3._4_4_ = local_4c;
  auVar3._0_4_ = local_50;
  auVar3._8_4_ = uStack_48;
  auVar2._4_4_ = local_4c;
  auVar2._0_4_ = local_50;
  auVar2._8_4_ = uStack_48;
  auVar1._4_4_ = local_4c;
  auVar1._0_4_ = local_50;
  auVar1._8_4_ = uStack_48;
  uVar8 = vdot_t(auVar1,auVar2);
  uVar9 = vzero_s();
  uVar10 = vcmp_s(8,uVar8,local_50);
  local_30 = vsqrt_s(uVar8);
  vrcp_s(local_30);
  uVar8 = vcmovt_s(uVar9,(byte)uVar10 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(auVar3,uVar8);
  local_50 = auVar1._0_4_;
  local_4c = auVar1._4_4_;
  uStack_48 = auVar1._8_4_;
  if (param_4 != '\0') {
    FUN_089a3a44(0xbf800000,&local_50,&local_50);
  }
  FUN_089a3868(auStack_40,param_3);
  local_3c = 0;
  fVar4 = (float)FUN_089a3bf8(auStack_40);
  fVar6 = 1.0;
  if (fVar4 < 0.1) {
    fVar4 = fVar4 - 0.05;
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    fVar6 = (fVar4 / 0.05) * 1.0;
  }
  FUN_08835cf8(param_1 * fVar6,param_2,&local_50);
  uVar8 = local_4c;
  local_4c = 0;
  uVar9 = FUN_089a3bf8(&local_50);
  fVar4 = (float)FUN_089a457c(uVar8,uVar9);
  fVar4 = -fVar4;
  fVar5 = (float)FUN_08838300(param_2);
  fVar7 = fVar4 - *(float *)(param_2 + 0xac);
  fVar5 = param_1 * fVar6 * fVar5;
  if ((fVar7 <= -3.1415927) || (3.1415927 <= fVar7)) {
    if (0.0 < fVar7) {
      fVar7 = (float)FUN_089941c0(fVar7 + 3.1415927,0x40c90fdb);
      fVar7 = fVar7 - 3.1415927;
    }
    else {
      fVar7 = (float)FUN_089941c0(3.1415927 - fVar7,0x40c90fdb);
      fVar7 = 3.1415927 - fVar7;
    }
  }
  if (fVar7 <= fVar5) {
    if ((fVar7 < -fVar5) &&
       ((fVar4 = *(float *)(param_2 + 0xac) - fVar5, fVar4 <= -3.1415927 || (3.1415927 <= fVar4))))
    {
      if (0.0 < fVar4) {
        fVar4 = (float)FUN_089941c0(fVar4 + 3.1415927,0x40c90fdb);
        fVar4 = fVar4 - 3.1415927;
      }
      else {
        fVar4 = (float)FUN_089941c0(3.1415927 - fVar4,0x40c90fdb);
        fVar4 = 3.1415927 - fVar4;
      }
    }
  }
  else {
    fVar4 = *(float *)(param_2 + 0xac) + fVar5;
    if ((fVar4 <= -3.1415927) || (3.1415927 <= fVar4)) {
      if (0.0 < fVar4) {
        fVar4 = (float)FUN_089941c0(fVar4 + 3.1415927,0x40c90fdb);
        fVar4 = fVar4 - 3.1415927;
      }
      else {
        fVar4 = (float)FUN_089941c0(3.1415927 - fVar4,0x40c90fdb);
        fVar4 = 3.1415927 - fVar4;
      }
    }
  }
  *(float *)(param_2 + 0xac) = fVar4;
  *(undefined4 *)(param_2 + 0x38c) = *(undefined4 *)(param_2 + 0x38c);
  *(uint *)(param_2 + 0x388) = *(uint *)(param_2 + 0x388) | 0x40;
  return;
}

