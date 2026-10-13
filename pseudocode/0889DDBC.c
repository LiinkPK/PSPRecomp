/* Entry 0x0889DDBC | file offset 0x0009AD94 | FUN_0889ddbc | bytes 820 */

undefined4 FUN_0889ddbc(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar7 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  undefined1 (*pauVar26) [12];
  undefined1 (*pauVar27) [12];
  undefined1 (*pauVar28) [12];
  undefined1 (*pauVar29) [12];
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 in_V03;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 in_V07;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 in_V0B;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 in_V40;
  undefined4 in_V44;
  undefined4 in_V48;
  undefined4 in_V4C;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  undefined1 auVar6 [12];
  undefined1 auVar8 [12];
  undefined1 auVar11 [12];
  undefined1 auVar15 [12];
  undefined1 auVar19 [12];
  undefined1 auVar22 [12];
  
  pauVar26 = (undefined1 (*) [12])((*(uint *)(param_1 + 4) >> 0x10) * 0x10 + param_3);
  auVar3._8_4_ = in_V48;
  auVar3._4_4_ = in_V44;
  auVar3._0_4_ = in_V40;
  uVar39 = vdot_t(auVar3,*pauVar26);
  uVar39 = vsub_s(uVar39,*(undefined4 *)pauVar26[1]);
  vpfxs(8,1,2,3);
  uVar47 = vcmp_s(7,uVar39,in_V4C);
  if ((uVar47 & 1) != 0) {
    return 0x7f7fffff;
  }
  uVar40 = vabs_s(uVar39);
  uVar42 = vzero_s();
  vpfxs(0x10,0x11,0x12,3);
  auVar3 = vscl_t(*pauVar26,uVar39);
  uVar47 = *(uint *)(param_1 + 0xc) >> 0x10;
  auVar1._8_4_ = in_V48;
  auVar1._4_4_ = in_V44;
  auVar1._0_4_ = in_V40;
  auVar3 = vadd_t(auVar3,auVar1);
  uVar39 = auVar3._0_4_;
  uVar45 = auVar3._4_4_;
  uVar46 = auVar3._8_4_;
  pauVar29 = (undefined1 (*) [12])((*(uint *)(param_1 + 0xc) & 0xffff) * 0x10 + param_2);
  uVar32 = *(undefined4 *)*pauVar29;
  uVar35 = *(undefined4 *)(*pauVar29 + 4);
  uVar38 = *(undefined4 *)(*pauVar29 + 8);
  pauVar27 = (undefined1 (*) [12])((*(uint *)(param_1 + 8) & 0xffff) * 0x10 + param_2);
  uVar30 = *(undefined4 *)*pauVar27;
  uVar33 = *(undefined4 *)(*pauVar27 + 4);
  uVar36 = *(undefined4 *)(*pauVar27 + 8);
  pauVar28 = (undefined1 (*) [12])((*(uint *)(param_1 + 8) >> 0x10) * 0x10 + param_2);
  uVar31 = *(undefined4 *)*pauVar28;
  uVar34 = *(undefined4 *)(*pauVar28 + 4);
  uVar37 = *(undefined4 *)(*pauVar28 + 8);
  auVar1 = vsub_t(*pauVar29,auVar3);
  auVar2 = vsub_t(*pauVar27,auVar3);
  auVar1 = vcrsp_t(auVar1,auVar2);
  uVar44 = vdot_t(auVar1,*pauVar26);
  uVar48 = vcmp_s(2,uVar44,uVar42);
  if ((uVar48 & 1) == 0) {
    auVar1 = vsub_t(*pauVar27,auVar3);
    auVar2 = vsub_t(*pauVar28,auVar3);
    auVar1 = vcrsp_t(auVar1,auVar2);
    uVar43 = vdot_t(auVar1,*pauVar26);
    uVar48 = vcmp_s(2,uVar43,uVar42);
    if ((uVar48 & 1) == 0) {
      auVar1 = vsub_t(*pauVar28,auVar3);
      auVar2 = vsub_t(*pauVar29,auVar3);
      auVar1 = vcrsp_t(auVar1,auVar2);
      uVar43 = vdot_t(auVar1,*pauVar26);
      uVar48 = vcmp_s(2,uVar43,uVar42);
      if ((uVar48 & 1) == 0) goto LAB_0889e0c0;
    }
  }
  uVar48 = uVar47;
  if (uVar47 != 0xffff) {
    pauVar28 = (undefined1 (*) [12])(uVar47 * 0x10 + param_2);
    in_V03 = *(undefined4 *)*pauVar28;
    in_V07 = *(undefined4 *)(*pauVar28 + 4);
    in_V0B = *(undefined4 *)(*pauVar28 + 8);
    uVar49 = vcmp_s(7,uVar44,uVar42);
    if ((uVar49 & 1) == 0) {
      auVar1 = vsub_t(*pauVar27,auVar3);
      auVar2 = vsub_t(*pauVar28,auVar3);
      auVar1 = vcrsp_t(auVar1,auVar2);
      uVar44 = vdot_t(auVar1,*pauVar26);
      uVar49 = vcmp_s(7,uVar44,uVar42);
      if ((uVar49 & 1) == 0) {
        auVar1 = vsub_t(*pauVar28,auVar3);
        auVar3 = vsub_t(*pauVar29,auVar3);
        auVar3 = vcrsp_t(auVar1,auVar3);
        uVar44 = vdot_t(auVar3,*pauVar26);
        uVar49 = vcmp_s(7,uVar44,uVar42);
        if ((uVar49 & 1) == 0) {
LAB_0889e0c0:
          *param_4 = uVar39;
          param_4[1] = uVar45;
          param_4[2] = uVar46;
          return uVar40;
        }
      }
    }
  }
  do {
    auVar2._8_4_ = uVar38;
    auVar2._4_4_ = uVar35;
    auVar2._0_4_ = uVar32;
    auVar4._8_4_ = uVar37;
    auVar4._4_4_ = uVar34;
    auVar4._0_4_ = uVar31;
    auVar3 = vsub_t(auVar2,auVar4);
    auVar5._8_4_ = uVar36;
    auVar5._4_4_ = uVar33;
    auVar5._0_4_ = uVar30;
    auVar6._8_4_ = uVar37;
    auVar6._4_4_ = uVar34;
    auVar6._0_4_ = uVar31;
    auVar1 = vsub_t(auVar5,auVar6);
    auVar7._8_4_ = in_V48;
    auVar7._4_4_ = in_V44;
    auVar7._0_4_ = in_V40;
    auVar8._8_4_ = uVar37;
    auVar8._4_4_ = uVar34;
    auVar8._0_4_ = uVar31;
    auVar2 = vsub_t(auVar7,auVar8);
    uVar39 = vdot_t(auVar3,auVar2);
    uVar45 = vdot_t(auVar1,auVar2);
    uVar49 = vcmp_s(7,uVar39,uVar42);
    if (((uVar49 & 1) == 0) && (uVar49 = vcmp_s(7,uVar45,uVar42), (uVar49 & 1) == 0)) {
      auVar9._8_4_ = uVar37;
      auVar9._4_4_ = uVar34;
      auVar9._0_4_ = uVar31;
      auVar3 = vmov_t(auVar9);
      uVar39 = auVar3._0_4_;
      uVar45 = auVar3._4_4_;
      uVar46 = auVar3._8_4_;
LAB_0889e088:
      auVar21._8_4_ = uVar46;
      auVar21._4_4_ = uVar45;
      auVar21._0_4_ = uVar39;
      auVar22._8_4_ = in_V48;
      auVar22._4_4_ = in_V44;
      auVar22._0_4_ = in_V40;
      auVar3 = vsub_t(auVar21,auVar22);
      uVar31 = vdot_t(auVar3,auVar3);
      uVar40 = vsqrt_s(uVar31);
      uVar49 = vcmp_s(3,uVar40,in_V4C);
      if ((uVar49 & 1) != 0) goto LAB_0889e0c0;
    }
    else {
      auVar10._8_4_ = in_V48;
      auVar10._4_4_ = in_V44;
      auVar10._0_4_ = in_V40;
      auVar11._8_4_ = uVar38;
      auVar11._4_4_ = uVar35;
      auVar11._0_4_ = uVar32;
      auVar2 = vsub_t(auVar10,auVar11);
      uVar46 = vdot_t(auVar3,auVar2);
      uVar40 = vdot_t(auVar1,auVar2);
      uVar49 = vcmp_s(2,uVar46,uVar42);
      if (((uVar49 & 1) == 0) && (uVar49 = vcmp_s(7,uVar40,uVar46), (uVar49 & 1) == 0)) {
        auVar12._8_4_ = uVar38;
        auVar12._4_4_ = uVar35;
        auVar12._0_4_ = uVar32;
        auVar3 = vmov_t(auVar12);
        uVar39 = auVar3._0_4_;
        uVar45 = auVar3._4_4_;
        uVar46 = auVar3._8_4_;
        goto LAB_0889e088;
      }
      uVar44 = vmul_s(uVar39,uVar40);
      uVar43 = vmul_s(uVar45,uVar46);
      uVar44 = vsub_s(uVar44,uVar43);
      uVar49 = vcmp_s(7,uVar44,uVar42);
      if ((((uVar49 & 1) == 0) && (uVar49 = vcmp_s(2,uVar39,uVar42), (uVar49 & 1) == 0)) &&
         (uVar49 = vcmp_s(7,uVar46,uVar42), (uVar49 & 1) == 0)) {
        uVar45 = vsub_s(uVar39,uVar46);
        uVar39 = vdiv_s(uVar39,uVar45);
        auVar3 = vscl_t(auVar3,uVar39);
        auVar13._8_4_ = uVar37;
        auVar13._4_4_ = uVar34;
        auVar13._0_4_ = uVar31;
        auVar3 = vadd_t(auVar3,auVar13);
        uVar39 = auVar3._0_4_;
        uVar45 = auVar3._4_4_;
        uVar46 = auVar3._8_4_;
        goto LAB_0889e088;
      }
      auVar14._8_4_ = in_V48;
      auVar14._4_4_ = in_V44;
      auVar14._0_4_ = in_V40;
      auVar15._8_4_ = uVar36;
      auVar15._4_4_ = uVar33;
      auVar15._0_4_ = uVar30;
      auVar2 = vsub_t(auVar14,auVar15);
      uVar44 = vdot_t(auVar3,auVar2);
      uVar43 = vdot_t(auVar1,auVar2);
      uVar49 = vcmp_s(2,uVar43,uVar42);
      if (((uVar49 & 1) == 0) && (uVar49 = vcmp_s(7,uVar44,uVar43), (uVar49 & 1) == 0)) {
        auVar16._8_4_ = uVar36;
        auVar16._4_4_ = uVar33;
        auVar16._0_4_ = uVar30;
        auVar3 = vmov_t(auVar16);
        uVar39 = auVar3._0_4_;
        uVar45 = auVar3._4_4_;
        uVar46 = auVar3._8_4_;
        goto LAB_0889e088;
      }
      uVar41 = vmul_s(uVar44,uVar45);
      uVar39 = vmul_s(uVar39,uVar43);
      uVar39 = vsub_s(uVar41,uVar39);
      uVar49 = vcmp_s(7,uVar39,uVar42);
      if ((((uVar49 & 1) == 0) && (uVar49 = vcmp_s(2,uVar45,uVar42), (uVar49 & 1) == 0)) &&
         (uVar49 = vcmp_s(7,uVar43,uVar42), (uVar49 & 1) == 0)) {
        uVar39 = vsub_s(uVar45,uVar43);
        uVar39 = vdiv_s(uVar45,uVar39);
        auVar3 = vscl_t(auVar1,uVar39);
        auVar17._8_4_ = uVar37;
        auVar17._4_4_ = uVar34;
        auVar17._0_4_ = uVar31;
        auVar3 = vadd_t(auVar3,auVar17);
        uVar39 = auVar3._0_4_;
        uVar45 = auVar3._4_4_;
        uVar46 = auVar3._8_4_;
        goto LAB_0889e088;
      }
      if (uVar47 == 0xffff) {
        uVar39 = vmul_s(uVar46,uVar43);
        uVar45 = vmul_s(uVar44,uVar40);
        uVar39 = vsub_s(uVar39,uVar45);
        uVar49 = vcmp_s(7,uVar39,uVar42);
        if ((uVar49 & 1) == 0) {
          uVar39 = vsub_s(uVar40,uVar46);
          uVar49 = vcmp_s(2,uVar39,uVar42);
          if ((uVar49 & 1) == 0) {
            uVar45 = vsub_s(uVar44,uVar43);
            uVar49 = vcmp_s(2,uVar45,uVar42);
            if ((uVar49 & 1) == 0) {
              uVar45 = vadd_s(uVar45,uVar39);
              uVar39 = vdiv_s(uVar39,uVar45);
              auVar18._8_4_ = uVar36;
              auVar18._4_4_ = uVar33;
              auVar18._0_4_ = uVar30;
              auVar19._8_4_ = uVar38;
              auVar19._4_4_ = uVar35;
              auVar19._0_4_ = uVar32;
              auVar3 = vsub_t(auVar18,auVar19);
              auVar3 = vscl_t(auVar3,uVar39);
              auVar20._8_4_ = uVar38;
              auVar20._4_4_ = uVar35;
              auVar20._0_4_ = uVar32;
              auVar3 = vadd_t(auVar3,auVar20);
              uVar39 = auVar3._0_4_;
              uVar45 = auVar3._4_4_;
              uVar46 = auVar3._8_4_;
              goto LAB_0889e088;
            }
          }
        }
      }
    }
    if (uVar48 == 0xffff) {
      return 0x7f7fffff;
    }
    auVar23._8_4_ = uVar36;
    auVar23._4_4_ = uVar33;
    auVar23._0_4_ = uVar30;
    auVar3 = vmov_t(auVar23);
    auVar24._8_4_ = uVar38;
    auVar24._4_4_ = uVar35;
    auVar24._0_4_ = uVar32;
    auVar1 = vmov_t(auVar24);
    uVar30 = auVar1._0_4_;
    uVar33 = auVar1._4_4_;
    uVar36 = auVar1._8_4_;
    auVar25._8_4_ = in_V0B;
    auVar25._4_4_ = in_V07;
    auVar25._0_4_ = in_V03;
    auVar1 = vmov_t(auVar25);
    uVar31 = auVar1._0_4_;
    uVar34 = auVar1._4_4_;
    uVar37 = auVar1._8_4_;
    auVar3 = vmov_t(auVar3);
    uVar32 = auVar3._0_4_;
    uVar35 = auVar3._4_4_;
    uVar38 = auVar3._8_4_;
    uVar48 = 0xffff;
  } while( true );
}

