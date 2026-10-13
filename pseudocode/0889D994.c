/* Entry 0x0889D994 | file offset 0x0009A96C | FUN_0889d994 | bytes 324 */

int FUN_0889d994(int param_1,int param_2,undefined4 *param_3)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar5 [12];
  undefined1 auVar7 [12];
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
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
  undefined4 uVar27;
  undefined4 in_V43;
  undefined4 in_V4B;
  uint uVar28;
  undefined1 auVar4 [12];
  undefined1 auVar6 [12];
  undefined1 auVar8 [12];
  
  puVar10 = (undefined4 *)((*(uint *)(param_1 + 8) & 0xffff) * 0x10 + param_2);
  uVar12 = *puVar10;
  uVar16 = puVar10[2];
  puVar10 = (undefined4 *)((*(uint *)(param_1 + 8) >> 0x10) * 0x10 + param_2);
  uVar20 = *puVar10;
  uVar25 = puVar10[2];
  puVar10 = (undefined4 *)((*(uint *)(param_1 + 0xc) & 0xffff) * 0x10 + param_2);
  uVar13 = *puVar10;
  uVar17 = puVar10[2];
  uVar14 = vmov_s(in_V43);
  uVar15 = vmov_s(in_V4B);
  uVar26 = vzero_s();
  iVar9 = 1;
  uVar11 = *(uint *)(param_1 + 0xc) >> 0x10;
  while( true ) {
    uVar18 = vmov_s(uVar12);
    uVar21 = vmov_s(uVar20);
    uVar19 = vmov_s(uVar16);
    uVar22 = vmov_s(uVar25);
    auVar1._8_4_ = uVar21;
    auVar1._4_4_ = uVar18;
    auVar1._0_4_ = uVar14;
    auVar2._8_4_ = uVar22;
    auVar2._4_4_ = uVar19;
    auVar2._0_4_ = uVar15;
    auVar1 = vcrsp_t(auVar1,auVar2);
    uVar18 = vadd_s(auVar1._0_4_,auVar1._4_4_);
    uVar18 = vadd_s(uVar18,auVar1._8_4_);
    uVar28 = vcmp_s(2,uVar26,uVar18);
    if ((uVar28 & 1) == 0) {
      uVar19 = vmov_s(uVar20);
      uVar22 = vmov_s(uVar13);
      uVar21 = vmov_s(uVar25);
      uVar23 = vmov_s(uVar17);
      auVar3._8_4_ = uVar22;
      auVar3._4_4_ = uVar19;
      auVar3._0_4_ = uVar14;
      auVar4._8_4_ = uVar23;
      auVar4._4_4_ = uVar21;
      auVar4._0_4_ = uVar15;
      auVar1 = vcrsp_t(auVar3,auVar4);
      uVar19 = vadd_s(auVar1._0_4_,auVar1._4_4_);
      uVar19 = vadd_s(uVar19,auVar1._8_4_);
      uVar28 = vcmp_s(2,uVar26,uVar19);
      if ((uVar28 & 1) == 0) {
        uVar21 = vmov_s(uVar13);
        uVar23 = vmov_s(uVar12);
        uVar22 = vmov_s(uVar17);
        uVar24 = vmov_s(uVar16);
        auVar5._8_4_ = uVar23;
        auVar5._4_4_ = uVar21;
        auVar5._0_4_ = uVar14;
        auVar6._8_4_ = uVar24;
        auVar6._4_4_ = uVar22;
        auVar6._0_4_ = uVar15;
        auVar1 = vcrsp_t(auVar5,auVar6);
        uVar27 = vadd_s(auVar1._0_4_,auVar1._4_4_);
        uVar27 = vadd_s(uVar27,auVar1._8_4_);
        uVar28 = vcmp_s(2,uVar26,uVar27);
        if ((uVar28 & 1) == 0) {
          uVar14 = vmov_s(uVar20);
          uVar15 = vmov_s(uVar25);
          auVar7._8_4_ = uVar23;
          auVar7._4_4_ = uVar21;
          auVar7._0_4_ = uVar14;
          auVar8._8_4_ = uVar24;
          auVar8._4_4_ = uVar22;
          auVar8._0_4_ = uVar15;
          auVar1 = vcrsp_t(auVar7,auVar8);
          uVar20 = vadd_s(auVar1._0_4_,auVar1._4_4_);
          uVar20 = vadd_s(uVar20,auVar1._8_4_);
          uVar28 = vcmp_s(3,uVar26,uVar20);
          if ((uVar28 & 1) == 0) {
            *param_3 = uVar18;
            param_3[1] = uVar19;
            param_3[2] = uVar27;
            param_3[3] = uVar20;
            return iVar9;
          }
        }
      }
    }
    if (uVar11 == 0xffff) break;
    puVar10 = (undefined4 *)(uVar11 * 0x10 + param_2);
    uVar20 = *puVar10;
    uVar25 = puVar10[2];
    uVar18 = vmov_s(uVar12);
    uVar19 = vmov_s(uVar16);
    uVar12 = vmov_s(uVar13);
    uVar16 = vmov_s(uVar17);
    uVar13 = vmov_s(uVar18);
    uVar17 = vmov_s(uVar19);
    iVar9 = iVar9 + 1;
    uVar11 = 0xffff;
  }
  return 0;
}

