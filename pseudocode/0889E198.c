/* Entry 0x0889E198 | file offset 0x0009B170 | FUN_0889e198 | bytes 192 */

undefined4
FUN_0889e198(undefined1 (*param_1) [12],int param_2,undefined1 (*param_3) [12],undefined4 *param_4)

{
  bool bVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 in_V11;
  undefined4 in_V15;
  undefined4 in_V19;
  undefined4 uVar12;
  undefined4 in_V1D;
  uint uVar13;
  
  uVar6 = *(undefined4 *)*param_1;
  uVar7 = *(undefined4 *)(*param_1 + 4);
  uVar8 = *(undefined4 *)(*param_1 + 8);
  uVar12 = vone_s();
  uVar11 = vzero_s();
  iVar5 = 0;
  do {
    param_1 = param_1 + 1;
    auVar2._8_4_ = uVar8;
    auVar2._4_4_ = uVar7;
    auVar2._0_4_ = uVar6;
    auVar2 = vsub_t(*param_1,auVar2);
    auVar3._8_4_ = uVar8;
    auVar3._4_4_ = uVar7;
    auVar3._0_4_ = uVar6;
    auVar3 = vsub_t(auVar3,*param_3);
    uVar9 = vdot_t(auVar2,auVar2);
    uVar10 = vdot_t(auVar2,auVar3);
    vpfxs(0x10,1,2,3);
    uVar9 = vdiv_s(uVar10,uVar9);
    uVar9 = vmin_s(uVar9,uVar12);
    uVar9 = vmax_s(uVar9,uVar11);
    auVar2 = vscl_t(auVar2,uVar9);
    auVar4._8_4_ = uVar8;
    auVar4._4_4_ = uVar7;
    auVar4._0_4_ = uVar6;
    auVar2 = vadd_t(auVar2,auVar4);
    auVar3 = vsub_t(auVar2,*param_3);
    uVar9 = vdot_t(auVar3,auVar3);
    auVar3 = vmov_t(*param_1);
    uVar6 = auVar3._0_4_;
    uVar7 = auVar3._4_4_;
    uVar8 = auVar3._8_4_;
    if (iVar5 == 0) {
      auVar2 = vmov_t(auVar2);
      in_V11 = auVar2._0_4_;
      in_V15 = auVar2._4_4_;
      in_V19 = auVar2._8_4_;
      in_V1D = vmov_s(uVar9);
    }
    else {
      uVar13 = vcmp_s(2,uVar9,in_V1D);
      if ((uVar13 & 1) != 0) {
        auVar2 = vmov_t(auVar2);
        in_V11 = auVar2._0_4_;
        in_V15 = auVar2._4_4_;
        in_V19 = auVar2._8_4_;
        in_V1D = vmov_s(uVar9);
      }
    }
    bVar1 = iVar5 != param_2 + -1;
    iVar5 = iVar5 + 1;
  } while (bVar1);
  uVar6 = vsqrt_s(in_V1D);
  *param_4 = in_V11;
  param_4[1] = in_V15;
  param_4[2] = in_V19;
  return uVar6;
}

