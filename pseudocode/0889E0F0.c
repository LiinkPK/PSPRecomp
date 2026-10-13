/* Entry 0x0889E0F0 | file offset 0x0009B0C8 | FUN_0889e0f0 | bytes 168 */

int FUN_0889e0f0(undefined1 (*param_1) [12],int param_2,undefined1 (*param_3) [12])

{
  bool bVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 in_V1D;
  uint uVar14;
  
  uVar7 = *(undefined4 *)*param_1;
  uVar8 = *(undefined4 *)(*param_1 + 4);
  uVar9 = *(undefined4 *)(*param_1 + 8);
  uVar13 = vone_s();
  uVar12 = vzero_s();
  iVar6 = 0;
  iVar5 = 0;
  do {
    param_1 = param_1 + 1;
    auVar2._8_4_ = uVar9;
    auVar2._4_4_ = uVar8;
    auVar2._0_4_ = uVar7;
    auVar2 = vsub_t(*param_1,auVar2);
    auVar3._8_4_ = uVar9;
    auVar3._4_4_ = uVar8;
    auVar3._0_4_ = uVar7;
    auVar3 = vsub_t(auVar3,*param_3);
    uVar10 = vdot_t(auVar2,auVar2);
    uVar11 = vdot_t(auVar2,auVar3);
    vpfxs(0x10,1,2,3);
    uVar10 = vdiv_s(uVar11,uVar10);
    uVar10 = vmin_s(uVar10,uVar13);
    uVar10 = vmax_s(uVar10,uVar12);
    auVar2 = vscl_t(auVar2,uVar10);
    auVar4._8_4_ = uVar9;
    auVar4._4_4_ = uVar8;
    auVar4._0_4_ = uVar7;
    auVar2 = vadd_t(auVar2,auVar4);
    auVar2 = vsub_t(auVar2,*param_3);
    uVar10 = vdot_t(auVar2,auVar2);
    auVar2 = vmov_t(*param_1);
    uVar7 = auVar2._0_4_;
    uVar8 = auVar2._4_4_;
    uVar9 = auVar2._8_4_;
    if (iVar6 == 0) {
      in_V1D = vmov_s(uVar10);
    }
    else {
      uVar14 = vcmp_s(2,uVar10,in_V1D);
      if ((uVar14 & 1) != 0) {
        in_V1D = vmov_s(uVar10);
        iVar5 = iVar6;
      }
    }
    bVar1 = iVar6 != param_2 + -1;
    iVar6 = iVar6 + 1;
  } while (bVar1);
  return iVar5;
}

