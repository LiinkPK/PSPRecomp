/* Entry 0x08988DEC | file offset 0x00185DC4 | FUN_08988dec | bytes 304 */

void FUN_08988dec(float param_1,undefined4 param_2,int *param_3,undefined1 (*param_4) [16],
                 undefined1 (*param_5) [16],int param_6)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 in_V1F;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 auVar6 [12];
  
  if (param_6 != 0) {
    auVar2 = vsub_q(*param_5,*param_4);
    auVar2 = vscl_q(auVar2,0x3f000000);
    local_24 = auVar2._12_4_;
    auVar1 = vadd_t(*(undefined1 (*) [12])*param_4,auVar2._0_12_);
    auVar3 = vrndf2_t();
    uVar8 = vsub_s(auVar3._0_4_,0x40400000);
    uVar10 = vsub_s(auVar3._4_4_,0x40400000);
    uVar12 = vsub_s(auVar3._8_4_,0x40400000);
    vone_s();
    auVar3._8_4_ = uVar12;
    auVar3._4_4_ = uVar10;
    auVar3._0_4_ = uVar8;
    auVar4._8_4_ = uVar12;
    auVar4._4_4_ = uVar10;
    auVar4._0_4_ = uVar8;
    uVar9 = vdot_t(auVar3,auVar4);
    uVar9 = vsqrt_s(uVar9);
    uVar11 = vmov_s(uVar9);
    uVar13 = vmov_s(uVar9);
    auVar5._8_4_ = uVar12;
    auVar5._4_4_ = uVar10;
    auVar5._0_4_ = uVar8;
    auVar6._8_4_ = uVar13;
    auVar6._4_4_ = uVar11;
    auVar6._0_4_ = uVar9;
    auVar3 = vdiv_t(auVar5,auVar6);
    auVar2._12_4_ = in_V1F;
    auVar2._8_4_ = auVar3._8_4_;
    auVar2._4_4_ = auVar3._4_4_;
    auVar2._0_4_ = auVar3._0_4_;
    auVar2 = vscl_q(auVar2,param_1);
    auVar1 = vadd_t(auVar1,auVar2._0_12_);
    local_30 = auVar1._0_4_;
    local_2c = auVar1._4_4_;
    local_28 = auVar1._8_4_;
    FUN_08988dec(param_1 * 0.5,param_2,param_3,param_4,&local_30,param_6 + -1);
    iVar7 = param_3[1];
    param_3[1] = iVar7 + 1;
    FUN_089a3868(*param_3 + iVar7 * 0x10,&local_30);
    FUN_08988dec(param_1 * 0.5,param_2,param_3,&local_30,param_5,param_6 + -1);
  }
  return;
}

