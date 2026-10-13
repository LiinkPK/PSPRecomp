/* Entry 0x08823048 | file offset 0x00020020 | FUN_08823048 | bytes 492 */

void FUN_08823048(float param_1,undefined4 *param_2,undefined4 param_3,undefined1 (*param_4) [12])

{
  undefined1 auVar1 [12];
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_30;
  
  fVar2 = (float)FUN_089a3bf8(param_4);
  if (fVar2 == 0.0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0x3f800000;
  }
  else {
    local_60 = (float)FUN_08823234(param_3);
    if (param_1 < 1.0) {
      param_1 = 1.0;
    }
    else if (5.0 < param_1) {
      param_1 = 5.0;
    }
    local_60 = (((param_1 - 1.0) / 4.0) * -9.5 + 10.0) / local_60;
    local_44 = *(undefined4 *)param_4[1];
    uVar3 = vdot_t(*param_4,*param_4);
    uVar4 = vzero_s();
    uVar5 = vcmp_s(8,uVar3,*(undefined4 *)*param_4);
    local_30 = vsqrt_s(uVar3);
    vrcp_s(local_30);
    uVar3 = vcmovt_s(uVar4,(byte)uVar5 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(*param_4,uVar3);
    local_50 = auVar1._0_4_;
    local_4c = auVar1._4_4_;
    local_48 = auVar1._8_4_;
    local_54 = 0x3f800000;
    local_5c = local_60;
    local_58 = local_60;
    FUN_089a3934(&local_50,&local_50,&local_60);
    *param_2 = local_50;
    param_2[1] = local_4c;
    param_2[2] = local_48;
    param_2[3] = local_44;
  }
  return;
}

