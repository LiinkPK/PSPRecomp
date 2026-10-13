/* Entry 0x0895D8A0 | file offset 0x0015A878 | FUN_0895d8a0 | bytes 428 */

void FUN_0895d8a0(undefined4 param_1,float *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined1 (*param_5) [64],undefined1 (*param_6) [12])

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [16];
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  uint uVar8;
  float local_40 [4];
  float local_30;
  float local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar4 = *(int *)(DAT_09b6f478 + 0xac);
  for (; param_3 != param_4; param_3 = param_3 + 4) {
    uVar7 = vone_s();
    auVar2._12_4_ = uVar7;
    auVar2._8_4_ = param_3[2];
    auVar2._4_4_ = param_3[1];
    auVar2._0_4_ = *param_3;
    auVar2 = vtfm4_q(*param_5,auVar2);
    local_2c = auVar2._4_4_;
    uStack_28 = auVar2._8_4_;
    local_24 = auVar2._12_4_;
    uVar8 = vcmp_s(8,local_24,*(undefined4 *)*param_5);
    if ((uVar8 & 1) == 0) {
      local_24 = vrcp_s(local_24);
      auVar1 = vscl_t(auVar2._0_12_,local_24);
      local_30 = auVar1._0_4_;
      local_2c = auVar1._4_4_;
      uStack_28 = auVar1._8_4_;
    }
    else {
      local_30 = (float)vzero_s();
    }
    auVar1 = vscl_t(*param_6,local_24);
    uStack_14 = vzero_s();
    local_20 = auVar1._0_4_;
    local_1c = auVar1._4_4_;
    uStack_18 = auVar1._8_4_;
    local_30 = local_30 + auVar1._0_4_;
    local_2c = local_2c + auVar1._4_4_;
    *param_2 = (local_30 + 1.0) * 0.5;
    local_40[0] = 0.0;
    pfVar3 = param_2;
    if (*param_2 <= 0.0) {
      pfVar3 = local_40;
    }
    *param_2 = *pfVar3;
    local_40[0] = 1.0;
    pfVar3 = param_2;
    if (1.0 <= *param_2) {
      pfVar3 = local_40;
    }
    fVar5 = *pfVar3;
    *param_2 = fVar5;
    fVar6 = (float)*(int *)(iVar4 + 0x24);
    *param_2 = fVar5 * (fVar6 / fVar6);
    param_2[1] = (1.0 - local_2c) * 0.5;
    local_40[0] = 0.0;
    pfVar3 = local_40;
    if (0.0 < param_2[1]) {
      pfVar3 = param_2 + 1;
    }
    param_2[1] = *pfVar3;
    local_40[0] = 1.0;
    pfVar3 = local_40;
    if (param_2[1] < 1.0) {
      pfVar3 = param_2 + 1;
    }
    fVar5 = *pfVar3;
    param_2[1] = fVar5;
    fVar6 = (float)*(int *)(iVar4 + 0x28);
    param_2[1] = fVar5 * (fVar6 / fVar6);
    param_2 = param_2 + 2;
  }
  return;
}

