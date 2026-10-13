/* Entry 0x0895DA4C | file offset 0x0015AA24 | FUN_0895da4c | bytes 984 */

void FUN_0895da4c(int param_1,int param_2)

{
  byte bVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [64];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [64];
  undefined1 auVar10 [64];
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined1 (*pauVar14) [12];
  int iVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  uint uVar19;
  int local_50;
  int local_4c;
  int local_48;
  int local_44 [5];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined1 auVar9 [64];
  
  local_18 = *(byte *)(param_2 + 0x53) + 1;
  local_1c = DAT_09b6f478;
  local_20 = local_18 * 8;
  local_14 = param_2;
  local_10 = param_1;
  iVar11 = FUN_08971134(*(undefined4 *)(DAT_09b6f478 + 0x18),local_20,&local_50,1);
  local_2c = local_18 << 4;
  if (iVar11 != 0) {
    iVar15 = local_1c + (uint)*(ushort *)(*(int *)(*(int *)(local_1c + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(iVar15 + 0xb4) = *(int *)(iVar15 + 0xb4) + local_50;
  }
  *(int *)(local_10 + 0x34) = iVar11;
  local_24 = DAT_09b6f478;
  iVar11 = FUN_08971134(*(undefined4 *)(DAT_09b6f478 + 0x18),local_20,&local_4c,1);
  if (iVar11 != 0) {
    iVar15 = local_24 + (uint)*(ushort *)(*(int *)(*(int *)(local_24 + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(iVar15 + 0xb4) = *(int *)(iVar15 + 0xb4) + local_4c;
  }
  *(int *)(local_10 + 0x38) = iVar11;
  local_28 = DAT_09b6f478;
  iVar11 = FUN_08971134(*(undefined4 *)(DAT_09b6f478 + 0x18),local_2c,&local_48,1);
  if (iVar11 != 0) {
    iVar15 = local_28 + (uint)*(ushort *)(*(int *)(*(int *)(local_28 + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(iVar15 + 0xb4) = *(int *)(iVar15 + 0xb4) + local_48;
  }
  *(int *)(local_10 + 0x3c) = iVar11;
  local_30 = DAT_09b6f478;
  puVar12 = (undefined4 *)FUN_08971134(*(undefined4 *)(DAT_09b6f478 + 0x18),local_2c,local_44,1);
  if (puVar12 != (undefined4 *)0x0) {
    local_30 = local_30 + (uint)*(ushort *)(*(int *)(*(int *)(local_30 + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(local_30 + 0xb4) = *(int *)(local_30 + 0xb4) + local_44[0];
  }
  *(undefined4 **)(local_10 + 0x40) = puVar12;
  fVar17 = 0.0;
  bVar1 = *(byte *)(local_14 + 0x53);
  uVar16 = *(undefined4 *)(local_14 + 0x44);
  puVar13 = *(undefined4 **)(local_10 + 0x3c);
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar12[2] = 0;
  puVar12[3] = 0x3f800000;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar13[2] = 0;
  puVar13[3] = 0x3f800000;
  iVar11 = *(int *)(local_10 + 0x40);
  for (pauVar14 = (undefined1 (*) [12])(puVar12 + 4);
      pauVar14 != (undefined1 (*) [12])(iVar11 + local_18 * 0x10);
      pauVar14 = (undefined1 (*) [12])((int)pauVar14[1] + 4)) {
    auVar5 = vmidt_q();
    uVar18 = vcst_s(5);
    uVar18 = vmul_s(fVar17 * 0.017453292,uVar18);
    auVar6 = vrot_q(uVar18,1,2,0,0);
    auVar7 = vrot_q(uVar18,3,1,0,0);
    auVar3 = vidt_q();
    auVar4 = vidt_q();
    auVar8._60_4_ = auVar4._12_4_;
    auVar8._56_4_ = auVar3._12_4_;
    auVar8._52_4_ = auVar7._12_4_;
    auVar8._48_4_ = auVar6._12_4_;
    auVar8._44_4_ = auVar4._8_4_;
    auVar8._40_4_ = auVar3._8_4_;
    auVar8._36_4_ = auVar7._8_4_;
    auVar8._32_4_ = auVar6._8_4_;
    auVar8._28_4_ = auVar4._4_4_;
    auVar8._24_4_ = auVar3._4_4_;
    auVar8._20_4_ = auVar7._4_4_;
    auVar8._16_4_ = auVar6._4_4_;
    auVar8._12_4_ = auVar4._0_4_;
    auVar8._8_4_ = auVar3._0_4_;
    auVar8._4_4_ = auVar7._0_4_;
    auVar8._0_4_ = auVar6._0_4_;
    auVar9._60_4_ = auVar5._60_4_;
    auVar9._56_4_ = auVar5._44_4_;
    auVar9._52_4_ = auVar5._28_4_;
    auVar9._48_4_ = auVar5._12_4_;
    auVar9._44_4_ = auVar5._56_4_;
    auVar9._40_4_ = auVar5._40_4_;
    auVar9._36_4_ = auVar5._24_4_;
    auVar9._32_4_ = auVar5._8_4_;
    auVar9._28_4_ = auVar5._52_4_;
    auVar9._24_4_ = auVar5._36_4_;
    auVar9._20_4_ = auVar5._20_4_;
    auVar9._16_4_ = auVar5._4_4_;
    auVar9._12_4_ = auVar5._48_4_;
    auVar9._8_4_ = auVar5._32_4_;
    auVar9._4_4_ = auVar5._16_4_;
    auVar9._0_4_ = auVar5._0_4_;
    auVar5 = vmmul_q(auVar8,auVar9);
    auVar10._4_4_ = auVar5._16_4_;
    auVar10._0_4_ = auVar5._0_4_;
    auVar10._8_4_ = auVar5._32_4_;
    auVar10._12_4_ = auVar5._48_4_;
    auVar10._16_4_ = auVar5._4_4_;
    auVar10._20_4_ = auVar5._20_4_;
    auVar10._24_4_ = auVar5._36_4_;
    auVar10._28_4_ = auVar5._52_4_;
    auVar10._32_4_ = auVar5._8_4_;
    auVar10._36_4_ = auVar5._24_4_;
    auVar10._40_4_ = auVar5._40_4_;
    auVar10._44_4_ = auVar5._56_4_;
    auVar10._48_4_ = auVar5._12_4_;
    auVar10._52_4_ = auVar5._28_4_;
    auVar10._56_4_ = auVar5._44_4_;
    auVar10._60_4_ = auVar5._60_4_;
    uVar19 = vone_s();
    auVar3._4_8_ = (ulonglong)uVar19 << 0x20;
    auVar3._0_4_ = 0xbf000000;
    auVar3._12_4_ = 0;
    auVar3 = vtfm4_q(auVar10,auVar3 << 0x20);
    *(int *)*pauVar14 = auVar3._0_4_;
    *(int *)((int)*pauVar14 + 4) = auVar3._4_4_;
    *(int *)((int)*pauVar14 + 8) = auVar3._8_4_;
    *(int *)pauVar14[1] = auVar3._12_4_;
    *(undefined4 *)((int)*pauVar14 + 8) = 0;
    *(undefined4 *)pauVar14[1] = 0x3f800000;
    auVar2 = vscl_t(*pauVar14,uVar16);
    uVar18 = vzero_s();
    puVar13[4] = auVar2._0_4_;
    puVar13[5] = auVar2._4_4_;
    puVar13[6] = auVar2._8_4_;
    puVar13[7] = uVar18;
    for (fVar17 = fVar17 + 360.0 / (float)bVar1; fVar17 < -180.0; fVar17 = fVar17 + 360.0) {
    }
    for (; 180.0 < fVar17; fVar17 = fVar17 - 360.0) {
    }
    puVar13 = puVar13 + 4;
  }
  return;
}

