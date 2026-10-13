/* Entry 0x0895F35C | file offset 0x0015C334 | FUN_0895f35c | bytes 540 */

void FUN_0895f35c(int param_1,float *param_2,float *param_3,undefined4 *param_4)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [16];
  int iVar3;
  float *pfVar4;
  float fVar5;
  undefined4 uVar6;
  uint uVar7;
  float local_50 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar3 = *(int *)(DAT_09b6f478 + 0xac);
  local_40 = *param_4;
  local_3c = param_4[1];
  local_38 = param_4[2];
  local_34 = 0x3f800000;
  uVar6 = vone_s();
  auVar2._12_4_ = uVar6;
  auVar2._8_4_ = param_4[2];
  auVar2._4_4_ = param_4[1];
  auVar2._0_4_ = *param_4;
  auVar2 = vtfm4_q(*(undefined1 (*) [64])(param_1 + 0x10),auVar2);
  local_2c = auVar2._4_4_;
  uStack_28 = auVar2._8_4_;
  local_24 = auVar2._12_4_;
  uVar7 = vcmp_s(8,local_24,*(undefined4 *)*(undefined1 (*) [64])(param_1 + 0x10));
  if ((uVar7 & 1) == 0) {
    local_24 = vrcp_s(local_24);
    auVar1 = vscl_t(auVar2._0_12_,local_24);
    local_30 = auVar1._0_4_;
    local_2c = auVar1._4_4_;
    uStack_28 = auVar1._8_4_;
  }
  else {
    local_30 = (float)vzero_s();
  }
  auVar1 = vscl_t(*(undefined1 (*) [12])(param_1 + 0x50),local_24);
  uStack_14 = vzero_s();
  uStack_18 = auVar1._8_4_;
  local_20 = auVar1._0_4_ * (1.0 / (float)*(int *)(iVar3 + 0x14));
  local_1c = auVar1._4_4_ * (1.0 / (float)*(int *)(iVar3 + 0x18));
  local_30 = local_30 + local_20;
  local_2c = local_2c + local_1c;
  *param_2 = (local_30 + 1.0) * 0.5;
  local_50[0] = 0.0;
  pfVar4 = param_2;
  if (*param_2 <= 0.0) {
    pfVar4 = local_50;
  }
  *param_2 = *pfVar4;
  local_50[0] = 1.0;
  pfVar4 = param_2;
  if (1.0 <= *param_2) {
    pfVar4 = local_50;
  }
  fVar5 = *pfVar4;
  *param_2 = fVar5;
  *param_2 = fVar5 * ((float)(*(int *)(iVar3 + 0x24) + -1) / (float)*(int *)(iVar3 + 0x24));
  *param_3 = (1.0 - local_2c) * 0.5;
  local_50[0] = 0.0;
  pfVar4 = param_3;
  if (*param_3 <= 0.0) {
    pfVar4 = local_50;
  }
  *param_3 = *pfVar4;
  local_50[0] = 1.0;
  pfVar4 = param_3;
  if (1.0 <= *param_3) {
    pfVar4 = local_50;
  }
  fVar5 = *pfVar4;
  *param_3 = fVar5;
  *param_3 = fVar5 * ((float)(*(int *)(iVar3 + 0x28) + -1) / (float)*(int *)(iVar3 + 0x28));
  return;
}

