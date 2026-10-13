/* Entry 0x088E6C08 | file offset 0x000E3BE0 | FUN_088e6c08 | bytes 328 */

void FUN_088e6c08(undefined1 (*param_1) [12],int param_2)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  undefined1 auVar3 [12];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_54 = *(undefined4 *)param_1[1];
  pauVar1 = (undefined1 (*) [12])(param_1[1] + 4);
  local_44 = *(undefined4 *)(param_1[2] + 4);
  pauVar2 = (undefined1 (*) [12])(param_1[2] + 8);
  local_34 = *(undefined4 *)(param_1[3] + 8);
  local_30 = *(undefined4 *)param_1[4];
  local_2c = *(undefined4 *)(param_1[4] + 4);
  local_28 = *(undefined4 *)(param_1[4] + 8);
  local_24 = *(undefined4 *)param_1[5];
  uVar4 = vdot_t(*param_1,*param_1);
  uVar5 = vzero_s();
  uVar6 = vcmp_s(8,uVar4,*(undefined4 *)*param_1);
  local_20 = vsqrt_s(uVar4);
  vrcp_s(local_20);
  uVar4 = vcmovt_s(uVar5,(byte)uVar6 & 1);
  vpfxd(4,4,4,5);
  auVar3 = vscl_t(*param_1,uVar4);
  local_60 = auVar3._0_4_;
  local_5c = auVar3._4_4_;
  local_58 = auVar3._8_4_;
  uVar4 = vdot_t(*pauVar1,*pauVar1);
  uVar5 = vzero_s();
  uVar6 = vcmp_s(8,uVar4,*(undefined4 *)*pauVar1);
  local_1c = vsqrt_s(uVar4);
  vrcp_s(local_1c);
  uVar4 = vcmovt_s(uVar5,(byte)uVar6 & 1);
  vpfxd(4,4,4,5);
  auVar3 = vscl_t(*pauVar1,uVar4);
  local_50 = auVar3._0_4_;
  local_4c = auVar3._4_4_;
  local_48 = auVar3._8_4_;
  uVar4 = vdot_t(*pauVar2,*pauVar2);
  uVar5 = vzero_s();
  uVar6 = vcmp_s(8,uVar4,*(undefined4 *)*pauVar2);
  local_18 = vsqrt_s(uVar4);
  vrcp_s(local_18);
  uVar4 = vcmovt_s(uVar5,(byte)uVar6 & 1);
  vpfxd(4,4,4,5);
  auVar3 = vscl_t(*pauVar2,uVar4);
  local_40 = auVar3._0_4_;
  local_3c = auVar3._4_4_;
  local_38 = auVar3._8_4_;
  *(undefined4 *)(param_2 + 0xc) = 0x3f800000;
  FUN_089a3f40(param_2,&local_60);
  return;
}

