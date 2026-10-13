/* Entry 0x08950650 | file offset 0x0014D628 | FUN_08950650 | bytes 1544 */

/* WARNING: Type propagation algorithm not settling */

void FUN_08950650(undefined4 param_1,int param_2,float *param_3,float *param_4)

{
  int *piVar1;
  undefined1 auVar2 [12];
  float *pfVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float local_150 [4];
  undefined4 local_140 [4];
  undefined4 local_130 [4];
  undefined1 local_120 [112];
  float *local_b0 [3];
  undefined1 (*local_a4) [12];
  int local_a0 [2];
  float *local_98;
  undefined4 *local_94;
  undefined4 *local_90;
  float *local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  
  if (((-1 < *(short *)(param_3 + 3)) && (-1 < *(short *)((int)param_3 + 0x16))) &&
     (-1 < *(short *)(param_3 + 6))) {
    if (*(short *)((int)param_3 + 0xe) < 0) {
      iVar5 = 0;
    }
    else if (*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x34) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x34) +
                               *(short *)((int)param_3 + 0xe) * 4) + 0x10);
    }
    if (iVar5 != -1) {
      if (*(short *)((int)param_3 + 0xe) < 0) {
        fVar11 = 0.0;
      }
      else if (*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x34) == 0) {
        fVar11 = 0.0;
      }
      else {
        fVar11 = **(float **)
                   (*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x34) +
                   *(short *)((int)param_3 + 0xe) * 4);
      }
      local_4c = *(undefined4 *)(param_2 + 0xa8);
      local_50 = *(undefined4 *)(*(int *)(param_2 + 0x8c) + 0x50);
      fVar8 = *(float *)(*(int *)(param_2 + 0x88) + 0x160);
      local_b0[0] = local_150;
      local_b0[1] = (float *)local_140;
      local_b0[2] = (float *)local_130;
      local_a4 = (undefined1 (*) [12])local_120;
      if (*(short *)(param_3 + 4) < 0) {
        local_54 = 0;
      }
      else {
        local_54 = FUN_08973e20(*(undefined4 *)(param_2 + 0xa8),
                                *(undefined4 *)
                                 (*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) +
                                                   0x3c) + *(short *)(param_3 + 4) * 4) + 0x10),
                                (int)*(short *)((int)param_3 + 0x12),local_a0);
      }
      if (local_54 != 0) {
        fVar8 = *param_4 + *param_3 * fVar8;
        if (1.0 <= fVar8) {
          iVar5 = (int)fVar8;
          *param_4 = fVar8 - (float)iVar5;
          *param_4 = (fVar8 - (float)iVar5) - *param_3 * (float)*(ushort *)(param_3 + 5);
          local_a0[1] = 7;
          local_98 = local_b0[0];
          local_94 = local_b0[1];
          local_90 = local_b0[2];
          if (0 < iVar5) {
            local_58 = param_4 + 1;
            do {
              if (*(char *)((int)param_3 + 0x1b) == '\x01') {
                iVar6 = (int)*(short *)local_58;
                *(short *)local_58 = *(short *)local_58 + 1;
                if (local_a0[0] <= *(short *)(param_4 + 1)) {
                  *(undefined2 *)(param_4 + 1) = 0;
                }
              }
              else {
                DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
                iVar6 = (int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) *
                             (float)(local_a0[0] + -1));
              }
              if (*(byte *)((int)param_3 + 0x1a) < 100) {
                DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
                if ((int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 100.0) <
                    (int)(uint)*(byte *)((int)param_3 + 0x1a)) {
                  iVar7 = *(int *)(param_2 + 0x88);
                  goto LAB_089509c8;
                }
              }
              else {
                iVar7 = *(int *)(param_2 + 0x88);
LAB_089509c8:
                pfVar3 = (float *)FUN_08973e78(local_4c,*(undefined4 *)
                                                         (*(int *)(*(int *)(*(int *)(iVar7 + 0x1c8)
                                                                           + 0x3c) +
                                                                  *(short *)(param_3 + 4) * 4) +
                                                         0x10),*(undefined4 *)(local_54 + iVar6 * 4)
                                              );
                *local_b0[0] = *pfVar3 * fVar11;
                local_b0[0][1] = pfVar3[1] * fVar11;
                local_b0[0][2] = pfVar3[2] * fVar11;
                local_b0[0][3] = 1.0;
                iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1cc) + 0x20) +
                                *(short *)(param_3 + 3) * 4);
                if (iVar6 == 0) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = *(undefined1 *)(iVar6 + 0xb);
                }
                if (*(int *)(*(int *)(param_2 + 0x8c) + 0x1c) == 0) {
                  iVar6 = *(int *)(param_2 + 0x88) + 0x50;
                }
                else {
                  iVar6 = *(int *)(*(int *)(*(int *)(param_2 + 0x8c) + 0x1c) + 0x54);
                }
                FUN_089488a8(param_2,uVar4,local_b0[0],local_50,iVar6,local_b0[0],local_a4,1);
                pfVar3 = local_b0[1];
                auVar2 = vscl_t(*local_a4,param_3[1]);
                uVar12 = vzero_s();
                *local_b0[1] = (float)auVar2._0_4_;
                pfVar3[1] = (float)auVar2._4_4_;
                pfVar3[2] = (float)auVar2._8_4_;
                pfVar3[3] = (float)uVar12;
                pfVar3 = local_b0[2];
                auVar2 = vscl_t(*local_a4,param_3[2]);
                uVar12 = vzero_s();
                *local_b0[2] = (float)auVar2._0_4_;
                pfVar3[1] = (float)auVar2._4_4_;
                pfVar3[2] = (float)auVar2._8_4_;
                pfVar3[3] = (float)uVar12;
                iVar6 = 0;
                pfVar3 = local_150;
                do {
                  iVar6 = iVar6 + 1;
                  *(float *)(*(int *)((int)pfVar3 + 0xa0) + 4) =
                       -*(float *)(*(int *)((int)pfVar3 + 0xa0) + 4);
                  piVar1 = (int *)((int)pfVar3 + 0xa0);
                  pfVar3 = (float *)((int)pfVar3 + 4);
                  *(float *)(*piVar1 + 8) = -*(float *)(*piVar1 + 8);
                } while (iVar6 < 3);
                iVar6 = FUN_0894c244(0,param_2,(int)*(short *)(param_3 + 3),local_a0 + 1);
                if (iVar6 == 0) {
                  return;
                }
                fVar10 = *(float *)*local_a4;
                iVar6 = iVar6 + (uint)*(ushort *)
                                       (*(int *)(*(int *)(*(int *)(iVar6 + 0x40) + 0x1c) +
                                                *(short *)(param_3 + 6) * 4) + 2);
                fVar9 = *(float *)(*local_a4 + 4);
                fVar8 = *(float *)(*local_a4 + 8);
                if (((fVar10 != 0.0) || (fVar9 != 0.0)) || (fVar8 != 0.0)) {
                  local_48 = fVar11;
                  fVar11 = (float)FUN_08867eb4(fVar8,fVar9);
                  *(float *)(iVar6 + 100) = (fVar11 * 180.0) / 3.1415925;
                  fVar11 = (float)FUN_08867eb4(fVar10,SQRT(fVar8 * fVar8 + fVar9 * fVar9));
                  *(float *)(iVar6 + 0x60) = (fVar11 * 180.0) / 3.1415925;
                  fVar11 = local_48;
                }
              }
              iVar5 = iVar5 + -1;
            } while (0 < iVar5);
          }
        }
        else {
          *param_4 = fVar8;
        }
      }
    }
  }
  return;
}

