/* Entry 0x0898EB40 | file offset 0x0018BB18 | FUN_0898eb40 | bytes 124 */

void FUN_0898eb40(undefined4 param_1,undefined1 (*param_2) [64],short param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar3 = vone_s();
  auVar1._12_4_ = uVar3;
  auVar1._8_4_ = DAT_089da358;
  auVar1._4_4_ = DAT_089da354;
  auVar1._0_4_ = DAT_089da350;
  auVar1 = vtfm4_q(*param_2,auVar1);
  local_30 = auVar1._0_4_;
  uStack_2c = auVar1._4_4_;
  uStack_28 = auVar1._8_4_;
  uStack_24 = auVar1._12_4_;
  uVar3 = vone_s();
  auVar2._12_4_ = uVar3;
  auVar2._8_4_ = param_5[2];
  auVar2._4_4_ = param_5[1];
  auVar2._0_4_ = *param_5;
  auVar1 = vtfm4_q(*param_2,auVar2);
  local_20 = auVar1._0_4_;
  uStack_1c = auVar1._4_4_;
  uStack_18 = auVar1._8_4_;
  uStack_14 = auVar1._12_4_;
  FUN_0898ecc8(param_1,&local_20,&local_30,(int)param_3,param_4);
  return;
}

