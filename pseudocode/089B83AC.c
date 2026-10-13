/* Entry 0x089B83AC | file offset 0x001B5384 | FUN_089b83ac | bytes 792 */

void FUN_089b83ac(undefined4 param_1,int param_2,int param_3,undefined4 param_4,
                 undefined1 (*param_5) [16],uint param_6)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 (*pauVar15) [16];
  int iVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 in_V06;
  undefined4 uVar21;
  undefined4 in_V0A;
  undefined4 uVar22;
  undefined4 in_V0B;
  undefined4 uVar23;
  undefined4 in_V0E;
  undefined4 in_V0F;
  uint uVar24;
  undefined1 auVar10 [12];
  
  if (param_2 == 0) {
    return;
  }
  if (param_5 == (undefined1 (*) [16])0x0) {
    return;
  }
  if (param_3 < 0x48) {
    if (param_3 == 0x43) {
      if ((param_6 == *(ushort *)(param_2 + 0x1a)) ||
         (FUN_089b0fe0(param_2,&DAT_089d22f4,param_6), param_6 == *(ushort *)(param_2 + 0x1a))) {
        iVar16 = *(int *)(param_2 + 0xc);
        *(undefined2 *)(param_2 + 2) = 0xfeff;
        goto LAB_089b8634;
      }
    }
    else {
      if (0x43 < param_3) {
        if (param_3 == 0x47) {
          iVar16 = *(int *)(param_2 + 0x30);
          if (iVar16 == 0) {
            FUN_089b10d4(param_2,&DAT_089d2650);
            iVar16 = *(int *)(param_2 + 0x30);
            if (iVar16 == 0) {
              return;
            }
            uVar1 = *(ushort *)(param_2 + 0x42);
          }
          else {
            uVar1 = *(ushort *)(param_2 + 0x42);
          }
          *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | 0x40;
          *(ushort *)(param_2 + 0x42) = uVar1 | 0x10;
        }
        else {
          if (param_3 != 0x4f) {
            return;
          }
          iVar16 = param_2 + 0x28;
          *(undefined2 *)(param_2 + 2) = 0xfdff;
          *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 0x40000;
        }
LAB_089b8634:
        FUN_089ba46c(param_1,iVar16,iVar16,param_5,param_6);
        return;
      }
      if (param_3 == 0x42) {
        fVar17 = *(float *)*param_5;
        *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | 0x800;
        *(int *)(param_2 + 0x24) = (int)(fVar17 + 0.5);
      }
    }
    return;
  }
  iVar16 = param_3 * 5;
  pauVar15 = (undefined1 (*) [16])((uint)*(byte *)((int)&DAT_089d21ac + iVar16) + param_2);
  uVar18 = *(undefined4 *)*param_5;
  uVar20 = *(undefined4 *)(*param_5 + 4);
  uVar21 = *(undefined4 *)(*param_5 + 8);
  uVar23 = *(undefined4 *)(*param_5 + 0xc);
  if (param_3 - 0x49U < 2) {
    uVar18 = vcst_s(6);
    auVar4 = vscl_t(*(undefined1 (*) [12])*param_5,uVar18);
    uVar18 = vcos_s(auVar4._0_4_);
    uVar20 = vsin_s(auVar4._0_4_);
    in_V06 = vcos_s(auVar4._4_4_);
    uVar21 = vsin_s(auVar4._4_4_);
    in_V0A = vcos_s(auVar4._8_4_);
    in_V0B = vsin_s(auVar4._8_4_);
    uVar3 = vmul_p(CONCAT44(uVar20,uVar18),CONCAT44(uVar21,in_V06));
    auVar4._8_4_ = in_V0A;
    auVar4._4_4_ = in_V06;
    auVar4._0_4_ = uVar18;
    auVar5._8_4_ = in_V0A;
    auVar5._4_4_ = in_V06;
    auVar5._0_4_ = uVar18;
    auVar4 = vcrs_t(auVar4,auVar5);
    auVar9._8_4_ = in_V0B;
    auVar9._4_4_ = uVar21;
    auVar9._0_4_ = uVar20;
    auVar10._8_4_ = in_V0B;
    auVar10._4_4_ = uVar21;
    auVar10._0_4_ = uVar20;
    auVar5 = vcrs_t(auVar9,auVar10);
    uVar3 = vmul_p(uVar3,CONCAT44(in_V0B,in_V0A));
    auVar11._8_4_ = in_V0B;
    auVar11._4_4_ = uVar21;
    auVar11._0_4_ = uVar20;
    auVar4 = vmul_t(auVar4,auVar11);
    auVar12._8_4_ = in_V0A;
    auVar12._4_4_ = in_V06;
    auVar12._0_4_ = uVar18;
    auVar5 = vmul_t(auVar5,auVar12);
    vpfxt(0,0x11,0x12,3);
    if (param_3 == 0x49) {
      vpfxt(0x10,1,0x12,3);
    }
    auVar2._12_4_ = (int)uVar3;
    auVar2._8_4_ = auVar4._8_4_;
    auVar2._4_4_ = auVar4._4_4_;
    auVar2._0_4_ = auVar4._0_4_;
    auVar6._12_4_ = (int)((ulonglong)uVar3 >> 0x20);
    auVar6._8_4_ = auVar5._8_4_;
    auVar6._4_4_ = auVar5._4_4_;
    auVar6._0_4_ = auVar5._0_4_;
    auVar6 = vadd_q(auVar2,auVar6);
    uVar18 = auVar6._0_4_;
    uVar20 = auVar6._4_4_;
    uVar21 = auVar6._8_4_;
    uVar23 = auVar6._12_4_;
  }
  else if (param_3 != 0x4b) {
    auVar6 = vmov_q(*param_5);
    auVar6 = vsub_q(auVar6,*pauVar15);
    auVar6 = vscl_q(auVar6,param_1);
    auVar6 = vadd_q(*pauVar15,auVar6);
    uVar18 = auVar6._0_4_;
    uVar20 = auVar6._4_4_;
    uVar21 = auVar6._8_4_;
    uVar23 = auVar6._12_4_;
    goto LAB_089b848c;
  }
  auVar7._12_4_ = uVar23;
  auVar7._8_4_ = uVar21;
  auVar7._4_4_ = uVar20;
  auVar7._0_4_ = uVar18;
  auVar7 = vmov_q(auVar7);
  uVar20 = vcst_s(3);
  uVar18 = vfim_s(0x3bfc);
  vpfxd(4,1,1,1);
  uVar19 = vdot_q(*pauVar15,auVar7);
  auVar2 = vsub_q(auVar7,*pauVar15);
  auVar6 = vadd_q(auVar7,*pauVar15);
  vpfxs(0,0,8,0);
  vpfxt(0,0x10,1,4);
  auVar8._12_4_ = in_V0E;
  auVar8._8_4_ = in_V0A;
  auVar8._4_4_ = in_V06;
  auVar8._0_4_ = uVar19;
  auVar13._12_4_ = in_V0F;
  auVar13._8_4_ = in_V0B;
  auVar13._4_4_ = uVar20;
  auVar13._0_4_ = uVar18;
  uVar24 = vcmp_q(2,auVar8,auVar13);
  uVar18 = vmul_s(uVar19,uVar19);
  vpfxs(0x10,0x11,0x12,0x13);
  auVar8 = vcmovt_q(auVar7,(byte)(uVar24 >> 3) & 1);
  auVar2 = vscl_q(auVar2,param_1);
  auVar7 = vscl_q(auVar6,param_1);
  uVar22 = vocp_s(uVar18);
  auVar6 = vadd_q(*pauVar15,auVar2);
  uVar18 = auVar6._0_4_;
  uVar20 = auVar6._4_4_;
  uVar21 = auVar6._8_4_;
  uVar23 = auVar6._12_4_;
  if ((uVar24 & 1) != 0) {
    auVar6 = vsub_q(*pauVar15,auVar7);
    uVar18 = auVar6._0_4_;
    uVar20 = auVar6._4_4_;
    uVar21 = auVar6._8_4_;
    uVar23 = auVar6._12_4_;
    if ((uVar24 >> 1 & 1) == 0) {
      uVar20 = vasin_s(uVar19);
      uVar21 = vsqrt_s(uVar22);
      uVar18 = vocp_s(param_1);
      vpfxs(8,0,0,0);
      uVar20 = vocp_s(uVar20);
      if ((uVar24 >> 2 & 1) == 0) {
        uVar20 = vasin_s(uVar21);
      }
      uVar3 = vscl_p(CONCAT44(param_1,uVar18),uVar20);
      uVar18 = vsin_s(uVar20);
      uVar20 = vsin_s((int)uVar3);
      uVar23 = vsin_s((int)((ulonglong)uVar3 >> 0x20));
      uVar19 = vrcp_s(uVar18);
      uVar18 = vdot_p(CONCAT44(auVar8._0_4_,*(undefined4 *)*pauVar15),CONCAT44(uVar23,uVar20));
      uVar21 = vdot_p(CONCAT44(auVar8._4_4_,*(undefined4 *)(*pauVar15 + 4)),CONCAT44(uVar23,uVar20))
      ;
      uVar22 = vdot_p(CONCAT44(auVar8._8_4_,*(undefined4 *)(*pauVar15 + 8)),CONCAT44(uVar23,uVar20))
      ;
      uVar20 = vdot_p(CONCAT44(auVar8._12_4_,*(undefined4 *)(*pauVar15 + 0xc)),
                      CONCAT44(uVar23,uVar20));
      auVar14._12_4_ = uVar20;
      auVar14._8_4_ = uVar22;
      auVar14._4_4_ = uVar21;
      auVar14._0_4_ = uVar18;
      auVar6 = vscl_q(auVar14,uVar19);
      uVar18 = auVar6._0_4_;
      uVar20 = auVar6._4_4_;
      uVar21 = auVar6._8_4_;
      uVar23 = auVar6._12_4_;
    }
  }
LAB_089b848c:
  *(undefined4 *)*pauVar15 = uVar18;
  *(undefined4 *)(*pauVar15 + 4) = uVar20;
  *(undefined4 *)(*pauVar15 + 8) = uVar21;
  *(undefined4 *)(*pauVar15 + 0xc) = uVar23;
  *(ushort *)(param_2 + 0x42) =
       ~(ushort)*(byte *)((int)&DAT_089d21ac + iVar16 + 1) & *(ushort *)(param_2 + 0x42) |
       (ushort)*(byte *)((int)&DAT_089d21ac + iVar16 + 2);
  *(ushort *)(param_2 + 2) =
       ~(ushort)*(byte *)((int)&DAT_089d21ac + iVar16 + 3) & *(ushort *)(param_2 + 2) |
       (ushort)*(byte *)((int)&DAT_089d21b0 + iVar16);
  return;
}

