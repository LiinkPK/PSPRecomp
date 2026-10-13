/* Entry 0x08894B64 | file offset 0x00091B3C | FUN_08894b64 | bytes 464 */

undefined4 FUN_08894b64(undefined1 (*param_1) [12],uint param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 (*pauVar8) [12];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
  undefined1 auVar28 [12];
  undefined1 auVar29 [12];
  undefined1 auVar30 [12];
  undefined1 auVar31 [12];
  undefined1 auVar33 [12];
  undefined1 auVar34 [12];
  undefined1 auVar35 [12];
  undefined1 auVar36 [12];
  undefined1 auVar38 [12];
  undefined1 auVar39 [12];
  undefined1 auVar40 [12];
  undefined1 auVar41 [12];
  undefined1 auVar43 [12];
  undefined1 auVar44 [12];
  undefined1 auVar45 [12];
  undefined1 auVar46 [12];
  undefined1 auVar48 [12];
  undefined1 auVar49 [12];
  undefined1 auVar50 [12];
  undefined1 auVar51 [12];
  undefined1 auVar52 [12];
  undefined1 auVar53 [12];
  undefined1 auVar54 [12];
  undefined1 auVar55 [12];
  undefined1 auVar56 [12];
  undefined1 auVar57 [12];
  undefined1 auVar58 [12];
  undefined1 auVar59 [12];
  undefined1 auVar60 [12];
  undefined1 auVar61 [12];
  undefined1 auVar62 [12];
  undefined1 auVar63 [12];
  undefined1 auVar64 [12];
  undefined1 auVar65 [12];
  undefined1 auVar66 [12];
  undefined1 auVar67 [12];
  undefined1 (*pauVar68) [12];
  int iVar69;
  undefined4 uVar70;
  undefined1 (*pauVar71) [12];
  int iVar72;
  undefined1 (*pauVar73) [12];
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  uint uVar81;
  undefined1 auVar22 [12];
  undefined1 auVar27 [12];
  undefined1 auVar32 [12];
  undefined1 auVar37 [12];
  undefined1 auVar42 [12];
  undefined1 auVar47 [12];
  
  auVar51 = *param_1;
  auVar50 = *param_1;
  auVar49 = *param_1;
  auVar48 = *param_1;
  uVar9 = *(undefined4 *)param_1[1];
  pauVar68 = (undefined1 (*) [12])(param_1[1] + 4);
  auVar55 = *pauVar68;
  auVar54 = *pauVar68;
  auVar53 = *pauVar68;
  auVar52 = *pauVar68;
  uVar10 = *(undefined4 *)(param_1[2] + 4);
  pauVar68 = (undefined1 (*) [12])(param_1[2] + 8);
  auVar59 = *pauVar68;
  auVar58 = *pauVar68;
  auVar57 = *pauVar68;
  auVar56 = *pauVar68;
  uVar11 = *(undefined4 *)(param_1[3] + 8);
  pauVar68 = param_1 + 4;
  auVar63 = *pauVar68;
  auVar62 = *pauVar68;
  auVar61 = *pauVar68;
  auVar60 = *pauVar68;
  uVar12 = *(undefined4 *)param_1[5];
  pauVar68 = (undefined1 (*) [12])(param_1[5] + 4);
  auVar67 = *pauVar68;
  auVar66 = *pauVar68;
  auVar65 = *pauVar68;
  auVar64 = *pauVar68;
  uVar13 = *(undefined4 *)(param_1[6] + 4);
  pauVar68 = (undefined1 (*) [12])(param_2 | 0x40000000);
  do {
    uVar70 = 0;
    if (*(int *)(pauVar68[5] + 4) != 0) {
      uVar14 = *(undefined4 *)pauVar68[1];
      uVar80 = vdot_t(auVar48,*pauVar68);
      uVar80 = vadd_s(uVar80,uVar9);
      uVar81 = vcmp_s(7,uVar80,uVar14);
      if ((uVar81 & 1) == 0) {
        uVar2 = *(undefined4 *)(pauVar68[1] + 4);
        uVar77 = *(undefined4 *)(pauVar68[1] + 8);
        uVar5 = *(undefined4 *)pauVar68[2];
        uVar15 = *(undefined4 *)(pauVar68[2] + 4);
        uVar3 = *(undefined4 *)(pauVar68[2] + 8);
        uVar79 = *(undefined4 *)pauVar68[3];
        uVar6 = *(undefined4 *)(pauVar68[3] + 4);
        uVar16 = *(undefined4 *)(pauVar68[3] + 8);
        uVar4 = *(undefined4 *)pauVar68[4];
        uVar75 = *(undefined4 *)(pauVar68[4] + 4);
        uVar7 = *(undefined4 *)(pauVar68[4] + 8);
        uVar17 = *(undefined4 *)pauVar68[5];
        auVar18._8_4_ = uVar4;
        auVar18._4_4_ = uVar3;
        auVar18._0_4_ = uVar2;
        uVar74 = vdot_t(auVar49,auVar18);
        auVar19._8_4_ = uVar75;
        auVar19._4_4_ = uVar79;
        auVar19._0_4_ = uVar77;
        uVar76 = vdot_t(auVar50,auVar19);
        auVar20._8_4_ = uVar7;
        auVar20._4_4_ = uVar6;
        auVar20._0_4_ = uVar5;
        uVar78 = vdot_t(auVar51,auVar20);
        vpfxs(8,9,10,3);
        auVar21._8_4_ = uVar78;
        auVar21._4_4_ = uVar76;
        auVar21._0_4_ = uVar74;
        auVar22._8_4_ = uVar17;
        auVar22._4_4_ = uVar16;
        auVar22._0_4_ = uVar15;
        uVar74 = vdot_t(auVar21,auVar22);
        uVar81 = vcmp_s(7,uVar80,uVar74);
        if ((uVar81 & 1) == 0) {
          uVar80 = vdot_t(auVar52,*pauVar68);
          uVar74 = vadd_s(uVar80,uVar10);
          uVar81 = vcmp_s(7,uVar74,uVar14);
          auVar23._8_4_ = uVar4;
          auVar23._4_4_ = uVar3;
          auVar23._0_4_ = uVar2;
          uVar80 = vdot_t(auVar53,auVar23);
          if ((uVar81 & 1) == 0) {
            auVar24._8_4_ = uVar75;
            auVar24._4_4_ = uVar79;
            auVar24._0_4_ = uVar77;
            uVar76 = vdot_t(auVar54,auVar24);
            auVar25._8_4_ = uVar7;
            auVar25._4_4_ = uVar6;
            auVar25._0_4_ = uVar5;
            uVar78 = vdot_t(auVar55,auVar25);
            vpfxs(8,9,10,3);
            auVar26._8_4_ = uVar78;
            auVar26._4_4_ = uVar76;
            auVar26._0_4_ = uVar80;
            auVar27._8_4_ = uVar17;
            auVar27._4_4_ = uVar16;
            auVar27._0_4_ = uVar15;
            uVar80 = vdot_t(auVar26,auVar27);
            uVar81 = vcmp_s(7,uVar74,uVar80);
            uVar80 = vdot_t(auVar56,*pauVar68);
            if ((uVar81 & 1) == 0) {
              uVar74 = vadd_s(uVar80,uVar11);
              uVar81 = vcmp_s(7,uVar74,uVar14);
              auVar28._8_4_ = uVar4;
              auVar28._4_4_ = uVar3;
              auVar28._0_4_ = uVar2;
              uVar80 = vdot_t(auVar57,auVar28);
              if ((uVar81 & 1) == 0) {
                auVar29._8_4_ = uVar75;
                auVar29._4_4_ = uVar79;
                auVar29._0_4_ = uVar77;
                uVar76 = vdot_t(auVar58,auVar29);
                auVar30._8_4_ = uVar7;
                auVar30._4_4_ = uVar6;
                auVar30._0_4_ = uVar5;
                uVar78 = vdot_t(auVar59,auVar30);
                vpfxs(8,9,10,3);
                auVar31._8_4_ = uVar78;
                auVar31._4_4_ = uVar76;
                auVar31._0_4_ = uVar80;
                auVar32._8_4_ = uVar17;
                auVar32._4_4_ = uVar16;
                auVar32._0_4_ = uVar15;
                uVar80 = vdot_t(auVar31,auVar32);
                uVar81 = vcmp_s(7,uVar74,uVar80);
                uVar80 = vdot_t(auVar60,*pauVar68);
                if ((uVar81 & 1) == 0) {
                  uVar74 = vadd_s(uVar80,uVar12);
                  uVar81 = vcmp_s(7,uVar74,uVar14);
                  auVar33._8_4_ = uVar4;
                  auVar33._4_4_ = uVar3;
                  auVar33._0_4_ = uVar2;
                  uVar80 = vdot_t(auVar61,auVar33);
                  if ((uVar81 & 1) == 0) {
                    auVar34._8_4_ = uVar75;
                    auVar34._4_4_ = uVar79;
                    auVar34._0_4_ = uVar77;
                    uVar76 = vdot_t(auVar62,auVar34);
                    auVar35._8_4_ = uVar7;
                    auVar35._4_4_ = uVar6;
                    auVar35._0_4_ = uVar5;
                    uVar78 = vdot_t(auVar63,auVar35);
                    vpfxs(8,9,10,3);
                    auVar36._8_4_ = uVar78;
                    auVar36._4_4_ = uVar76;
                    auVar36._0_4_ = uVar80;
                    auVar37._8_4_ = uVar17;
                    auVar37._4_4_ = uVar16;
                    auVar37._0_4_ = uVar15;
                    uVar80 = vdot_t(auVar36,auVar37);
                    uVar81 = vcmp_s(7,uVar74,uVar80);
                    if ((uVar81 & 1) == 0) {
                      uVar80 = vdot_t(auVar64,*pauVar68);
                      uVar74 = vadd_s(uVar80,uVar13);
                      uVar81 = vcmp_s(7,uVar74,uVar14);
                      auVar38._8_4_ = uVar4;
                      auVar38._4_4_ = uVar3;
                      auVar38._0_4_ = uVar2;
                      uVar80 = vdot_t(auVar65,auVar38);
                      if ((uVar81 & 1) == 0) {
                        auVar39._8_4_ = uVar75;
                        auVar39._4_4_ = uVar79;
                        auVar39._0_4_ = uVar77;
                        uVar77 = vdot_t(auVar66,auVar39);
                        auVar40._8_4_ = uVar7;
                        auVar40._4_4_ = uVar6;
                        auVar40._0_4_ = uVar5;
                        uVar79 = vdot_t(auVar67,auVar40);
                        vpfxs(8,9,10,3);
                        auVar41._8_4_ = uVar79;
                        auVar41._4_4_ = uVar77;
                        auVar41._0_4_ = uVar80;
                        auVar42._8_4_ = uVar17;
                        auVar42._4_4_ = uVar16;
                        auVar42._0_4_ = uVar15;
                        uVar80 = vdot_t(auVar41,auVar42);
                        uVar81 = vcmp_s(7,uVar74,uVar80);
                        if ((uVar81 & 1) == 0) {
                          uVar70 = 1;
                          iVar72 = param_3 + -2;
                          pauVar71 = param_1;
                          if (-1 < iVar72) {
LAB_08894cb4:
                            pauVar71 = (undefined1 (*) [12])(pauVar71[6] + 8);
                            iVar69 = 4;
                            pauVar73 = pauVar71;
                            do {
                              auVar21 = *pauVar73;
                              auVar20 = *pauVar73;
                              auVar19 = *pauVar73;
                              auVar18 = *pauVar73;
                              pauVar8 = pauVar73 + 1;
                              pauVar73 = (undefined1 (*) [12])(pauVar73[1] + 4);
                              uVar80 = vdot_t(auVar18,*pauVar68);
                              uVar80 = vadd_s(uVar80,*(undefined4 *)*pauVar8);
                              vpfxt(0x10,1,2,3);
                              uVar81 = vcmp_s(6,uVar80,uVar14);
                              if ((uVar81 & 1) != 0) {
                                auVar43._8_4_ = uVar4;
                                auVar43._4_4_ = uVar3;
                                auVar43._0_4_ = uVar2;
                                uVar75 = vdot_t(auVar19,auVar43);
                                auVar44._8_4_ = uVar79;
                                auVar44._4_4_ = uVar77;
                                auVar44._0_4_ = uVar75;
                                uVar77 = vdot_t(auVar20,auVar44);
                                auVar45._8_4_ = uVar7;
                                auVar45._4_4_ = uVar6;
                                auVar45._0_4_ = uVar5;
                                uVar79 = vdot_t(auVar21,auVar45);
                                vpfxs(8,9,10,3);
                                auVar46._8_4_ = uVar79;
                                auVar46._4_4_ = uVar77;
                                auVar46._0_4_ = uVar75;
                                auVar47._8_4_ = uVar17;
                                auVar47._4_4_ = uVar16;
                                auVar47._0_4_ = uVar15;
                                uVar75 = vdot_t(auVar46,auVar47);
                                vpfxt(0x10,1,2,3);
                                uVar81 = vcmp_s(6,uVar80,uVar75);
                                if ((uVar81 & 1) != 0) goto LAB_08894d10;
                              }
                              bVar1 = iVar69 == 0;
                              iVar69 = iVar69 + -1;
                              if (bVar1) {
                                uVar70 = 0;
                                break;
                              }
                            } while( true );
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_08894d1c:
    *(undefined4 *)(pauVar68[5] + 8) = uVar70;
    param_4 = param_4 + -1;
    pauVar68 = (undefined1 (*) [12])(pauVar68[6] + 8);
    if (param_4 == 0) {
      return 0;
    }
  } while( true );
LAB_08894d10:
  bVar1 = iVar72 == 0;
  iVar72 = iVar72 + -1;
  if (bVar1) goto LAB_08894d1c;
  goto LAB_08894cb4;
}

