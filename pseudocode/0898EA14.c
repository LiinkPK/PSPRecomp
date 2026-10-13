/* Entry 0x0898EA14 | file offset 0x0018B9EC | FUN_0898ea14 | bytes 300 */

void FUN_0898ea14(float param_1,float param_2,int param_3,undefined1 (*param_4) [64],short param_5,
                 undefined4 param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  undefined4 uStack_44;
  
  uVar6 = vone_s();
  auVar1._12_4_ = uVar6;
  auVar1._8_4_ = DAT_089da358;
  auVar1._4_4_ = DAT_089da354;
  auVar1._0_4_ = DAT_089da350;
  auVar1 = vtfm4_q(*param_4,auVar1);
  local_60 = auVar1._0_4_;
  uStack_5c = auVar1._4_4_;
  uStack_58 = auVar1._8_4_;
  uStack_54 = auVar1._12_4_;
  iVar5 = 0;
  if (0 < *(int *)(param_3 + 0x28)) {
    iVar4 = 0;
    do {
      puVar3 = (undefined4 *)(*(int *)(param_3 + 0x24) + iVar4);
      uVar6 = vone_s();
      auVar2._12_4_ = uVar6;
      auVar2._8_4_ = puVar3[2];
      auVar2._4_4_ = puVar3[1];
      auVar2._0_4_ = *puVar3;
      auVar1 = vtfm4_q(*param_4,auVar2);
      local_50 = auVar1._0_4_;
      uStack_44 = auVar1._12_4_;
      local_4c = -auVar1._4_4_;
      local_48 = -auVar1._8_4_;
      FUN_0898ecc8(-param_1,-param_2,param_3,&local_50,&local_60,(int)param_5,param_6);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar5 < *(int *)(param_3 + 0x28));
  }
  return;
}

