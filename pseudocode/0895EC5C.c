/* Entry 0x0895EC5C | file offset 0x0015BC34 | FUN_0895ec5c | bytes 228 */

void FUN_0895ec5c(int param_1,float *param_2,float *param_3,undefined4 *param_4)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [16];
  int iVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar3 = *(int *)(DAT_09b6f478 + 0xac);
  uVar7 = vone_s();
  auVar2._12_4_ = uVar7;
  auVar2._8_4_ = param_4[2];
  auVar2._4_4_ = param_4[1];
  auVar2._0_4_ = *param_4;
  auVar2 = vtfm4_q(*(undefined1 (*) [64])(param_1 + 0x10),auVar2);
  auVar1 = auVar2._0_12_;
  uVar7 = vdot_t(auVar1,auVar1);
  uVar6 = vzero_s();
  uVar8 = vcmp_s(8,uVar7,auVar2._0_4_);
  vrsq_s(uVar7);
  uVar7 = vcmovt_s(uVar6,(byte)uVar8 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(auVar1,uVar7);
  vone_s();
  fVar4 = (auVar1._0_4_ + 1.0) * 0.5;
  *param_2 = fVar4;
  fVar5 = (float)*(int *)(iVar3 + 0x24);
  *param_2 = fVar4 * (fVar5 / fVar5);
  fVar4 = (1.0 - auVar1._4_4_) * 0.5;
  *param_3 = fVar4;
  fVar5 = (float)*(int *)(iVar3 + 0x28);
  *param_3 = fVar4 * (fVar5 / fVar5);
  return;
}

