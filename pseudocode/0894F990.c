/* Entry 0x0894F990 | file offset 0x0014C968 | FUN_0894f990 | bytes 1488 */

void FUN_0894f990(undefined4 param_1,int param_2,float *param_3,short *param_4)

{
  int *piVar1;
  short sVar2;
  undefined1 auVar3 [12];
  undefined1 (*pauVar4) [12];
  float *pfVar5;
  int iVar6;
  undefined1 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  int iVar13;
  float fVar14;
  undefined4 uVar15;
  int local_140 [4];
  undefined1 auStack_130 [16];
  undefined1 local_120 [16];
  undefined4 local_110 [4];
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  undefined1 (*local_ac [5]) [12];
  undefined1 (*local_98) [12];
  undefined4 *local_94;
  int local_4c;
  short *local_48;
  undefined4 local_44;
  
  if ((-1 < *(short *)(param_3 + 3)) && (-1 < *(short *)(param_3 + 5))) {
    if (*(short *)((int)param_3 + 0xe) < 0) {
      iVar8 = 0;
    }
    else if (*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x34) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x34) +
                               *(short *)((int)param_3 + 0xe) * 4) + 0x10);
    }
    if (iVar8 != -1) {
      if (*(short *)((int)param_3 + 0xe) < 0) {
        fVar14 = 0.0;
      }
      else if (*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x34) == 0) {
        fVar14 = 0.0;
      }
      else {
        fVar14 = **(float **)
                   (*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x34) +
                   *(short *)((int)param_3 + 0xe) * 4);
      }
      local_44 = *(undefined4 *)(param_2 + 0xa8);
      uVar12 = *(undefined4 *)(*(int *)(param_2 + 0x8c) + 0x50);
      local_48 = param_4;
      if (*(short *)(param_3 + 4) < 0) {
        local_4c = 0;
      }
      else {
        local_4c = FUN_08973e20(*(undefined4 *)(param_2 + 0xa8),
                                *(undefined4 *)
                                 (*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) +
                                                   0x3c) + *(short *)(param_3 + 4) * 4) + 0x10),
                                (int)*(short *)((int)param_3 + 0x12),local_140);
      }
      if (local_4c != 0) {
        iVar8 = FUN_089469e0(param_2,*(undefined4 *)(*(int *)(param_2 + 0x88) + 0x1cc),
                             (int)*(short *)(param_3 + 3));
        local_ac[0] = (undefined1 (*) [12])auStack_130;
        local_ac[1] = (undefined1 (*) [12])local_120;
        local_ac[2] = (undefined1 (*) [12])local_110;
        local_ac[3] = (undefined1 (*) [12])0x7;
        iVar13 = 0;
        if (0 < (int)*param_3) {
          local_ac[4] = local_ac[0];
          local_98 = local_ac[1];
          local_94 = (undefined4 *)local_ac[2];
          do {
            if ((*(byte *)((int)param_3 + 0x16) & 1) == 1) {
              sVar2 = *local_48;
              *local_48 = sVar2 + 1;
              puVar9 = (undefined4 *)(local_4c + sVar2 * 4);
              if (local_140[0] <= *local_48) {
                *local_48 = 0;
              }
            }
            else {
              DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
              puVar9 = (undefined4 *)
                       (local_4c +
                       (int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) *
                            (float)(local_140[0] + -1)) * 4);
            }
            pfVar5 = (float *)FUN_08973e78(local_44,*(undefined4 *)
                                                     (*(int *)(*(int *)(*(int *)(*(int *)(param_2 +
                                                                                         0x88) +
                                                                                0x1c8) + 0x3c) +
                                                              *(short *)(param_3 + 4) * 4) + 0x10),
                                           *puVar9);
            local_100 = *pfVar5 * fVar14;
            local_fc = pfVar5[1] * fVar14;
            local_f4 = 0x3f800000;
            local_f8 = pfVar5[2] * fVar14;
            if (iVar8 < 0) {
              iVar10 = *(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1cc) + 0x20) +
                               *(short *)(param_3 + 3) * 4);
              if (iVar10 == 0) {
                uVar7 = 0;
              }
              else {
                uVar7 = *(undefined1 *)(iVar10 + 0xb);
              }
              if (*(int *)(*(int *)(param_2 + 0x8c) + 0x1c) == 0) {
                iVar10 = *(int *)(param_2 + 0x88) + 0x50;
              }
              else {
                iVar10 = *(int *)(*(int *)(*(int *)(param_2 + 0x8c) + 0x1c) + 0x54);
              }
              FUN_089488a8(param_2,uVar7,&local_100,uVar12,iVar10,local_ac[0],local_ac[1],1);
              pauVar4 = local_ac[2];
              auVar3 = vscl_t(*local_ac[1],param_3[2]);
              uVar15 = vzero_s();
              *(int *)local_ac[2] = auVar3._0_4_;
              *(int *)((int)pauVar4 + 4) = auVar3._4_4_;
              *(int *)((int)pauVar4 + 8) = auVar3._8_4_;
              *(undefined4 *)((int)pauVar4 + 0xc) = uVar15;
              pauVar4 = local_ac[1];
              auVar3 = vscl_t(*local_ac[1],param_3[1]);
              uVar15 = vzero_s();
              *(int *)*local_ac[1] = auVar3._0_4_;
              *(int *)(*pauVar4 + 4) = auVar3._4_4_;
              *(int *)(*pauVar4 + 8) = auVar3._8_4_;
              *(undefined4 *)pauVar4[1] = uVar15;
              iVar10 = 0;
              piVar11 = local_140;
              do {
                iVar10 = iVar10 + 1;
                *(float *)(*(int *)((int)piVar11 + 0x94) + 4) =
                     -*(float *)(*(int *)((int)piVar11 + 0x94) + 4);
                piVar1 = (int *)((int)piVar11 + 0x94);
                piVar11 = (int *)((int)piVar11 + 4);
                *(float *)(*piVar1 + 8) = -*(float *)(*piVar1 + 8);
              } while (iVar10 < 3);
              iVar10 = FUN_0894c244(0,param_2,(int)*(short *)(param_3 + 3),local_ac + 3);
              if (iVar10 == 0) {
                return;
              }
            }
            else {
              iVar10 = 0;
              if (0 < iVar8) {
                do {
                  iVar6 = FUN_08946a28(param_2,*(undefined4 *)(*(int *)(param_2 + 0x88) + 0x1cc),
                                       *(ushort *)(param_3 + 3) & 0xff,iVar10);
                  iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1cc) + 0x20) +
                                  iVar6 * 4);
                  if (iVar6 == 0) {
                    uVar7 = 0;
                  }
                  else {
                    uVar7 = *(undefined1 *)(iVar6 + 0xb);
                  }
                  if (*(int *)(*(int *)(param_2 + 0x8c) + 0x1c) == 0) {
                    iVar6 = *(int *)(param_2 + 0x88) + 0x50;
                  }
                  else {
                    iVar6 = *(int *)(*(int *)(*(int *)(param_2 + 0x8c) + 0x1c) + 0x54);
                  }
                  FUN_089488a8(param_2,uVar7,&local_100,uVar12,iVar6,local_ac[0],local_ac[1],1);
                  pauVar4 = local_ac[2];
                  auVar3 = vscl_t(*local_ac[1],param_3[2]);
                  uVar15 = vzero_s();
                  *(int *)local_ac[2] = auVar3._0_4_;
                  *(int *)((int)pauVar4 + 4) = auVar3._4_4_;
                  *(int *)((int)pauVar4 + 8) = auVar3._8_4_;
                  *(undefined4 *)((int)pauVar4 + 0xc) = uVar15;
                  pauVar4 = local_ac[1];
                  auVar3 = vscl_t(*local_ac[1],param_3[1]);
                  uVar15 = vzero_s();
                  *(int *)*local_ac[1] = auVar3._0_4_;
                  *(int *)(*pauVar4 + 4) = auVar3._4_4_;
                  *(int *)(*pauVar4 + 8) = auVar3._8_4_;
                  *(undefined4 *)pauVar4[1] = uVar15;
                  iVar6 = 0;
                  piVar11 = local_140;
                  do {
                    iVar6 = iVar6 + 1;
                    *(float *)(*(int *)((int)piVar11 + 0x94) + 4) =
                         -*(float *)(*(int *)((int)piVar11 + 0x94) + 4);
                    piVar1 = (int *)((int)piVar11 + 0x94);
                    piVar11 = (int *)((int)piVar11 + 4);
                    *(float *)(*piVar1 + 8) = -*(float *)(*piVar1 + 8);
                  } while (iVar6 < 3);
                  FUN_08946a5c(0,param_2,*(undefined4 *)(*(int *)(param_2 + 0x88) + 0x1cc),
                               *(ushort *)(param_3 + 3) & 0xff,iVar10,local_ac + 3);
                  iVar10 = iVar10 + 1;
                } while (iVar10 < iVar8);
              }
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 < (int)*param_3);
        }
      }
    }
  }
  return;
}

