/* Entry 0x0894ED6C | file offset 0x0014BD44 | FUN_0894ed6c | bytes 1548 */

void FUN_0894ed6c(undefined4 param_1,int param_2,float *param_3,float *param_4)

{
  int *piVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [64];
  undefined1 (*pauVar4) [12];
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined1 auStack_140 [16];
  undefined1 local_130 [16];
  undefined4 local_120 [4];
  float local_110;
  float local_10c;
  float local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  undefined1 (*local_b0 [5]) [12];
  undefined1 (*local_9c) [12];
  undefined4 *local_98;
  int local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  
  if ((-1 < *(short *)(param_3 + 4)) && (-1 < *(short *)(param_3 + 5))) {
    local_b0[0] = (undefined1 (*) [12])auStack_140;
    local_b0[1] = (undefined1 (*) [12])local_130;
    local_b0[2] = (undefined1 (*) [12])local_120;
    fVar14 = *param_4 + *param_3 * *(float *)(*(int *)(param_2 + 0x88) + 0x160) * 0.5;
    if (1.0 <= fVar14) {
      iVar12 = (int)fVar14;
      *param_4 = fVar14 - (float)iVar12;
      *param_4 = (fVar14 - (float)iVar12) - *param_3 * (float)*(ushort *)((int)param_3 + 0x12);
      local_48 = (undefined4 *)
                 (*(int *)(param_2 + 0x8c) +
                  (uint)*(ushort *)
                         (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                         *(int *)(*(int *)(param_2 + 0x90) + 4) * 2) + 0x60);
      local_50 = iVar12;
      iVar7 = FUN_089469e0(param_2,*(undefined4 *)(*(int *)(param_2 + 0x88) + 0x1cc),
                           (int)*(short *)(param_3 + 4));
      local_b0[3] = (undefined1 (*) [12])0x7;
      local_b0[4] = local_b0[0];
      local_9c = local_b0[1];
      local_98 = (undefined4 *)local_b0[2];
      if (0 < iVar12) {
        local_4c = &local_d0;
        do {
          puVar6 = local_48;
          puVar5 = local_4c;
          if ((*(byte *)((int)param_3 + 0x17) < 100) &&
             (DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3,
             (int)(uint)*(byte *)((int)param_3 + 0x17) <=
             (int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 100.0))) {
            iVar11 = local_50 + -1;
          }
          else {
            iVar12 = DAT_089da120 * 0x343fd + 0x269ec3;
            local_110 = ((float)(iVar12 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[1] - param_3[1]
            ;
            iVar12 = iVar12 * 0x343fd + 0x269ec3;
            local_10c = ((float)(iVar12 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[1] - param_3[1]
            ;
            DAT_089da120 = iVar12 * 0x343fd + 0x269ec3;
            local_108 = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[1] -
                        param_3[1];
            local_104 = 0x3f800000;
            auVar3 = vmidt_q();
            local_100 = auVar3._0_4_;
            uStack_fc = auVar3._4_4_;
            uStack_f8 = auVar3._8_4_;
            uStack_f4 = auVar3._12_4_;
            local_f0 = auVar3._16_4_;
            uStack_ec = auVar3._20_4_;
            uStack_e8 = auVar3._24_4_;
            uStack_e4 = auVar3._28_4_;
            local_e0 = auVar3._32_4_;
            uStack_dc = auVar3._36_4_;
            uStack_d8 = auVar3._40_4_;
            uStack_d4 = auVar3._44_4_;
            local_d0 = auVar3._48_4_;
            local_cc = auVar3._52_4_;
            local_c8 = auVar3._56_4_;
            uVar15 = local_48[1];
            uVar13 = local_48[2];
            *local_4c = *local_48;
            puVar5[1] = uVar15;
            puVar5[2] = uVar13;
            puVar5[3] = puVar6[3];
            local_c4 = 0x3f800000;
            local_cc = -local_cc;
            local_c8 = -local_c8;
            if (iVar7 < 0) {
              iVar12 = *(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1cc) + 0x20) +
                               *(short *)(param_3 + 4) * 4);
              if (iVar12 == 0) {
                uVar9 = 0;
              }
              else {
                uVar9 = *(undefined1 *)(iVar12 + 0xb);
              }
              if (*(int *)(*(int *)(param_2 + 0x8c) + 0x1c) == 0) {
                iVar12 = *(int *)(param_2 + 0x88) + 0x50;
              }
              else {
                iVar12 = *(int *)(*(int *)(*(int *)(param_2 + 0x8c) + 0x1c) + 0x54);
              }
              FUN_089488a8(param_2,uVar9,&local_110,&local_100,iVar12,local_b0[0],local_b0[1],1);
              pauVar4 = local_b0[2];
              auVar2 = vscl_t(*local_b0[1],param_3[3]);
              uVar13 = vzero_s();
              *(int *)local_b0[2] = auVar2._0_4_;
              *(int *)((int)pauVar4 + 4) = auVar2._4_4_;
              *(int *)((int)pauVar4 + 8) = auVar2._8_4_;
              *(undefined4 *)((int)pauVar4 + 0xc) = uVar13;
              pauVar4 = local_b0[1];
              auVar2 = vscl_t(*local_b0[1],param_3[2]);
              uVar13 = vzero_s();
              *(int *)*local_b0[1] = auVar2._0_4_;
              *(int *)(*pauVar4 + 4) = auVar2._4_4_;
              *(int *)(*pauVar4 + 8) = auVar2._8_4_;
              *(undefined4 *)pauVar4[1] = uVar13;
              iVar12 = 0;
              puVar10 = auStack_140;
              do {
                iVar12 = iVar12 + 1;
                *(float *)(*(int *)(puVar10 + 0x90) + 4) = -*(float *)(*(int *)(puVar10 + 0x90) + 4)
                ;
                piVar1 = (int *)(puVar10 + 0x90);
                puVar10 = puVar10 + 4;
                *(float *)(*piVar1 + 8) = -*(float *)(*piVar1 + 8);
              } while (iVar12 < 3);
              iVar12 = FUN_0894c244(0,param_2,(int)*(short *)(param_3 + 4),local_b0 + 3);
              if (iVar12 == 0) {
                return;
              }
              iVar11 = local_50 + -1;
            }
            else {
              iVar12 = 0;
              iVar11 = local_50 + -1;
              if (0 < iVar7) {
                do {
                  iVar8 = FUN_08946a28(param_2,*(undefined4 *)(*(int *)(param_2 + 0x88) + 0x1cc),
                                       *(ushort *)(param_3 + 4) & 0xff,iVar12);
                  iVar8 = *(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1cc) + 0x20) +
                                  iVar8 * 4);
                  if (iVar8 == 0) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = *(undefined1 *)(iVar8 + 0xb);
                  }
                  if (*(int *)(*(int *)(param_2 + 0x8c) + 0x1c) == 0) {
                    iVar8 = *(int *)(param_2 + 0x88) + 0x50;
                  }
                  else {
                    iVar8 = *(int *)(*(int *)(*(int *)(param_2 + 0x8c) + 0x1c) + 0x54);
                  }
                  FUN_089488a8(param_2,uVar9,&local_110,&local_100,iVar8,local_b0[0],local_b0[1],1);
                  pauVar4 = local_b0[2];
                  auVar2 = vscl_t(*local_b0[1],param_3[3]);
                  uVar13 = vzero_s();
                  *(int *)local_b0[2] = auVar2._0_4_;
                  *(int *)((int)pauVar4 + 4) = auVar2._4_4_;
                  *(int *)((int)pauVar4 + 8) = auVar2._8_4_;
                  *(undefined4 *)((int)pauVar4 + 0xc) = uVar13;
                  pauVar4 = local_b0[1];
                  auVar2 = vscl_t(*local_b0[1],param_3[2]);
                  uVar13 = vzero_s();
                  *(int *)*local_b0[1] = auVar2._0_4_;
                  *(int *)(*pauVar4 + 4) = auVar2._4_4_;
                  *(int *)(*pauVar4 + 8) = auVar2._8_4_;
                  *(undefined4 *)pauVar4[1] = uVar13;
                  iVar8 = 0;
                  puVar10 = auStack_140;
                  do {
                    iVar8 = iVar8 + 1;
                    *(float *)(*(int *)(puVar10 + 0x90) + 4) =
                         -*(float *)(*(int *)(puVar10 + 0x90) + 4);
                    piVar1 = (int *)(puVar10 + 0x90);
                    puVar10 = puVar10 + 4;
                    *(float *)(*piVar1 + 8) = -*(float *)(*piVar1 + 8);
                  } while (iVar8 < 3);
                  FUN_08946a5c(0,param_2,*(undefined4 *)(*(int *)(param_2 + 0x88) + 0x1cc),
                               *(ushort *)(param_3 + 4) & 0xff,iVar12,local_b0 + 3);
                  iVar12 = iVar12 + 1;
                } while (iVar12 < iVar7);
              }
            }
          }
          local_50 = iVar11;
        } while (0 < iVar11);
      }
    }
    else {
      *param_4 = fVar14;
    }
  }
  return;
}

