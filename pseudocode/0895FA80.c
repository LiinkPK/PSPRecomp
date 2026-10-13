/* Entry 0x0895FA80 | file offset 0x0015CA58 | FUN_0895fa80 | bytes 508 */

void FUN_0895fa80(int param_1,float *param_2,float *param_3,undefined1 (*param_4) [12])

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [16];
  int iVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  float local_40 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  float local_10;
  
  iVar3 = *(int *)(DAT_09b6f478 + 0xac);
  uVar7 = vdot_t(*param_4,*param_4);
  local_10 = (float)vsqrt_s(uVar7);
  uVar7 = vdot_t(*param_4,*param_4);
  uVar8 = vzero_s();
  uVar9 = vcmp_s(8,uVar7,*(undefined4 *)*param_4);
  vrsq_s(uVar7);
  uVar7 = vcmovt_s(uVar8,(byte)uVar9 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(*param_4,uVar7);
  vone_s();
  auVar1 = vscl_t(auVar1,local_10 * *(float *)(param_1 + 0x50));
  local_24 = vzero_s();
  local_30 = auVar1._0_4_;
  local_2c = auVar1._4_4_;
  local_28 = auVar1._8_4_;
  uVar7 = vone_s();
  auVar2._12_4_ = uVar7;
  auVar2._8_4_ = auVar1._8_4_;
  auVar2._4_4_ = auVar1._4_4_;
  auVar2._0_4_ = auVar1._0_4_;
  auVar2 = vtfm4_q(*(undefined1 (*) [64])(param_1 + 0x10),auVar2);
  local_1c = auVar2._4_4_;
  uStack_18 = auVar2._8_4_;
  uStack_14 = auVar2._12_4_;
  uVar10 = vcmp_s(8,uStack_14,*(undefined4 *)*(undefined1 (*) [64])(param_1 + 0x10));
  if ((uVar10 & 1) == 0) {
    uStack_14 = vrcp_s(uStack_14);
    auVar1 = vscl_t(auVar2._0_12_,uStack_14);
    local_20 = auVar1._0_4_;
    local_1c = auVar1._4_4_;
    uStack_18 = auVar1._8_4_;
  }
  else {
    local_20 = (float)vzero_s();
  }
  *param_2 = (local_20 + 1.0) * 0.5;
  local_40[0] = 0.0;
  pfVar4 = param_2;
  if (*param_2 <= 0.0) {
    pfVar4 = local_40;
  }
  *param_2 = *pfVar4;
  local_40[0] = 1.0;
  pfVar4 = param_2;
  if (1.0 <= *param_2) {
    pfVar4 = local_40;
  }
  fVar6 = *pfVar4;
  *param_2 = fVar6;
  iVar5 = *(int *)(iVar3 + 0x24);
  *param_2 = fVar6 * ((float)(iVar5 + -1) / (float)iVar5);
  *param_3 = (1.0 - local_1c) * 0.5;
  local_40[0] = 0.0;
  pfVar4 = param_3;
  if (*param_3 <= 0.0) {
    pfVar4 = local_40;
  }
  *param_3 = *pfVar4;
  local_40[0] = 1.0;
  pfVar4 = param_3;
  if (1.0 <= *param_3) {
    pfVar4 = local_40;
  }
  fVar6 = *pfVar4;
  *param_3 = fVar6;
  iVar3 = *(int *)(iVar3 + 0x28);
  *param_3 = fVar6 * ((float)(iVar3 + -1) / (float)iVar3);
  return;
}

