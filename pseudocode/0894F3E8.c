/* Entry 0x0894F3E8 | file offset 0x0014C3C0 | FUN_0894f3e8 | bytes 1332 */

void FUN_0894f3e8(undefined4 param_1,int param_2,float *param_3)

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
  undefined4 uVar14;
  undefined1 auStack_130 [16];
  undefined1 local_120 [16];
  undefined4 local_110 [4];
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  undefined1 (*local_a0 [5]) [12];
  undefined1 (*local_8c) [12];
  undefined4 *local_88;
  undefined4 *local_40;
  undefined4 *local_3c;
  
  if ((-1 < *(short *)(param_3 + 4)) && (-1 < *(short *)((int)param_3 + 0x12))) {
    local_3c = (undefined4 *)
               (*(int *)(param_2 + 0x8c) +
                (uint)*(ushort *)
                       (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                       *(int *)(*(int *)(param_2 + 0x90) + 4) * 2) + 0x60);
    iVar7 = FUN_089469e0(param_2,*(undefined4 *)(*(int *)(param_2 + 0x88) + 0x1cc),
                         (int)*(short *)(param_3 + 4));
    local_a0[0] = (undefined1 (*) [12])auStack_130;
    local_a0[1] = (undefined1 (*) [12])local_120;
    local_a0[2] = (undefined1 (*) [12])local_110;
    local_a0[3] = (undefined1 (*) [12])0x7;
    iVar12 = 0;
    if (0 < (int)*param_3) {
      local_40 = &local_c0;
      local_a0[4] = local_a0[0];
      local_8c = local_a0[1];
      local_88 = (undefined4 *)local_a0[2];
      do {
        puVar6 = local_3c;
        puVar5 = local_40;
        iVar11 = DAT_089da120 * 0x343fd + 0x269ec3;
        local_100 = ((float)(iVar11 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[1] - param_3[1];
        iVar11 = iVar11 * 0x343fd + 0x269ec3;
        local_fc = ((float)(iVar11 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[1] - param_3[1];
        DAT_089da120 = iVar11 * 0x343fd + 0x269ec3;
        local_f8 = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[1] -
                   param_3[1];
        local_f4 = 0x3f800000;
        auVar3 = vmidt_q();
        local_f0 = auVar3._0_4_;
        uStack_ec = auVar3._4_4_;
        uStack_e8 = auVar3._8_4_;
        uStack_e4 = auVar3._12_4_;
        local_e0 = auVar3._16_4_;
        uStack_dc = auVar3._20_4_;
        uStack_d8 = auVar3._24_4_;
        uStack_d4 = auVar3._28_4_;
        local_d0 = auVar3._32_4_;
        uStack_cc = auVar3._36_4_;
        uStack_c8 = auVar3._40_4_;
        uStack_c4 = auVar3._44_4_;
        local_c0 = auVar3._48_4_;
        local_bc = auVar3._52_4_;
        local_b8 = auVar3._56_4_;
        local_b4 = auVar3._60_4_;
        uVar14 = local_3c[1];
        uVar13 = local_3c[2];
        *local_40 = *local_3c;
        puVar5[1] = uVar14;
        puVar5[2] = uVar13;
        puVar5[3] = puVar6[3];
        local_bc = -local_bc;
        local_b8 = -local_b8;
        if (iVar7 < 0) {
          iVar11 = *(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1cc) + 0x20) +
                           *(short *)(param_3 + 4) * 4);
          if (iVar11 == 0) {
            uVar9 = 0;
          }
          else {
            uVar9 = *(undefined1 *)(iVar11 + 0xb);
          }
          if (*(int *)(*(int *)(param_2 + 0x8c) + 0x1c) == 0) {
            iVar11 = *(int *)(param_2 + 0x88) + 0x50;
          }
          else {
            iVar11 = *(int *)(*(int *)(*(int *)(param_2 + 0x8c) + 0x1c) + 0x54);
          }
          FUN_089488a8(param_2,uVar9,&local_100,&local_f0,iVar11,local_a0[0],local_a0[1],1);
          pauVar4 = local_a0[2];
          auVar2 = vscl_t(*local_a0[1],param_3[3]);
          uVar13 = vzero_s();
          *(int *)local_a0[2] = auVar2._0_4_;
          *(int *)((int)pauVar4 + 4) = auVar2._4_4_;
          *(int *)((int)pauVar4 + 8) = auVar2._8_4_;
          *(undefined4 *)((int)pauVar4 + 0xc) = uVar13;
          pauVar4 = local_a0[1];
          auVar2 = vscl_t(*local_a0[1],param_3[2]);
          uVar13 = vzero_s();
          *(int *)*local_a0[1] = auVar2._0_4_;
          *(int *)(*pauVar4 + 4) = auVar2._4_4_;
          *(int *)(*pauVar4 + 8) = auVar2._8_4_;
          *(undefined4 *)pauVar4[1] = uVar13;
          iVar11 = 0;
          puVar10 = auStack_130;
          do {
            iVar11 = iVar11 + 1;
            *(float *)(*(int *)(puVar10 + 0x90) + 4) = -*(float *)(*(int *)(puVar10 + 0x90) + 4);
            piVar1 = (int *)(puVar10 + 0x90);
            puVar10 = puVar10 + 4;
            *(float *)(*piVar1 + 8) = -*(float *)(*piVar1 + 8);
          } while (iVar11 < 3);
          iVar11 = FUN_0894c244(0,param_2,(int)*(short *)(param_3 + 4),local_a0 + 3);
          if (iVar11 == 0) {
            return;
          }
        }
        else {
          iVar11 = 0;
          if (0 < iVar7) {
            do {
              iVar8 = FUN_08946a28(param_2,*(undefined4 *)(*(int *)(param_2 + 0x88) + 0x1cc),
                                   *(ushort *)(param_3 + 4) & 0xff,iVar11);
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
              FUN_089488a8(param_2,uVar9,&local_100,&local_f0,iVar8,local_a0[0],local_a0[1],1);
              pauVar4 = local_a0[2];
              auVar2 = vscl_t(*local_a0[1],param_3[3]);
              uVar13 = vzero_s();
              *(int *)local_a0[2] = auVar2._0_4_;
              *(int *)((int)pauVar4 + 4) = auVar2._4_4_;
              *(int *)((int)pauVar4 + 8) = auVar2._8_4_;
              *(undefined4 *)((int)pauVar4 + 0xc) = uVar13;
              pauVar4 = local_a0[1];
              auVar2 = vscl_t(*local_a0[1],param_3[2]);
              uVar13 = vzero_s();
              *(int *)*local_a0[1] = auVar2._0_4_;
              *(int *)(*pauVar4 + 4) = auVar2._4_4_;
              *(int *)(*pauVar4 + 8) = auVar2._8_4_;
              *(undefined4 *)pauVar4[1] = uVar13;
              iVar8 = 0;
              puVar10 = auStack_130;
              do {
                iVar8 = iVar8 + 1;
                *(float *)(*(int *)(puVar10 + 0x90) + 4) = -*(float *)(*(int *)(puVar10 + 0x90) + 4)
                ;
                piVar1 = (int *)(puVar10 + 0x90);
                puVar10 = puVar10 + 4;
                *(float *)(*piVar1 + 8) = -*(float *)(*piVar1 + 8);
              } while (iVar8 < 3);
              FUN_08946a5c(0,param_2,*(undefined4 *)(*(int *)(param_2 + 0x88) + 0x1cc),
                           *(ushort *)(param_3 + 4) & 0xff,iVar11,local_a0 + 3);
              iVar11 = iVar11 + 1;
            } while (iVar11 < iVar7);
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < (int)*param_3);
    }
  }
  return;
}

