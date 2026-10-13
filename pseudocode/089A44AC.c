/* Entry 0x089A44AC | file offset 0x001A1484 | FUN_089a44ac | bytes 84 */

undefined4 * FUN_089a44ac(undefined4 *param_1,undefined1 (*param_2) [12])

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  pauVar1 = (undefined1 (*) [12])(param_2[1] + 4);
  uVar7 = *(undefined4 *)param_2[4];
  uVar8 = *(undefined4 *)(param_2[4] + 4);
  uVar9 = *(undefined4 *)(param_2[4] + 8);
  uVar10 = *(undefined4 *)param_2[5];
  auVar5 = vzero_t();
  auVar3 = vcrsp_t(*param_2,*pauVar1);
  auVar4 = vcrsp_t(*pauVar1,auVar3);
  uVar11 = vdot_t(auVar4,auVar4);
  uVar12 = vdot_t(*pauVar1,*pauVar1);
  uVar13 = vdot_t(auVar3,auVar3);
  auVar2._8_4_ = uVar13;
  auVar2._4_4_ = uVar12;
  auVar2._0_4_ = uVar11;
  auVar6 = vrsq_t(auVar2);
  auVar4 = vscl_t(auVar4,auVar6._0_4_);
  auVar2 = vscl_t(*pauVar1,auVar6._4_4_);
  auVar3 = vscl_t(auVar3,auVar6._8_4_);
  *param_1 = auVar4._0_4_;
  param_1[1] = auVar4._4_4_;
  param_1[2] = auVar4._8_4_;
  param_1[3] = auVar5._0_4_;
  param_1[4] = auVar2._0_4_;
  param_1[5] = auVar2._4_4_;
  param_1[6] = auVar2._8_4_;
  param_1[7] = auVar5._4_4_;
  param_1[8] = auVar3._0_4_;
  param_1[9] = auVar3._4_4_;
  param_1[10] = auVar3._8_4_;
  param_1[0xb] = auVar5._8_4_;
  param_1[0xc] = uVar7;
  param_1[0xd] = uVar8;
  param_1[0xe] = uVar9;
  param_1[0xf] = uVar10;
  return param_1;
}

