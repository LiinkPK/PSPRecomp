/* Entry 0x0880C430 | file offset 0x00009408 | FUN_0880c430 | bytes 372 */

void FUN_0880c430(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_30 [16];
  float local_20;
  
  fVar4 = (float)FUN_08838300(param_3);
  FUN_089a383c(*(undefined4 *)(param_2 + 0x160),0,0,0x3f800000,&local_40);
  FUN_089a3f40(&local_40,param_4,&local_40);
  FUN_089a38e0(&local_40,&local_40,param_2);
  auVar3._4_4_ = uStack_3c;
  auVar3._0_4_ = local_40;
  auVar3._8_4_ = uStack_38;
  auVar2._4_4_ = uStack_3c;
  auVar2._0_4_ = local_40;
  auVar2._8_4_ = uStack_38;
  auVar1._4_4_ = uStack_3c;
  auVar1._0_4_ = local_40;
  auVar1._8_4_ = uStack_38;
  uVar7 = vdot_t(auVar1,auVar2);
  uVar8 = vzero_s();
  uVar9 = vcmp_s(8,uVar7,local_40);
  local_20 = (float)vsqrt_s(uVar7);
  vrcp_s(local_20);
  uVar7 = vcmovt_s(uVar8,(byte)uVar9 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(auVar3,uVar7);
  local_40 = auVar1._0_4_;
  uStack_3c = auVar1._4_4_;
  uStack_38 = auVar1._8_4_;
  fVar5 = local_20 * **(float **)(param_2 + 0x15c);
  if (fVar5 < (*(float **)(param_2 + 0x15c))[1]) {
    fVar5 = *(float *)(*(int *)(param_2 + 0x15c) + 4);
  }
  fVar6 = local_20;
  if (fVar5 <= local_20) {
    fVar6 = fVar5;
  }
  FUN_089a3a44(fVar6 * fVar4 * 0.5,&local_40,&local_40);
  FUN_089a38a8(param_2,param_2,&local_40);
  uVar7 = *(undefined4 *)(param_2 + 0x160);
  FUN_089a38e0(auStack_30,param_2,param_5);
  FUN_089a3bc8(auStack_30,auStack_30);
  FUN_089a3a44(uVar7,auStack_30,auStack_30);
  FUN_089a38a8(param_2,auStack_30,param_5);
  *(undefined4 *)(param_2 + 0xc) = 0x3f800000;
  return;
}

