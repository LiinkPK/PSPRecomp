/* Entry 0x0889DAD8 | file offset 0x0009AAB0 | FUN_0889dad8 | bytes 344 */

undefined4 FUN_0889dad8(ushort *param_1,int param_2)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar5 [12];
  undefined1 auVar7 [12];
  undefined1 auVar9 [12];
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 in_V43;
  undefined4 in_V47;
  undefined4 in_V4B;
  undefined4 in_V4F;
  uint uVar27;
  undefined1 auVar4 [12];
  undefined1 auVar6 [12];
  undefined1 auVar8 [12];
  undefined1 auVar10 [12];
  
  puVar11 = (undefined4 *)((uint)*param_1 * 0xc + param_2);
  uVar24 = puVar11[1];
  puVar12 = (undefined4 *)((uint)param_1[1] * 0xc + param_2);
  uVar16 = *puVar12;
  uVar25 = puVar12[1];
  uVar21 = puVar12[2];
  puVar12 = (undefined4 *)((uint)param_1[2] * 0xc + param_2);
  uVar23 = puVar12[1];
  uVar26 = vmin_s(uVar23,uVar24);
  uVar26 = vmin_s(uVar26,uVar25);
  uVar27 = vcmp_s(3,uVar26,in_V47);
  if ((uVar27 & 1) != 0) {
    uVar26 = vmax_s(uVar23,uVar24);
    uVar26 = vmax_s(uVar26,uVar25);
    uVar27 = vcmp_s(7,uVar26,in_V4F);
    if ((uVar27 & 1) != 0) {
      uVar26 = vmov_s(in_V43);
      uVar13 = vmov_s(in_V4B);
      uVar22 = vzero_s();
      uVar14 = vmov_s(*puVar11);
      uVar17 = vmov_s(uVar16);
      uVar15 = vmov_s(puVar11[2]);
      uVar18 = vmov_s(uVar21);
      auVar1._8_4_ = uVar17;
      auVar1._4_4_ = uVar14;
      auVar1._0_4_ = uVar26;
      auVar2._8_4_ = uVar18;
      auVar2._4_4_ = uVar15;
      auVar2._0_4_ = uVar13;
      auVar1 = vcrsp_t(auVar1,auVar2);
      uVar14 = vadd_s(auVar1._0_4_,auVar1._4_4_);
      uVar14 = vadd_s(uVar14,auVar1._8_4_);
      uVar27 = vcmp_s(2,uVar22,uVar14);
      if ((uVar27 & 1) == 0) {
        uVar15 = vmov_s(uVar16);
        uVar18 = vmov_s(*puVar12);
        uVar17 = vmov_s(uVar21);
        uVar19 = vmov_s(puVar12[2]);
        auVar3._8_4_ = uVar18;
        auVar3._4_4_ = uVar15;
        auVar3._0_4_ = uVar26;
        auVar4._8_4_ = uVar19;
        auVar4._4_4_ = uVar17;
        auVar4._0_4_ = uVar13;
        auVar1 = vcrsp_t(auVar3,auVar4);
        uVar15 = vadd_s(auVar1._0_4_,auVar1._4_4_);
        uVar15 = vadd_s(uVar15,auVar1._8_4_);
        uVar27 = vcmp_s(2,uVar22,uVar15);
        if ((uVar27 & 1) == 0) {
          uVar17 = vmov_s(*puVar12);
          uVar19 = vmov_s(*puVar11);
          uVar18 = vmov_s(puVar12[2]);
          uVar20 = vmov_s(puVar11[2]);
          auVar5._8_4_ = uVar19;
          auVar5._4_4_ = uVar17;
          auVar5._0_4_ = uVar26;
          auVar6._8_4_ = uVar20;
          auVar6._4_4_ = uVar18;
          auVar6._0_4_ = uVar13;
          auVar1 = vcrsp_t(auVar5,auVar6);
          uVar26 = vadd_s(auVar1._0_4_,auVar1._4_4_);
          uVar26 = vadd_s(uVar26,auVar1._8_4_);
          uVar27 = vcmp_s(2,uVar22,uVar26);
          if ((uVar27 & 1) == 0) {
            uVar16 = vmov_s(uVar16);
            uVar21 = vmov_s(uVar21);
            auVar7._8_4_ = uVar19;
            auVar7._4_4_ = uVar17;
            auVar7._0_4_ = uVar16;
            auVar8._8_4_ = uVar20;
            auVar8._4_4_ = uVar18;
            auVar8._0_4_ = uVar21;
            auVar1 = vcrsp_t(auVar7,auVar8);
            uVar16 = vadd_s(auVar1._0_4_,auVar1._4_4_);
            uVar16 = vadd_s(uVar16,auVar1._8_4_);
            uVar27 = vcmp_s(3,uVar22,uVar16);
            if ((uVar27 & 1) == 0) {
              auVar9._8_4_ = uVar25;
              auVar9._4_4_ = uVar24;
              auVar9._0_4_ = uVar23;
              auVar10._8_4_ = uVar26;
              auVar10._4_4_ = uVar15;
              auVar10._0_4_ = uVar14;
              uVar21 = vdot_t(auVar9,auVar10);
              uVar16 = vdiv_s(uVar21,uVar16);
              uVar27 = vcmp_s(7,uVar16,in_V4F);
              if ((uVar27 & 1) != 0) {
                vmov_s(uVar16);
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

