/* Entry 0x08946D88 | file offset 0x00143D60 | FUN_08946d88 | bytes 512 */

void FUN_08946d88(undefined4 param_1,undefined4 param_2,int param_3,undefined1 (*param_4) [12],
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [36];
  undefined1 auVar5 [64];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [36];
  undefined1 auVar13 [64];
  undefined4 *puVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  uVar7 = *(undefined4 *)param_4[1];
  uVar8 = *(undefined4 *)(param_4[2] + 4);
  uVar9 = *(undefined4 *)(param_4[3] + 8);
  uVar16 = *(undefined4 *)param_4[4];
  uVar17 = *(undefined4 *)(param_4[4] + 4);
  uVar18 = *(undefined4 *)(param_4[4] + 8);
  uVar10 = *(undefined4 *)param_4[5];
  auVar1 = vscl_t(*param_4,param_1);
  auVar2 = vscl_t(*(undefined1 (*) [12])(param_4[1] + 4),param_1);
  auVar3 = vscl_t(*(undefined1 (*) [12])(param_4[2] + 8),param_1);
  *param_8 = auVar1._0_4_;
  param_8[1] = auVar1._4_4_;
  param_8[2] = auVar1._8_4_;
  param_8[3] = uVar7;
  param_8[4] = auVar2._0_4_;
  param_8[5] = auVar2._4_4_;
  param_8[6] = auVar2._8_4_;
  param_8[7] = uVar8;
  param_8[8] = auVar3._0_4_;
  param_8[9] = auVar3._4_4_;
  param_8[10] = auVar3._8_4_;
  param_8[0xb] = uVar9;
  param_8[0xc] = uVar16;
  param_8[0xd] = uVar17;
  param_8[0xe] = uVar18;
  param_8[0xf] = uVar10;
  switch(param_5) {
  case 0:
    iVar15 = *(int *)(param_3 + 0x18);
    if ((iVar15 != 0) && (*(int *)(iVar15 + 0x50) != 0)) {
      uVar16 = vone_s();
      auVar11._12_4_ = uVar16;
      auVar11._8_4_ = param_8[0xe];
      auVar11._4_4_ = param_8[0xd];
      auVar11._0_4_ = param_8[0xc];
      auVar6 = vtfm4_q(**(undefined1 (**) [64])(iVar15 + 0x50),auVar11);
      param_8[0xc] = auVar6._0_4_;
      param_8[0xd] = auVar6._4_4_;
      param_8[0xe] = auVar6._8_4_;
      param_8[0xf] = auVar6._12_4_;
    }
    break;
  case 1:
    break;
  case 2:
  case 6:
  case 7:
  case 8:
  case 9:
    break;
  case 3:
    iVar15 = *(int *)(param_3 + 0x18);
    if ((iVar15 != 0) && (*(int *)(iVar15 + 0x50) != 0)) {
      puVar14 = *(undefined4 **)(iVar15 + 0x50);
      auVar5._60_4_ = puVar14[0xf];
      auVar5._56_4_ = puVar14[0xb];
      auVar5._52_4_ = puVar14[7];
      auVar5._48_4_ = puVar14[3];
      auVar5._44_4_ = puVar14[0xe];
      auVar5._40_4_ = puVar14[10];
      auVar5._36_4_ = puVar14[6];
      auVar5._32_4_ = puVar14[2];
      auVar5._28_4_ = puVar14[0xd];
      auVar5._24_4_ = puVar14[9];
      auVar5._20_4_ = puVar14[5];
      auVar5._16_4_ = puVar14[1];
      auVar5._12_4_ = puVar14[0xc];
      auVar5._8_4_ = puVar14[8];
      auVar5._4_4_ = puVar14[4];
      auVar5._0_4_ = *puVar14;
      auVar13._60_4_ = param_8[0xf];
      auVar13._56_4_ = param_8[0xb];
      auVar13._52_4_ = param_8[7];
      auVar13._48_4_ = param_8[3];
      auVar13._44_4_ = param_8[0xe];
      auVar13._40_4_ = param_8[10];
      auVar13._36_4_ = param_8[6];
      auVar13._32_4_ = param_8[2];
      auVar13._28_4_ = param_8[0xd];
      auVar13._24_4_ = param_8[9];
      auVar13._20_4_ = param_8[5];
      auVar13._16_4_ = param_8[1];
      auVar13._12_4_ = param_8[0xc];
      auVar13._8_4_ = param_8[8];
      auVar13._4_4_ = param_8[4];
      auVar13._0_4_ = *param_8;
      auVar5 = vmmul_q(auVar5,auVar13);
      *param_8 = auVar5._0_4_;
      param_8[1] = auVar5._16_4_;
      param_8[2] = auVar5._32_4_;
      param_8[3] = auVar5._48_4_;
      param_8[4] = auVar5._4_4_;
      param_8[5] = auVar5._20_4_;
      param_8[6] = auVar5._36_4_;
      param_8[7] = auVar5._52_4_;
      param_8[8] = auVar5._8_4_;
      param_8[9] = auVar5._24_4_;
      param_8[10] = auVar5._40_4_;
      param_8[0xb] = auVar5._56_4_;
      param_8[0xc] = auVar5._12_4_;
      param_8[0xd] = auVar5._28_4_;
      param_8[0xe] = auVar5._44_4_;
      param_8[0xf] = auVar5._60_4_;
    }
    break;
  case 4:
    iVar15 = *(int *)(param_3 + 0x18);
    if ((iVar15 != 0) && (*(int *)(iVar15 + 0x50) != 0)) {
      FUN_08946d04(&local_70,*(undefined4 *)(iVar15 + 0x50));
      auVar4._32_4_ = uStack_48;
      auVar4._28_4_ = uStack_58;
      auVar4._24_4_ = uStack_68;
      auVar4._20_4_ = uStack_4c;
      auVar4._16_4_ = uStack_5c;
      auVar4._12_4_ = uStack_6c;
      auVar4._8_4_ = local_50;
      auVar4._4_4_ = local_60;
      auVar4._0_4_ = local_70;
      auVar12._32_4_ = param_8[10];
      auVar12._28_4_ = param_8[6];
      auVar12._24_4_ = param_8[2];
      auVar12._20_4_ = param_8[9];
      auVar12._16_4_ = param_8[5];
      auVar12._12_4_ = param_8[1];
      auVar12._8_4_ = param_8[8];
      auVar12._4_4_ = param_8[4];
      auVar12._0_4_ = *param_8;
      auVar4 = vmmul_t(auVar4,auVar12);
      uVar16 = vzero_s();
      uVar17 = vzero_s();
      uVar18 = vzero_s();
      *param_8 = auVar4._0_4_;
      param_8[1] = auVar4._12_4_;
      param_8[2] = auVar4._24_4_;
      param_8[3] = uVar16;
      param_8[4] = auVar4._4_4_;
      param_8[5] = auVar4._16_4_;
      param_8[6] = auVar4._28_4_;
      param_8[7] = uVar17;
      param_8[8] = auVar4._8_4_;
      param_8[9] = auVar4._20_4_;
      param_8[10] = auVar4._32_4_;
      param_8[0xb] = uVar18;
      param_8[0xc] = param_8[0xc];
      param_8[0xd] = param_8[0xd];
      param_8[0xe] = param_8[0xe];
      param_8[0xf] = param_8[0xf];
      uVar16 = vone_s();
      auVar6._12_4_ = uVar16;
      auVar6._8_4_ = param_8[0xe];
      auVar6._4_4_ = param_8[0xd];
      auVar6._0_4_ = param_8[0xc];
      auVar6 = vtfm4_q(**(undefined1 (**) [64])(iVar15 + 0x50),auVar6);
      param_8[0xc] = auVar6._0_4_;
      param_8[0xd] = auVar6._4_4_;
      param_8[0xe] = auVar6._8_4_;
      param_8[0xf] = auVar6._12_4_;
    }
  }
  return;
}

