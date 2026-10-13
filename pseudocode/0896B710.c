/* Entry 0x0896B710 | file offset 0x001686E8 | FUN_0896b710 | bytes 1608 */

void FUN_0896b710(int *param_1,int param_2,undefined4 *param_3)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 (*pauVar9) [12];
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined1 (*pauVar13) [12];
  undefined1 (*pauVar14) [12];
  undefined1 (*pauVar15) [12];
  undefined1 (*pauVar16) [12];
  undefined1 (*pauVar17) [12];
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined1 (*pauVar22) [64];
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  
  if (*(char *)((int)param_1 + 0x35) == '\0') {
    FUN_0896b1bc(param_1,param_2,param_3);
    *(undefined1 *)((int)param_1 + 0x35) = 1;
  }
  iVar21 = *(int *)(DAT_09b6f478 + 0x8c) +
           (uint)*(ushort *)
                  (*(int *)(*(int *)(DAT_09b6f478 + 0x90) + 8) +
                  (*(int *)(*(int *)(DAT_09b6f478 + 0x90) + 4) + 1) * 2);
  *(bool *)(param_1 + 6) = *(char *)((int)param_3 + 0x25) != '\0';
  pauVar22 = *(undefined1 (**) [64])(*(int *)(param_2 + 0x8c) + 0x50);
  if ((char)param_1[0xd] != '\0') {
    if (*(int *)(*(int *)(param_2 + 0x8c) + 0x1c) == 0) {
      iVar20 = *(int *)(param_2 + 0x88) + 0x50;
    }
    else {
      iVar20 = *(int *)(*(int *)(*(int *)(param_2 + 0x8c) + 0x1c) + 0x54);
    }
    FUN_0896aec0(&local_e0,iVar20,pauVar22);
  }
  iVar20 = (param_1[0xb] + param_1[10] + -1) % param_1[10];
  param_1[0xc] = param_1[0xc] + 1;
  param_1[0xb] = iVar20;
  puVar11 = (undefined4 *)(param_1[9] + iVar20 * 0x10);
  if ((char)param_1[0xd] == '\0') {
    uVar30 = vone_s();
    auVar2._12_4_ = uVar30;
    auVar2._8_4_ = *(undefined4 *)(iVar21 + 0x68);
    auVar2._4_4_ = *(undefined4 *)(iVar21 + 100);
    auVar2._0_4_ = *(undefined4 *)(iVar21 + 0x60);
    auVar2 = vtfm4_q(*pauVar22,auVar2);
    *puVar11 = auVar2._0_4_;
    puVar11[1] = auVar2._4_4_;
    puVar11[2] = auVar2._8_4_;
    puVar11[3] = auVar2._12_4_;
    uVar30 = *puVar11;
  }
  else {
    auVar6._4_4_ = local_dc;
    auVar6._0_4_ = local_e0;
    auVar6._8_4_ = local_d8;
    auVar6._12_4_ = local_d4;
    auVar6._16_4_ = local_d0;
    auVar6._20_4_ = local_cc;
    auVar6._24_4_ = local_c8;
    auVar6._28_4_ = local_c4;
    auVar6._32_4_ = local_c0;
    auVar6._36_4_ = local_bc;
    auVar6._40_4_ = local_b8;
    auVar6._44_4_ = local_b4;
    auVar6._48_4_ = local_b0;
    auVar6._52_4_ = local_ac;
    auVar6._56_4_ = local_a8;
    auVar6._60_4_ = local_a4;
    uVar30 = vone_s();
    auVar3._12_4_ = uVar30;
    auVar3._8_4_ = *(undefined4 *)(iVar21 + 0x68);
    auVar3._4_4_ = *(undefined4 *)(iVar21 + 100);
    auVar3._0_4_ = *(undefined4 *)(iVar21 + 0x60);
    auVar2 = vtfm4_q(auVar6,auVar3);
    *puVar11 = auVar2._0_4_;
    puVar11[1] = auVar2._4_4_;
    puVar11[2] = auVar2._8_4_;
    puVar11[3] = auVar2._12_4_;
    uVar30 = *puVar11;
  }
  puVar12 = (undefined4 *)param_1[1];
  uVar23 = puVar11[1];
  uVar28 = puVar11[2];
  uVar26 = puVar11[3];
  *puVar12 = uVar30;
  puVar12[1] = uVar23;
  puVar12[2] = uVar28;
  puVar12[3] = uVar26;
  iVar21 = (param_1[0xb] + 1) % param_1[10];
  pauVar13 = (undefined1 (*) [12])(param_1[9] + iVar21 * 0x10);
  if (param_1[10] < param_1[0xc]) {
    iVar20 = param_1[10];
    param_1[0xc] = iVar20;
    pauVar16 = (undefined1 (*) [12])(param_1[9] + ((iVar21 + iVar20 + -1) % iVar20) * 0x10);
  }
  else {
    pauVar16 = (undefined1 (*) [12])param_1[9];
  }
  iVar20 = 1;
  pauVar17 = (undefined1 (*) [12])(param_1[9] + param_1[0xb] * 0x10);
  iVar18 = 1;
  if (1 < *param_1) {
    iVar19 = 0x10;
    iVar10 = 4;
    pauVar15 = pauVar13;
    do {
      pauVar9 = (undefined1 (*) [12])(param_1[1] + iVar19);
      fVar25 = *(float *)(param_1[2] + iVar10 + -4);
      fVar24 = *(float *)*pauVar17;
      while( true ) {
        pauVar14 = pauVar13;
        fVar24 = fVar24 - *(float *)*pauVar15;
        fVar29 = *(float *)(*pauVar17 + 4) - *(float *)(*pauVar15 + 4);
        fVar27 = *(float *)(*pauVar17 + 8) - *(float *)(*pauVar15 + 8);
        fVar24 = fVar24 * fVar24 + fVar29 * fVar29 + fVar27 * fVar27;
        if (fVar24 == 0.0) {
          fVar24 = 0.0;
        }
        else {
          fVar24 = SQRT(fVar24);
        }
        if (fVar25 <= fVar24) break;
        iVar21 = (iVar21 + 1) % param_1[10];
        fVar25 = fVar25 - fVar24;
        pauVar15 = (undefined1 (*) [12])(param_1[9] + iVar21 * 0x10);
        if (param_1[5] < *param_1) {
          fVar24 = *(float *)(param_1[2] + iVar10 + -4);
          param_1[7] = (int)((fVar24 - fVar25) / fVar24);
        }
        pauVar13 = pauVar15;
        pauVar17 = pauVar14;
        if (pauVar15 == pauVar16) goto LAB_0896bacc;
        fVar24 = *(float *)*pauVar14;
      }
      auVar1 = vsub_t(*pauVar15,*pauVar17);
      uVar30 = vzero_s();
      *(int *)*pauVar9 = auVar1._0_4_;
      *(int *)(*pauVar9 + 4) = auVar1._4_4_;
      *(int *)(*pauVar9 + 8) = auVar1._8_4_;
      *(undefined4 *)pauVar9[1] = uVar30;
      uVar30 = vdot_t(*pauVar9,*pauVar9);
      uVar23 = vzero_s();
      uVar26 = vcmp_s(8,uVar30,*(undefined4 *)*pauVar9);
      vrsq_s(uVar30);
      uVar30 = vcmovt_s(uVar23,(byte)uVar26 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(*pauVar9,uVar30);
      uVar30 = vone_s();
      *(int *)*pauVar9 = auVar1._0_4_;
      *(int *)(*pauVar9 + 4) = auVar1._4_4_;
      *(int *)(*pauVar9 + 8) = auVar1._8_4_;
      *(undefined4 *)pauVar9[1] = uVar30;
      auVar1 = vscl_t(*pauVar9,fVar25);
      uVar30 = vzero_s();
      *(int *)*pauVar9 = auVar1._0_4_;
      *(int *)(*pauVar9 + 4) = auVar1._4_4_;
      *(int *)(*pauVar9 + 8) = auVar1._8_4_;
      *(undefined4 *)pauVar9[1] = uVar30;
      auVar1 = vadd_t(*pauVar17,*pauVar9);
      uVar30 = vone_s();
      *(int *)*pauVar9 = auVar1._0_4_;
      *(int *)(*pauVar9 + 4) = auVar1._4_4_;
      *(int *)(*pauVar9 + 8) = auVar1._8_4_;
      *(undefined4 *)pauVar9[1] = uVar30;
      pauVar13 = pauVar14;
      pauVar17 = pauVar9;
      if (param_1[5] <= iVar20) {
        param_1[7] = 0x3f800000;
        param_1[5] = param_1[5] + 1;
      }
LAB_0896bacc:
      if (pauVar13 == pauVar16) break;
      iVar18 = iVar18 + 1;
      iVar20 = iVar20 + 1;
      iVar19 = iVar19 + 0x10;
      iVar10 = iVar10 + 4;
    } while (iVar18 < *param_1);
  }
  if (*(char *)((int)param_3 + 0x25) != '\0') {
    if ((char)param_1[0xd] == '\0') {
      local_e0 = *(undefined4 *)*pauVar22;
      local_dc = *(undefined4 *)(*pauVar22 + 4);
      local_d8 = *(undefined4 *)(*pauVar22 + 8);
      local_d4 = *(undefined4 *)(*pauVar22 + 0xc);
      local_d0 = *(undefined4 *)(*pauVar22 + 0x10);
      local_cc = *(undefined4 *)(*pauVar22 + 0x14);
      local_c8 = *(undefined4 *)(*pauVar22 + 0x18);
      local_c4 = *(undefined4 *)(*pauVar22 + 0x1c);
      local_c0 = *(undefined4 *)(*pauVar22 + 0x20);
      local_bc = *(undefined4 *)(*pauVar22 + 0x24);
      local_b8 = *(undefined4 *)(*pauVar22 + 0x28);
      local_b4 = *(undefined4 *)(*pauVar22 + 0x2c);
    }
    auVar7._60_4_ = 0x3f800000;
    auVar7._0_60_ =
         ZEXT4860(CONCAT444(local_b4,CONCAT440(local_b8,CONCAT436(local_bc,CONCAT432(local_c0,
                                                  CONCAT428(local_c4,CONCAT424(local_c8,CONCAT420(
                                                  local_cc,CONCAT416(local_d0,CONCAT412(local_d4,
                                                  CONCAT48(local_d8,CONCAT44(local_dc,local_e0))))))
                                                  ))))));
    uVar30 = vone_s();
    auVar4._12_4_ = uVar30;
    auVar4._8_4_ = -(float)param_3[2];
    auVar4._4_4_ = -(float)param_3[1];
    auVar4._0_4_ = *param_3;
    auVar2 = vtfm4_q(auVar7,auVar4);
    auVar8._60_4_ = 0x3f800000;
    auVar8._0_60_ =
         ZEXT4860(CONCAT444(local_b4,CONCAT440(local_b8,CONCAT436(local_bc,CONCAT432(local_c0,
                                                  CONCAT428(local_c4,CONCAT424(local_c8,CONCAT420(
                                                  local_cc,CONCAT416(local_d0,CONCAT412(local_d4,
                                                  CONCAT48(local_d8,CONCAT44(local_dc,local_e0))))))
                                                  ))))));
    uVar30 = vone_s();
    auVar5._12_4_ = uVar30;
    auVar5._8_4_ = -(float)param_3[6];
    auVar5._4_4_ = -(float)param_3[5];
    auVar5._0_4_ = param_3[4];
    auVar3 = vtfm4_q(auVar8,auVar5);
    iVar20 = 0;
    iVar21 = 0;
    if (0 < *param_1) {
      do {
        puVar11 = (undefined4 *)(param_1[3] + iVar21);
        auVar1 = vadd_t(*(undefined1 (*) [12])(param_1[1] + iVar21),auVar2._0_12_);
        uVar30 = vone_s();
        *puVar11 = auVar1._0_4_;
        puVar11[1] = auVar1._4_4_;
        puVar11[2] = auVar1._8_4_;
        puVar11[3] = uVar30;
        puVar11 = (undefined4 *)(param_1[4] + iVar21);
        auVar1 = vadd_t(*(undefined1 (*) [12])(param_1[1] + iVar21),auVar3._0_12_);
        uVar30 = vone_s();
        *puVar11 = auVar1._0_4_;
        puVar11[1] = auVar1._4_4_;
        puVar11[2] = auVar1._8_4_;
        puVar11[3] = uVar30;
        iVar20 = iVar20 + 1;
        iVar21 = iVar21 + 0x10;
      } while (iVar20 < *param_1);
    }
  }
  return;
}

