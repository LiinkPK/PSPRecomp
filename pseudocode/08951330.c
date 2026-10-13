/* Entry 0x08951330 | file offset 0x0014E308 | FUN_08951330 | bytes 1180 */

void FUN_08951330(undefined4 param_1,int param_2,undefined1 *param_3)

{
  ushort uVar1;
  undefined1 auVar2 [36];
  undefined1 auVar3 [64];
  undefined1 auVar4 [36];
  undefined1 auVar5 [36];
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined1 auVar6 [36];
  
  iVar9 = *(int *)(param_2 + 0x8c);
  puVar14 = *(undefined4 **)(iVar9 + 0x50);
  iVar10 = *(int *)(*(int *)(param_2 + 0x90) + 8);
  iVar11 = *(int *)(*(int *)(param_2 + 0x90) + 4);
  iVar7 = iVar9 + (uint)*(ushort *)(iVar10 + iVar11 * 2);
  iVar13 = iVar9 + (uint)*(ushort *)(iVar10 + (iVar11 + 1) * 2);
  iVar9 = iVar9 + (uint)*(ushort *)(iVar10 + (iVar11 + 2) * 2);
  puVar15 = (undefined4 *)(iVar9 + 0x60);
  local_60 = *(undefined4 *)(iVar13 + 0x60);
  local_5c = *(undefined4 *)(iVar13 + 100);
  local_58 = *(undefined4 *)(iVar13 + 0x68);
  local_54 = *(undefined4 *)(iVar13 + 0x6c);
  local_50 = *(undefined4 *)(iVar7 + 0x60);
  local_44 = *(undefined4 *)(iVar7 + 0x6c);
  local_40 = *puVar15;
  local_34 = *(undefined4 *)(iVar9 + 0x6c);
  local_4c = -*(float *)(iVar7 + 100);
  local_48 = -*(float *)(iVar7 + 0x68);
  local_3c = -*(float *)(iVar9 + 100);
  local_38 = -*(float *)(iVar9 + 0x68);
  auVar3 = vmidt_q();
  uVar17 = vmul_s(auVar3._0_4_,local_60);
  uVar18 = vmul_s(auVar3._20_4_,local_5c);
  uVar19 = vmul_s(auVar3._40_4_,local_58);
  *puVar14 = uVar17;
  puVar14[1] = auVar3._4_4_;
  puVar14[2] = auVar3._8_4_;
  puVar14[3] = auVar3._12_4_;
  puVar14[4] = auVar3._16_4_;
  puVar14[5] = uVar18;
  puVar14[6] = auVar3._24_4_;
  puVar14[7] = auVar3._28_4_;
  puVar14[8] = auVar3._32_4_;
  puVar14[9] = auVar3._36_4_;
  puVar14[10] = uVar19;
  puVar14[0xb] = auVar3._44_4_;
  puVar14[0xc] = auVar3._48_4_;
  puVar14[0xd] = auVar3._52_4_;
  puVar14[0xe] = auVar3._56_4_;
  puVar14[0xf] = auVar3._60_4_;
  if (param_3[2] == '\x01') {
    iVar9 = *(int *)(param_2 + 0x8c);
    uVar12 = (uint)**(ushort **)(*(int *)(param_2 + 0x90) + 8);
    uVar1 = **(ushort **)(*(int *)(*(int *)(iVar9 + 0x40) + 0x1c) + uVar12 * 4);
    if (uVar1 < 2) {
      if (uVar1 == 0) goto LAB_08951714;
    }
    else if (uVar1 < 3) {
      if (((*(float *)(iVar7 + 0x80) != 0.0) || (*(float *)(iVar7 + 0x84) != 0.0)) ||
         (*(float *)(iVar7 + 0x88) != 0.0)) {
        FUN_089511a8(&local_a0,&local_50,iVar7 + 0x80);
        FUN_08950c58(puVar14,puVar14,puVar15,&local_50,param_3[3]);
        auVar2._32_4_ = uStack_78;
        auVar2._28_4_ = local_88;
        auVar2._24_4_ = uStack_98;
        auVar2._20_4_ = uStack_7c;
        auVar2._16_4_ = local_8c;
        auVar2._12_4_ = uStack_9c;
        auVar2._8_4_ = local_80;
        auVar2._4_4_ = local_90;
        auVar2._0_4_ = local_a0;
        auVar4._32_4_ = puVar14[10];
        auVar4._28_4_ = puVar14[6];
        auVar4._24_4_ = puVar14[2];
        auVar4._20_4_ = puVar14[9];
        auVar4._16_4_ = puVar14[5];
        auVar4._12_4_ = puVar14[1];
        auVar4._8_4_ = puVar14[8];
        auVar4._4_4_ = puVar14[4];
        auVar4._0_4_ = *puVar14;
        auVar2 = vmmul_t(auVar2,auVar4);
        uVar17 = vzero_s();
        uVar18 = vzero_s();
        uVar19 = vzero_s();
        *puVar14 = auVar2._0_4_;
        puVar14[1] = auVar2._12_4_;
        puVar14[2] = auVar2._24_4_;
        puVar14[3] = uVar17;
        puVar14[4] = auVar2._4_4_;
        puVar14[5] = auVar2._16_4_;
        puVar14[6] = auVar2._28_4_;
        puVar14[7] = uVar18;
        puVar14[8] = auVar2._8_4_;
        puVar14[9] = auVar2._20_4_;
        puVar14[10] = auVar2._32_4_;
        puVar14[0xb] = uVar19;
        puVar14[0xc] = puVar14[0xc];
        puVar14[0xd] = puVar14[0xd];
        puVar14[0xe] = puVar14[0xe];
        puVar14[0xf] = puVar14[0xf];
        goto LAB_08951714;
      }
    }
    else {
      if (3 < uVar1) goto LAB_08951714;
      iVar10 = *(int *)(*(int *)(iVar9 + 0x4c) + uVar12 * 4);
      if (iVar10 == 0) {
        fVar16 = 0.0;
      }
      else {
        fVar16 = *(float *)(iVar9 + 0x30) - (float)(int)*(short *)(iVar10 + 4);
      }
      local_90 = *(float *)(iVar7 + 0x80) + *(float *)(iVar7 + 0x90) * fVar16;
      local_8c = *(float *)(iVar7 + 0x84) + *(float *)(iVar7 + 0x94) * fVar16;
      local_88 = *(float *)(iVar7 + 0x88) + *(float *)(iVar7 + 0x98) * fVar16;
      if (((local_90 != 0.0) || (local_8c != 0.0)) || (local_88 != 0.0)) {
        FUN_089511a8(&local_a0,&local_50);
        FUN_08950c58(puVar14,puVar14,puVar15,&local_50,param_3[3]);
        auVar5._32_4_ = uStack_78;
        auVar5._28_4_ = local_88;
        auVar5._24_4_ = uStack_98;
        auVar5._20_4_ = uStack_7c;
        auVar5._16_4_ = local_8c;
        auVar5._12_4_ = uStack_9c;
        auVar5._8_4_ = local_80;
        auVar5._4_4_ = local_90;
        auVar5._0_4_ = local_a0;
        auVar6._32_4_ = puVar14[10];
        auVar6._28_4_ = puVar14[6];
        auVar6._24_4_ = puVar14[2];
        auVar6._20_4_ = puVar14[9];
        auVar6._16_4_ = puVar14[5];
        auVar6._12_4_ = puVar14[1];
        auVar6._8_4_ = puVar14[8];
        auVar6._4_4_ = puVar14[4];
        auVar6._0_4_ = *puVar14;
        auVar2 = vmmul_t(auVar5,auVar6);
        uVar17 = vzero_s();
        uVar18 = vzero_s();
        uVar19 = vzero_s();
        *puVar14 = auVar2._0_4_;
        puVar14[1] = auVar2._12_4_;
        puVar14[2] = auVar2._24_4_;
        puVar14[3] = uVar17;
        puVar14[4] = auVar2._4_4_;
        puVar14[5] = auVar2._16_4_;
        puVar14[6] = auVar2._28_4_;
        puVar14[7] = uVar18;
        puVar14[8] = auVar2._8_4_;
        puVar14[9] = auVar2._20_4_;
        puVar14[10] = auVar2._32_4_;
        puVar14[0xb] = uVar19;
        puVar14[0xc] = puVar14[0xc];
        puVar14[0xd] = puVar14[0xd];
        puVar14[0xe] = puVar14[0xe];
        puVar14[0xf] = puVar14[0xf];
        goto LAB_08951714;
      }
    }
  }
  FUN_08950c58(puVar14,puVar14,&local_40,&local_50,param_3[3]);
LAB_08951714:
  puVar8 = param_3;
  if ((int)param_3 < 0x1000) {
    puVar8 = *(undefined1 **)
              (*(int *)(*(int *)(param_2 + 0x8c) + 0x48) +
              (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x90) + 8) + (int)param_3 * 2) * 4);
  }
  FUN_08946d88(0x3f800000,param_2,*(undefined4 *)(param_2 + 0x8c),puVar14,*puVar8,puVar8[1],
               puVar8[2],puVar14);
  if ((*(short *)(*(int *)(param_2 + 0x88) + 0xe) == 0) &&
     (*(int *)(*(int *)(param_2 + 0x8c) + 0x3c) != 0)) {
    FUN_08970568(*(undefined4 *)(*(int *)(param_2 + 0x8c) + 0x3c),param_2,param_3[4],param_3[5],
                 puVar14 + 0xc);
  }
  return;
}

