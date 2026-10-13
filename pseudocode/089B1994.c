/* Entry 0x089B1994 | file offset 0x001AE96C | FUN_089b1994 | bytes 3240 */

void FUN_089b1994(float param_1,float param_2,int param_3,int param_4,uint param_5,char param_6)

{
  byte bVar1;
  ushort uVar2;
  undefined2 *puVar3;
  undefined1 (*pauVar4) [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined1 auVar49 [16];
  undefined1 auVar51 [16];
  undefined1 auVar53 [64];
  undefined1 auVar54 [64];
  float *pfVar55;
  float *pfVar56;
  ushort uVar57;
  ushort uVar58;
  uint uVar59;
  uint uVar60;
  float *pfVar61;
  float *pfVar62;
  int iVar63;
  float *pfVar64;
  undefined1 (*pauVar65) [16];
  uint uVar66;
  uint uVar67;
  ushort uVar68;
  undefined2 *puVar69;
  undefined2 *puVar70;
  int iVar71;
  int iVar72;
  ushort *puVar73;
  undefined2 *puVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float in_V00;
  undefined4 uVar81;
  undefined4 uVar82;
  undefined4 uVar83;
  float in_V04;
  undefined4 uVar84;
  undefined4 in_V06;
  undefined4 uVar85;
  undefined4 uVar86;
  float in_V08;
  undefined4 uVar87;
  undefined4 in_V0A;
  undefined4 in_V0B;
  float in_V0C;
  undefined4 in_V0E;
  undefined4 in_V0F;
  float in_V18;
  float in_V19;
  undefined4 in_V1A;
  undefined4 in_V1B;
  float in_V1C;
  float in_V1D;
  undefined4 in_V1E;
  undefined4 in_V1F;
  int local_68;
  undefined1 auVar17 [12];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  undefined1 auVar34 [16];
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  undefined1 auVar43 [16];
  undefined1 auVar46 [16];
  undefined1 auVar48 [16];
  undefined1 auVar50 [16];
  undefined1 auVar52 [16];
  
  if ((param_5 & 1) == 0) goto LAB_089b1a5c;
  fVar75 = *(float *)(param_4 + 0x1c);
  fVar78 = *(float *)(param_4 + 0x14);
  fVar80 = *(float *)(param_4 + 0x10);
  fVar79 = fVar75 + *(float *)(param_4 + 0x18) * param_1;
  if (((fVar79 < fVar78) || (fVar78 < fVar75)) || (fVar75 == fVar79)) {
    if (fVar80 < fVar79) {
      *(float *)(param_4 + 0x1c) = fVar79;
      goto LAB_089b1a5c;
    }
    if (fVar75 < fVar80) {
      *(float *)(param_4 + 0x1c) = fVar79;
      goto LAB_089b1a5c;
    }
    if (fVar75 == fVar79) {
      *(float *)(param_4 + 0x1c) = fVar79;
      goto LAB_089b1a5c;
    }
    if (*(short *)(param_4 + 0xe) == 0) {
      *(float *)(param_4 + 0x1c) = fVar80;
      goto LAB_089b1a5c;
    }
  }
  else if (*(short *)(param_4 + 0xe) != 0) {
    FUN_08935828(*(undefined4 *)(param_4 + 8),0,(uint)*(ushort *)(param_4 + 0xc) << 1);
    *(float *)(param_4 + 0x1c) = fVar80;
    goto LAB_089b1a5c;
  }
  *(float *)(param_4 + 0x1c) = fVar78;
LAB_089b1a5c:
  if (((param_5 & 2) != 0) && (param_4 != 0)) {
    fVar75 = *(float *)(param_4 + 0x1c);
    if ((*(uint *)(param_3 + 0x30) & 4) == 0) {
      fVar75 = (float)(int)FLOOR(fVar75 + 0.5);
    }
    uVar2 = *(ushort *)(param_4 + 0xc);
    if (-1 < (int)(uVar2 - 1)) {
      fVar78 = 1.0;
      local_68 = 0;
      iVar63 = *(int *)(param_4 + 4);
      puVar73 = *(ushort **)(param_4 + 8);
      do {
        iVar71 = *(int *)(param_3 + 0xc) + (uint)*(ushort *)(iVar63 + 0xe) * 0x100;
        if ((uint)*(ushort *)(iVar63 + 0xe) < (uint)*(ushort *)(param_3 + 0x20)) {
          fVar79 = param_2;
          if (param_6 == '\0') {
            if (*(int *)(iVar71 + 0xc4) == 0) goto LAB_089b1ba8;
            if ((param_5 & 0x1000) == 0) goto joined_r0x089b1d74;
            fVar79 = 1.0;
            if ((*(ushort *)(iVar63 + 2) & 1) == 0) goto LAB_089b1f14;
            uVar58 = *(ushort *)(iVar63 + 8);
LAB_089b1bd0:
            if ((uVar58 & 0x80) == 0) {
              if (*(ushort *)(iVar63 + 10) < 2) {
                pfVar61 = *(float **)(iVar63 + 4);
                fVar80 = 0.0;
                pfVar62 = pfVar61;
              }
              else {
                uVar60 = (uint)*(byte *)(iVar63 + 0xc);
                if ((uVar58 & 0xf) == 2) {
                  uVar60 = uVar60 * 3;
                }
                else if ((uVar58 & 0xf) == 3) {
                  uVar60 = uVar60 * 5;
                }
                pfVar64 = *(float **)(iVar63 + 4);
                iVar72 = uVar60 * 4 + 4;
                pfVar62 = (float *)((int)pfVar64 + iVar72 * (*(ushort *)(iVar63 + 10) - 1));
                pfVar61 = (float *)((int)pfVar64 + (uint)*puVar73);
                if (pfVar61 < pfVar62) {
                  pfVar61 = pfVar61 + uVar60 + 1;
                }
                fVar80 = *pfVar61;
                fVar76 = fVar80;
                if (fVar75 < fVar80) {
                  do {
                    fVar80 = fVar76;
                    if (pfVar61 <= pfVar64) goto LAB_089b1e84;
                    pfVar61 = (float *)((int)pfVar61 - iVar72);
                    fVar76 = *pfVar61;
                  } while (fVar75 < fVar76);
                }
                else if (pfVar61 < pfVar62) {
                  pfVar56 = pfVar61 + uVar60 + 1;
                  fVar80 = pfVar61[uVar60 + 1];
                  while (pfVar55 = pfVar56, fVar80 <= fVar75) {
                    pfVar61 = pfVar55;
                    fVar76 = fVar80;
                    if (pfVar62 <= pfVar55) {
                      iVar72 = 0;
                      break;
                    }
                    pfVar56 = pfVar55 + uVar60 + 1;
                    fVar80 = pfVar55[uVar60 + 1];
                  }
                }
                else {
LAB_089b1e84:
                  iVar72 = 0;
                  fVar76 = fVar80;
                }
                *puVar73 = (short)pfVar61 - (short)pfVar64;
                if (fVar75 == fVar76) {
                  fVar80 = 0.0;
                  pfVar62 = pfVar61;
                }
                else {
                  pfVar62 = (float *)(iVar72 + (int)pfVar61);
                  if (pfVar62 == pfVar61) {
                    fVar80 = 0.0;
                  }
                  else {
                    fVar80 = (fVar75 - fVar76) / (fVar80 - fVar76);
                  }
                }
              }
              uVar58 = *(ushort *)(iVar63 + 8);
              uVar57 = uVar58 & 0xf;
              if ((uVar58 & 0xf) != 0) {
                if (uVar57 == 1) {
                  in_V18 = pfVar61[3];
                  in_V1C = pfVar61[4];
                  auVar8 = vsub_q(*(undefined1 (*) [16])(pfVar62 + 1),
                                  *(undefined1 (*) [16])(pfVar61 + 1));
                  auVar8 = vscl_q(auVar8,fVar80);
                  in_V19 = auVar8._8_4_;
                  in_V1D = auVar8._12_4_;
                  auVar8 = vadd_q(*(undefined1 (*) [16])(pfVar61 + 1),auVar8);
                  in_V00 = auVar8._0_4_;
                  in_V04 = auVar8._4_4_;
                  in_V08 = auVar8._8_4_;
                  in_V0C = auVar8._12_4_;
                  uVar60 = (uint)*(byte *)(iVar63 + 0xd);
                }
                else if (uVar57 == 2) {
                  in_V18 = pfVar61[7];
                  in_V1C = pfVar61[10];
                  in_V19 = pfVar62[7];
                  in_V1D = pfVar62[10];
                  auVar8._12_4_ = pfVar61[0xc];
                  auVar8._8_4_ = pfVar61[9];
                  auVar8._4_4_ = pfVar61[6];
                  auVar8._0_4_ = pfVar61[3];
                  auVar5._12_4_ = in_V1C;
                  auVar5._8_4_ = in_V18;
                  auVar5._4_4_ = pfVar61[4];
                  auVar5._0_4_ = pfVar61[1];
                  auVar8 = vadd_q(auVar8,auVar5);
                  auVar9._12_4_ = pfVar62[0xb];
                  auVar9._8_4_ = pfVar62[8];
                  auVar9._4_4_ = pfVar62[5];
                  auVar9._0_4_ = pfVar62[2];
                  auVar14._12_4_ = in_V1D;
                  auVar14._8_4_ = in_V19;
                  auVar14._4_4_ = pfVar62[4];
                  auVar14._0_4_ = pfVar62[1];
                  auVar5 = vadd_q(auVar9,auVar14);
                  uVar81 = vocp_s(fVar80);
                  vpfxt(4,4,4,4);
                  auVar9 = vscl_q(auVar8,in_V00);
                  in_V1A = auVar9._8_4_;
                  in_V1E = auVar9._12_4_;
                  vpfxt(4,4,4,4);
                  auVar5 = vscl_q(auVar5,in_V00);
                  in_V1B = auVar5._8_4_;
                  in_V1F = auVar5._12_4_;
                  uVar10 = vmul_p(CONCAT44(fVar80,uVar81),CONCAT44(fVar80,uVar81));
                  vpfxs(0,1,1,0);
                  vpfxt(2,3,2,3);
                  auVar45._8_8_ = uVar10;
                  auVar45._4_4_ = fVar80;
                  auVar45._0_4_ = uVar81;
                  auVar46._8_8_ = uVar10;
                  auVar46._4_4_ = fVar80;
                  auVar46._0_4_ = uVar81;
                  auVar8 = vmul_q(auVar45,auVar46);
                  auVar53._48_16_ = auVar5;
                  auVar53._44_4_ = in_V1E;
                  auVar53._40_4_ = in_V1A;
                  auVar53._36_4_ = auVar9._4_4_;
                  auVar53._32_4_ = auVar9._0_4_;
                  auVar53._28_4_ = in_V1D;
                  auVar53._24_4_ = in_V19;
                  auVar53._20_4_ = pfVar62[4];
                  auVar53._16_4_ = pfVar62[1];
                  auVar53._12_4_ = in_V1C;
                  auVar53._8_4_ = in_V18;
                  auVar53._4_4_ = pfVar61[4];
                  auVar53._0_4_ = pfVar61[1];
                  auVar8 = vtfm4_q(auVar53,auVar8);
                  in_V00 = auVar8._0_4_;
                  in_V04 = auVar8._4_4_;
                  in_V08 = auVar8._8_4_;
                  in_V0C = auVar8._12_4_;
                  uVar60 = (uint)*(byte *)(iVar63 + 0xd);
                }
                else if (uVar57 == 4) {
                  pauVar65 = (undefined1 (*) [16])(pfVar61 + 1);
                  in_V18 = pfVar61[3];
                  in_V1C = pfVar61[4];
                  pauVar4 = (undefined1 (*) [16])(pfVar62 + 1);
                  uVar86 = vcst_s(3);
                  uVar83 = vfim_s(0x3bfc);
                  vpfxd(4,1,1,1);
                  uVar81 = vdot_q(*pauVar65,*pauVar4);
                  auVar5 = vsub_q(*pauVar4,*pauVar65);
                  auVar8 = vadd_q(*pauVar4,*pauVar65);
                  vpfxs(0,0,8,0);
                  vpfxt(0,0x10,1,4);
                  auVar33._12_4_ = in_V0E;
                  auVar33._8_4_ = in_V0A;
                  auVar33._4_4_ = in_V06;
                  auVar33._0_4_ = uVar81;
                  auVar34._12_4_ = in_V0F;
                  auVar34._8_4_ = in_V0B;
                  auVar34._4_4_ = uVar86;
                  auVar34._0_4_ = uVar83;
                  uVar60 = vcmp_q(2,auVar33,auVar34);
                  uVar83 = vmul_s(uVar81,uVar81);
                  vpfxs(0x10,0x11,0x12,0x13);
                  auVar14 = vcmovt_q(*pauVar4,(byte)(uVar60 >> 3) & 1);
                  in_V19 = auVar14._8_4_;
                  in_V1D = auVar14._12_4_;
                  auVar5 = vscl_q(auVar5,fVar80);
                  in_V1A = auVar5._8_4_;
                  in_V1E = auVar5._12_4_;
                  auVar9 = vscl_q(auVar8,fVar80);
                  in_V1B = auVar9._8_4_;
                  in_V1F = auVar9._12_4_;
                  in_V0A = vocp_s(uVar83);
                  auVar8 = vadd_q(*pauVar65,auVar5);
                  in_V00 = auVar8._0_4_;
                  in_V04 = auVar8._4_4_;
                  in_V08 = auVar8._8_4_;
                  in_V0C = auVar8._12_4_;
                  if ((uVar60 & 1) != 0) {
                    auVar8 = vsub_q(*pauVar65,auVar9);
                    in_V00 = auVar8._0_4_;
                    in_V04 = auVar8._4_4_;
                    in_V08 = auVar8._8_4_;
                    in_V0C = auVar8._12_4_;
                    if ((uVar60 >> 1 & 1) == 0) {
                      uVar83 = vasin_s(uVar81);
                      in_V0A = vsqrt_s(in_V0A);
                      uVar81 = vocp_s(fVar80);
                      vpfxs(8,0,0,0);
                      uVar83 = vocp_s(uVar83);
                      if ((uVar60 >> 2 & 1) == 0) {
                        uVar83 = vasin_s(in_V0A);
                      }
                      uVar10 = vscl_p(CONCAT44(fVar80,uVar81),uVar83);
                      uVar81 = vsin_s(uVar83);
                      uVar83 = vsin_s((int)uVar10);
                      uVar84 = vsin_s((int)((ulonglong)uVar10 >> 0x20));
                      in_V06 = vrcp_s(uVar81);
                      uVar81 = vdot_p(CONCAT44(auVar14._0_4_,*(undefined4 *)*pauVar65),
                                      CONCAT44(uVar84,uVar83));
                      uVar86 = vdot_p(CONCAT44(auVar14._4_4_,pfVar61[2]),CONCAT44(uVar84,uVar83));
                      uVar87 = vdot_p(CONCAT44(in_V19,in_V18),CONCAT44(uVar84,uVar83));
                      uVar83 = vdot_p(CONCAT44(in_V1D,in_V1C),CONCAT44(uVar84,uVar83));
                      auVar35._12_4_ = uVar83;
                      auVar35._8_4_ = uVar87;
                      auVar35._4_4_ = uVar86;
                      auVar35._0_4_ = uVar81;
                      auVar8 = vscl_q(auVar35,in_V06);
                      in_V00 = auVar8._0_4_;
                      in_V04 = auVar8._4_4_;
                      in_V08 = auVar8._8_4_;
                      in_V0C = auVar8._12_4_;
                    }
                  }
                  uVar60 = (uint)*(byte *)(iVar63 + 0xd);
                }
                else {
                  uVar60 = (uint)*(byte *)(iVar63 + 0xd);
                }
                goto LAB_089b1cd0;
              }
              in_V00 = pfVar61[1];
              in_V04 = pfVar61[2];
              in_V08 = pfVar61[3];
              in_V0C = pfVar61[4];
              uVar60 = (uint)*(byte *)(iVar63 + 0xd);
              if (uVar60 != 0x48) goto LAB_089b1ce0;
              uVar58 = *(ushort *)(iVar71 + 2);
LAB_089b1eec:
              uVar57 = 0x48;
              pauVar65 = (undefined1 (*) [16])(iVar71 + 0x50);
              uVar67 = 1;
              iVar72 = 1;
            }
            else {
              if (*(ushort *)(iVar63 + 10) < 2) {
                puVar74 = *(undefined2 **)(iVar63 + 4);
                fVar80 = 0.0;
                puVar69 = puVar74;
              }
              else {
                uVar60 = (uint)*(byte *)(iVar63 + 0xc);
                if ((uVar58 & 0xf) == 2) {
                  uVar60 = uVar60 * 3;
                }
                else if ((uVar58 & 0xf) == 3) {
                  uVar60 = uVar60 * 5;
                }
                puVar74 = *(undefined2 **)(iVar63 + 4);
                iVar72 = uVar60 * 4 + 4;
                if ((uVar58 & 0x80) != 0) {
                  iVar72 = iVar72 >> 1;
                }
                puVar3 = (undefined2 *)((int)puVar74 + iVar72 * (*(ushort *)(iVar63 + 10) - 1));
                puVar69 = (undefined2 *)((int)puVar74 + (uint)*puVar73);
                if (puVar69 < puVar3) {
                  puVar69 = (undefined2 *)((int)puVar69 + iVar72);
                }
                fVar76 = (float)FUN_089b1960(*puVar69);
                fVar77 = fVar76;
                if (fVar76 <= fVar75) {
                  if (puVar3 <= puVar69) goto LAB_089b1c6c;
                  do {
                    puVar70 = (undefined2 *)((int)puVar69 + iVar72);
                    fVar76 = (float)FUN_089b1960(*puVar70);
                    if (fVar75 < fVar76) goto LAB_089b1c70;
                    puVar69 = puVar70;
                    fVar77 = fVar76;
                  } while (puVar70 < puVar3);
                  iVar72 = 0;
                }
                else if (puVar74 < puVar69) {
                  do {
                    puVar69 = (undefined2 *)((int)puVar69 - iVar72);
                    fVar77 = (float)FUN_089b1960(*puVar69);
                    if (fVar77 <= fVar75) goto LAB_089b1c70;
                    fVar76 = fVar77;
                  } while (puVar74 < puVar69);
                  iVar72 = 0;
                }
                else {
LAB_089b1c6c:
                  iVar72 = 0;
                }
LAB_089b1c70:
                *puVar73 = (short)puVar69 - (short)puVar74;
                if (fVar75 == fVar77) {
                  fVar80 = 0.0;
                  puVar74 = puVar69;
                }
                else {
                  puVar74 = (undefined2 *)(iVar72 + (int)puVar69);
                  fVar80 = 0.0;
                  if (puVar74 != puVar69) {
                    fVar80 = (fVar75 - fVar77) / (fVar76 - fVar77);
                  }
                }
              }
              uVar58 = *(ushort *)(iVar63 + 8);
              uVar57 = uVar58 & 0xf;
              if ((uVar58 & 0xf) == 0) {
                uVar10 = vh2f_p(*(undefined8 *)(puVar69 + 1));
                in_V00 = (float)uVar10;
                in_V04 = (float)((ulonglong)uVar10 >> 0x20);
                uVar60 = (uint)*(byte *)(iVar63 + 0xd);
              }
              else if (uVar57 == 1) {
                uVar10 = vh2f_p(*(undefined8 *)(puVar69 + 1));
                uVar81 = (undefined4)((ulonglong)uVar10 >> 0x20);
                uVar11 = vh2f_p(*(undefined8 *)(puVar74 + 1));
                auVar38._12_4_ = in_V1D;
                auVar38._8_4_ = in_V19;
                auVar38._4_4_ = (int)((ulonglong)uVar11 >> 0x20);
                auVar38._0_4_ = (int)uVar11;
                auVar39._12_4_ = in_V1C;
                auVar39._8_4_ = in_V18;
                auVar39._4_4_ = uVar81;
                auVar39._0_4_ = (int)uVar10;
                auVar8 = vsub_q(auVar38,auVar39);
                auVar8 = vscl_q(auVar8,fVar80);
                in_V19 = auVar8._8_4_;
                in_V1D = auVar8._12_4_;
                auVar40._12_4_ = in_V1C;
                auVar40._8_4_ = in_V18;
                auVar40._4_4_ = uVar81;
                auVar40._0_4_ = (int)uVar10;
                auVar8 = vadd_q(auVar40,auVar8);
                in_V00 = auVar8._0_4_;
                in_V04 = auVar8._4_4_;
                in_V08 = auVar8._8_4_;
                in_V0C = auVar8._12_4_;
                uVar60 = (uint)*(byte *)(iVar63 + 0xd);
              }
              else if (uVar57 == 2) {
                uVar11 = vh2f_p(CONCAT44(CONCAT22(puVar69[10],puVar69[7]),
                                         CONCAT22(puVar69[4],puVar69[1])));
                uVar81 = (undefined4)((ulonglong)uVar11 >> 0x20);
                uVar12 = vh2f_p(CONCAT44(CONCAT22(puVar74[10],puVar74[7]),
                                         CONCAT22(puVar74[4],puVar74[1])));
                uVar83 = (undefined4)((ulonglong)uVar12 >> 0x20);
                uVar10 = vh2f_p(CONCAT44(CONCAT22(puVar69[0xc],puVar69[9]),
                                         CONCAT22(puVar69[6],puVar69[3])));
                uVar13 = vh2f_p(CONCAT44(CONCAT22(puVar74[0xb],puVar74[8]),
                                         CONCAT22(puVar74[5],puVar74[2])));
                auVar47._12_4_ = in_V1E;
                auVar47._8_4_ = in_V1A;
                auVar47._4_4_ = (int)((ulonglong)uVar10 >> 0x20);
                auVar47._0_4_ = (int)uVar10;
                auVar48._12_4_ = in_V1C;
                auVar48._8_4_ = in_V18;
                auVar48._4_4_ = uVar81;
                auVar48._0_4_ = (int)uVar11;
                auVar8 = vadd_q(auVar47,auVar48);
                auVar49._12_4_ = in_V1F;
                auVar49._8_4_ = in_V1B;
                auVar49._4_4_ = (int)((ulonglong)uVar13 >> 0x20);
                auVar49._0_4_ = (int)uVar13;
                auVar50._12_4_ = in_V1D;
                auVar50._8_4_ = in_V19;
                auVar50._4_4_ = uVar83;
                auVar50._0_4_ = (int)uVar12;
                auVar5 = vadd_q(auVar49,auVar50);
                uVar86 = vocp_s(fVar80);
                vpfxt(4,4,4,4);
                auVar9 = vscl_q(auVar8,in_V00);
                in_V1A = auVar9._8_4_;
                in_V1E = auVar9._12_4_;
                vpfxt(4,4,4,4);
                auVar5 = vscl_q(auVar5,in_V00);
                in_V1B = auVar5._8_4_;
                in_V1F = auVar5._12_4_;
                uVar10 = vmul_p(CONCAT44(fVar80,uVar86),CONCAT44(fVar80,uVar86));
                vpfxs(0,1,1,0);
                vpfxt(2,3,2,3);
                auVar51._8_8_ = uVar10;
                auVar51._4_4_ = fVar80;
                auVar51._0_4_ = uVar86;
                auVar52._8_8_ = uVar10;
                auVar52._4_4_ = fVar80;
                auVar52._0_4_ = uVar86;
                auVar8 = vmul_q(auVar51,auVar52);
                auVar54._48_16_ = auVar5;
                auVar54._44_4_ = in_V1E;
                auVar54._40_4_ = in_V1A;
                auVar54._36_4_ = auVar9._4_4_;
                auVar54._32_4_ = auVar9._0_4_;
                auVar54._28_4_ = in_V1D;
                auVar54._24_4_ = in_V19;
                auVar54._20_4_ = uVar83;
                auVar54._16_4_ = (int)uVar12;
                auVar54._12_4_ = in_V1C;
                auVar54._8_4_ = in_V18;
                auVar54._4_4_ = uVar81;
                auVar54._0_4_ = (int)uVar11;
                auVar8 = vtfm4_q(auVar54,auVar8);
                in_V00 = auVar8._0_4_;
                in_V04 = auVar8._4_4_;
                in_V08 = auVar8._8_4_;
                in_V0C = auVar8._12_4_;
                uVar60 = (uint)*(byte *)(iVar63 + 0xd);
              }
              else if (uVar57 == 4) {
                uVar10 = vh2f_p(*(undefined8 *)(puVar69 + 1));
                uVar81 = (undefined4)uVar10;
                uVar86 = (undefined4)((ulonglong)uVar10 >> 0x20);
                uVar10 = vh2f_p(*(undefined8 *)(puVar74 + 1));
                uVar83 = (undefined4)uVar10;
                uVar84 = (undefined4)((ulonglong)uVar10 >> 0x20);
                uVar85 = vcst_s(3);
                uVar82 = vfim_s(0x3bfc);
                vpfxd(4,1,1,1);
                auVar21._12_4_ = in_V1C;
                auVar21._8_4_ = in_V18;
                auVar21._4_4_ = uVar86;
                auVar21._0_4_ = uVar81;
                auVar22._12_4_ = in_V1D;
                auVar22._8_4_ = in_V19;
                auVar22._4_4_ = uVar84;
                auVar22._0_4_ = uVar83;
                uVar87 = vdot_q(auVar21,auVar22);
                auVar23._12_4_ = in_V1D;
                auVar23._8_4_ = in_V19;
                auVar23._4_4_ = uVar84;
                auVar23._0_4_ = uVar83;
                auVar24._12_4_ = in_V1C;
                auVar24._8_4_ = in_V18;
                auVar24._4_4_ = uVar86;
                auVar24._0_4_ = uVar81;
                auVar5 = vsub_q(auVar23,auVar24);
                auVar25._12_4_ = in_V1D;
                auVar25._8_4_ = in_V19;
                auVar25._4_4_ = uVar84;
                auVar25._0_4_ = uVar83;
                auVar26._12_4_ = in_V1C;
                auVar26._8_4_ = in_V18;
                auVar26._4_4_ = uVar86;
                auVar26._0_4_ = uVar81;
                auVar8 = vadd_q(auVar25,auVar26);
                vpfxs(0,0,8,0);
                vpfxt(0,0x10,1,4);
                auVar27._12_4_ = in_V0E;
                auVar27._8_4_ = in_V0A;
                auVar27._4_4_ = in_V06;
                auVar27._0_4_ = uVar87;
                auVar28._12_4_ = in_V0F;
                auVar28._8_4_ = in_V0B;
                auVar28._4_4_ = uVar85;
                auVar28._0_4_ = uVar82;
                uVar60 = vcmp_q(2,auVar27,auVar28);
                uVar82 = vmul_s(uVar87,uVar87);
                vpfxs(0x10,0x11,0x12,0x13);
                auVar29._12_4_ = in_V1D;
                auVar29._8_4_ = in_V19;
                auVar29._4_4_ = uVar84;
                auVar29._0_4_ = uVar83;
                auVar14 = vcmovt_q(auVar29,(byte)(uVar60 >> 3) & 1);
                in_V19 = auVar14._8_4_;
                in_V1D = auVar14._12_4_;
                auVar5 = vscl_q(auVar5,fVar80);
                in_V1A = auVar5._8_4_;
                in_V1E = auVar5._12_4_;
                auVar9 = vscl_q(auVar8,fVar80);
                in_V1B = auVar9._8_4_;
                in_V1F = auVar9._12_4_;
                in_V0A = vocp_s(uVar82);
                auVar30._12_4_ = in_V1C;
                auVar30._8_4_ = in_V18;
                auVar30._4_4_ = uVar86;
                auVar30._0_4_ = uVar81;
                auVar8 = vadd_q(auVar30,auVar5);
                in_V00 = auVar8._0_4_;
                in_V04 = auVar8._4_4_;
                in_V08 = auVar8._8_4_;
                in_V0C = auVar8._12_4_;
                if ((uVar60 & 1) != 0) {
                  auVar31._12_4_ = in_V1C;
                  auVar31._8_4_ = in_V18;
                  auVar31._4_4_ = uVar86;
                  auVar31._0_4_ = uVar81;
                  auVar8 = vsub_q(auVar31,auVar9);
                  in_V00 = auVar8._0_4_;
                  in_V04 = auVar8._4_4_;
                  in_V08 = auVar8._8_4_;
                  in_V0C = auVar8._12_4_;
                  if ((uVar60 >> 1 & 1) == 0) {
                    uVar84 = vasin_s(uVar87);
                    in_V0A = vsqrt_s(in_V0A);
                    uVar83 = vocp_s(fVar80);
                    vpfxs(8,0,0,0);
                    uVar84 = vocp_s(uVar84);
                    if ((uVar60 >> 2 & 1) == 0) {
                      uVar84 = vasin_s(in_V0A);
                    }
                    uVar10 = vscl_p(CONCAT44(fVar80,uVar83),uVar84);
                    uVar87 = vsin_s(uVar84);
                    uVar83 = vsin_s((int)uVar10);
                    uVar84 = vsin_s((int)((ulonglong)uVar10 >> 0x20));
                    in_V06 = vrcp_s(uVar87);
                    uVar81 = vdot_p(CONCAT44(auVar14._0_4_,uVar81),CONCAT44(uVar84,uVar83));
                    uVar86 = vdot_p(CONCAT44(auVar14._4_4_,uVar86),CONCAT44(uVar84,uVar83));
                    uVar87 = vdot_p(CONCAT44(in_V19,in_V18),CONCAT44(uVar84,uVar83));
                    uVar83 = vdot_p(CONCAT44(in_V1D,in_V1C),CONCAT44(uVar84,uVar83));
                    auVar32._12_4_ = uVar83;
                    auVar32._8_4_ = uVar87;
                    auVar32._4_4_ = uVar86;
                    auVar32._0_4_ = uVar81;
                    auVar8 = vscl_q(auVar32,in_V06);
                    in_V00 = auVar8._0_4_;
                    in_V04 = auVar8._4_4_;
                    in_V08 = auVar8._8_4_;
                    in_V0C = auVar8._12_4_;
                  }
                }
                uVar60 = (uint)*(byte *)(iVar63 + 0xd);
              }
              else {
                uVar60 = (uint)*(byte *)(iVar63 + 0xd);
              }
LAB_089b1cd0:
              if (uVar60 == 0x48) {
                uVar58 = *(ushort *)(iVar71 + 2);
                goto LAB_089b1eec;
              }
LAB_089b1ce0:
              if (uVar60 < 0x4c) {
                uVar58 = *(ushort *)(iVar71 + 2);
                pauVar65 = (undefined1 (*) [16])(iVar71 + 0x60);
                uVar67 = 2;
                iVar72 = 2;
                uVar57 = 2;
              }
              else {
                pauVar65 = (undefined1 (*) [16])(iVar71 + 0x70);
                uVar67 = 4;
                if ((uVar60 != 0x4c) && (uVar67 = 8, uVar60 != 0x4d)) {
                  uVar67 = 0x10;
                }
                uVar58 = *(ushort *)(iVar71 + 2) & 0xffe3;
                uVar68 = *(ushort *)(iVar71 + 0x42) & 0xff9f;
                *(ushort *)(iVar71 + 2) = uVar58;
                uVar57 = 4;
                iVar72 = 3;
                *(ushort *)(iVar71 + 0x42) = uVar68;
                if (0x4c < uVar60) {
                  *(ushort *)(iVar71 + 0x42) = uVar68 | (ushort)(0x20 << (uVar60 != 0x4d));
                  uVar57 = (ushort)(8 << (uVar60 != 0x4d));
                  iVar72 = 3;
                }
              }
            }
            *(ushort *)(iVar71 + 2) = uVar57 | uVar58;
            if (param_6 == '\0') {
              *(float *)(iVar72 * 4 + iVar71 + 0xcc) = fVar79;
              if (0.99 < fVar79) {
                uVar67 = uVar67 | uVar67 << 0x10;
              }
              *(uint *)(iVar71 + 200) = uVar67 | *(uint *)(iVar71 + 200);
            }
            if (uVar60 - 0x49 < 2) {
              uVar81 = vcst_s(6);
              auVar6._8_4_ = in_V08;
              auVar6._4_4_ = in_V04;
              auVar6._0_4_ = in_V00;
              auVar6 = vscl_t(auVar6,uVar81);
              uVar81 = vcos_s(auVar6._0_4_);
              uVar83 = vsin_s(auVar6._0_4_);
              in_V06 = vcos_s(auVar6._4_4_);
              uVar86 = vsin_s(auVar6._4_4_);
              in_V0A = vcos_s(auVar6._8_4_);
              in_V0B = vsin_s(auVar6._8_4_);
              uVar10 = vmul_p(CONCAT44(uVar83,uVar81),CONCAT44(uVar86,in_V06));
              in_V1C = (float)uVar10;
              in_V1D = (float)((ulonglong)uVar10 >> 0x20);
              auVar7._8_4_ = in_V0A;
              auVar7._4_4_ = in_V06;
              auVar7._0_4_ = uVar81;
              auVar15._8_4_ = in_V0A;
              auVar15._4_4_ = in_V06;
              auVar15._0_4_ = uVar81;
              auVar6 = vcrs_t(auVar7,auVar15);
              in_V18 = auVar6._8_4_;
              auVar16._8_4_ = in_V0B;
              auVar16._4_4_ = uVar86;
              auVar16._0_4_ = uVar83;
              auVar17._8_4_ = in_V0B;
              auVar17._4_4_ = uVar86;
              auVar17._0_4_ = uVar83;
              auVar7 = vcrs_t(auVar16,auVar17);
              in_V19 = auVar7._8_4_;
              uVar10 = vmul_p(uVar10,CONCAT44(in_V0B,in_V0A));
              in_V1E = (undefined4)uVar10;
              in_V1F = (undefined4)((ulonglong)uVar10 >> 0x20);
              auVar18._8_4_ = in_V0B;
              auVar18._4_4_ = uVar86;
              auVar18._0_4_ = uVar83;
              auVar6 = vmul_t(auVar6,auVar18);
              in_V1A = auVar6._8_4_;
              auVar19._8_4_ = in_V0A;
              auVar19._4_4_ = in_V06;
              auVar19._0_4_ = uVar81;
              auVar7 = vmul_t(auVar7,auVar19);
              in_V1B = auVar7._8_4_;
              vpfxt(0,0x11,0x12,3);
              if (uVar60 == 0x49) {
                vpfxt(0x10,1,0x12,3);
              }
              auVar36._12_4_ = in_V1E;
              auVar36._8_4_ = in_V1A;
              auVar36._4_4_ = auVar6._4_4_;
              auVar36._0_4_ = auVar6._0_4_;
              auVar37._12_4_ = in_V1F;
              auVar37._8_4_ = in_V1B;
              auVar37._4_4_ = auVar7._4_4_;
              auVar37._0_4_ = auVar7._0_4_;
              auVar8 = vadd_q(auVar36,auVar37);
              in_V00 = auVar8._0_4_;
              in_V04 = auVar8._4_4_;
              in_V08 = auVar8._8_4_;
              in_V0C = auVar8._12_4_;
              uVar60 = 0x4b;
            }
            if (fVar78 <= fVar79) {
              *(float *)*pauVar65 = in_V00;
              *(float *)(*pauVar65 + 4) = in_V04;
              *(float *)(*pauVar65 + 8) = in_V08;
              *(float *)(*pauVar65 + 0xc) = in_V0C;
            }
            else if (uVar60 == 0x4b) {
              in_V18 = *(float *)(*pauVar65 + 8);
              in_V1C = *(float *)(*pauVar65 + 0xc);
              auVar41._12_4_ = in_V0C;
              auVar41._8_4_ = in_V08;
              auVar41._4_4_ = in_V04;
              auVar41._0_4_ = in_V00;
              auVar9 = vmov_q(auVar41);
              uVar86 = vcst_s(3);
              uVar83 = vfim_s(0x3bfc);
              vpfxd(4,1,1,1);
              uVar81 = vdot_q(*pauVar65,auVar9);
              auVar5 = vsub_q(auVar9,*pauVar65);
              auVar8 = vadd_q(auVar9,*pauVar65);
              vpfxs(0,0,8,0);
              vpfxt(0,0x10,1,4);
              auVar42._12_4_ = in_V0E;
              auVar42._8_4_ = in_V0A;
              auVar42._4_4_ = in_V06;
              auVar42._0_4_ = uVar81;
              auVar43._12_4_ = in_V0F;
              auVar43._8_4_ = in_V0B;
              auVar43._4_4_ = uVar86;
              auVar43._0_4_ = uVar83;
              uVar60 = vcmp_q(2,auVar42,auVar43);
              uVar83 = vmul_s(uVar81,uVar81);
              vpfxs(0x10,0x11,0x12,0x13);
              auVar14 = vcmovt_q(auVar9,(byte)(uVar60 >> 3) & 1);
              in_V19 = auVar14._8_4_;
              in_V1D = auVar14._12_4_;
              auVar5 = vscl_q(auVar5,fVar79);
              in_V1A = auVar5._8_4_;
              in_V1E = auVar5._12_4_;
              auVar9 = vscl_q(auVar8,fVar79);
              in_V1B = auVar9._8_4_;
              in_V1F = auVar9._12_4_;
              in_V0A = vocp_s(uVar83);
              auVar8 = vadd_q(*pauVar65,auVar5);
              in_V00 = auVar8._0_4_;
              in_V04 = auVar8._4_4_;
              in_V08 = auVar8._8_4_;
              in_V0C = auVar8._12_4_;
              if ((uVar60 & 1) != 0) {
                auVar8 = vsub_q(*pauVar65,auVar9);
                in_V00 = auVar8._0_4_;
                in_V04 = auVar8._4_4_;
                in_V08 = auVar8._8_4_;
                in_V0C = auVar8._12_4_;
                if ((uVar60 >> 1 & 1) == 0) {
                  uVar83 = vasin_s(uVar81);
                  in_V0A = vsqrt_s(in_V0A);
                  uVar81 = vocp_s(fVar79);
                  vpfxs(8,0,0,0);
                  uVar83 = vocp_s(uVar83);
                  if ((uVar60 >> 2 & 1) == 0) {
                    uVar83 = vasin_s(in_V0A);
                  }
                  uVar10 = vscl_p(CONCAT44(fVar79,uVar81),uVar83);
                  uVar81 = vsin_s(uVar83);
                  uVar83 = vsin_s((int)uVar10);
                  uVar84 = vsin_s((int)((ulonglong)uVar10 >> 0x20));
                  in_V06 = vrcp_s(uVar81);
                  uVar81 = vdot_p(CONCAT44(auVar14._0_4_,*(undefined4 *)*pauVar65),
                                  CONCAT44(uVar84,uVar83));
                  uVar86 = vdot_p(CONCAT44(auVar14._4_4_,*(undefined4 *)(*pauVar65 + 4)),
                                  CONCAT44(uVar84,uVar83));
                  uVar87 = vdot_p(CONCAT44(in_V19,in_V18),CONCAT44(uVar84,uVar83));
                  uVar83 = vdot_p(CONCAT44(in_V1D,in_V1C),CONCAT44(uVar84,uVar83));
                  auVar44._12_4_ = uVar83;
                  auVar44._8_4_ = uVar87;
                  auVar44._4_4_ = uVar86;
                  auVar44._0_4_ = uVar81;
                  auVar8 = vscl_q(auVar44,in_V06);
                  in_V00 = auVar8._0_4_;
                  in_V04 = auVar8._4_4_;
                  in_V08 = auVar8._8_4_;
                  in_V0C = auVar8._12_4_;
                }
              }
              *(float *)*pauVar65 = in_V00;
              *(float *)(*pauVar65 + 4) = in_V04;
              *(float *)(*pauVar65 + 8) = in_V08;
              *(float *)(*pauVar65 + 0xc) = in_V0C;
            }
            else {
              in_V18 = *(float *)(*pauVar65 + 8);
              in_V1C = *(float *)(*pauVar65 + 0xc);
              auVar20._12_4_ = in_V0C;
              auVar20._8_4_ = in_V08;
              auVar20._4_4_ = in_V04;
              auVar20._0_4_ = in_V00;
              auVar8 = vmov_q(auVar20);
              auVar8 = vsub_q(auVar8,*pauVar65);
              auVar8 = vscl_q(auVar8,fVar79);
              in_V19 = auVar8._8_4_;
              in_V1D = auVar8._12_4_;
              auVar8 = vadd_q(*pauVar65,auVar8);
              in_V00 = auVar8._0_4_;
              in_V04 = auVar8._4_4_;
              in_V08 = auVar8._8_4_;
              in_V0C = auVar8._12_4_;
              *(float *)*pauVar65 = in_V00;
              *(float *)(*pauVar65 + 4) = in_V04;
              *(float *)(*pauVar65 + 8) = in_V08;
              *(float *)(*pauVar65 + 0xc) = in_V0C;
            }
          }
          else {
            if ((*(int *)(iVar71 + 0xc4) != 0) && (fVar79 = 0.0, (param_5 & 0x1000) == 0)) {
              fVar79 = param_2;
            }
            bVar1 = *(byte *)(iVar63 + 0xd);
            uVar60 = 1;
            if (bVar1 == 0x48) {
              iVar72 = 1;
              uVar66 = 0xfffffffe;
              uVar67 = 0x10000;
            }
            else if (bVar1 < 0x4c) {
              uVar60 = 2;
              iVar72 = 2;
              uVar66 = 0xfffffffd;
              uVar67 = 0x20000;
            }
            else {
              uVar60 = 4;
              if (bVar1 == 0x4c) {
                iVar72 = 3;
                uVar66 = 0xfffffffb;
                uVar67 = 0x40000;
              }
              else if (bVar1 == 0x4d) {
                uVar60 = 8;
                iVar72 = 3;
                uVar66 = 0xfffffff7;
                uVar67 = 0x80000;
              }
              else {
                uVar60 = 0x10;
                iVar72 = 3;
                uVar66 = 0xffffffef;
                uVar67 = 0x100000;
              }
            }
            uVar59 = *(uint *)(iVar71 + 200);
            if (((uVar60 & uVar59) != 0) && ((uVar67 & uVar59) == 0)) {
              fVar79 = fVar78 - *(float *)(iVar72 * 4 + iVar71 + 0xcc);
            }
            *(undefined4 *)(iVar72 * 4 + iVar71 + 0xcc) = 0;
            *(uint *)(iVar71 + 200) =
                 (uVar66 & uVar59 | (int)(uVar67 & uVar66 & uVar59) >> 0x10) & ~uVar67;
LAB_089b1ba8:
            if (fVar79 != 0.0) {
              if ((*(ushort *)(iVar63 + 2) & 1) != 0) {
                uVar58 = *(ushort *)(iVar63 + 8);
                goto LAB_089b1bd0;
              }
LAB_089b1f14:
              FUN_089b9150(fVar75,fVar79,iVar63,puVar73,param_3);
            }
          }
        }
joined_r0x089b1d74:
        if ((uint)uVar2 == local_68 + 1U) {
          return;
        }
        local_68 = local_68 + 1;
        iVar63 = iVar63 + 0x10;
        puVar73 = puVar73 + 1;
      } while( true );
    }
  }
  return;
}

