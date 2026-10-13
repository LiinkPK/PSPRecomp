/* Entry 0x089B86C4 | file offset 0x001B569C | FUN_089b86c4 | bytes 2700 */

uint FUN_089b86c4(float param_1,int param_2,ushort *param_3,float *param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  ushort uVar39;
  uint uVar40;
  uint uVar41;
  int iVar42;
  undefined2 *puVar43;
  float *pfVar44;
  undefined2 *puVar45;
  float *pfVar46;
  undefined2 *puVar47;
  int iVar48;
  float *pfVar49;
  undefined2 *puVar50;
  float *pfVar51;
  float *pfVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float in_V00;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 in_V06;
  undefined4 uVar69;
  undefined4 uVar70;
  float in_V08;
  undefined4 in_V0A;
  undefined4 in_V0B;
  float in_V0C;
  undefined4 in_V0E;
  undefined4 in_V0F;
  undefined4 in_V18;
  undefined4 in_V19;
  undefined4 in_V1A;
  undefined4 in_V1B;
  undefined4 in_V1C;
  undefined4 in_V1D;
  undefined4 in_V1E;
  undefined4 in_V1F;
  float local_70 [4];
  undefined1 auVar12 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  undefined1 auVar29 [16];
  undefined1 auVar35 [16];
  
  if (((param_2 == 0) || (param_3 == (ushort *)0x0)) || (param_4 == (float *)0x0)) {
    return 0;
  }
  uVar39 = *(ushort *)(param_2 + 8);
  iVar42 = 3;
  if (((uVar39 & 0xf) != 2) && (iVar42 = 5, (uVar39 & 0xf) != 3)) {
    iVar42 = 1;
  }
  uVar40 = (uint)*(ushort *)(param_2 + 10);
  if ((uVar39 & 0x80) == 0) {
    if (uVar40 < 2) {
      fVar54 = 0.0;
      pfVar46 = *(float **)(param_2 + 4);
      pfVar49 = pfVar46;
      fVar56 = fVar54;
      goto LAB_089b8af8;
    }
    uVar41 = (uint)*(byte *)(param_2 + 0xc);
    if ((uVar39 & 0xf) == 2) {
      uVar41 = uVar41 * 3;
    }
    else if ((uVar39 & 0xf) == 3) {
      uVar41 = uVar41 * 5;
    }
    pfVar51 = *(float **)(param_2 + 4);
    iVar48 = uVar41 * 4 + 4;
    pfVar49 = (float *)((int)pfVar51 + iVar48 * (uVar40 - 1));
    pfVar44 = (float *)((int)pfVar51 + (uint)*param_3);
    fVar60 = param_1;
    if ((uVar39 & 0xff00) != 0) {
      param_1 = (float)FUN_089b7df0(param_1,*pfVar51,*pfVar49,uVar39);
    }
    if (pfVar44 < pfVar49) {
      pfVar44 = pfVar44 + uVar41 + 1;
    }
    fVar54 = *pfVar44;
    pfVar46 = pfVar44;
    if (fVar54 <= param_1) {
      if (pfVar49 <= pfVar44) goto LAB_089b8ad8;
      fVar56 = fVar54;
      pfVar52 = pfVar44 + uVar41 + 1;
      fVar54 = pfVar44[uVar41 + 1];
      while (pfVar44 = pfVar52, fVar54 <= param_1) {
        if (pfVar49 <= pfVar44) goto LAB_089b8ad8;
        fVar56 = fVar54;
        pfVar52 = pfVar44 + uVar41 + 1;
        pfVar46 = pfVar44;
        fVar54 = pfVar44[uVar41 + 1];
      }
    }
    else if (pfVar51 < pfVar44) {
      do {
        pfVar46 = (float *)((int)pfVar46 - iVar48);
        fVar56 = *pfVar46;
        if (fVar56 <= param_1) goto LAB_089b8adc;
        fVar54 = fVar56;
      } while (pfVar51 < pfVar46);
      iVar48 = 0;
    }
    else {
LAB_089b8ad8:
      iVar48 = 0;
      pfVar46 = pfVar44;
      fVar56 = fVar54;
    }
LAB_089b8adc:
    *param_3 = (short)pfVar46 - (short)pfVar51;
    if (param_1 == fVar56) {
      iVar48 = 0;
    }
    pfVar49 = (float *)(iVar48 + (int)pfVar46);
    param_1 = fVar60;
LAB_089b8af8:
    if (*(char *)(param_2 + 0xc) == '\0') {
      return 0;
    }
    iVar48 = 0;
    fVar60 = 1.0;
    do {
      fVar53 = 0.0;
      if (pfVar46 != pfVar49) {
        fVar53 = (param_1 - fVar56) / (fVar54 - fVar56);
      }
      uVar39 = *(ushort *)(param_2 + 8) & 0xf;
      fVar62 = fVar60;
      if ((*(ushort *)(param_2 + 8) & 0xf) == 0) {
        in_V00 = pfVar46[1];
        fVar55 = pfVar46[2];
        fVar58 = pfVar46[3];
        fVar63 = pfVar46[4];
      }
      else if (uVar39 == 1) {
        auVar3 = vsub_q(*(undefined1 (*) [16])(pfVar49 + 1),*(undefined1 (*) [16])(pfVar46 + 1));
        auVar3 = vscl_q(auVar3,fVar53);
        auVar3 = vadd_q(*(undefined1 (*) [16])(pfVar46 + 1),auVar3);
        in_V00 = auVar3._0_4_;
        fVar55 = auVar3._4_4_;
        fVar58 = auVar3._8_4_;
        fVar63 = auVar3._12_4_;
      }
      else if (uVar39 == 2) {
        auVar3._12_4_ = pfVar46[0xc];
        auVar3._8_4_ = pfVar46[9];
        auVar3._4_4_ = pfVar46[6];
        auVar3._0_4_ = pfVar46[3];
        auVar4._12_4_ = pfVar46[10];
        auVar4._8_4_ = pfVar46[7];
        auVar4._4_4_ = pfVar46[4];
        auVar4._0_4_ = pfVar46[1];
        auVar3 = vadd_q(auVar3,auVar4);
        auVar10._12_4_ = pfVar49[0xb];
        auVar10._8_4_ = pfVar49[8];
        auVar10._4_4_ = pfVar49[5];
        auVar10._0_4_ = pfVar49[2];
        auVar5._12_4_ = pfVar49[10];
        auVar5._8_4_ = pfVar49[7];
        auVar5._4_4_ = pfVar49[4];
        auVar5._0_4_ = pfVar49[1];
        auVar4 = vadd_q(auVar10,auVar5);
        uVar64 = vocp_s(fVar53);
        vpfxt(4,4,4,4);
        auVar5 = vscl_q(auVar3,in_V00);
        vpfxt(4,4,4,4);
        auVar4 = vscl_q(auVar4,in_V00);
        uVar9 = vmul_p(CONCAT44(fVar53,uVar64),CONCAT44(fVar53,uVar64));
        vpfxs(0,1,1,0);
        vpfxt(2,3,2,3);
        auVar20._8_8_ = uVar9;
        auVar20._4_4_ = fVar53;
        auVar20._0_4_ = uVar64;
        auVar21._8_8_ = uVar9;
        auVar21._4_4_ = fVar53;
        auVar21._0_4_ = uVar64;
        auVar3 = vmul_q(auVar20,auVar21);
        auVar38._48_16_ = auVar4;
        auVar38._44_4_ = auVar5._12_4_;
        auVar38._40_4_ = auVar5._8_4_;
        auVar38._36_4_ = auVar5._4_4_;
        auVar38._32_4_ = auVar5._0_4_;
        auVar38._28_4_ = pfVar49[10];
        auVar38._24_4_ = pfVar49[7];
        auVar38._20_4_ = pfVar49[4];
        auVar38._16_4_ = pfVar49[1];
        auVar38._12_4_ = pfVar46[10];
        auVar38._8_4_ = pfVar46[7];
        auVar38._4_4_ = pfVar46[4];
        auVar38._0_4_ = pfVar46[1];
        auVar3 = vtfm4_q(auVar38,auVar3);
        in_V00 = auVar3._0_4_;
        fVar55 = auVar3._4_4_;
        fVar58 = auVar3._8_4_;
        fVar63 = auVar3._12_4_;
      }
      else {
        pfVar44 = pfVar49;
        pfVar51 = pfVar46;
        pfVar52 = local_70;
        if (uVar39 == 4) {
          pauVar1 = (undefined1 (*) [16])(pfVar46 + 1);
          pauVar2 = (undefined1 (*) [16])(pfVar49 + 1);
          uVar68 = vcst_s(3);
          uVar65 = vfim_s(0x3bfc);
          vpfxd(4,1,1,1);
          uVar64 = vdot_q(*pauVar1,*pauVar2);
          auVar4 = vsub_q(*pauVar2,*pauVar1);
          auVar3 = vadd_q(*pauVar2,*pauVar1);
          vpfxs(0,0,8,0);
          vpfxt(0,0x10,1,4);
          auVar34._12_4_ = in_V0E;
          auVar34._8_4_ = in_V0A;
          auVar34._4_4_ = in_V06;
          auVar34._0_4_ = uVar64;
          auVar35._12_4_ = in_V0F;
          auVar35._8_4_ = in_V0B;
          auVar35._4_4_ = uVar68;
          auVar35._0_4_ = uVar65;
          uVar40 = vcmp_q(2,auVar34,auVar35);
          uVar65 = vmul_s(uVar64,uVar64);
          vpfxs(0x10,0x11,0x12,0x13);
          auVar10 = vcmovt_q(*pauVar2,(byte)(uVar40 >> 3) & 1);
          auVar4 = vscl_q(auVar4,fVar53);
          auVar5 = vscl_q(auVar3,fVar53);
          in_V0A = vocp_s(uVar65);
          auVar3 = vadd_q(*pauVar1,auVar4);
          in_V00 = auVar3._0_4_;
          fVar55 = auVar3._4_4_;
          fVar58 = auVar3._8_4_;
          fVar63 = auVar3._12_4_;
          if ((uVar40 & 1) != 0) {
            auVar3 = vsub_q(*pauVar1,auVar5);
            in_V00 = auVar3._0_4_;
            fVar55 = auVar3._4_4_;
            fVar58 = auVar3._8_4_;
            fVar63 = auVar3._12_4_;
            if ((uVar40 >> 1 & 1) == 0) {
              uVar65 = vasin_s(uVar64);
              in_V0A = vsqrt_s(in_V0A);
              uVar64 = vocp_s(fVar53);
              vpfxs(8,0,0,0);
              uVar65 = vocp_s(uVar65);
              if ((uVar40 >> 2 & 1) == 0) {
                uVar65 = vasin_s(in_V0A);
              }
              uVar9 = vscl_p(CONCAT44(fVar53,uVar64),uVar65);
              uVar64 = vsin_s(uVar65);
              uVar65 = vsin_s((int)uVar9);
              uVar69 = vsin_s((int)((ulonglong)uVar9 >> 0x20));
              in_V06 = vrcp_s(uVar64);
              uVar64 = vdot_p(CONCAT44(auVar10._0_4_,*(undefined4 *)*pauVar1),
                              CONCAT44(uVar69,uVar65));
              uVar68 = vdot_p(CONCAT44(auVar10._4_4_,pfVar46[2]),CONCAT44(uVar69,uVar65));
              uVar66 = vdot_p(CONCAT44(auVar10._8_4_,pfVar46[3]),CONCAT44(uVar69,uVar65));
              uVar65 = vdot_p(CONCAT44(auVar10._12_4_,pfVar46[4]),CONCAT44(uVar69,uVar65));
              auVar36._12_4_ = uVar65;
              auVar36._8_4_ = uVar66;
              auVar36._4_4_ = uVar68;
              auVar36._0_4_ = uVar64;
              auVar3 = vscl_q(auVar36,in_V06);
              in_V00 = auVar3._0_4_;
              fVar55 = auVar3._4_4_;
              fVar58 = auVar3._8_4_;
              fVar63 = auVar3._12_4_;
            }
          }
        }
        else {
          do {
            fVar55 = (float)FUN_089b7f8c(fVar56,fVar56 + pfVar51[4],pfVar44[2] + fVar54,fVar54,
                                         param_1);
            fVar53 = fVar60 - fVar55;
            fVar63 = fVar53 * fVar55 * fVar55 * 3.0;
            fVar58 = fVar55 * fVar53 * fVar53 * 3.0;
            *pfVar52 = (fVar58 + fVar53 * fVar53 * fVar53) * pfVar51[1] + fVar58 * pfVar51[5] +
                       fVar63 * pfVar44[3] + (fVar63 + fVar55 * fVar55 * fVar55) * pfVar44[1];
            pfVar52 = pfVar52 + 1;
            pfVar44 = pfVar44 + 5;
            pfVar51 = pfVar51 + 5;
            in_V00 = local_70[0];
            fVar55 = local_70[1];
            fVar58 = local_70[2];
            fVar63 = local_70[3];
          } while ((float *)&stack0xffffffa0 != pfVar52);
        }
      }
      *param_4 = in_V00;
      param_4[1] = fVar55;
      param_4[2] = fVar58;
      param_4[3] = fVar63;
      iVar48 = iVar48 + 4;
      pfVar46 = pfVar46 + iVar42 * 4;
      pfVar49 = pfVar49 + iVar42 * 4;
      param_4 = param_4 + 4;
      fVar60 = fVar62;
    } while (iVar48 < (int)(uint)*(byte *)(param_2 + 0xc));
    return (uint)*(byte *)(param_2 + 0xc);
  }
  if (uVar40 < 2) {
    fVar56 = 0.0;
    puVar43 = *(undefined2 **)(param_2 + 4);
    puVar50 = puVar43;
    fVar54 = fVar56;
    goto LAB_089b8824;
  }
  uVar41 = (uint)*(byte *)(param_2 + 0xc);
  if ((uVar39 & 0xf) == 2) {
    uVar41 = uVar41 * 3;
  }
  else if ((uVar39 & 0xf) == 3) {
    uVar41 = uVar41 * 5;
  }
  puVar50 = *(undefined2 **)(param_2 + 4);
  iVar48 = uVar41 * 4 + 4;
  if ((uVar39 & 0x80) != 0) {
    iVar48 = iVar48 >> 1;
  }
  puVar47 = (undefined2 *)((int)puVar50 + iVar48 * (uVar40 - 1));
  puVar43 = (undefined2 *)((int)puVar50 + (uint)*param_3);
  fVar60 = param_1;
  if ((uVar39 & 0xff00) != 0) {
    uVar64 = FUN_089b7f58(*puVar50);
    uVar65 = FUN_089b7f58(*puVar47);
    fVar60 = param_1;
    param_1 = (float)FUN_089b7df0(param_1,uVar64,uVar65,uVar39);
  }
  if (puVar43 < puVar47) {
    puVar43 = (undefined2 *)((int)puVar43 + iVar48);
  }
  fVar54 = (float)FUN_089b7f58(*puVar43);
  fVar56 = fVar54;
  if (fVar54 <= param_1) {
    if (puVar47 <= puVar43) goto LAB_089b8804;
    do {
      puVar45 = (undefined2 *)((int)puVar43 + iVar48);
      fVar54 = (float)FUN_089b7f58(*puVar45);
      if (param_1 < fVar54) goto LAB_089b8808;
      puVar43 = puVar45;
      fVar56 = fVar54;
    } while (puVar45 < puVar47);
    iVar48 = 0;
  }
  else if (puVar50 < puVar43) {
    do {
      puVar43 = (undefined2 *)((int)puVar43 - iVar48);
      fVar56 = (float)FUN_089b7f58(*puVar43);
      if (fVar56 <= param_1) goto LAB_089b8808;
      fVar54 = fVar56;
    } while (puVar50 < puVar43);
    iVar48 = 0;
  }
  else {
LAB_089b8804:
    iVar48 = 0;
  }
LAB_089b8808:
  *param_3 = (short)puVar43 - (short)puVar50;
  if (param_1 == fVar56) {
    iVar48 = 0;
  }
  puVar50 = (undefined2 *)(iVar48 + (int)puVar43);
  param_1 = fVar60;
LAB_089b8824:
  uVar40 = 0;
  if (*(char *)(param_2 + 0xc) != '\0') {
    iVar48 = 0;
    fVar60 = 3.0;
    do {
      while( true ) {
        fVar53 = 0.0;
        if (puVar43 != puVar50) {
          fVar53 = (param_1 - fVar56) / (fVar54 - fVar56);
        }
        uVar39 = *(ushort *)(param_2 + 8) & 0xf;
        if ((*(ushort *)(param_2 + 8) & 0xf) != 0) break;
        uVar9 = vh2f_p(*(undefined8 *)(puVar43 + 1));
        in_V00 = (float)uVar9;
        fVar62 = (float)((ulonglong)uVar9 >> 0x20);
LAB_089b885c:
        *param_4 = in_V00;
        param_4[1] = fVar62;
        param_4[2] = in_V08;
        param_4[3] = in_V0C;
        iVar48 = iVar48 + 4;
        puVar43 = puVar43 + iVar42 * 4;
        puVar50 = puVar50 + iVar42 * 4;
        param_4 = param_4 + 4;
        if ((int)(uint)*(byte *)(param_2 + 0xc) <= iVar48) {
          return (uint)*(byte *)(param_2 + 0xc);
        }
      }
      if (uVar39 == 1) {
        uVar9 = vh2f_p(*(undefined8 *)(puVar43 + 1));
        uVar64 = (undefined4)((ulonglong)uVar9 >> 0x20);
        uVar6 = vh2f_p(*(undefined8 *)(puVar50 + 1));
        auVar11._12_4_ = in_V1D;
        auVar11._8_4_ = in_V19;
        auVar11._4_4_ = (int)((ulonglong)uVar6 >> 0x20);
        auVar11._0_4_ = (int)uVar6;
        auVar12._12_4_ = in_V1C;
        auVar12._8_4_ = in_V18;
        auVar12._4_4_ = uVar64;
        auVar12._0_4_ = (int)uVar9;
        auVar3 = vsub_q(auVar11,auVar12);
        auVar3 = vscl_q(auVar3,fVar53);
        in_V19 = auVar3._8_4_;
        in_V1D = auVar3._12_4_;
        auVar13._12_4_ = in_V1C;
        auVar13._8_4_ = in_V18;
        auVar13._4_4_ = uVar64;
        auVar13._0_4_ = (int)uVar9;
        auVar3 = vadd_q(auVar13,auVar3);
        in_V00 = auVar3._0_4_;
        fVar62 = auVar3._4_4_;
        in_V08 = auVar3._8_4_;
        in_V0C = auVar3._12_4_;
        goto LAB_089b885c;
      }
      if (uVar39 == 2) {
        uVar6 = vh2f_p(CONCAT44(CONCAT22(puVar43[10],puVar43[7]),CONCAT22(puVar43[4],puVar43[1])));
        uVar64 = (undefined4)((ulonglong)uVar6 >> 0x20);
        uVar7 = vh2f_p(CONCAT44(CONCAT22(puVar50[10],puVar50[7]),CONCAT22(puVar50[4],puVar50[1])));
        uVar65 = (undefined4)((ulonglong)uVar7 >> 0x20);
        uVar9 = vh2f_p(CONCAT44(CONCAT22(puVar43[0xc],puVar43[9]),CONCAT22(puVar43[6],puVar43[3])));
        uVar8 = vh2f_p(CONCAT44(CONCAT22(puVar50[0xb],puVar50[8]),CONCAT22(puVar50[5],puVar50[2])));
        auVar14._12_4_ = in_V1E;
        auVar14._8_4_ = in_V1A;
        auVar14._4_4_ = (int)((ulonglong)uVar9 >> 0x20);
        auVar14._0_4_ = (int)uVar9;
        auVar15._12_4_ = in_V1C;
        auVar15._8_4_ = in_V18;
        auVar15._4_4_ = uVar64;
        auVar15._0_4_ = (int)uVar6;
        auVar3 = vadd_q(auVar14,auVar15);
        auVar16._12_4_ = in_V1F;
        auVar16._8_4_ = in_V1B;
        auVar16._4_4_ = (int)((ulonglong)uVar8 >> 0x20);
        auVar16._0_4_ = (int)uVar8;
        auVar17._12_4_ = in_V1D;
        auVar17._8_4_ = in_V19;
        auVar17._4_4_ = uVar65;
        auVar17._0_4_ = (int)uVar7;
        auVar4 = vadd_q(auVar16,auVar17);
        uVar68 = vocp_s(fVar53);
        vpfxt(4,4,4,4);
        auVar5 = vscl_q(auVar3,in_V00);
        in_V1A = auVar5._8_4_;
        in_V1E = auVar5._12_4_;
        vpfxt(4,4,4,4);
        auVar4 = vscl_q(auVar4,in_V00);
        in_V1B = auVar4._8_4_;
        in_V1F = auVar4._12_4_;
        uVar9 = vmul_p(CONCAT44(fVar53,uVar68),CONCAT44(fVar53,uVar68));
        vpfxs(0,1,1,0);
        vpfxt(2,3,2,3);
        auVar18._8_8_ = uVar9;
        auVar18._4_4_ = fVar53;
        auVar18._0_4_ = uVar68;
        auVar19._8_8_ = uVar9;
        auVar19._4_4_ = fVar53;
        auVar19._0_4_ = uVar68;
        auVar3 = vmul_q(auVar18,auVar19);
        auVar37._48_16_ = auVar4;
        auVar37._44_4_ = in_V1E;
        auVar37._40_4_ = in_V1A;
        auVar37._36_4_ = auVar5._4_4_;
        auVar37._32_4_ = auVar5._0_4_;
        auVar37._28_4_ = in_V1D;
        auVar37._24_4_ = in_V19;
        auVar37._20_4_ = uVar65;
        auVar37._16_4_ = (int)uVar7;
        auVar37._12_4_ = in_V1C;
        auVar37._8_4_ = in_V18;
        auVar37._4_4_ = uVar64;
        auVar37._0_4_ = (int)uVar6;
        auVar3 = vtfm4_q(auVar37,auVar3);
        in_V00 = auVar3._0_4_;
        fVar62 = auVar3._4_4_;
        in_V08 = auVar3._8_4_;
        in_V0C = auVar3._12_4_;
        goto LAB_089b885c;
      }
      puVar47 = puVar50;
      puVar45 = puVar43;
      pfVar46 = local_70;
      fVar62 = fVar60;
      if (uVar39 == 4) {
        uVar9 = vh2f_p(*(undefined8 *)(puVar43 + 1));
        uVar64 = (undefined4)uVar9;
        uVar68 = (undefined4)((ulonglong)uVar9 >> 0x20);
        uVar9 = vh2f_p(*(undefined8 *)(puVar50 + 1));
        uVar65 = (undefined4)uVar9;
        uVar69 = (undefined4)((ulonglong)uVar9 >> 0x20);
        uVar70 = vcst_s(3);
        uVar67 = vfim_s(0x3bfc);
        vpfxd(4,1,1,1);
        auVar22._12_4_ = in_V1C;
        auVar22._8_4_ = in_V18;
        auVar22._4_4_ = uVar68;
        auVar22._0_4_ = uVar64;
        auVar23._12_4_ = in_V1D;
        auVar23._8_4_ = in_V19;
        auVar23._4_4_ = uVar69;
        auVar23._0_4_ = uVar65;
        uVar66 = vdot_q(auVar22,auVar23);
        auVar24._12_4_ = in_V1D;
        auVar24._8_4_ = in_V19;
        auVar24._4_4_ = uVar69;
        auVar24._0_4_ = uVar65;
        auVar25._12_4_ = in_V1C;
        auVar25._8_4_ = in_V18;
        auVar25._4_4_ = uVar68;
        auVar25._0_4_ = uVar64;
        auVar4 = vsub_q(auVar24,auVar25);
        auVar26._12_4_ = in_V1D;
        auVar26._8_4_ = in_V19;
        auVar26._4_4_ = uVar69;
        auVar26._0_4_ = uVar65;
        auVar27._12_4_ = in_V1C;
        auVar27._8_4_ = in_V18;
        auVar27._4_4_ = uVar68;
        auVar27._0_4_ = uVar64;
        auVar3 = vadd_q(auVar26,auVar27);
        vpfxs(0,0,8,0);
        vpfxt(0,0x10,1,4);
        auVar28._12_4_ = in_V0E;
        auVar28._8_4_ = in_V0A;
        auVar28._4_4_ = in_V06;
        auVar28._0_4_ = uVar66;
        auVar29._12_4_ = in_V0F;
        auVar29._8_4_ = in_V0B;
        auVar29._4_4_ = uVar70;
        auVar29._0_4_ = uVar67;
        uVar40 = vcmp_q(2,auVar28,auVar29);
        uVar67 = vmul_s(uVar66,uVar66);
        vpfxs(0x10,0x11,0x12,0x13);
        auVar30._12_4_ = in_V1D;
        auVar30._8_4_ = in_V19;
        auVar30._4_4_ = uVar69;
        auVar30._0_4_ = uVar65;
        auVar10 = vcmovt_q(auVar30,(byte)(uVar40 >> 3) & 1);
        in_V19 = auVar10._8_4_;
        in_V1D = auVar10._12_4_;
        auVar4 = vscl_q(auVar4,fVar53);
        in_V1A = auVar4._8_4_;
        in_V1E = auVar4._12_4_;
        auVar5 = vscl_q(auVar3,fVar53);
        in_V1B = auVar5._8_4_;
        in_V1F = auVar5._12_4_;
        in_V0A = vocp_s(uVar67);
        auVar31._12_4_ = in_V1C;
        auVar31._8_4_ = in_V18;
        auVar31._4_4_ = uVar68;
        auVar31._0_4_ = uVar64;
        auVar3 = vadd_q(auVar31,auVar4);
        in_V00 = auVar3._0_4_;
        fVar62 = auVar3._4_4_;
        in_V08 = auVar3._8_4_;
        in_V0C = auVar3._12_4_;
        if ((uVar40 & 1) != 0) {
          auVar32._12_4_ = in_V1C;
          auVar32._8_4_ = in_V18;
          auVar32._4_4_ = uVar68;
          auVar32._0_4_ = uVar64;
          auVar3 = vsub_q(auVar32,auVar5);
          in_V00 = auVar3._0_4_;
          fVar62 = auVar3._4_4_;
          in_V08 = auVar3._8_4_;
          in_V0C = auVar3._12_4_;
          if ((uVar40 >> 1 & 1) == 0) {
            uVar69 = vasin_s(uVar66);
            in_V0A = vsqrt_s(in_V0A);
            uVar65 = vocp_s(fVar53);
            vpfxs(8,0,0,0);
            uVar69 = vocp_s(uVar69);
            if ((uVar40 >> 2 & 1) == 0) {
              uVar69 = vasin_s(in_V0A);
            }
            uVar9 = vscl_p(CONCAT44(fVar53,uVar65),uVar69);
            uVar66 = vsin_s(uVar69);
            uVar65 = vsin_s((int)uVar9);
            uVar69 = vsin_s((int)((ulonglong)uVar9 >> 0x20));
            in_V06 = vrcp_s(uVar66);
            uVar64 = vdot_p(CONCAT44(auVar10._0_4_,uVar64),CONCAT44(uVar69,uVar65));
            uVar68 = vdot_p(CONCAT44(auVar10._4_4_,uVar68),CONCAT44(uVar69,uVar65));
            uVar66 = vdot_p(CONCAT44(in_V19,in_V18),CONCAT44(uVar69,uVar65));
            uVar65 = vdot_p(CONCAT44(in_V1D,in_V1C),CONCAT44(uVar69,uVar65));
            auVar33._12_4_ = uVar65;
            auVar33._8_4_ = uVar66;
            auVar33._4_4_ = uVar68;
            auVar33._0_4_ = uVar64;
            auVar3 = vscl_q(auVar33,in_V06);
            in_V00 = auVar3._0_4_;
            fVar62 = auVar3._4_4_;
            in_V08 = auVar3._8_4_;
            in_V0C = auVar3._12_4_;
          }
        }
        goto LAB_089b885c;
      }
      do {
        fVar53 = (float)FUN_089b7f58(puVar45[4]);
        fVar53 = fVar53 + fVar56;
        fVar55 = (float)FUN_089b7f58(puVar47[2]);
        fVar53 = (float)FUN_089b7f8c(fVar56,fVar53,fVar55 + fVar54,fVar54,param_1);
        fVar63 = fVar53 * fVar53;
        fVar58 = 1.0 - fVar53;
        fVar57 = fVar53 * fVar58 * fVar58;
        fVar55 = (float)FUN_089b7f58(puVar45[1]);
        fVar57 = fVar57 * fVar60;
        fVar61 = fVar58 * fVar63 * fVar60;
        fVar53 = fVar53 * fVar63;
        fVar59 = fVar57 + fVar58 * fVar58 * fVar58;
        fVar58 = (float)FUN_089b7f58(puVar45[5]);
        fVar57 = fVar57 * fVar58;
        fVar58 = (float)FUN_089b7f58(puVar47[3]);
        fVar63 = (float)FUN_089b7f58(puVar47[1]);
        *pfVar46 = fVar59 * fVar55 + fVar57 + fVar61 * fVar58 + (fVar61 + fVar53) * fVar63;
        pfVar46 = pfVar46 + 1;
        puVar47 = puVar47 + 5;
        puVar45 = puVar45 + 5;
      } while ((float *)&stack0xffffffa0 != pfVar46);
      *param_4 = local_70[0];
      param_4[1] = local_70[1];
      param_4[2] = local_70[2];
      param_4[3] = local_70[3];
      uVar40 = (uint)*(byte *)(param_2 + 0xc);
      iVar48 = iVar48 + 4;
      puVar43 = puVar43 + iVar42 * 4;
      puVar50 = puVar50 + iVar42 * 4;
      param_4 = param_4 + 4;
      fVar60 = fVar62;
      in_V00 = local_70[0];
      in_V08 = local_70[2];
      in_V0C = local_70[3];
    } while (iVar48 < (int)uVar40);
  }
  return uVar40;
}

