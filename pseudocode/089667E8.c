/* Entry 0x089667E8 | file offset 0x001637C0 | FUN_089667e8 | bytes 2628 */

void FUN_089667e8(undefined4 param_1,float *param_2,undefined1 (*param_3) [16],undefined4 *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [36];
  undefined1 auVar4 [64];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [36];
  undefined1 auVar8 [36];
  undefined1 auVar10 [64];
  undefined1 auVar12 [64];
  undefined1 auVar14 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 (*pauVar28) [16];
  float *pfVar29;
  int *piVar30;
  float *pfVar31;
  int iVar32;
  undefined1 *puVar33;
  float *pfVar34;
  float *pfVar35;
  undefined4 *puVar36;
  undefined1 (*pauVar37) [16];
  float fVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  undefined1 (*pauVar42) [64];
  int iVar43;
  float *pfVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  float fVar50;
  float local_1f0 [16];
  undefined1 auStack_1b0 [80];
  undefined1 local_160 [16];
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 local_130 [16];
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined1 local_110 [48];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  float local_c0;
  float local_bc;
  undefined1 (*local_b4) [16];
  undefined1 (*local_94) [16];
  undefined1 (*local_88) [16];
  undefined1 (*local_80) [16];
  float *local_68;
  undefined1 (*local_5c) [16];
  int local_58;
  int *local_54;
  undefined1 *local_50;
  int local_4c;
  undefined4 *local_48;
  float *local_44;
  undefined1 auVar9 [36];
  undefined1 auVar11 [64];
  undefined1 auVar13 [64];
  undefined1 auVar15 [64];
  
  local_68 = local_1f0;
  iVar43 = *(int *)((int)param_2[0x23] +
                    (uint)*(ushort *)
                           (*(int *)((int)param_2[0x24] + 8) +
                           (*(int *)((int)param_2[0x24] + 4) + 2) * 2) + 0x60);
  local_54 = (int *)*param_4;
  pauVar42 = (undefined1 (*) [64])local_110;
  local_44 = param_2;
  FUN_089a0384(9);
  FUN_089a0f84(0,0);
  FUN_089a119c(1);
  FUN_089a03dc(5);
  pfVar31 = local_44;
  pfVar29 = local_68;
  if (*(int *)(param_3[2] + 0xc) < 0) {
    local_4c = -1;
  }
  else if (*(int *)(*(int *)((int)local_44[0x22] + 0x1c8) + 0x38) == 0) {
    local_4c = -1;
  }
  else {
    local_4c = *(int *)(*(int *)(*(int *)(*(int *)((int)local_44[0x22] + 0x1c8) + 0x38) +
                                *(int *)(param_3[2] + 0xc) * 4) + 0x10);
  }
  if (local_4c != -1) {
    pauVar37 = (undefined1 (*) [16])
               ((int)local_44[0x23] +
                (uint)*(ushort *)
                       (*(int *)((int)local_44[0x24] + 8) + *(int *)((int)local_44[0x24] + 4) * 2) +
               0x60);
    auVar1 = vmul_q(*pauVar37,*param_3);
    auVar2 = vscl_q(auVar1,0x3c000000);
    local_150 = auVar2._0_4_;
    uStack_14c = auVar2._4_4_;
    uStack_148 = auVar2._8_4_;
    uStack_144 = auVar2._12_4_;
    auVar1 = vmul_q(*pauVar37,param_3[1]);
    auVar1 = vscl_q(auVar1,0x3c000000);
    local_140 = auVar1._0_4_;
    uStack_13c = auVar1._4_4_;
    uVar49 = auVar1._8_4_;
    uVar48 = auVar1._12_4_;
    auVar1 = vsub_q(auVar1,auVar2);
    auVar1 = vscl_q(auVar1,1.0 / (float)*(int *)(iVar43 + 0x14));
    local_130._0_4_ = auVar1._0_4_;
    local_130._4_4_ = auVar1._4_4_;
    local_130._8_4_ = auVar1._8_4_;
    local_130._12_4_ = auVar1._12_4_;
    local_88 = (undefined1 (*) [16])((int)local_44[0x22] + 0x40);
    fVar46 = *(float *)(param_3[3] + 4) * 0.01;
    fVar47 = ((*(float *)(param_3[3] + 8) - *(float *)(param_3[3] + 4)) /
             (float)*(int *)(iVar43 + 0x14)) * 0.01;
    *(undefined4 *)((int)local_44[0x27] + 0x2c) = 0xffffffff;
    local_120 = 0x3f800000;
    local_11c = 0x3f800000;
    local_118 = 0x3f800000;
    local_114 = 0x3f800000;
    iVar40 = *(int *)(*(int *)((int)local_44[0x23] + 0x48) +
                     (uint)*(ushort *)(*(int *)((int)local_44[0x24] + 8) + 2) * 4);
    uStack_138 = uVar49;
    uStack_134 = uVar48;
    local_b4 = param_3;
    local_94 = &local_130;
    local_80 = &local_160;
    local_50 = auStack_1b0;
    local_48 = &local_120;
    if (*(char *)(iVar40 + 1) == '\0') {
      iVar40 = (**(code **)(*(int *)(iVar43 + 0x20) + 0x1c))
                         (iVar43 + *(short *)(*(int *)(iVar43 + 0x20) + 0x18));
      if (iVar40 == 1) {
        fVar38 = pfVar31[0x23];
        puVar33 = *(undefined1 **)
                   (*(int *)((int)fVar38 + 0x48) +
                   (uint)*(ushort *)(*(int *)((int)pfVar31[0x24] + 8) + 2) * 4);
        FUN_089477b4(0x3f800000,pfVar31,fVar38,*(undefined4 *)((int)fVar38 + 0x50),*puVar33,
                     puVar33[1],puVar33[2],pauVar42);
      }
      else {
        iVar40 = (**(code **)(*(int *)(iVar43 + 0x20) + 0x1c))
                           (iVar43 + *(short *)(*(int *)(iVar43 + 0x20) + 0x18));
        if (iVar40 == 3) {
          fVar38 = pfVar31[0x23];
          puVar33 = *(undefined1 **)
                     (*(int *)((int)fVar38 + 0x48) +
                     (uint)*(ushort *)(*(int *)((int)pfVar31[0x24] + 8) + 2) * 4);
          FUN_08946ac4(0x3f800000,pfVar31,fVar38,*(undefined4 *)((int)fVar38 + 0x50),*puVar33,
                       puVar33[1],puVar33[2],pauVar42);
          local_e0 = 0;
          local_dc = 0;
          local_d8 = 0;
        }
      }
      iVar40 = 0;
      local_58 = iVar43;
      if (0 < *(int *)(iVar43 + 0x14)) {
        pfVar44 = pfVar29 + 0xc;
        pauVar37 = local_b4 + 2;
        iVar41 = 0;
        iVar43 = 0;
        do {
          iVar32 = local_58;
          pauVar28 = local_80;
          auVar24._4_4_ = uStack_14c;
          auVar24._0_4_ = local_150;
          auVar24._8_4_ = uStack_148;
          auVar24._12_4_ = uStack_144;
          vpfxt(0,0,0,0);
          auVar17._8_4_ = uVar48;
          auVar17._4_4_ = uVar49;
          auVar17._0_4_ = 0x437f0000;
          auVar17._12_4_ = 0;
          auVar1 = vmax_q(auVar24,auVar17 << 0x20);
          vpfxt(1,1,1,1);
          auVar18._8_4_ = uVar48;
          auVar18._4_4_ = uVar49;
          auVar18._0_4_ = 0x437f0000;
          auVar18._12_4_ = 0;
          auVar1 = vmin_q(auVar1,auVar18 << 0x20);
          local_150 = auVar1._0_4_;
          uStack_14c = auVar1._4_4_;
          uStack_148 = auVar1._8_4_;
          uStack_144 = auVar1._12_4_;
          uVar23 = *(undefined8 *)(*local_88 + 8);
          uVar22 = *(undefined8 *)(*local_88 + 8);
          auVar1 = vmul_q(*local_88,auVar1);
          *(int *)*local_80 = auVar1._0_4_;
          *(int *)(*pauVar28 + 4) = auVar1._4_4_;
          *(int *)(*pauVar28 + 8) = auVar1._8_4_;
          *(int *)(*pauVar28 + 0xc) = auVar1._12_4_;
          vpfxt(0,0,0,0);
          auVar19._4_8_ = uVar22;
          auVar19._0_4_ = 0x437f0000;
          auVar19._12_4_ = 0;
          auVar1 = vmax_q(*pauVar28,auVar19 << 0x20);
          vpfxt(1,1,1,1);
          auVar20._4_8_ = uVar23;
          auVar20._0_4_ = 0x437f0000;
          auVar20._12_4_ = 0;
          auVar1 = vmin_q(auVar1,auVar20 << 0x20);
          *(int *)*pauVar28 = auVar1._0_4_;
          *(int *)(*pauVar28 + 4) = auVar1._4_4_;
          *(int *)(*pauVar28 + 8) = auVar1._8_4_;
          *(int *)(*pauVar28 + 0xc) = auVar1._12_4_;
          piVar30 = local_54;
          auVar4 = vmidt_q();
          auVar7._24_12_ = auVar4._32_12_;
          auVar7._20_4_ = auVar4._24_4_;
          auVar7._16_4_ = auVar4._20_4_;
          auVar7._12_4_ = auVar4._16_4_;
          auVar7._8_4_ = auVar4._8_4_;
          auVar7._4_4_ = auVar4._4_4_;
          auVar7._0_4_ = auVar4._0_4_;
          auVar3 = vmscl_t(auVar7,*(float *)(*local_54 + iVar41) * fVar46 * 0.1);
          *pfVar29 = auVar3._0_4_;
          pfVar29[1] = auVar3._4_4_;
          pfVar29[2] = auVar3._8_4_;
          pfVar29[3] = auVar4._12_4_;
          pfVar29[4] = auVar3._12_4_;
          pfVar29[5] = auVar3._16_4_;
          pfVar29[6] = auVar3._20_4_;
          pfVar29[7] = auVar4._28_4_;
          pfVar29[8] = auVar3._24_4_;
          pfVar29[9] = auVar3._28_4_;
          pfVar29[10] = auVar3._32_4_;
          pfVar29[0xb] = auVar4._44_4_;
          pfVar29[0xc] = auVar4._48_4_;
          pfVar29[0xd] = auVar4._52_4_;
          pfVar29[0xe] = auVar4._56_4_;
          pfVar29[0xf] = auVar4._60_4_;
          local_c0 = *(float *)(piVar30[1] + iVar41) * 0.017453292;
          uVar49 = vcst_s(5);
          uVar49 = vmul_s(local_c0,uVar49);
          auVar5 = vrot_q(uVar49,1,2,0,0);
          auVar6 = vrot_q(uVar49,3,1,0,0);
          auVar1 = vidt_q();
          auVar2 = vidt_q();
          auVar10._60_4_ = auVar2._12_4_;
          auVar10._56_4_ = auVar1._12_4_;
          auVar10._52_4_ = auVar6._12_4_;
          auVar10._48_4_ = auVar5._12_4_;
          auVar10._44_4_ = auVar2._8_4_;
          auVar10._40_4_ = auVar1._8_4_;
          auVar10._36_4_ = auVar6._8_4_;
          auVar10._32_4_ = auVar5._8_4_;
          auVar10._28_4_ = auVar2._4_4_;
          auVar10._24_4_ = auVar1._4_4_;
          auVar10._20_4_ = auVar6._4_4_;
          auVar10._16_4_ = auVar5._4_4_;
          auVar10._12_4_ = auVar2._0_4_;
          auVar10._8_4_ = auVar1._0_4_;
          auVar10._4_4_ = auVar6._0_4_;
          auVar10._0_4_ = auVar5._0_4_;
          auVar11._60_4_ = pfVar29[0xf];
          auVar11._56_4_ = pfVar29[0xb];
          auVar11._52_4_ = pfVar29[7];
          auVar11._48_4_ = pfVar29[3];
          auVar11._44_4_ = pfVar29[0xe];
          auVar11._40_4_ = pfVar29[10];
          auVar11._36_4_ = pfVar29[6];
          auVar11._32_4_ = pfVar29[2];
          auVar11._28_4_ = pfVar29[0xd];
          auVar11._24_4_ = pfVar29[9];
          auVar11._20_4_ = pfVar29[5];
          auVar11._16_4_ = pfVar29[1];
          auVar11._12_4_ = pfVar29[0xc];
          auVar11._8_4_ = pfVar29[8];
          auVar11._4_4_ = pfVar29[4];
          auVar11._0_4_ = *pfVar29;
          auVar4 = vmmul_q(auVar10,auVar11);
          *pfVar29 = auVar4._0_4_;
          pfVar29[1] = auVar4._16_4_;
          pfVar29[2] = auVar4._32_4_;
          pfVar29[3] = auVar4._48_4_;
          pfVar29[4] = auVar4._4_4_;
          pfVar29[5] = auVar4._20_4_;
          pfVar29[6] = auVar4._36_4_;
          pfVar29[7] = auVar4._52_4_;
          pfVar29[8] = auVar4._8_4_;
          pfVar29[9] = auVar4._24_4_;
          pfVar29[10] = auVar4._40_4_;
          pfVar29[0xb] = auVar4._56_4_;
          pfVar29[0xc] = auVar4._12_4_;
          pfVar29[0xd] = auVar4._28_4_;
          pfVar29[0xe] = auVar4._44_4_;
          pfVar29[0xf] = auVar4._60_4_;
          iVar39 = *(int *)(iVar32 + 0x20);
          iVar32 = (**(code **)(iVar39 + 0x1c))(iVar32 + *(short *)(iVar39 + 0x18));
          if (iVar32 == 3) {
            auVar12._60_4_ = uStack_d4;
            auVar12._56_4_ = local_110._44_4_;
            auVar12._52_4_ = local_110._28_4_;
            auVar12._48_4_ = local_110._12_4_;
            auVar12._44_4_ = local_d8;
            auVar12._40_4_ = local_110._40_4_;
            auVar12._36_4_ = local_110._24_4_;
            auVar12._32_4_ = local_110._8_4_;
            auVar12._28_4_ = local_dc;
            auVar12._24_4_ = local_110._36_4_;
            auVar12._20_4_ = local_110._20_4_;
            auVar12._16_4_ = local_110._4_4_;
            auVar12._12_4_ = local_e0;
            auVar12._8_4_ = local_110._32_4_;
            auVar12._4_4_ = local_110._16_4_;
            auVar12._0_4_ = local_110._0_4_;
            auVar13._60_4_ = pfVar29[0xf];
            auVar13._56_4_ = pfVar29[0xb];
            auVar13._52_4_ = pfVar29[7];
            auVar13._48_4_ = pfVar29[3];
            auVar13._44_4_ = pfVar29[0xe];
            auVar13._40_4_ = pfVar29[10];
            auVar13._36_4_ = pfVar29[6];
            auVar13._32_4_ = pfVar29[2];
            auVar13._28_4_ = pfVar29[0xd];
            auVar13._24_4_ = pfVar29[9];
            auVar13._20_4_ = pfVar29[5];
            auVar13._16_4_ = pfVar29[1];
            auVar13._12_4_ = pfVar29[0xc];
            auVar13._8_4_ = pfVar29[8];
            auVar13._4_4_ = pfVar29[4];
            auVar13._0_4_ = *pfVar29;
            auVar4 = vmmul_q(auVar12,auVar13);
            *pfVar29 = auVar4._0_4_;
            pfVar29[1] = auVar4._16_4_;
            pfVar29[2] = auVar4._32_4_;
            pfVar29[3] = auVar4._48_4_;
            pfVar29[4] = auVar4._4_4_;
            pfVar29[5] = auVar4._20_4_;
            pfVar29[6] = auVar4._36_4_;
            pfVar29[7] = auVar4._52_4_;
            pfVar29[8] = auVar4._8_4_;
            pfVar29[9] = auVar4._24_4_;
            pfVar29[10] = auVar4._40_4_;
            pfVar29[0xb] = auVar4._56_4_;
            pfVar29[0xc] = auVar4._12_4_;
            pfVar29[0xd] = auVar4._28_4_;
            pfVar29[0xe] = auVar4._44_4_;
            pfVar29[0xf] = auVar4._60_4_;
            pfVar34 = (float *)(*(int *)(local_58 + 4) + iVar43);
            fVar38 = pfVar34[1];
            fVar45 = pfVar34[2];
            *pfVar44 = *pfVar34;
            pfVar44[1] = fVar38;
            pfVar44[2] = fVar45;
            pfVar44[3] = pfVar34[3];
          }
          else {
            pfVar34 = (float *)(*(int *)(local_58 + 4) + iVar43);
            fVar38 = pfVar34[1];
            fVar45 = pfVar34[2];
            *pfVar44 = *pfVar34;
            pfVar44[1] = fVar38;
            pfVar44[2] = fVar45;
            pfVar44[3] = pfVar34[3];
            auVar14._60_4_ = uStack_d4;
            auVar14._56_4_ = local_110._44_4_;
            auVar14._52_4_ = local_110._28_4_;
            auVar14._48_4_ = local_110._12_4_;
            auVar14._44_4_ = local_d8;
            auVar14._40_4_ = local_110._40_4_;
            auVar14._36_4_ = local_110._24_4_;
            auVar14._32_4_ = local_110._8_4_;
            auVar14._28_4_ = local_dc;
            auVar14._24_4_ = local_110._36_4_;
            auVar14._20_4_ = local_110._20_4_;
            auVar14._16_4_ = local_110._4_4_;
            auVar14._12_4_ = local_e0;
            auVar14._8_4_ = local_110._32_4_;
            auVar14._4_4_ = local_110._16_4_;
            auVar14._0_4_ = local_110._0_4_;
            auVar15._60_4_ = pfVar29[0xf];
            auVar15._56_4_ = pfVar29[0xb];
            auVar15._52_4_ = pfVar29[7];
            auVar15._48_4_ = pfVar29[3];
            auVar15._44_4_ = pfVar29[0xe];
            auVar15._40_4_ = pfVar29[10];
            auVar15._36_4_ = pfVar29[6];
            auVar15._32_4_ = pfVar29[2];
            auVar15._28_4_ = pfVar29[0xd];
            auVar15._24_4_ = pfVar29[9];
            auVar15._20_4_ = pfVar29[5];
            auVar15._16_4_ = pfVar29[1];
            auVar15._12_4_ = pfVar29[0xc];
            auVar15._8_4_ = pfVar29[8];
            auVar15._4_4_ = pfVar29[4];
            auVar15._0_4_ = *pfVar29;
            auVar4 = vmmul_q(auVar14,auVar15);
            *pfVar29 = auVar4._0_4_;
            pfVar29[1] = auVar4._16_4_;
            pfVar29[2] = auVar4._32_4_;
            pfVar29[3] = auVar4._48_4_;
            pfVar29[4] = auVar4._4_4_;
            pfVar29[5] = auVar4._20_4_;
            pfVar29[6] = auVar4._36_4_;
            pfVar29[7] = auVar4._52_4_;
            pfVar29[8] = auVar4._8_4_;
            pfVar29[9] = auVar4._24_4_;
            pfVar29[10] = auVar4._40_4_;
            pfVar29[0xb] = auVar4._56_4_;
            pfVar29[0xc] = auVar4._12_4_;
            pfVar29[0xd] = auVar4._28_4_;
            pfVar29[0xe] = auVar4._44_4_;
            pfVar29[0xf] = auVar4._60_4_;
          }
          puVar33 = local_50;
          if (local_b4[4][7] != '\0') {
            fVar38 = pfVar31[0x23];
            local_44 = pfVar44;
            FUN_08947b88(0x3dcccccd,pfVar31,fVar38,*(undefined4 *)((int)fVar38 + 0x50),
                         *(undefined1 *)
                          (*(int *)(*(int *)((int)fVar38 + 0x48) +
                                   (uint)*(ushort *)(*(int *)((int)pfVar31[0x24] + 8) + 2) * 4) + 1)
                         ,3,pauVar37,local_48,local_50);
            uVar49 = FUN_0896fd08(pfVar29,puVar33);
            FUN_0896fd88(uVar49);
            pfVar44 = local_44;
          }
          FUN_0896fb5c(pfVar29);
          FUN_08942fb8(pfVar31[0x27],local_4c,local_54[3],local_80);
          fVar46 = fVar47 + fVar46;
          auVar25._4_4_ = uStack_14c;
          auVar25._0_4_ = local_150;
          auVar25._8_4_ = uStack_148;
          auVar25._12_4_ = uStack_144;
          auVar1 = vadd_q(auVar25,*local_94);
          local_150 = auVar1._0_4_;
          uStack_14c = auVar1._4_4_;
          iVar40 = iVar40 + 1;
          iVar41 = iVar41 + 4;
          iVar43 = iVar43 + 0x10;
          uVar49 = uStack_148;
          uVar48 = uStack_144;
          uStack_148 = auVar1._8_4_;
          uStack_144 = auVar1._12_4_;
        } while (iVar40 < *(int *)(local_58 + 0x14));
      }
    }
    else if (*(char *)(iVar40 + 1) == '\x01') {
      iVar40 = (**(code **)(*(int *)(iVar43 + 0x20) + 0x1c))
                         (iVar43 + *(short *)(*(int *)(iVar43 + 0x20) + 0x18));
      if (iVar40 == 1) {
        if (*(int *)((int)pfVar31[0x23] + 0x1c) == 0) {
          pauVar42 = (undefined1 (*) [64])((int)pfVar31[0x22] + 0x50);
        }
        else {
          pauVar42 = *(undefined1 (**) [64])(*(int *)((int)pfVar31[0x23] + 0x1c) + 0x54);
        }
      }
      else {
        auVar4 = vmidt_q();
        uVar49 = auVar4._24_4_;
        uVar48 = auVar4._28_4_;
        local_110._0_4_ = auVar4._0_4_;
        local_110._4_4_ = auVar4._4_4_;
        local_110._8_4_ = auVar4._8_4_;
        local_110._12_4_ = auVar4._12_4_;
        local_110._16_4_ = auVar4._16_4_;
        local_110._20_4_ = auVar4._20_4_;
        local_110._24_4_ = uVar49;
        local_110._28_4_ = uVar48;
        local_110._32_4_ = auVar4._32_4_;
        local_110._36_4_ = auVar4._36_4_;
        local_110._40_4_ = auVar4._40_4_;
        local_110._44_4_ = auVar4._44_4_;
        local_e0 = auVar4._48_4_;
        local_dc = auVar4._52_4_;
        local_d8 = auVar4._56_4_;
        uStack_d4 = auVar4._60_4_;
      }
      local_58 = iVar43;
      iVar40 = 0;
      if (0 < *(int *)(iVar43 + 0x14)) {
        local_5c = local_b4 + 2;
        pfVar34 = pfVar29 + 0xc;
        iVar43 = 0;
        iVar41 = 0;
        pfVar44 = (float *)0x89e0000;
        do {
          iVar32 = local_58;
          pauVar37 = local_80;
          auVar26._4_4_ = uStack_14c;
          auVar26._0_4_ = local_150;
          auVar26._8_4_ = uStack_148;
          auVar26._12_4_ = uStack_144;
          vpfxt(0,0,0,0);
          auVar2._8_4_ = uVar48;
          auVar2._4_4_ = uVar49;
          auVar2._0_4_ = 0x437f0000;
          auVar2._12_4_ = 0;
          auVar1 = vmax_q(auVar26,auVar2 << 0x20);
          vpfxt(1,1,1,1);
          auVar5._8_4_ = uVar48;
          auVar5._4_4_ = uVar49;
          auVar5._0_4_ = 0x437f0000;
          auVar5._12_4_ = 0;
          auVar1 = vmin_q(auVar1,auVar5 << 0x20);
          local_150 = auVar1._0_4_;
          uStack_14c = auVar1._4_4_;
          uStack_148 = auVar1._8_4_;
          uStack_144 = auVar1._12_4_;
          uVar23 = *(undefined8 *)(*local_88 + 8);
          uVar22 = *(undefined8 *)(*local_88 + 8);
          auVar1 = vmul_q(*local_88,auVar1);
          *(int *)*local_80 = auVar1._0_4_;
          *(int *)(*pauVar37 + 4) = auVar1._4_4_;
          *(int *)(*pauVar37 + 8) = auVar1._8_4_;
          *(int *)(*pauVar37 + 0xc) = auVar1._12_4_;
          vpfxt(0,0,0,0);
          auVar6._4_8_ = uVar22;
          auVar6._0_4_ = 0x437f0000;
          auVar6._12_4_ = 0;
          auVar1 = vmax_q(*pauVar37,auVar6 << 0x20);
          vpfxt(1,1,1,1);
          auVar21._4_8_ = uVar23;
          auVar21._0_4_ = 0x437f0000;
          auVar21._12_4_ = 0;
          auVar1 = vmin_q(auVar1,auVar21 << 0x20);
          *(int *)*pauVar37 = auVar1._0_4_;
          *(int *)(*pauVar37 + 4) = auVar1._4_4_;
          *(int *)(*pauVar37 + 8) = auVar1._8_4_;
          *(int *)(*pauVar37 + 0xc) = auVar1._12_4_;
          piVar30 = local_54;
          auVar4 = vmidt_q();
          auVar3._24_12_ = auVar4._32_12_;
          auVar3._20_4_ = auVar4._24_4_;
          auVar3._16_4_ = auVar4._20_4_;
          auVar3._12_4_ = auVar4._16_4_;
          auVar3._8_4_ = auVar4._8_4_;
          auVar3._4_4_ = auVar4._4_4_;
          auVar3._0_4_ = auVar4._0_4_;
          auVar3 = vmscl_t(auVar3,*(float *)(*local_54 + iVar43) * fVar46 * 0.1);
          *pfVar29 = auVar3._0_4_;
          pfVar29[1] = auVar3._4_4_;
          pfVar29[2] = auVar3._8_4_;
          pfVar29[3] = auVar4._12_4_;
          pfVar29[4] = auVar3._12_4_;
          pfVar29[5] = auVar3._16_4_;
          pfVar29[6] = auVar3._20_4_;
          pfVar29[7] = auVar4._28_4_;
          pfVar29[8] = auVar3._24_4_;
          pfVar29[9] = auVar3._28_4_;
          pfVar29[10] = auVar3._32_4_;
          pfVar29[0xb] = auVar4._44_4_;
          pfVar29[0xc] = auVar4._48_4_;
          pfVar29[0xd] = auVar4._52_4_;
          pfVar29[0xe] = auVar4._56_4_;
          pfVar29[0xf] = auVar4._60_4_;
          *pfVar29 = *pfVar29 * *(float *)((int)pfVar31[0x22] + 0x30);
          pfVar29[5] = pfVar29[5] * *(float *)((int)pfVar31[0x22] + 0x34);
          pfVar29[10] = pfVar29[10] * *(float *)((int)pfVar31[0x22] + 0x38);
          local_bc = *(float *)(piVar30[1] + iVar43) * 0.017453292;
          uVar49 = vcst_s(5);
          uVar49 = vmul_s(local_bc,uVar49);
          auVar5 = vrot_q(uVar49,1,2,0,0);
          auVar6 = vrot_q(uVar49,3,1,0,0);
          auVar1 = vidt_q();
          auVar2 = vidt_q();
          auVar4._60_4_ = auVar2._12_4_;
          auVar4._56_4_ = auVar1._12_4_;
          auVar4._52_4_ = auVar6._12_4_;
          auVar4._48_4_ = auVar5._12_4_;
          auVar4._44_4_ = auVar2._8_4_;
          auVar4._40_4_ = auVar1._8_4_;
          auVar4._36_4_ = auVar6._8_4_;
          auVar4._32_4_ = auVar5._8_4_;
          auVar4._28_4_ = auVar2._4_4_;
          auVar4._24_4_ = auVar1._4_4_;
          auVar4._20_4_ = auVar6._4_4_;
          auVar4._16_4_ = auVar5._4_4_;
          auVar4._12_4_ = auVar2._0_4_;
          auVar4._8_4_ = auVar1._0_4_;
          auVar4._4_4_ = auVar6._0_4_;
          auVar4._0_4_ = auVar5._0_4_;
          auVar16._60_4_ = pfVar29[0xf];
          auVar16._56_4_ = pfVar29[0xb];
          auVar16._52_4_ = pfVar29[7];
          auVar16._48_4_ = pfVar29[3];
          auVar16._44_4_ = pfVar29[0xe];
          auVar16._40_4_ = pfVar29[10];
          auVar16._36_4_ = pfVar29[6];
          auVar16._32_4_ = pfVar29[2];
          auVar16._28_4_ = pfVar29[0xd];
          auVar16._24_4_ = pfVar29[9];
          auVar16._20_4_ = pfVar29[5];
          auVar16._16_4_ = pfVar29[1];
          auVar16._12_4_ = pfVar29[0xc];
          auVar16._8_4_ = pfVar29[8];
          auVar16._4_4_ = pfVar29[4];
          auVar16._0_4_ = *pfVar29;
          auVar4 = vmmul_q(auVar4,auVar16);
          *pfVar29 = auVar4._0_4_;
          pfVar29[1] = auVar4._16_4_;
          pfVar29[2] = auVar4._32_4_;
          pfVar29[3] = auVar4._48_4_;
          pfVar29[4] = auVar4._4_4_;
          pfVar29[5] = auVar4._20_4_;
          pfVar29[6] = auVar4._36_4_;
          pfVar29[7] = auVar4._52_4_;
          pfVar29[8] = auVar4._8_4_;
          pfVar29[9] = auVar4._24_4_;
          pfVar29[10] = auVar4._40_4_;
          pfVar29[0xb] = auVar4._56_4_;
          pfVar29[0xc] = auVar4._12_4_;
          pfVar29[0xd] = auVar4._28_4_;
          pfVar29[0xe] = auVar4._44_4_;
          pfVar29[0xf] = auVar4._60_4_;
          pfVar35 = (float *)(*(int *)(iVar32 + 4) + iVar41);
          fVar38 = pfVar35[1];
          fVar45 = pfVar35[2];
          *pfVar34 = *pfVar35;
          pfVar29[0xd] = fVar38;
          pfVar29[0xe] = fVar45;
          pfVar29[0xf] = pfVar35[3];
          uVar49 = vone_s();
          auVar1._12_4_ = uVar49;
          auVar1._8_4_ = pfVar29[0xe];
          auVar1._4_4_ = pfVar29[0xd];
          auVar1._0_4_ = *pfVar34;
          auVar1 = vtfm4_q(*pauVar42,auVar1);
          *pfVar34 = auVar1._0_4_;
          pfVar29[0xd] = auVar1._4_4_;
          pfVar29[0xe] = auVar1._8_4_;
          pfVar29[0xf] = auVar1._12_4_;
          puVar36 = (undefined4 *)pfVar44[-0x1761];
          auVar8._32_4_ = puVar36[10];
          auVar8._28_4_ = puVar36[6];
          auVar8._24_4_ = puVar36[2];
          auVar8._20_4_ = puVar36[9];
          auVar8._16_4_ = puVar36[5];
          auVar8._12_4_ = puVar36[1];
          auVar8._8_4_ = puVar36[8];
          auVar8._4_4_ = puVar36[4];
          auVar8._0_4_ = *puVar36;
          auVar9._32_4_ = pfVar29[10];
          auVar9._28_4_ = pfVar29[6];
          auVar9._24_4_ = pfVar29[2];
          auVar9._20_4_ = pfVar29[9];
          auVar9._16_4_ = pfVar29[5];
          auVar9._12_4_ = pfVar29[1];
          auVar9._8_4_ = pfVar29[8];
          auVar9._4_4_ = pfVar29[4];
          auVar9._0_4_ = *pfVar29;
          auVar3 = vmmul_t(auVar8,auVar9);
          fVar38 = (float)vzero_s();
          fVar45 = (float)vzero_s();
          fVar50 = (float)vzero_s();
          *pfVar29 = auVar3._0_4_;
          pfVar29[1] = auVar3._12_4_;
          pfVar29[2] = auVar3._24_4_;
          pfVar29[3] = fVar38;
          pfVar29[4] = auVar3._4_4_;
          pfVar29[5] = auVar3._16_4_;
          pfVar29[6] = auVar3._28_4_;
          pfVar29[7] = fVar45;
          pfVar29[8] = auVar3._8_4_;
          pfVar29[9] = auVar3._20_4_;
          pfVar29[10] = auVar3._32_4_;
          pfVar29[0xb] = fVar50;
          pfVar29[0xc] = pfVar29[0xc];
          pfVar29[0xd] = pfVar29[0xd];
          pfVar29[0xe] = pfVar29[0xe];
          pfVar29[0xf] = pfVar29[0xf];
          puVar33 = local_50;
          if (local_b4[4][7] != '\0') {
            fVar38 = pfVar31[0x23];
            local_44 = pfVar44;
            FUN_08947b88(0x3dcccccd,pfVar31,fVar38,*(undefined4 *)((int)fVar38 + 0x50),
                         *(undefined1 *)
                          (*(int *)(*(int *)((int)fVar38 + 0x48) +
                                   (uint)*(ushort *)(*(int *)((int)pfVar31[0x24] + 8) + 2) * 4) + 1)
                         ,3,local_5c,local_48,local_50);
            uVar49 = FUN_0896fd08(pfVar29,puVar33);
            FUN_0896fd88(uVar49);
            pfVar44 = local_44;
          }
          FUN_0896fb5c(pfVar29);
          FUN_08942fb8(pfVar31[0x27],local_4c,local_54[3],local_80);
          fVar46 = fVar47 + fVar46;
          auVar27._4_4_ = uStack_14c;
          auVar27._0_4_ = local_150;
          auVar27._8_4_ = uStack_148;
          auVar27._12_4_ = uStack_144;
          auVar1 = vadd_q(auVar27,*local_94);
          local_150 = auVar1._0_4_;
          uStack_14c = auVar1._4_4_;
          iVar40 = iVar40 + 1;
          iVar43 = iVar43 + 4;
          iVar41 = iVar41 + 0x10;
          uVar49 = uStack_148;
          uVar48 = uStack_144;
          uStack_148 = auVar1._8_4_;
          uStack_144 = auVar1._12_4_;
        } while (iVar40 < *(int *)(local_58 + 0x14));
      }
    }
    if (local_b4[4][7] != '\0') {
      FUN_0896fe50();
    }
  }
  return;
}

