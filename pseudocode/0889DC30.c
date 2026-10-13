/* Entry 0x0889DC30 | file offset 0x0009AC08 | FUN_0889dc30 | bytes 396 */

undefined4 FUN_0889dc30(int param_1,int param_2,int param_3)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined4 uVar5;
  undefined1 auVar4 [12];
  undefined4 uVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 (*pauVar12) [12];
  undefined4 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 in_V41;
  undefined4 in_V42;
  undefined4 in_V45;
  undefined4 in_V46;
  undefined4 in_V49;
  undefined4 in_V4A;
  uint uVar23;
  
  uVar22 = vzero_s();
  pauVar12 = (undefined1 (*) [12])((*(uint *)(param_1 + 8) & 0xffff) * 0x10 + param_2);
  puVar13 = (undefined4 *)((*(uint *)(param_1 + 0xc) & 0xffff) * 0x10 + param_2);
  uVar16 = *puVar13;
  uVar18 = puVar13[1];
  uVar20 = puVar13[2];
  puVar13 = (undefined4 *)((*(uint *)(param_1 + 8) >> 0x10) * 0x10 + param_2);
  uVar15 = *puVar13;
  uVar17 = puVar13[1];
  uVar19 = puVar13[2];
  uVar14 = *(uint *)(param_1 + 0xc) >> 0x10;
  do {
    auVar1._8_4_ = uVar20;
    auVar1._4_4_ = uVar18;
    auVar1._0_4_ = uVar16;
    auVar1 = vsub_t(auVar1,*pauVar12);
    auVar2._8_4_ = uVar19;
    auVar2._4_4_ = uVar17;
    auVar2._0_4_ = uVar15;
    auVar2 = vsub_t(auVar2,*pauVar12);
    auVar4._8_4_ = in_V4A;
    auVar4._4_4_ = in_V46;
    auVar4._0_4_ = in_V42;
    auVar4 = vcrsp_t(auVar4,auVar1);
    uVar15 = vdot_t(auVar2,auVar4);
    uVar23 = vcmp_s(7,uVar15,0x3727c5ac);
    if ((uVar23 & 1) == 0) {
      if (param_3 != 0) {
        vpfxt(0x10,1,2,3);
        uVar23 = vcmp_s(2,uVar15,0x3727c5ac);
        if ((uVar23 & 1) != 0) {
          auVar8._8_4_ = in_V49;
          auVar8._4_4_ = in_V45;
          auVar8._0_4_ = in_V41;
          auVar3 = vsub_t(auVar8,*pauVar12);
          uVar17 = vdot_t(auVar3,auVar4);
          uVar23 = vcmp_s(7,uVar17,uVar22);
          if (((uVar23 & 1) == 0) && (uVar23 = vcmp_s(2,uVar17,uVar15), (uVar23 & 1) == 0)) {
            auVar2 = vcrsp_t(auVar3,auVar2);
            uVar19 = auVar2._0_4_;
            uVar5 = auVar2._4_4_;
            uVar6 = auVar2._8_4_;
            auVar9._8_4_ = in_V4A;
            auVar9._4_4_ = in_V46;
            auVar9._0_4_ = in_V42;
            uVar21 = vdot_t(auVar9,auVar2);
            uVar23 = vcmp_s(7,uVar21,uVar22);
            if ((uVar23 & 1) == 0) {
              uVar17 = vadd_s(uVar17,uVar21);
              uVar23 = vcmp_s(2,uVar17,uVar15);
              goto joined_r0x0889dcf0;
            }
          }
        }
      }
    }
    else {
      auVar3._8_4_ = in_V49;
      auVar3._4_4_ = in_V45;
      auVar3._0_4_ = in_V41;
      auVar3 = vsub_t(auVar3,*pauVar12);
      uVar17 = vdot_t(auVar3,auVar4);
      uVar23 = vcmp_s(2,uVar17,uVar22);
      if (((uVar23 & 1) == 0) && (uVar23 = vcmp_s(7,uVar17,uVar15), (uVar23 & 1) == 0)) {
        auVar2 = vcrsp_t(auVar3,auVar2);
        uVar19 = auVar2._0_4_;
        uVar5 = auVar2._4_4_;
        uVar6 = auVar2._8_4_;
        auVar7._8_4_ = in_V4A;
        auVar7._4_4_ = in_V46;
        auVar7._0_4_ = in_V42;
        uVar21 = vdot_t(auVar7,auVar2);
        uVar23 = vcmp_s(2,uVar21,uVar22);
        if ((uVar23 & 1) == 0) {
          uVar17 = vadd_s(uVar17,uVar21);
          uVar23 = vcmp_s(7,uVar17,uVar15);
joined_r0x0889dcf0:
          if ((uVar23 & 1) == 0) {
            auVar10._8_4_ = uVar6;
            auVar10._4_4_ = uVar5;
            auVar10._0_4_ = uVar19;
            uVar17 = vdot_t(auVar1,auVar10);
            uVar15 = vdiv_s(uVar17,uVar15);
            uVar23 = vcmp_s(2,uVar15,uVar22);
            if ((uVar23 & 1) == 0) {
              return uVar15;
            }
          }
        }
      }
    }
    if (uVar14 == 0xffff) {
      return 0x7f7fffff;
    }
    auVar11._8_4_ = uVar20;
    auVar11._4_4_ = uVar18;
    auVar11._0_4_ = uVar16;
    auVar1 = vmov_t(auVar11);
    uVar15 = auVar1._0_4_;
    uVar17 = auVar1._4_4_;
    uVar19 = auVar1._8_4_;
    puVar13 = (undefined4 *)(uVar14 * 0x10 + param_2);
    uVar16 = *puVar13;
    uVar18 = puVar13[1];
    uVar20 = puVar13[2];
    uVar14 = 0xffff;
  } while( true );
}

