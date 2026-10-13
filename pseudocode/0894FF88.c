/* Entry 0x0894FF88 | file offset 0x0014CF60 | FUN_0894ff88 | bytes 1696 */

/* WARNING: Type propagation algorithm not settling */

void FUN_0894ff88(undefined4 param_1,int param_2,float *param_3,float *param_4)

{
  int *piVar1;
  undefined1 auVar2 [12];
  undefined1 (*pauVar3) [12];
  float *pfVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined1 auStack_140 [16];
  undefined1 local_130 [16];
  undefined4 local_120 [4];
  float local_110;
  float local_10c;
  float local_108;
  undefined4 local_104;
  undefined1 (*local_b0 [3]) [12];
  int local_a4 [2];
  undefined1 *local_9c;
  undefined1 (*local_98) [12];
  undefined4 *local_94;
  float *local_4c;
  int local_48;
  float *local_44;
  undefined4 local_40;
  
  if ((-1 < *(short *)(param_3 + 3)) && (-1 < *(short *)((int)param_3 + 0x16))) {
    if (*(short *)((int)param_3 + 0xe) < 0) {
      iVar6 = 0;
    }
    else if (*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x34) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x34) +
                               *(short *)((int)param_3 + 0xe) * 4) + 0x10);
    }
    if (iVar6 != -1) {
      if (*(short *)((int)param_3 + 0xe) < 0) {
        fVar12 = 0.0;
      }
      else if (*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x34) == 0) {
        fVar12 = 0.0;
      }
      else {
        fVar12 = **(float **)
                   (*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x34) +
                   *(short *)((int)param_3 + 0xe) * 4);
      }
      local_40 = *(undefined4 *)(param_2 + 0xa8);
      uVar9 = *(undefined4 *)(*(int *)(param_2 + 0x8c) + 0x50);
      fVar13 = *(float *)(*(int *)(param_2 + 0x88) + 0x160);
      local_b0[0] = (undefined1 (*) [12])auStack_140;
      local_b0[1] = (undefined1 (*) [12])local_130;
      local_b0[2] = (undefined1 (*) [12])local_120;
      if (*(short *)(param_3 + 4) < 0) {
        local_48 = 0;
      }
      else {
        local_48 = FUN_08973e20(*(undefined4 *)(param_2 + 0xa8),
                                *(undefined4 *)
                                 (*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) +
                                                   0x3c) + *(short *)(param_3 + 4) * 4) + 0x10),
                                (int)*(short *)((int)param_3 + 0x12),local_a4);
      }
      if (local_48 != 0) {
        fVar13 = *param_4 + *param_3 * fVar13 * 0.5;
        if (1.0 <= fVar13) {
          iVar10 = (int)fVar13;
          *param_4 = fVar13 - (float)iVar10;
          *param_4 = (fVar13 - (float)iVar10) - *param_3 * (float)*(ushort *)(param_3 + 5) * 0.5;
          iVar6 = FUN_089469e0(param_2,*(undefined4 *)(*(int *)(param_2 + 0x88) + 0x1cc),
                               (int)*(short *)(param_3 + 3));
          local_a4[1] = 7;
          local_9c = *local_b0[0];
          local_98 = local_b0[1];
          local_94 = (undefined4 *)local_b0[2];
          if (0 < iVar10) {
            local_44 = param_4 + 1;
            local_4c = param_4;
            do {
              if (*(char *)((int)param_3 + 0x19) == '\x01') {
                iVar11 = (int)*(short *)local_44;
                *(short *)local_44 = *(short *)local_44 + 1;
                if (local_a4[0] <= *(short *)(local_4c + 1)) {
                  *(undefined2 *)(local_4c + 1) = 0;
                }
              }
              else {
                DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
                iVar11 = (int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) *
                              (float)(local_a4[0] + -1));
              }
              if (*(byte *)(param_3 + 6) < 100) {
                DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
                if ((int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 100.0) <
                    (int)(uint)*(byte *)(param_3 + 6)) {
                  iVar7 = *(int *)(param_2 + 0x88);
                  goto LAB_08950304;
                }
              }
              else {
                iVar7 = *(int *)(param_2 + 0x88);
LAB_08950304:
                pfVar4 = (float *)FUN_08973e78(local_40,*(undefined4 *)
                                                         (*(int *)(*(int *)(*(int *)(iVar7 + 0x1c8)
                                                                           + 0x3c) +
                                                                  *(short *)(param_3 + 4) * 4) +
                                                         0x10),
                                               *(undefined4 *)(local_48 + iVar11 * 4));
                local_110 = *pfVar4 * fVar12;
                local_10c = pfVar4[1] * fVar12;
                local_104 = 0x3f800000;
                local_108 = pfVar4[2] * fVar12;
                if (iVar6 < 0) {
                  iVar11 = *(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1cc) + 0x20) +
                                   *(short *)(param_3 + 3) * 4);
                  if (iVar11 == 0) {
                    uVar5 = 0;
                  }
                  else {
                    uVar5 = *(undefined1 *)(iVar11 + 0xb);
                  }
                  if (*(int *)(*(int *)(param_2 + 0x8c) + 0x1c) == 0) {
                    iVar11 = *(int *)(param_2 + 0x88) + 0x50;
                  }
                  else {
                    iVar11 = *(int *)(*(int *)(*(int *)(param_2 + 0x8c) + 0x1c) + 0x54);
                  }
                  FUN_089488a8(param_2,uVar5,&local_110,uVar9,iVar11,local_b0[0],local_b0[1],1);
                  pauVar3 = local_b0[2];
                  auVar2 = vscl_t(*local_b0[1],param_3[2]);
                  uVar14 = vzero_s();
                  *(int *)local_b0[2] = auVar2._0_4_;
                  *(int *)((int)pauVar3 + 4) = auVar2._4_4_;
                  *(int *)((int)pauVar3 + 8) = auVar2._8_4_;
                  *(undefined4 *)((int)pauVar3 + 0xc) = uVar14;
                  pauVar3 = local_b0[1];
                  auVar2 = vscl_t(*local_b0[1],param_3[1]);
                  uVar14 = vzero_s();
                  *(int *)*local_b0[1] = auVar2._0_4_;
                  *(int *)(*pauVar3 + 4) = auVar2._4_4_;
                  *(int *)(*pauVar3 + 8) = auVar2._8_4_;
                  *(undefined4 *)pauVar3[1] = uVar14;
                  iVar11 = 0;
                  puVar8 = auStack_140;
                  do {
                    iVar11 = iVar11 + 1;
                    *(float *)(*(int *)(puVar8 + 0x90) + 4) =
                         -*(float *)(*(int *)(puVar8 + 0x90) + 4);
                    piVar1 = (int *)(puVar8 + 0x90);
                    puVar8 = puVar8 + 4;
                    *(float *)(*piVar1 + 8) = -*(float *)(*piVar1 + 8);
                  } while (iVar11 < 3);
                  iVar11 = FUN_0894c244(0,param_2,(int)*(short *)(param_3 + 3),local_a4 + 1);
                  if (iVar11 == 0) {
                    return;
                  }
                }
                else {
                  iVar11 = 0;
                  if (0 < iVar6) {
                    do {
                      iVar7 = FUN_08946a28(param_2,*(undefined4 *)(*(int *)(param_2 + 0x88) + 0x1cc)
                                           ,*(ushort *)(param_3 + 3) & 0xff,iVar11);
                      iVar7 = *(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1cc) + 0x20) +
                                      iVar7 * 4);
                      if (iVar7 == 0) {
                        uVar5 = 0;
                      }
                      else {
                        uVar5 = *(undefined1 *)(iVar7 + 0xb);
                      }
                      if (*(int *)(*(int *)(param_2 + 0x8c) + 0x1c) == 0) {
                        iVar7 = *(int *)(param_2 + 0x88) + 0x50;
                      }
                      else {
                        iVar7 = *(int *)(*(int *)(*(int *)(param_2 + 0x8c) + 0x1c) + 0x54);
                      }
                      FUN_089488a8(param_2,uVar5,&local_110,uVar9,iVar7,local_b0[0],local_b0[1],1);
                      pauVar3 = local_b0[2];
                      auVar2 = vscl_t(*local_b0[1],param_3[2]);
                      uVar14 = vzero_s();
                      *(int *)local_b0[2] = auVar2._0_4_;
                      *(int *)((int)pauVar3 + 4) = auVar2._4_4_;
                      *(int *)((int)pauVar3 + 8) = auVar2._8_4_;
                      *(undefined4 *)((int)pauVar3 + 0xc) = uVar14;
                      pauVar3 = local_b0[1];
                      auVar2 = vscl_t(*local_b0[1],param_3[1]);
                      uVar14 = vzero_s();
                      *(int *)*local_b0[1] = auVar2._0_4_;
                      *(int *)(*pauVar3 + 4) = auVar2._4_4_;
                      *(int *)(*pauVar3 + 8) = auVar2._8_4_;
                      *(undefined4 *)pauVar3[1] = uVar14;
                      iVar7 = 0;
                      puVar8 = auStack_140;
                      do {
                        iVar7 = iVar7 + 1;
                        *(float *)(*(int *)(puVar8 + 0x90) + 4) =
                             -*(float *)(*(int *)(puVar8 + 0x90) + 4);
                        piVar1 = (int *)(puVar8 + 0x90);
                        puVar8 = puVar8 + 4;
                        *(float *)(*piVar1 + 8) = -*(float *)(*piVar1 + 8);
                      } while (iVar7 < 3);
                      FUN_08946a5c(0,param_2,*(undefined4 *)(*(int *)(param_2 + 0x88) + 0x1cc),
                                   *(ushort *)(param_3 + 3) & 0xff,iVar11,local_a4 + 1);
                      iVar11 = iVar11 + 1;
                    } while (iVar11 < iVar6);
                  }
                }
              }
              iVar10 = iVar10 + -1;
            } while (0 < iVar10);
          }
        }
        else {
          *param_4 = fVar13;
        }
      }
    }
  }
  return;
}

